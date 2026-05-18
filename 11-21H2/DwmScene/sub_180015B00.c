/*
 * XREFs of sub_180015B00 @ 0x180015B00
 * Callers:
 *     <none>
 * Callees:
 *     sub_180015208 @ 0x180015208 (sub_180015208.c)
 */

__int64 __fastcall sub_180015B00(__int64 a1, __int64 *a2)
{
  __int64 result; // rax

  result = *a2;
  if ( *a2 == 0x4BD1CD637052B94FLL )
  {
    result = a2[1];
    if ( result == 0xDB6D126B7184B2B7uLL )
      return sub_180015208(a1 + 16);
  }
  return result;
}
