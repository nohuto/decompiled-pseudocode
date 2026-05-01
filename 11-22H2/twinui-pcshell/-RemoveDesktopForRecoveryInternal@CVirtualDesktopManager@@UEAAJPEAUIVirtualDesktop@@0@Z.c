/*
 * XREFs of ?RemoveDesktopForRecoveryInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180602DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UpdateCurrentDesktop@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@0@Z @ 0x1806070A4 (-UpdateCurrentDesktop@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?_CheckDesktopRemovalPreconditions@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@0@Z @ 0x18060755C (-_CheckDesktopRemovalPreconditions@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@0@Z.c)
 */

__int64 __fastcall CVirtualDesktopManager::RemoveDesktopForRecoveryInternal(
        CVirtualDesktopManager *this,
        struct IVirtualDesktop *a2,
        struct IVirtualDesktop *a3)
{
  int updated; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  updated = CVirtualDesktopManager::_CheckDesktopRemovalPreconditions(
              (CVirtualDesktopManager *)((char *)this - 8),
              a2,
              a3);
  if ( updated < 0 )
  {
    v7 = 1045LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)updated);
    return (unsigned int)updated;
  }
  if ( *((_QWORD *)this + 13) )
  {
    updated = -2147019873;
    v7 = 1046LL;
    goto LABEL_9;
  }
  updated = CVirtualDesktopManager::UpdateCurrentDesktop((CVirtualDesktopManager *)((char *)this - 8), a2, a3);
  if ( updated < 0 )
  {
    v7 = 1048LL;
    goto LABEL_9;
  }
  updated = (*(__int64 (__fastcall **)(_QWORD, struct IVirtualDesktop *))(**((_QWORD **)this + 12) + 64LL))(
              *((_QWORD *)this + 12),
              a2);
  if ( updated < 0 )
  {
    v7 = 1049LL;
    goto LABEL_9;
  }
  return (unsigned int)updated;
}
