/*
 * XREFs of ?GetWinRTDesktopForInternalDesktop@VirtualDesktopPerMonitorCollection@@UEAAJPEAUIVirtualDesktop@@PEAPEAU2Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18048F2B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWinRTDesktopForInternalDesktopInternal@VirtualDesktopPerMonitorCollection@@AEAAJPEAUIVirtualDesktop@@PEAPEAU2Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180029B60 (-GetWinRTDesktopForInternalDesktopInternal@VirtualDesktopPerMonitorCollection@@AEAAJPEAUIVirtual.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18009FDA8 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18009FDE0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 */

__int64 __fastcall VirtualDesktopPerMonitorCollection::GetWinRTDesktopForInternalDesktop(
        RTL_SRWLOCK *this,
        struct IVirtualDesktop *a2,
        struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop **a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r9
  int WinRTDesktopForInternalDesktopInternal; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v12; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v12, this + 39);
  if ( this[11].Ptr )
  {
    WinRTDesktopForInternalDesktopInternal = VirtualDesktopPerMonitorCollection::GetWinRTDesktopForInternalDesktopInternal(
                                               (struct IThumbnailDeviceSource **)&this[-2],
                                               a2,
                                               a3);
    v6 = WinRTDesktopForInternalDesktopInternal;
    if ( WinRTDesktopForInternalDesktopInternal >= 0 )
    {
      v6 = 0;
      goto LABEL_7;
    }
    v8 = (unsigned int)WinRTDesktopForInternalDesktopInternal;
    v7 = 235LL;
  }
  else
  {
    v6 = -2147019873;
    v7 = 233LL;
    v8 = 2147947423LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktoppermonitorcollection.cpp",
    (const char *)v8);
LABEL_7:
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v12);
  return v6;
}
