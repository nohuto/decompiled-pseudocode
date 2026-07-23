/*
 * XREFs of MiRemoveDecayClusterTimer @ 0x14028BF40
 * Callers:
 *     MiUnlinkPageFromListEx @ 0x1402668C0 (MiUnlinkPageFromListEx.c)
 *     MiDecayNodeNowEmpty @ 0x14034ABE0 (MiDecayNodeNowEmpty.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028ABC0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkDecayClusterTimer @ 0x140347E30 (MiUnlinkDecayClusterTimer.c)
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
