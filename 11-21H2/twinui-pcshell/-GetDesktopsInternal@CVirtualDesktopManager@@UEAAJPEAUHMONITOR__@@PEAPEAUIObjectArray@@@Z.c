/*
 * XREFs of ?GetDesktopsInternal@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAPEAUIObjectArray@@@Z @ 0x180123680
 * Callers:
 *     ?GetDesktops@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAPEAUIObjectArray@@@Z @ 0x1801235F0 (-GetDesktops@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAPEAUIObjectArray@@@Z.c)
 *     ?TransitionToGlobalMode@CVirtualDesktopManager@@AEAAJAEBVSyncLockExclusive@Details@Wrappers@WRL@Microsoft@@@Z @ 0x18054B414 (-TransitionToGlobalMode@CVirtualDesktopManager@@AEAAJAEBVSyncLockExclusive@Details@Wrappers@WRL@.c)
 *     ?TransitionToPerMonitorMode@CVirtualDesktopManager@@AEAAJAEBVSyncLockExclusive@Details@Wrappers@WRL@Microsoft@@@Z @ 0x18054B82C (-TransitionToPerMonitorMode@CVirtualDesktopManager@@AEAAJAEBVSyncLockExclusive@Details@Wrappers@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualDesktopManager::GetDesktopsInternal(
        CVirtualDesktopManager *this,
        HMONITOR a2,
        struct IObjectArray **a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (*(__int64 (__fastcall **)(_QWORD, HMONITOR, GUID *, struct IObjectArray **))(**((_QWORD **)this + 11) + 40LL))(
         *((_QWORD *)this + 11),
         a2,
         &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
         a3);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18F,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v3);
  return v4;
}
