/*
 * XREFs of ?RemoveDesktopForRecoveryInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180547740
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UpdateCurrentDesktopForMonitor@CVirtualDesktopManager@@AEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@1@Z @ 0x18054C184 (-UpdateCurrentDesktopForMonitor@CVirtualDesktopManager@@AEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop.c)
 *     ?_CheckDesktopRemovalPreconditions@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@0@Z @ 0x18054C5F4 (-_CheckDesktopRemovalPreconditions@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@0@Z.c)
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
    v7 = 926LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)updated);
    return (unsigned int)updated;
  }
  if ( *((_QWORD *)this + 12) )
  {
    updated = -2147019873;
    v7 = 927LL;
    goto LABEL_9;
  }
  updated = CVirtualDesktopManager::UpdateCurrentDesktopForMonitor(
              (CVirtualDesktopManager *)((char *)this - 8),
              0LL,
              a2,
              a3);
  if ( updated < 0 )
  {
    v7 = 929LL;
    goto LABEL_9;
  }
  updated = (*(__int64 (__fastcall **)(_QWORD, struct IVirtualDesktop *))(**((_QWORD **)this + 11) + 64LL))(
              *((_QWORD *)this + 11),
              a2);
  if ( updated < 0 )
  {
    v7 = 930LL;
    goto LABEL_9;
  }
  return (unsigned int)updated;
}
