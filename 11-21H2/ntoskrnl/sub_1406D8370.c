/*
 * XREFs of sub_1406D8370 @ 0x1406D8370
 * Callers:
 *     sub_1406819CC @ 0x1406819CC (sub_1406819CC.c)
 * Callees:
 *     sub_1407A5C98 @ 0x1407A5C98 (sub_1407A5C98.c)
 */

__int64 __fastcall sub_1406D8370(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 16) = a1;
  sub_1407A5C98(a2);
  *(_QWORD *)(a2 + 16) = 0LL;
  return 0LL;
}
