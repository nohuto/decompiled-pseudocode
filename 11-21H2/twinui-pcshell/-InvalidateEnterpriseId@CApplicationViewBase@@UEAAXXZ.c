/*
 * XREFs of ?InvalidateEnterpriseId@CApplicationViewBase@@UEAAXXZ @ 0x180315110
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18009FDA8 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18009FDE0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 */

void __fastcall CApplicationViewBase::InvalidateEnterpriseId(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v2, this + 3);
  LOBYTE(this[4].Ptr) = 1;
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v2);
}
