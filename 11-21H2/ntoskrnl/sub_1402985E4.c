/*
 * XREFs of sub_1402985E4 @ 0x1402985E4
 * Callers:
 *     sub_140298420 @ 0x140298420 (sub_140298420.c)
 *     sub_140576820 @ 0x140576820 (sub_140576820.c)
 *     sub_1407043D0 @ 0x1407043D0 (sub_1407043D0.c)
 * Callees:
 *     sub_140298680 @ 0x140298680 (sub_140298680.c)
 *     sub_1407048D8 @ 0x1407048D8 (sub_1407048D8.c)
 *     sub_140705DA4 @ 0x140705DA4 (sub_140705DA4.c)
 */

__int64 __fastcall sub_1402985E4(__int64 a1, __int64 a2, int a3, int a4, __int64 a5)
{
  __int64 v5; // rbx
  int v7; // edi
  int v8; // ebp
  unsigned __int64 v10; // rsi
  __int64 v11; // r14
  __int16 v12; // ax

  v5 = *(_QWORD *)(a1 + 544);
  v7 = a2;
  v8 = a1;
  if ( (*(_DWORD *)(v5 + 632) & 0x20) == 0 )
    return sub_140298680(v8, v7, a3, a4, a5);
  if ( (*(_DWORD *)(a2 + 48) & 0x100001) != 0x100001 )
    return sub_140298680(v8, v7, a3, a4, a5);
  v10 = *(_QWORD *)(a2 + 152);
  v11 = *(_QWORD *)(a1 + 240);
  if ( (unsigned int)sub_1407048D8(v10, v11) )
    return sub_140298680(v8, v7, a3, a4, a5);
  if ( *(_QWORD *)(v5 + 1408)
    && ((v12 = *(_WORD *)(v5 + 2412), v12 == 332) || v12 == 452)
    && v10 < 0xFFFFFFFF
    && (unsigned int)sub_140705DA4((unsigned int)v10, v11) )
  {
    return sub_140298680(v8, v7, a3, a4, a5);
  }
  else
  {
    return 3221225485LL;
  }
}
