/*
 * XREFs of ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x180047130
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800033F0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010264 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18001E1BC (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1800243C0 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?Close@AutoSysAppId@ProcessToken@ARI@@QEAAJXZ @ 0x180046EC0 (-Close@AutoSysAppId@ProcessToken@ARI@@QEAAJXZ.c)
 *     ?CloseToken@SysAppId@ProcessToken@ARI@@YAXPEAX@Z @ 0x180046EF0 (-CloseToken@SysAppId@ProcessToken@ARI@@YAXPEAX@Z.c)
 *     ?GetAppUserModelId@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z @ 0x180046F48 (-GetAppUserModelId@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z.c)
 *     ?Open@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@PEAPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@PEA_N@Z @ 0x1800472B8 (-Open@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@PEAPEBU_T.c)
 *     ?OpenTokenForProcess@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAX@Z @ 0x180047410 (-OpenTokenForProcess@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAX@Z.c)
 */

__int64 __fastcall CallerIdentity::GetProcessAppId(HANDLE ProcessHandle, _QWORD *a2, unsigned __int16 **a3)
{
  void **v5; // r8
  void *v6; // rdx
  int v7; // edi
  const struct _TOKEN_SECURITY_ATTRIBUTE_V1 **v8; // r9
  void *v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  SIZE_T v12; // rcx
  int v13; // eax
  void *v14; // rcx
  LPVOID v15; // rbx
  unsigned int AppUserModelId; // eax
  bool *v18; // [rsp+20h] [rbp-20h]
  struct _TOKEN_SECURITY_ATTRIBUTES_INFORMATION *v19[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  HANDLE TokenHandle; // [rsp+68h] [rbp+28h] BYREF
  LPVOID pv; // [rsp+70h] [rbp+30h] BYREF

  *a2 = 0LL;
  *(_OWORD *)v19 = 0LL;
  ARI::ProcessToken::AutoSysAppId::Close((ARI::ProcessToken::AutoSysAppId *)v19, a2);
  v7 = ARI::ProcessToken::SysAppId::OpenTokenForProcess(ProcessHandle, &TokenHandle, v5);
  if ( !v7 )
  {
    v7 = ARI::ProcessToken::SysAppId::Open(TokenHandle, v19, &v19[1], v8, v18);
    ARI::ProcessToken::SysAppId::CloseToken((ARI::ProcessToken::SysAppId *)TokenHandle, v9);
  }
  if ( v7 > 0 )
    v7 = (unsigned __int16)v7 | 0x80070000;
  if ( v7 != -2147023728 && v7 != -2147024891 )
  {
    if ( v7 < 0 )
    {
      v10 = 165LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (int)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
        (const char *)(unsigned int)v7);
      goto LABEL_18;
    }
    if ( ARI::ProcessToken::SysAppId::GetAppUserModelId(v19[1], 0LL, &TokenHandle, 0LL) != 122 )
    {
      v7 = -2147418113;
      v10 = 168LL;
      goto LABEL_11;
    }
    pv = 0LL;
    CoTaskMemFree(0LL);
    v13 = _AllocStringWorker<CTCoAllocPolicy>(
            v12,
            v11,
            0LL,
            (unsigned int)TokenHandle,
            (__int64)v18,
            (unsigned __int16 **)&pv);
    v7 = v13;
    if ( v13 >= 0 )
    {
      v15 = pv;
      AppUserModelId = ARI::ProcessToken::SysAppId::GetAppUserModelId(
                         v19[1],
                         (const struct _TOKEN_SECURITY_ATTRIBUTE_V1 *)(unsigned int)TokenHandle,
                         &TokenHandle,
                         (unsigned int *)pv);
      if ( !AppUserModelId )
      {
        *a2 = v15;
        CoTaskMemFree(0LL);
        v7 = 0;
        goto LABEL_18;
      }
      v7 = wil::details::in1diag3::Return_Win32(
             retaddr,
             172LL,
             (__int64)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
             (const char *)AppUserModelId);
      v14 = v15;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAB,
        (int)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
        (const char *)(unsigned int)v13);
      v14 = pv;
    }
    CoTaskMemFree(v14);
  }
LABEL_18:
  ARI::ProcessToken::AutoSysAppId::Close((ARI::ProcessToken::AutoSysAppId *)v19, v6);
  return (unsigned int)v7;
}
