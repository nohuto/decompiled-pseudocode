/*
 * XREFs of sub_14080346C @ 0x14080346C
 * Callers:
 *     sub_140803250 @ 0x140803250 (sub_140803250.c)
 *     sub_140812D44 @ 0x140812D44 (sub_140812D44.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14080346C(unsigned int a1)
{
  __int64 result; // rax

  result = 1LL;
  if ( a1 > 1 )
  {
    if ( a1 <= 3 )
      return result;
    if ( a1 == 4 )
      return 7LL;
  }
  return 3LL;
}
