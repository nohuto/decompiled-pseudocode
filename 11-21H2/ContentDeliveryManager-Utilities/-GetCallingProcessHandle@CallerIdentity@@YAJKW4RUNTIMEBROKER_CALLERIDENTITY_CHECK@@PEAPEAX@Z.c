/*
 * XREFs of ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x180084A3C
 * Callers:
 *     ?IsCallerInAllowedAppList@LockScreenCategoryConfig@CreativeFramework@@YAJPEBQEBGH@Z @ 0x18003A55C (-IsCallerInAllowedAppList@LockScreenCategoryConfig@CreativeFramework@@YAJPEBQEBGH@Z.c)
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x180084408 (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 *     ?GetCallingProcessPackageFullName@CallerIdentity@@YAJPEAPEAG@Z @ 0x18008468C (-GetCallingProcessPackageFullName@CallerIdentity@@YAJPEAPEAG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CallerIdentity::GetCallingProcessHandle(__int64 a1, __int64 a2, HANDLE *a3)
{
  HRESULT v4; // eax
  int v5; // ebx
  void *v6; // rcx
  void *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *ppInterface; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  ppInterface = 0LL;
  v4 = CoGetCallContext(&GUID_68c6a1b9_de39_42c3_8d28_bf40a5126541, &ppInterface);
  v5 = v4;
  if ( v4 < 0 )
  {
    if ( v4 != -2147417833 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x58,
        (__int64)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
        (const char *)(unsigned int)v4);
      v6 = ppInterface;
      if ( ppInterface )
      {
LABEL_11:
        ppInterface = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v6 + 16LL))(v6);
      }
      return (unsigned int)v5;
    }
    *a3 = GetCurrentProcess();
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(void *, __int64, HANDLE *))(*(_QWORD *)ppInterface + 24LL))(ppInterface, 4096LL, a3);
    if ( v5 < 0 )
    {
      v6 = ppInterface;
      if ( ppInterface )
        goto LABEL_11;
      return (unsigned int)v5;
    }
  }
  v7 = ppInterface;
  if ( ppInterface )
  {
    ppInterface = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return 0LL;
}
