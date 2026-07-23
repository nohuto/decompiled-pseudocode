/*
 * XREFs of sub_140855D7C @ 0x140855D7C
 * Callers:
 *     sub_140855C88 @ 0x140855C88 (sub_140855C88.c)
 * Callees:
 *     sub_1403D81D0 @ 0x1403D81D0 (sub_1403D81D0.c)
 */

void __fastcall sub_140855D7C(unsigned int a1, __int64 a2, unsigned __int64 *a3, unsigned __int64 a4)
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
      *v4 = sub_1403D81D0(*(unsigned __int64 *)((char *)v4 + v7), a4);
      ++v4;
      --v5;
    }
    while ( v5 );
  }
}
