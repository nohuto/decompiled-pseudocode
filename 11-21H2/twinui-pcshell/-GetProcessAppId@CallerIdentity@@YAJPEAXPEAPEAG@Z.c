/*
 * XREFs of ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x18008CC00
 * Callers:
 *     ?TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z @ 0x18008B090 (-TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z.c)
 *     ?GetAppIdFromWindow@TouchKeyboardExperienceManager@@SA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUHWND__@@@Z @ 0x18008C3A8 (-GetAppIdFromWindow@TouchKeyboardExperienceManager@@SA-AV-$unique_any_t@V-$unique_storage@U-$res.c)
 *     ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x18008C708 (-GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ?GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z @ 0x1800C6188 (-GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z.c)
 *     ?GetAppIdFromProcessId@CallerIdentity@@YAJKPEAPEAG@Z @ 0x1801075A4 (-GetAppIdFromProcessId@CallerIdentity@@YAJKPEAPEAG@Z.c)
 *     ?GetProcessAppIdWithAppResolverFallback@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x180143AB0 (-GetProcessAppIdWithAppResolverFallback@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     ?TryGetProcessExePathAndAppId@@YA?AU?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@I@Z @ 0x18056A5D8 (-TryGetProcessExePathAndAppId@@YA-AU-$pair@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G.c)
 * Callees:
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18008EA88 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAppUserModelId@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z @ 0x18012E8DC (-GetAppUserModelId@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     ?Free@ARI@@YAXPEAX@Z @ 0x1805E746C (-Free@ARI@@YAXPEAX@Z.c)
 */

__int64 __fastcall CallerIdentity::GetProcessAppId(HANDLE ProcessHandle, unsigned int **a2, unsigned __int16 **a3)
{
  unsigned int v3; // esi
  void *v5; // r15
  ARI::ProcessToken::SysAppId *v6; // r12
  __int64 v8; // rbx
  NTSTATUS v9; // eax
  unsigned __int128 v10; // rax
  __int64 v11; // rdi
  int v12; // eax
  unsigned int v13; // ebx
  const UNICODE_STRING *v14; // rbp
  void *v15; // rdx
  signed int LastError; // ebx
  unsigned __int64 v18; // r14
  unsigned int *v19; // rbx
  unsigned __int64 v20; // rdi
  unsigned int *v21; // rax
  unsigned __int64 v22; // rcx
  char *v23; // r8
  unsigned int *v24; // r9
  __int64 v25; // rdx
  unsigned __int64 v26; // rdi
  unsigned int AppUserModelId; // eax
  unsigned int *v28; // rax
  void *v29; // rdx
  wil::details::in1diag3 *v30; // rcx
  __int64 v31; // r9
  __int64 v32; // rdx
  __int16 v33; // ax
  unsigned int v34; // edi
  unsigned __int16 *ReturnLength; // [rsp+20h] [rbp-58h]
  unsigned int ReturnLengtha; // [rsp+20h] [rbp-58h]
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  ULONG TokenInformationLength; // [rsp+80h] [rbp+8h] BYREF
  struct _TOKEN_SECURITY_ATTRIBUTE_V1 *v40; // [rsp+88h] [rbp+10h] BYREF
  void *TokenHandle; // [rsp+90h] [rbp+18h] BYREF

  v3 = 0;
  v5 = 0LL;
  v6 = 0LL;
  *a2 = 0LL;
  if ( ProcessHandle == GetCurrentProcess() )
  {
    v8 = -4LL;
    TokenHandle = (void *)-4LL;
  }
  else
  {
    if ( !OpenProcessToken(ProcessHandle, 8u, &TokenHandle) )
    {
      LastError = GetLastError();
      if ( LastError )
        goto LABEL_15;
    }
    v8 = (__int64)TokenHandle;
  }
  v9 = NtQueryInformationToken((HANDLE)v8, TokenSecurityAttributes, 0LL, 0, &TokenInformationLength);
  if ( v9 == -1073741789 )
  {
    v10 = TokenInformationLength * (unsigned __int128)0x10uLL;
    if ( is_mul_ok(TokenInformationLength, 0x10uLL)
      && (*(_QWORD *)&v10 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, DWORD2(v10), 16LL * TokenInformationLength),
          (v11 = v10) != 0) )
    {
      memset_0((void *)v10, 0, TokenInformationLength);
      v12 = NtQueryInformationToken(
              (HANDLE)v8,
              TokenSecurityAttributes,
              (PVOID)v11,
              TokenInformationLength,
              &TokenInformationLength);
      if ( v12 < 0 )
      {
        LastError = RtlNtStatusToDosErrorNoTeb(v12);
        ARI::Free((PVOID)v11, v29);
      }
      else if ( *(_DWORD *)(v11 + 4)
             && (RtlInitUnicodeString(&DestinationString, L"WIN://SYSAPPID"), v13 = 0, *(_DWORD *)(v11 + 4)) )
      {
        while ( 1 )
        {
          v14 = (const UNICODE_STRING *)(*(_QWORD *)(v11 + 8) + 40LL * v13);
          if ( !RtlCompareUnicodeString(&DestinationString, v14, 1u) )
            break;
          if ( ++v13 >= *(_DWORD *)(v11 + 4) )
            goto LABEL_12;
        }
        v6 = (ARI::ProcessToken::SysAppId *)v14;
        v5 = (void *)v11;
        ARI::Free(0LL, v15);
        LastError = 0;
      }
      else
      {
LABEL_12:
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v11);
        LastError = 1168;
      }
    }
    else
    {
      ARI::Free(0LL, *((void **)&v10 + 1));
      LastError = 8;
    }
  }
  else if ( v9 )
  {
    LastError = RtlNtStatusToDosErrorNoTeb(v9);
  }
  else
  {
    LastError = 1359;
  }
  if ( TokenHandle != (void *)-4LL )
    CloseHandle(TokenHandle);
