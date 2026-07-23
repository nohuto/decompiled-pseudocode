/*
 * XREFs of sub_14024B820 @ 0x14024B820
 * Callers:
 *     <none>
 * Callees:
 *     sub_14024B844 @ 0x14024B844 (sub_14024B844.c)
 */

__int64 __fastcall sub_14024B820(__int64 a1)
{
  __int64 result; // rax

  result = sub_14024B844(a1, 2048LL);
  if ( (int)result < 0 )
    ++DWORD1(xmmword_140C4EC70);
  return result;
}
