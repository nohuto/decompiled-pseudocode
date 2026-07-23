/*
 * XREFs of sub_14068DF38 @ 0x14068DF38
 * Callers:
 *     sub_14068C820 @ 0x14068C820 (sub_14068C820.c)
 *     sub_14079B0D0 @ 0x14079B0D0 (sub_14079B0D0.c)
 * Callees:
 *     sub_14068DFF0 @ 0x14068DFF0 (sub_14068DFF0.c)
 */

__int64 __fastcall sub_14068DF38(__int64 a1, int a2, unsigned int a3)
{
  signed __int64 v3; // r10
  signed __int64 v4; // rsi
  __int64 v6; // rbx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  __int64 v9; // rdi
  __int64 result; // rax

  v3 = (unsigned int)(a2 + 4096);
  v4 = v3 + a3;
  if ( v3 >= (unsigned __int64)v4 )
    return 0LL;
  v6 = a1 + 40;
  while ( 1 )
  {
    v7 = *(_QWORD *)v6;
    if ( (*(_BYTE *)(v6 + 8) & 1) != 0 && v7 )
      v7 ^= v6;
    while ( v7 )
    {
      if ( v3 >= *(_QWORD *)(v7 + 40) )
      {
        if ( v3 < *(_QWORD *)(v7 + 48) )
          break;
        v8 = *(_QWORD *)(v7 + 8);
      }
      else
      {
        v8 = *(_QWORD *)v7;
      }
      if ( (*(_BYTE *)(v6 + 8) & 1) != 0 && v8 )
        v7 ^= v8;
      else
        v7 = v8;
    }
    v9 = v4;
    if ( v4 >= *(_QWORD *)(v7 + 48) )
      v9 = *(_QWORD *)(v7 + 48);
    result = sub_14068DFF0(a1, v7, v3, v9);
    if ( (int)result < 0 )
      return result;
    v3 = v9;
    if ( v9 >= v4 )
      return 0LL;
  }
}
