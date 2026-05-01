/*
 * XREFs of ?SwitchDesktopForRecoveryInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x180173650
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeCurrentDesktopForMonitor@CVirtualDesktopManager@@AEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@@Z @ 0x180173688 (-InitializeCurrentDesktopForMonitor@CVirtualDesktopManager@@AEAAJPEAUHMONITOR__@@PEAUIVirtualDes.c)
 */

__int64 __fastcall CVirtualDesktopManager::SwitchDesktopForRecoveryInternal(
        CVirtualDesktopManager *this,
        struct IVirtualDesktop *a2)
{
  int v2; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_QWORD *)this + 12) )
  {
    v2 = -2147019873;
    v4 = 936LL;
  }
  else
  {
    v2 = CVirtualDesktopManager::InitializeCurrentDesktopForMonitor(
           (CVirtualDesktopManager *)((char *)this - 8),
           (HMONITOR)a2,
           a2);
    if ( v2 >= 0 )
      return 0LL;
    v4 = 938LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
    (const char *)(unsigned int)v2);
  return (unsigned int)v2;
}
