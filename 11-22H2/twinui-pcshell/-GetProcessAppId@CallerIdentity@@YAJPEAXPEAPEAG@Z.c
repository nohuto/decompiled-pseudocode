/*
 * XREFs of ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x1800C5230
 * Callers:
 *     ?GetProcessAppIdWithAppResolverFallback@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x1800C28D0 (-GetProcessAppIdWithAppResolverFallback@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     ?GetAppID@RecentAppsCache@Discover@PenWorkspace@@AEAAJKPEAPEAG@Z @ 0x1800C4B48 (-GetAppID@RecentAppsCache@Discover@PenWorkspace@@AEAAJKPEAPEAG@Z.c)
 *     ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x1800C4C10 (-GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ?GetAppIdFromProcessId@CallerIdentity@@YAJKPEAPEAG@Z @ 0x180132AE8 (-GetAppIdFromProcessId@CallerIdentity@@YAJKPEAPEAG@Z.c)
 *     ?TryGetProcessExePathAndAppId@@YA?AU?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@I@Z @ 0x180628344 (-TryGetProcessExePathAndAppId@@YA-AU-$pair@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G.c)
 *     ?GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z @ 0x18073BC2C (-GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z.c)
 * Callees:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1800ECDD4 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAppUserModelId@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z @ 0x18016B254 (-GetAppUserModelId@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z.c)
 *     ?Free@ARI@@YAXPEAX@Z @ 0x18019BC08 (-Free@ARI@@YAXPEAX@Z.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180393038 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall CallerIdentity::GetProcessAppId(HANDLE ProcessHandle, unsigned int **a2, unsigned __int16 **a3)
{
  void *v4; // r14
  ARI::ProcessToken::SysAppId *v5; // r12
  __int64 v7; // rdi
  NTSTATUS InformationToken; // eax
  void *v9; // rdx
  unsigned __int128 v10; // rax
  __int64 v11; // rbx
  int v12; // eax
  const UNICODE_STRING *v13; // rbp
  __int64 v14; // rdi
  void *v15; // rdx
  signed int LastError; // edi
  unsigned int v18; // esi
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // eax
  unsigned int *v22; // rbx
  unsigned int AppUserModelId; // eax
  void *v24; // rdx
  unsigned __int16 *ReturnLength; // [rsp+20h] [rbp-58h]
  unsigned __int16 *ReturnLengtha; // [rsp+20h] [rbp-58h]
  unsigned int ReturnLengthb; // [rsp+20h] [rbp-58h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int *TokenInformationLength; // [rsp+80h] [rbp+8h] BYREF
  struct _TOKEN_SECURITY_ATTRIBUTE_V1 *v31; // [rsp+88h] [rbp+10h] BYREF
  void *TokenHandle; // [rsp+90h] [rbp+18h] BYREF

  v4 = 0LL;
  *a2 = 0LL;
  v5 = 0LL;
  if ( ProcessHandle == GetCurrentProcess() )
  {
    v7 = -4LL;
    TokenHandle = (void *)-4LL;
  }
  else
  {
    if ( !OpenProcessToken(ProcessHandle, 8u, &TokenHandle) )
    {
      LastError = GetLastError();
      if ( LastError )
        goto LABEL_16;
    }
    v7 = (__int64)TokenHandle;
  }
  InformationToken = NtQueryInformationToken(
                       (HANDLE)v7,
                       TokenSecurityAttributes,
                       0LL,
                       0,
                       (PULONG)&TokenInformationLength);
  if ( InformationToken == -1073741789 )
  {
    v10 = (unsigned int)TokenInformationLength * (unsigned __int128)0x10uLL;
    if ( is_mul_ok((unsigned int)TokenInformationLength, 0x10uLL) )
    {
      *(_QWORD *)&v10 = RtlAllocateHeap(
                          NtCurrentPeb()->ProcessHeap,
                          DWORD2(v10),
                          16LL * (unsigned int)TokenInformationLength);
      v11 = v10;
      if ( (_QWORD)v10 )
      {
        memset_0((void *)v10, 0, (unsigned int)TokenInformationLength);
        v12 = NtQueryInformationToken(
                (HANDLE)v7,
                TokenSecurityAttributes,
                (PVOID)v11,
                (ULONG)TokenInformationLength,
                (PULONG)&TokenInformationLength);
        if ( v12 < 0 )
        {
          LastError = RtlNtStatusToDosErrorNoTeb(v12);
          ARI::Free((PVOID)v11, v24);
        }
        else if ( *(_DWORD *)(v11 + 4)
               && (RtlInitUnicodeString(&DestinationString, L"WIN://SYSAPPID"), *(_DWORD *)(v11 + 4)) )
        {
          v13 = *(const UNICODE_STRING **)(v11 + 8);
          LODWORD(v14) = 0;
          while ( RtlCompareUnicodeString(&DestinationString, v13, 1u) )
          {
            v14 = (unsigned int)(v14 + 1);
            if ( (unsigned int)v14 >= *(_DWORD *)(v11 + 4) )
              goto LABEL_13;
            v13 = (const UNICODE_STRING *)(*(_QWORD *)(v11 + 8) + 40 * v14);
          }
          v5 = (ARI::ProcessToken::SysAppId *)v13;
          v4 = (void *)v11;
          ARI::Free(0LL, v15);
          LastError = 0;
        }
        else
        {
LABEL_13:
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v11);
          LastError = 1168;
        }
        goto LABEL_14;
      }
    }
    else
    {
      v11 = 0LL;
    }
    ARI::Free((PVOID)v11, *((void **)&v10 + 1));
    LastError = 8;
  }
  else if ( InformationToken )
  {
    LastError = RtlNtStatusToDosErrorNoTeb(InformationToken);
  }
  else
  {
    LastError = 1359;
  }
LABEL_14:
  if ( TokenHandle != (void *)-4LL )
    CloseHandle(TokenHandle);
LABEL_16:
  if ( LastError > 0 )
    LastError = (unsigned __int16)LastError | 0x80070000;
  if ( LastError != -2147023728 && LastError != -2147024891 )
  {
    if ( LastError < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA5,
        (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
        (const char *)(unsigned int)LastError,
        (int)ReturnLength);
    }
    else if ( (unsigned int)ARI::ProcessToken::SysAppId::GetAppUserModelId(
                              v5,
                              0LL,
                              (unsigned int)&v31,
                              0LL,
                              ReturnLength) == 122 )
    {
      TokenInformationLength = 0LL;
      CoTaskMemFree(0LL);
      v18 = (unsigned int)v31;
      v21 = _AllocStringWorker<CTCoAllocPolicy>(v20, v19, 0LL, (unsigned int)v31);
      LastError = v21;
      if ( v21 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xAB,
          (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
          (const char *)(unsigned int)v21,
          (int)ReturnLengtha);
        v22 = TokenInformationLength;
      }
      else
      {
        v22 = TokenInformationLength;
        AppUserModelId = ARI::ProcessToken::SysAppId::GetAppUserModelId(
                           v5,
                           (const struct _TOKEN_SECURITY_ATTRIBUTE_V1 *)v18,
                           (unsigned int)&v31,
                           TokenInformationLength,
                           ReturnLengtha);
        if ( AppUserModelId )
        {
          LastError = wil::details::in1diag3::Return_Win32(
                        retaddr,
                        (void *)0xAC,
                        (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
                        (const char *)AppUserModelId,
                        ReturnLengthb);
        }
        else
        {
          LastError = 0;
          *a2 = v22;
          v22 = 0LL;
        }
      }
      CoTaskMemFree(v22);
    }
    else
    {
      LastError = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA8,
        (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
        (const char *)0x8000FFFFLL,
        (int)ReturnLengtha);
    }
  }
  if ( v4 )
    ARI::Free(v4, v9);
  return (unsigned int)LastError;
}
