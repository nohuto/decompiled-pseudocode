/*
 * XREFs of sub_1800179FC @ 0x1800179FC
 * Callers:
 *     sub_1800159F4 @ 0x1800159F4 (sub_1800159F4.c)
 *     sub_180015AE0 @ 0x180015AE0 (sub_180015AE0.c)
 *     sub_180015C10 @ 0x180015C10 (sub_180015C10.c)
 *     sub_180017A28 @ 0x180017A28 (sub_180017A28.c)
 *     sub_180025C20 @ 0x180025C20 (sub_180025C20.c)
 *     sub_180031D44 @ 0x180031D44 (sub_180031D44.c)
 *     sub_1800E448A @ 0x1800E448A (sub_1800E448A.c)
 *     sub_1800E4CFA @ 0x1800E4CFA (sub_1800E4CFA.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 */

__int64 __fastcall sub_1800179FC(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 80);
  if ( v2 )
    sub_180010530(v2);
  return sub_18001B880(a1 + 48);
}
