/*
 * XREFs of sub_1406020E8 @ 0x1406020E8
 * Callers:
 *     sub_140601FCC @ 0x140601FCC (sub_140601FCC.c)
 *     sub_140A9D4F0 @ 0x140A9D4F0 (sub_140A9D4F0.c)
 *     sub_140A9D738 @ 0x140A9D738 (sub_140A9D738.c)
 *     sub_140A9D980 @ 0x140A9D980 (sub_140A9D980.c)
 *     sub_140A9DA38 @ 0x140A9DA38 (sub_140A9DA38.c)
 *     sub_140A9DB60 @ 0x140A9DB60 (sub_140A9DB60.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

void __fastcall sub_1406020E8(__int64 a1, __int64 a2)
{
  volatile LONG *v2; // rcx

  v2 = (volatile LONG *)(a1 + 128);
  if ( (*(_BYTE *)(a2 + 9) & 4) != 0 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  else
    ExReleaseSpinLockSharedFromDpcLevel(v2);
  *(_BYTE *)(a2 + 9) &= ~2u;
  *(_QWORD *)a2 = 0LL;
}
