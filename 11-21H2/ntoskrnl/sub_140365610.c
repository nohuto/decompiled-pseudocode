/*
 * XREFs of sub_140365610 @ 0x140365610
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403507F0 @ 0x1403507F0 (sub_1403507F0.c)
 *     sub_140365700 @ 0x140365700 (sub_140365700.c)
 *     sub_140365798 @ 0x140365798 (sub_140365798.c)
 */

__int64 __fastcall sub_140365610(__int64 a1, int a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v7; // r10
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // r9
  unsigned int v11; // ebp
  __int64 v12; // r8
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rsi

  result = sub_140365700();
  v7 = result & *(_QWORD *)a1;
  v8 = a3 >> 12;
  v9 = result;
  v10 = (result - v7) >> 5 << *(_BYTE *)(a1 + 8);
  v11 = (unsigned int)(a2 - v10 - v7) >> 12;
  if ( (*(_BYTE *)(a1 + 13) & 8) != 0 )
    return sub_1403507F0(a1, v9, v11, -(int)v8, 0, 0LL);
  v12 = *(__int16 *)(a1 + 22);
  v13 = *(_QWORD *)(v12 + a1 + 8) >> *(_BYTE *)(a1 + 11);
  if ( v13 <= 8 )
    v13 = 8LL;
  v14 = *(_QWORD *)(v12 + a1 + 8) >> *(_BYTE *)(a1 + 12);
  if ( v14 <= 8 )
    v14 = 8LL;
  v15 = v8 + *(_QWORD *)(v12 + a1 + 16) + *(_QWORD *)(v12 + a1 + 24);
  if ( v15 > v13 )
  {
    result = sub_140365798(*(_QWORD *)(a1 + 56), v13, v12, v10);
    if ( (int)result < 0 )
      return sub_1403507F0(a1, v9, v11, -(int)v8, 0, 0LL);
  }
  if ( v15 > v14 )
    return sub_1403507F0(a1, v9, v11, -(int)v8, 0, 0LL);
  return result;
}
