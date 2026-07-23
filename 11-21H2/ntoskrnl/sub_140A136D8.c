/*
 * XREFs of sub_140A136D8 @ 0x140A136D8
 * Callers:
 *     sub_1406E0C00 @ 0x1406E0C00 (sub_1406E0C00.c)
 *     sub_140A13764 @ 0x140A13764 (sub_140A13764.c)
 * Callees:
 *     sub_1406E0BB8 @ 0x1406E0BB8 (sub_1406E0BB8.c)
 */

__int64 __fastcall sub_140A136D8(__int64 a1, __int64 a2, unsigned int a3)
{
  int v5; // esi
  __int64 v6; // rbx
  _QWORD *v7; // rcx

  if ( a3 >= 0x10 )
    return 0LL;
  v5 = 1 << a3;
  if ( ((1 << a3) & *(_DWORD *)(a1 + 28)) == 0 )
    return 0LL;
  v6 = a1 + 32 * (a3 + 1LL);
  if ( (*(_DWORD *)(v6 + 24) & 2) != 0 )
  {
    v7 = *(_QWORD **)(v6 + 16);
    if ( v7 )
      sub_1406E0BB8(v7);
  }
  *(_OWORD *)v6 = 0LL;
  *(_OWORD *)(v6 + 16) = 0LL;
  *(_DWORD *)(a1 + 28) &= ~v5;
  if ( a3 == 1 )
    *(_QWORD *)(a1 + 16) = 0LL;
  return 1LL;
}
