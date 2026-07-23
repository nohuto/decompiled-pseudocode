/*
 * XREFs of sub_1408062D4 @ 0x1408062D4
 * Callers:
 *     sub_140806090 @ 0x140806090 (sub_140806090.c)
 *     sub_14099BD28 @ 0x14099BD28 (sub_14099BD28.c)
 * Callees:
 *     sub_140387A68 @ 0x140387A68 (sub_140387A68.c)
 */

void __fastcall sub_1408062D4(unsigned int a1, __int64 a2, unsigned __int64 *a3, unsigned __int64 a4)
{
  unsigned __int64 *v4; // rbx
  __int64 v5; // rsi
  __int64 v7; // rdi

  if ( a1 )
  {
    v4 = a3;
    v5 = a1;
    v7 = a2 - (_QWORD)a3;
    do
    {
      *v4 = sub_140387A68(*(unsigned __int64 *)((char *)v4 + v7), a4);
      ++v4;
      --v5;
    }
    while ( v5 );
  }
}
