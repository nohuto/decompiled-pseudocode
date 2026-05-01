/*
 * XREFs of wil::details::functor_wrapper_other__lambda_203a32cbd1766f67226f85b07542c037__&_int_::Run @ 0x18018A4C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?GetMDMStartLayoutPolicy@TaskbarLayoutPolicyManager@@AEAAJAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@Z @ 0x18018A520 (-GetMDMStartLayoutPolicy@TaskbarLayoutPolicyManager@@AEAAJAEAV-$NativeString@V-$CoTaskMemPolicy@.c)
 *     ?GetMDMPolicyLayoutTimestamp@TaskbarLayoutPolicyManager@@AEAAJPEAK@Z @ 0x1803E6F84 (-GetMDMPolicyLayoutTimestamp@TaskbarLayoutPolicyManager@@AEAAJPEAK@Z.c)
 *     ?wnf_query_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z @ 0x1803E89A4 (-wnf_query_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z.c)
 */

__int64 __fastcall wil::details::functor_wrapper_other__lambda_203a32cbd1766f67226f85b07542c037____int_::Run(
        __int64 a1)
{
  int v1; // ebx
  int MDMStartLayoutPolicy; // eax
  wil *v4; // rcx
  struct wil::WNF_CHANGE_STAMP_STRUCT *v5; // r9
  int v7; // eax
  TaskbarLayoutPolicyManager *v8; // rcx
  int MDMPolicyLayoutTimestamp; // eax
  _QWORD v10[4]; // [rsp+20h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct _WNF_STATE_NAME v12; // [rsp+60h] [rbp+20h] BYREF
  int v13; // [rsp+68h] [rbp+28h] BYREF
  unsigned int v14; // [rsp+70h] [rbp+30h] BYREF

  v1 = 0;
  memset(v10, 0, 24);
  MDMStartLayoutPolicy = TaskbarLayoutPolicyManager::GetMDMStartLayoutPolicy(a1, v10);
  if ( MDMStartLayoutPolicy < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x127,
      (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)(unsigned int)MDMStartLayoutPolicy);
  if ( v10[0] && *(_WORD *)v10[0] )
  {
    v13 = 0;
    v7 = wil::wnf_query_nothrow(v4, &v12, (bool *)&v13, v5);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x132,
        (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
        (const char *)(unsigned int)v7);
    MDMPolicyLayoutTimestamp = TaskbarLayoutPolicyManager::GetMDMPolicyLayoutTimestamp(v8, &v14);
    if ( MDMPolicyLayoutTimestamp < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x138,
        (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
        (const char *)(unsigned int)MDMPolicyLayoutTimestamp);
    LOBYTE(v1) = v14 != v13;
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v10);
  **(_DWORD **)(a1 + 16) = v1;
  return 0LL;
}
