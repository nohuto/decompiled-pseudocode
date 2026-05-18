/*
 * XREFs of sub_180022888 @ 0x180022888
 * Callers:
 *     sub_180022DF8 @ 0x180022DF8 (sub_180022DF8.c)
 * Callees:
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 */

__int64 *__fastcall sub_180022888(__int64 *a1)
{
  __int64 v2; // rax

  v2 = sub_18001D684();
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    *(_OWORD *)(v2 + 16) = 0LL;
    *(_OWORD *)(v2 + 32) = 0LL;
    *(_QWORD *)(v2 + 48) = 0LL;
  }
  *a1 = v2;
  return a1;
}
