/*
 * XREFs of sub_140287A2C @ 0x140287A2C
 * Callers:
 *     sub_140220944 @ 0x140220944 (sub_140220944.c)
 *     sub_14023EA5C @ 0x14023EA5C (sub_14023EA5C.c)
 *     sub_14023F8E8 @ 0x14023F8E8 (sub_14023F8E8.c)
 *     sub_14023FA50 @ 0x14023FA50 (sub_14023FA50.c)
 *     sub_140246FD0 @ 0x140246FD0 (sub_140246FD0.c)
 *     sub_140270274 @ 0x140270274 (sub_140270274.c)
 *     sub_140286AB0 @ 0x140286AB0 (sub_140286AB0.c)
 *     sub_140287F58 @ 0x140287F58 (sub_140287F58.c)
 *     sub_14058A6D4 @ 0x14058A6D4 (sub_14058A6D4.c)
 *     sub_14058C1D4 @ 0x14058C1D4 (sub_14058C1D4.c)
 * Callees:
 *     sub_14028AF80 @ 0x14028AF80 (sub_14028AF80.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall sub_140287A2C(__int64 a1)
{
  __int64 v2; // rbx

  if ( (*(_DWORD *)(a1 + 56) & 0x10000000) != 0 )
  {
    v2 = *(_QWORD *)(qword_140C51F48 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v2 + 1344));
    sub_14028AF80(a1);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 1344));
  }
}