LABEL_15:
  if ( LastError > 0 )
    LastError = (unsigned __int16)LastError | 0x80070000;
  if ( LastError == -2147023728 || LastError == -2147024891 )
    goto LABEL_18;
  if ( LastError < 0 )
  {
    v30 = retaddr;
    v31 = (unsigned int)LastError;
    v32 = 165LL;
LABEL_50:
    wil::details::in1diag3::Return_Hr(
      v30,
      (void *)v32,
      (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
      (const char *)v31,
      (int)ReturnLength);
LABEL_18:
    v3 = LastError;
    goto LABEL_19;
  }
  if ( ARI::ProcessToken::SysAppId::GetAppUserModelId(v6, 0LL, (unsigned int)&v40, 0LL, ReturnLength) != 122 )
  {
    v30 = retaddr;
    LastError = -2147418113;
    v32 = 168LL;
    v31 = 2147549183LL;
    goto LABEL_50;
  }
  CoTaskMemFree(0LL);
  v18 = (unsigned int)v40;
  v19 = 0LL;
  v20 = (unsigned int)v40 + 1LL;
  if ( v20 < (unsigned int)v40 || !is_mul_ok(v20, 2uLL) )
  {
    v34 = -2147024362;
    goto LABEL_58;
  }
  v21 = (unsigned int *)CoTaskMemAlloc(2 * v20);
  v19 = v21;
  if ( !v21 )
  {
    v34 = -2147024882;
LABEL_58:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAB,
      (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
      (const char *)v34,
      (int)ReturnLength);
    goto LABEL_59;
  }
  if ( v20 > 0x7FFFFFFF || v18 >= 0x7FFFFFFF )
  {
    *(_WORD *)v21 = 0;
  }
  else
  {
    v22 = v20;
    v23 = (char *)((char *)&LocaleName - (char *)v21);
    v24 = v21;
    v25 = 0LL;
    while ( v22 != v20 )
    {
      v33 = *(_WORD *)&v23[(_QWORD)v24];
      if ( !v33 )
        break;
      *(_WORD *)v24 = v33;
      ++v25;
      v24 = (unsigned int *)((char *)v24 + 2);
      if ( !--v22 )
        goto LABEL_54;
    }
    if ( !v22 )
    {
LABEL_54:
      *((_WORD *)v24 - 1) = 0;
      goto LABEL_37;
    }
    v26 = v20 - v25;
    *(_WORD *)v24 = 0;
    if ( v26 > 1 && 2 * v26 > 2 )
      memset_0((char *)v19 + 2 * v25 + 2, 0, 2 * v26 - 2);
  }
LABEL_37:
  AppUserModelId = ARI::ProcessToken::SysAppId::GetAppUserModelId(
                     v6,
                     (const struct _TOKEN_SECURITY_ATTRIBUTE_V1 *)(unsigned int)v18,
                     (unsigned int)&v40,
                     v19,
                     ReturnLength);
  if ( AppUserModelId )
  {
    v34 = wil::details::in1diag3::Return_Win32(
            retaddr,
            (void *)0xAC,
            (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
            (const char *)AppUserModelId,
            ReturnLengtha);
LABEL_59:
    v3 = v34;
    goto LABEL_39;
  }
  v28 = v19;
  v19 = 0LL;
  *a2 = v28;
LABEL_39:
  CoTaskMemFree(v19);
LABEL_19:
  if ( v5 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
  return v3;
}
