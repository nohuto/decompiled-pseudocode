/*
 * XREFs of KiAcquireReleaseObjectRundownLockExclusive @ 0x14028CD8C
 * Callers:
 *     KeRundownQueueEx @ 0x14028C804 (KeRundownQueueEx.c)
 *     KeDeleteMutant @ 0x14028CBA8 (KeDeleteMutant.c)
 *     KeReleaseMutantEx @ 0x1404105DC (KeReleaseMutantEx.c)
 *     KeRundownPriQueue @ 0x14057EA50 (KeRundownPriQueue.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402894C0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028A930 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall KiAcquireReleaseObjectRundownLockExclusive(unsigned __int64 a1)
{
  volatile LONG *v1; // rbx

  v1 = (volatile LONG *)((char *)&KiObjectRundownLocks + 64 * ((a1 >> 4) & 0x3F));
  ExAcquireSpinLockExclusiveAtDpcLevel(v1);
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
}
