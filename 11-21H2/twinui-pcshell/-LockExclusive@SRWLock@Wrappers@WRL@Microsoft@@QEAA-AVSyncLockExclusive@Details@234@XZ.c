/*
 * XREFs of ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockExclusive@Details@234@XZ @ 0x18009F864
 * Callers:
 *     _lambda_a8dc140887cec83d93fc1ab35d00b62d_::operator() @ 0x1801B07A8 (_lambda_a8dc140887cec83d93fc1ab35d00b62d_--operator().c)
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18009FDA8 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 */

__int64 __fastcall Microsoft::WRL::Wrappers::SRWLock::LockExclusive(__int64 a1, __int64 a2)
{
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(a2, a1);
  return a2;
}
