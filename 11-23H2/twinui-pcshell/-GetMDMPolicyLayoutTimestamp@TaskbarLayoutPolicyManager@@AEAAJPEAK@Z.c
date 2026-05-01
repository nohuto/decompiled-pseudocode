/*
 * XREFs of ?GetMDMPolicyLayoutTimestamp@TaskbarLayoutPolicyManager@@AEAAJPEAK@Z @ 0x1803E6F84
 * Callers:
 *     wil::details::functor_wrapper_other__lambda_203a32cbd1766f67226f85b07542c037__&_int_::Run @ 0x18018A4C0 (wil--details--functor_wrapper_other__lambda_203a32cbd1766f67226f85b07542c037__-_int_--Run.c)
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800A8AF0 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall TaskbarLayoutPolicyManager::GetMDMPolicyLayoutTimestamp(
        TaskbarLayoutPolicyManager *this,
        unsigned int *a2)
{
  LSTATUS DWORD; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0;
  DWORD = SHRegGetDWORD(
            HKEY_CURRENT_USER,
            L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Taskband",
            L"MDMLayoutXMLLastModified",
            a2);
  v3 = DWORD;
  if ( DWORD == -2147024894 )
    return 0LL;
  if ( DWORD < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x283,
      (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)(unsigned int)DWORD);
  return v3;
}
