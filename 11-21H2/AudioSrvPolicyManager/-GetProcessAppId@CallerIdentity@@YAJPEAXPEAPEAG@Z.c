/*
 * XREFs of ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x1800417A4
 * Callers:
 *     ?GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z @ 0x18001FD18 (-GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18000C5FC (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180013EB0 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?GetAppUserModelId@AutoSysAppId@ProcessToken@ARI@@QEBAJIPEAIPEAG@Z @ 0x180041638 (-GetAppUserModelId@AutoSysAppId@ProcessToken@ARI@@QEBAJIPEAIPEAG@Z.c)
 *     ?Open@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@PEAPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@PEA_N@Z @ 0x1800419E0 (-Open@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@PEAPEBU_T.c)
 */

__int64 __fastcall CallerIdentity::GetProcessAppId(HANDLE ProcessHandle, _QWORD *a2, unsigned __int16 **a3)
{
  const struct _TOKEN_SECURITY_ATTRIBUTE_V1 **v5; // r9
  signed int LastError; // ebx
  __int64 v7; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  void *v12; // rbx
  unsigned int AppUserModelId; // eax
  unsigned int v14; // edi
  bool *v15; // [rsp+20h] [rbp-20h]
  PVOID P[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  void *TokenHandle; // [rsp+50h] [rbp+10h] BYREF
  LPVOID pv; // [rsp+58h] [rbp+18h] BYREF

  *a2 = 0LL;
  *(_OWORD *)P = 0LL;
  if ( ProcessHandle == GetCurrentProcess() )
  {
    TokenHandle = (void *)-4LL;
  }
  else if ( !OpenProcessToken(ProcessHandle, 8u, &TokenHandle) )
  {
    LastError = GetLastError();
    if ( LastError )
      goto LABEL_8;
  }
  LastError = ARI::ProcessToken::SysAppId::Open(
                TokenHandle,
                P,
                (struct _TOKEN_SECURITY_ATTRIBUTES_INFORMATION **)&P[1],
                v5,
                v15);
  if ( TokenHandle != (void *)-4LL )
    CloseHandle(TokenHandle);
LABEL_8:
  if ( LastError > 0 )
    LastError = (unsigned __int16)LastError | 0x80070000;
  if ( LastError == -2147023728 || LastError == -2147024891 )
    goto LABEL_15;
  if ( LastError < 0 )
  {
    v7 = 165LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
      (const char *)(unsigned int)LastError);
LABEL_15:
    if ( P[0] )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P[0]);
    return (unsigned int)LastError;
  }
  if ( (unsigned int)ARI::ProcessToken::AutoSysAppId::GetAppUserModelId(
                       (ARI::ProcessToken::AutoSysAppId *)P,
                       0,
                       (unsigned int *)&TokenHandle,
                       0LL) != 122 )
  {
    LastError = -2147418113;
    v7 = 168LL;
    goto LABEL_14;
  }
  pv = 0LL;
  CoTaskMemFree(0LL);
  v11 = _AllocStringWorker<CTCoAllocPolicy>(
          v10,
          v9,
          0LL,
          (unsigned int)TokenHandle,
          (__int64)v15,
          (unsigned __int16 **)&pv);
  LastError = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAB,
      (__int64)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
      (const char *)(unsigned int)v11);
    CoTaskMemFree(pv);
    goto LABEL_15;
  }
  v12 = pv;
  AppUserModelId = ARI::ProcessToken::AutoSysAppId::GetAppUserModelId(
                     (ARI::ProcessToken::AutoSysAppId *)P,
                     (unsigned int)TokenHandle,
                     (unsigned int *)&TokenHandle,
                     (unsigned __int16 *)pv);
  if ( AppUserModelId )
  {
    v14 = wil::details::in1diag3::Return_Win32(
            retaddr,
            172LL,
            (__int64)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
            (const char *)AppUserModelId);
    CoTaskMemFree(v12);
    if ( P[0] )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P[0]);
    return v14;
  }
  else
  {
    *a2 = v12;
    CoTaskMemFree(0LL);
    if ( P[0] )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P[0]);
    return 0LL;
  }
}
