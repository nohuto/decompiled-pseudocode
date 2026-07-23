/*
 * XREFs of sub_1405B9904 @ 0x1405B9904
 * Callers:
 *     sub_1409800F4 @ 0x1409800F4 (sub_1409800F4.c)
 * Callees:
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_1406DDB48 @ 0x1406DDB48 (sub_1406DDB48.c)
 *     sub_14097FC80 @ 0x14097FC80 (sub_14097FC80.c)
 */

__int64 __fastcall sub_1405B9904(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r9d
  __int64 v5; // rsi
  int v6; // ebx
  unsigned int v7; // eax
  __int64 result; // rax

  v3 = *(_DWORD *)(a3 + 48);
  v5 = **(_QWORD **)(a3 + 72);
  if ( (v3 & 0x200000) == 0 && (v3 & 0x70) == 0x20 && (v3 & 0x400000) != 0 )
  {
    v6 = 1;
    sub_14097FC80(a2, a3);
    ++*(_QWORD *)(*(_QWORD *)(a1 + 1680) + 368LL);
  }
  else
  {
    v6 = 0;
  }
  if ( (*(_DWORD *)(v5 + 56) & 0x8000000) == 0 )
    return 0LL;
  v7 = sub_140287F30(a1);
  result = sub_1406DDB48(v5, v7);
  if ( (int)result >= 0 )
    return 0LL;
  if ( v6 )
    --*(_QWORD *)(*(_QWORD *)(a1 + 1680) + 368LL);
  return result;
}
