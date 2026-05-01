/*
 * XREFs of ?Uninitialize@VirtualDesktopPerMonitorCollection@@UEAAXXZ @ 0x18048F400
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18009FDA8 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18009FDE0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?UninitializeInternal@VirtualDesktopPerMonitorCollection@@AEAAXAEAVSyncLockExclusive@Details@Wrappers@WRL@Microsoft@@@Z @ 0x18048F43C (-UninitializeInternal@VirtualDesktopPerMonitorCollection@@AEAAXAEAVSyncLockExclusive@Details@Wra.c)
 */

void __fastcall VirtualDesktopPerMonitorCollection::Uninitialize(RTL_SRWLOCK *this)
{
  struct Microsoft::WRL::Wrappers::Details::SyncLockExclusive *v2; // rdx
  RTL_SRWLOCK *v3; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v3, this + 39);
  VirtualDesktopPerMonitorCollection::UninitializeInternal((VirtualDesktopPerMonitorCollection *)&this[-2], v2);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v3);
}
