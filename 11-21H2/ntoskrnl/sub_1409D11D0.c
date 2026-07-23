/*
 * XREFs of sub_1409D11D0 @ 0x1409D11D0
 * Callers:
 *     sub_1409D1D04 @ 0x1409D1D04 (sub_1409D1D04.c)
 *     sub_1409D3874 @ 0x1409D3874 (sub_1409D3874.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1409D11D0(char a1)
{
  __int64 result; // rax
  __int64 *i; // rdx

  result = 0LL;
  for ( i = &qword_14000A998; *(_BYTE *)i != a1; i += 3 )
  {
    result = (unsigned int)(result + 1);
    if ( (unsigned int)result >= 0x18 )
      return 0xFFFFFFFFLL;
  }
  return result;
}
