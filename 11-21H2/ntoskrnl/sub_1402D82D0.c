/*
 * XREFs of sub_1402D82D0 @ 0x1402D82D0
 * Callers:
 *     sub_1402D81DC @ 0x1402D81DC (sub_1402D81DC.c)
 *     sub_1402D8234 @ 0x1402D8234 (sub_1402D8234.c)
 *     sub_1402D8304 @ 0x1402D8304 (sub_1402D8304.c)
 *     sub_1402D8518 @ 0x1402D8518 (sub_1402D8518.c)
 *     sub_1402DB8D8 @ 0x1402DB8D8 (sub_1402DB8D8.c)
 *     sub_140A9B1BC @ 0x140A9B1BC (sub_140A9B1BC.c)
 *     sub_140A9B230 @ 0x140A9B230 (sub_140A9B230.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

void __fastcall sub_1402D82D0(__int64 a1, __int64 a2)
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
