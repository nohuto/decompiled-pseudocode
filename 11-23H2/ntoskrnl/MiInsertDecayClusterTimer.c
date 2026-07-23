/*
 * XREFs of MiInsertDecayClusterTimer @ 0x14021A93C
 * Callers:
 *     MiInsertPageInList @ 0x14026EE90 (MiInsertPageInList.c)
 * Callees:
 *     MiRelinkDecayClusterTimer @ 0x14021A99C (MiRelinkDecayClusterTimer.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028ABC0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MiInsertDecayClusterTimer(__int64 a1)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C68180);
  MiRelinkDecayClusterTimer(a1, *(unsigned int *)(v2 + 15776));
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C68180);
}
