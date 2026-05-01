/*
 * XREFs of sub_18000DA14 @ 0x18000DA14
 * Callers:
 *     sub_18000E9EC @ 0x18000E9EC (sub_18000E9EC.c)
 *     sub_180015484 @ 0x180015484 (sub_180015484.c)
 * Callees:
 *     sub_18000DA3C @ 0x18000DA3C (sub_18000DA3C.c)
 */

__int64 sub_18000DA14()
{
  __int64 result; // rax

  result = (unsigned int)dword_180032B5C;
  if ( !dword_180032B5C )
    return sub_18000DA3C(&byte_180032B40);
  return result;
}
