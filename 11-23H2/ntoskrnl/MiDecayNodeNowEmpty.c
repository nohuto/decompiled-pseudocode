/*
 * XREFs of MiDecayNodeNowEmpty @ 0x14034ABE0
 * Callers:
 *     MiEmptyDecayClusterTimers @ 0x14025B1B0 (MiEmptyDecayClusterTimers.c)
 *     MiUnlinkProtectedStandbyPfn @ 0x140285920 (MiUnlinkProtectedStandbyPfn.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x140285A30 (MiSwizzleInvalidPte.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028ABC0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiRemoveDecayClusterTimer @ 0x14028BF40 (MiRemoveDecayClusterTimer.c)
 *     RtlSetBits @ 0x1402E07C0 (RtlSetBits.c)
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
    v4 = a1 - qword_140C68160;
    *(_QWORD *)(v2 + 16) = v3;
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C68180);
    RtlSetBits(&stru_140C68188, v4, 1u);
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C68180);
  }
}
