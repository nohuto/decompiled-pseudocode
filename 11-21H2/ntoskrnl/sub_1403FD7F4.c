/*
 * XREFs of sub_1403FD7F4 @ 0x1403FD7F4
 * Callers:
 *     sub_140569F80 @ 0x140569F80 (sub_140569F80.c)
 * Callees:
 *     sub_1403FCBE0 @ 0x1403FCBE0 (sub_1403FCBE0.c)
 */

void __fastcall sub_1403FD7F4(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi

  if ( a2 )
  {
    v2 = a2;
    do
    {
      sub_1403FCBE0(a1);
      a1 += 128LL;
      --v2;
    }
    while ( v2 );
  }
}
