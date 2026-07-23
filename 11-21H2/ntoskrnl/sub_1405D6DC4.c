/*
 * XREFs of sub_1405D6DC4 @ 0x1405D6DC4
 * Callers:
 *     sub_1405CBD34 @ 0x1405CBD34 (sub_1405CBD34.c)
 *     sub_1409977F0 @ 0x1409977F0 (sub_1409977F0.c)
 * Callees:
 *     sub_1402D25CC @ 0x1402D25CC (sub_1402D25CC.c)
 *     sub_14035AD70 @ 0x14035AD70 (sub_14035AD70.c)
 *     sub_1403945DC @ 0x1403945DC (sub_1403945DC.c)
 */

__int64 __fastcall sub_1405D6DC4(__int64 a1, __int64 a2, int a3)
{
  const unsigned __int16 *v4; // r9
  int v6; // esi
  __int64 v7; // r9

  v4 = 0LL;
  v6 = *(_DWORD *)(a2 + 4);
  if ( a3 < 0 )
    v4 = *(const unsigned __int16 **)(a1 + 96);
  sub_1403945DC(a2, (__int64 *)(*(_QWORD *)(a1 + 48) + 160LL), a3, v4);
  if ( *(_BYTE *)a2 == 2 && v6 == 1 )
    sub_1402D25CC(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL));
  return sub_14035AD70(*(volatile signed __int32 **)(a2 + 40), 0LL, 1LL, v7, 0);
}
