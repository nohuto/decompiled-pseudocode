/*
 * XREFs of sub_1403845A0 @ 0x1403845A0
 * Callers:
 *     sub_1403841DC @ 0x1403841DC (sub_1403841DC.c)
 * Callees:
 *     sub_14022D300 @ 0x14022D300 (sub_14022D300.c)
 */

__int64 __fastcall sub_1403845A0(int a1, int a2, int a3, __int64 a4, unsigned int a5, char a6)
{
  __int64 result; // rax
  __int64 *v8; // rbx
  __int64 v9; // rdi

  result = a5;
  if ( a5 )
  {
    v8 = (__int64 *)(a4 + 40);
    v9 = a5;
    do
    {
      result = sub_14022D300(a1, a2, a3, *v8, a6);
      v8 += 6;
      --v9;
    }
    while ( v9 );
  }
  return result;
}
