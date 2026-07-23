/*
 * XREFs of KiAcquireReleaseObjectRundownLockExclusive @ 0x14028D01C
 * Callers:
 *     KeRundownQueueEx @ 0x14028CA94 (KeRundownQueueEx.c)
 *     KeDeleteMutant @ 0x14028CE38 (KeDeleteMutant.c)
 *     KeReleaseMutantEx @ 0x14041083C (KeReleaseMutantEx.c)
 *     KeRundownPriQueue @ 0x14057EF40 (KeRundownPriQueue.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028ABC0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall KiAcquireReleaseObjectRundownLockExclusive(unsigned __int64 a1)
{
  volatile LONG *v1; // rbx

  v1 = (volatile LONG *)((char *)&KiObjectRundownLocks + 64 * ((a1 >> 4) & 0x3F));
  ExAcquireSpinLockExclusiveAtDpcLevel(v1);
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
}
