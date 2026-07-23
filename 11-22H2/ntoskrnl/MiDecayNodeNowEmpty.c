/*
 * XREFs of MiDecayNodeNowEmpty @ 0x14034A440
 * Callers:
 *     MiEmptyDecayClusterTimers @ 0x14025AE00 (MiEmptyDecayClusterTimers.c)
 *     MiUnlinkProtectedStandbyPfn @ 0x140285570 (MiUnlinkProtectedStandbyPfn.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x140285680 (MiSwizzleInvalidPte.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028A810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiRemoveDecayClusterTimer @ 0x14028BB90 (MiRemoveDecayClusterTimer.c)
 *     RtlSetBits @ 0x1402E0530 (RtlSetBits.c)
 */

void __fastcall MiDecayNodeNowEmpty(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  ULONG v4; // edi

  v2 = 48 * a1 - 0x220000000000LL;
  if ( (*(_BYTE *)(v2 + 35) & 8) == 0 )
  {
    MiRemoveDecayClusterTimer(48 * a1 - 0x220000000000LL);
    v3 = MiSwizzleInvalidPte(((a1 & 0xFFFFFFFFFFLL) << 12) | 0x880);
    v4 = a1 - qword_140C68260;
    *(_QWORD *)(v2 + 16) = v3;
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C68280);
    RtlSetBits(&stru_140C68288, v4, 1u);
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C68280);
  }
}
