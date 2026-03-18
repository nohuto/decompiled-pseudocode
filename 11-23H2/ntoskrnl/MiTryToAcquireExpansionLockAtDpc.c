/*
 * XREFs of MiTryToAcquireExpansionLockAtDpc @ 0x1403490E8
 * Callers:
 *     MiReferenceOwningSession @ 0x14034904C (MiReferenceOwningSession.c)
 *     MiLockStealUserVm @ 0x1403BDF18 (MiLockStealUserVm.c)
 * Callees:
 *     KeTryToAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140349110 (KeTryToAcquireInStackQueuedSpinLockAtDpcLevel.c)
 */

_BOOL8 __fastcall MiTryToAcquireExpansionLockAtDpc(__int64 a1)
{
  return (unsigned int)KeTryToAcquireInStackQueuedSpinLockAtDpcLevel(&qword_140C697C0, a1) != 0;
}
