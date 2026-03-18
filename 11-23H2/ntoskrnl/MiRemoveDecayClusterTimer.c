/*
 * XREFs of MiRemoveDecayClusterTimer @ 0x14028BCB0
 * Callers:
 *     MiUnlinkPageFromListEx @ 0x140266630 (MiUnlinkPageFromListEx.c)
 *     MiDecayNodeNowEmpty @ 0x14034AA40 (MiDecayNodeNowEmpty.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402894C0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028A930 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkDecayClusterTimer @ 0x140347BA0 (MiUnlinkDecayClusterTimer.c)
 */

void __fastcall MiRemoveDecayClusterTimer(__int64 a1)
{
  __int64 v2; // rax

  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C68180);
  v2 = *(_QWORD *)(a1 + 8);
  if ( (v2 & 0x100000000LL) == 0 )
  {
    *(_QWORD *)(a1 + 8) = v2 | 0x100000000LL;
    MiUnlinkDecayClusterTimer(a1);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C68180);
}
