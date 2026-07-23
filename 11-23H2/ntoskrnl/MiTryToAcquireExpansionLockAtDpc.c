/*
 * XREFs of MiTryToAcquireExpansionLockAtDpc @ 0x140349378
 * Callers:
 *     MiReferenceOwningSession @ 0x1403492DC (MiReferenceOwningSession.c)
 *     MiLockStealUserVm @ 0x1403BE0F8 (MiLockStealUserVm.c)
 * Callees:
 *     KeTryToAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1403493A0 (KeTryToAcquireInStackQueuedSpinLockAtDpcLevel.c)
 */

_BOOL8 __fastcall MiTryToAcquireExpansionLockAtDpc(__int64 a1)
{
  return (unsigned int)KeTryToAcquireInStackQueuedSpinLockAtDpcLevel(&qword_140C697C0, a1) != 0;
}
