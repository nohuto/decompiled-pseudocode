/*
 * XREFs of sub_18004A6F4 @ 0x18004A6F4
 * Callers:
 *     sub_18004A620 @ 0x18004A620 (sub_18004A620.c)
 * Callees:
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 */

__int64 __fastcall sub_18004A6F4(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi

  if ( a1 != a2 )
  {
    v5 = a1 + 20;
    do
    {
      sub_1800124F8((__int64 *)a3, (_QWORD *)(v5 - 20));
      *(_BYTE *)(a3 + 16) = *(_BYTE *)(v5 - 4);
      *(_DWORD *)(a3 + 20) = *(_DWORD *)v5;
      sub_1800124F8((__int64 *)(a3 + 24), (_QWORD *)(v5 + 4));
      sub_1800124F8((__int64 *)(a3 + 40), (_QWORD *)(v5 + 20));
      sub_1800124F8((__int64 *)(a3 + 56), (_QWORD *)(v5 + 36));
      sub_1800124F8((__int64 *)(a3 + 72), (_QWORD *)(v5 + 52));
      v5 += 88LL;
      a3 += 88LL;
    }
    while ( v5 - 20 != a2 );
  }
  return a3;
}
