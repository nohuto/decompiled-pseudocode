/*
 * XREFs of _lambda_fc9865d5476ca9d622b2b77ea516de88_::operator() @ 0x18021554C
 * Callers:
 *     CVirtualDesktopManager::_OnViewAdded__lambda_fc9865d5476ca9d622b2b77ea516de88___ @ 0x180214EF8 (CVirtualDesktopManager--_OnViewAdded__lambda_fc9865d5476ca9d622b2b77ea516de88___.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_fc9865d5476ca9d622b2b77ea516de88_::operator()(_QWORD **a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*a1)[15] + 112LL))((*a1)[15], *a1[1], 0LL);
  v2 = v1;
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4EB,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v1);
  return v2;
}
