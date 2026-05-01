/*
 * XREFs of ?Uninitialize@VirtualDesktopCollection@@UEAAXXZ @ 0x180544BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1800E15F0 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800E1A80 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?UninitializeInternal@VirtualDesktopCollection@@AEAAXAEAVSyncLockExclusive@Details@Wrappers@WRL@Microsoft@@@Z @ 0x180544C1C (-UninitializeInternal@VirtualDesktopCollection@@AEAAXAEAVSyncLockExclusive@Details@Wrappers@WRL@.c)
 */

void __fastcall VirtualDesktopCollection::Uninitialize(RTL_SRWLOCK *this)
{
  struct Microsoft::WRL::Wrappers::Details::SyncLockExclusive *v2; // rdx
  RTL_SRWLOCK *v3; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v3, this + 38);
  VirtualDesktopCollection::UninitializeInternal((VirtualDesktopCollection *)&this[-3], v2);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v3);
}
