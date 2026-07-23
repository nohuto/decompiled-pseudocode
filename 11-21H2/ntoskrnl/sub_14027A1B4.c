/*
 * XREFs of sub_14027A1B4 @ 0x14027A1B4
 * Callers:
 *     sub_14023C1EC @ 0x14023C1EC (sub_14023C1EC.c)
 *     sub_140248C10 @ 0x140248C10 (sub_140248C10.c)
 *     sub_140276BF8 @ 0x140276BF8 (sub_140276BF8.c)
 *     sub_140288760 @ 0x140288760 (sub_140288760.c)
 *     sub_140289D20 @ 0x140289D20 (sub_140289D20.c)
 *     sub_1403AE0B0 @ 0x1403AE0B0 (sub_1403AE0B0.c)
 *     sub_1403AE198 @ 0x1403AE198 (sub_1403AE198.c)
 *     sub_1403AE50C @ 0x1403AE50C (sub_1403AE50C.c)
 *     CcUnpinRepinnedBcb @ 0x14053A6C0 (CcUnpinRepinnedBcb.c)
 *     sub_1406FAEA0 @ 0x1406FAEA0 (sub_1406FAEA0.c)
 * Callees:
 *     sub_14027A950 @ 0x14027A950 (sub_14027A950.c)
 *     sub_14027B4B8 @ 0x14027B4B8 (sub_14027B4B8.c)
 */

__int64 __fastcall sub_14027A1B4(__int64 a1)
{
  __int64 result; // rax

  result = sub_14027A950(a1 + 96, 1666409283LL);
  if ( !result )
    return sub_14027B4B8(a1);
  return result;
}
