/*
 * XREFs of ?OnViewRemovedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z @ 0x1801A13D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualDesktopManager::OnViewRemovedInternal(
        CVirtualDesktopManager *this,
        struct IApplicationView *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *))(**((_QWORD **)this + 14) + 64LL))(
         *((_QWORD *)this + 14),
         a2);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4FC,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}
