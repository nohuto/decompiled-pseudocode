/*
 * XREFs of sub_1405C32E4 @ 0x1405C32E4
 * Callers:
 *     sub_140982F64 @ 0x140982F64 (sub_140982F64.c)
 * Callees:
 *     sub_1402660E4 @ 0x1402660E4 (sub_1402660E4.c)
 *     sub_140268A70 @ 0x140268A70 (sub_140268A70.c)
 */

__int64 __fastcall sub_1405C32E4(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // rdi
  __int64 v7; // rbx
  __int64 v8; // rsi
  unsigned int v9; // r10d

  v5 = a2;
  v7 = 48 * a2 - 0x220000000000LL;
  v8 = v7 + 48 * a3;
  do
  {
    if ( sub_140268A70(v7, a4) )
    {
      sub_1402660E4(a1, v5, 1LL);
      v9 = 1;
    }
    ++v5;
    v7 += 48LL;
  }
  while ( v7 != v8 );
  return v9;
}
