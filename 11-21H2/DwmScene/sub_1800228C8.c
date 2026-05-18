/*
 * XREFs of sub_1800228C8 @ 0x1800228C8
 * Callers:
 *     sub_180022DD8 @ 0x180022DD8 (sub_180022DD8.c)
 * Callees:
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 */

__int64 *__fastcall sub_1800228C8(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax

  v4 = sub_18001D684();
  if ( v4 )
  {
    *(_OWORD *)v4 = *(_OWORD *)a2;
    *(_OWORD *)(v4 + 16) = *(_OWORD *)(a2 + 16);
    *(_OWORD *)(v4 + 32) = *(_OWORD *)(a2 + 32);
    *(_QWORD *)(v4 + 48) = *(_QWORD *)(a2 + 48);
  }
  *a1 = v4;
  return a1;
}
