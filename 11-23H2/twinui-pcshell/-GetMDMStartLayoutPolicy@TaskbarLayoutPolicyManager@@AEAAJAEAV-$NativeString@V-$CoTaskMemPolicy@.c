/*
 * XREFs of ?GetMDMStartLayoutPolicy@TaskbarLayoutPolicyManager@@AEAAJAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@Z @ 0x18018A520
 * Callers:
 *     wil::details::functor_wrapper_other__lambda_203a32cbd1766f67226f85b07542c037__&_int_::Run @ 0x18018A4C0 (wil--details--functor_wrapper_other__lambda_203a32cbd1766f67226f85b07542c037__-_int_--Run.c)
 *     ?GetMDMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x1803E6DBC (-GetMDMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetMDMStartLayoutPolicyWithFlags@TaskbarLayoutPolicyManager@@AEAAJW4PMPolicyRequestedDataFlags@@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@Z @ 0x18018A588 (-GetMDMStartLayoutPolicyWithFlags@TaskbarLayoutPolicyManager@@AEAAJW4PMPolicyRequestedDataFlags@.c)
 */

__int64 __fastcall TaskbarLayoutPolicyManager::GetMDMStartLayoutPolicy(__int64 a1, _QWORD *a2)
{
  int MDMStartLayoutPolicyWithFlags; // eax
  __int64 v4; // rcx
  unsigned int v5; // edi
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  MDMStartLayoutPolicyWithFlags = TaskbarLayoutPolicyManager::GetMDMStartLayoutPolicyWithFlags(a1, 1LL, a2);
  v5 = MDMStartLayoutPolicyWithFlags;
  if ( MDMStartLayoutPolicyWithFlags < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x298,
      (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)(unsigned int)MDMStartLayoutPolicyWithFlags);
    return v5;
  }
  else
  {
    if ( *a2 && *(_WORD *)*a2 )
      return 0LL;
    v6 = TaskbarLayoutPolicyManager::GetMDMStartLayoutPolicyWithFlags(v4, 2LL, a2);
    v7 = v6;
    if ( v6 >= 0 )
    {
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x29D,
        (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
        (const char *)(unsigned int)v6);
      return v7;
    }
  }
}
