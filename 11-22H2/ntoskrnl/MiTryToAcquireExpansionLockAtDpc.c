/*
 * XREFs of MiTryToAcquireExpansionLockAtDpc @ 0x140348BF8
 * Callers:
 *     MiReferenceOwningSession @ 0x140348B5C (MiReferenceOwningSession.c)
 *     MiLockStealUserVm @ 0x1403BD8B8 (MiLockStealUserVm.c)
 * Callees:
 *     KeTryToAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140348C20 (KeTryToAcquireInStackQueuedSpinLockAtDpcLevel.c)
 */

_BOOL8 __fastcall MiTryToAcquireExpansionLockAtDpc(__int64 a1)
{
  return (unsigned int)KeTryToAcquireInStackQueuedSpinLockAtDpcLevel(&qword_140C698C0, a1) != 0;
}
