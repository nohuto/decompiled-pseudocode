/*
 * XREFs of sub_180046B98 @ 0x180046B98
 * Callers:
 *     sub_180046B98 @ 0x180046B98 (sub_180046B98.c)
 *     sub_1800476C0 @ 0x1800476C0 (sub_1800476C0.c)
 * Callees:
 *     sub_1800122B0 @ 0x1800122B0 (sub_1800122B0.c)
 *     sub_180041E84 @ 0x180041E84 (sub_180041E84.c)
 *     sub_180043668 @ 0x180043668 (sub_180043668.c)
 *     sub_180046B98 @ 0x180046B98 (sub_180046B98.c)
 */

char __fastcall sub_180046B98(__int64 a1, __int64 a2, __int64 *a3)
{
  char result; // al
  __int64 v7; // rdx
  __int64 *v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 i; // rbx

  result = sub_1800122B0(a3);
  if ( !result )
  {
    sub_180041E84(*v8, v7);
    v9 = *a3;
    result = sub_180043668(v9);
    v10 = *(_QWORD *)(v9 + 40);
    for ( i = *(_QWORD *)(v9 + 32); i != v10; i += 16LL )
      result = sub_180046B98(a1, a2, i);
  }
  return result;
}
