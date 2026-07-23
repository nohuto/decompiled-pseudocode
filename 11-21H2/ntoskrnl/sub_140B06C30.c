/*
 * XREFs of sub_140B06C30 @ 0x140B06C30
 * Callers:
 *     sub_140B07C00 @ 0x140B07C00 (sub_140B07C00.c)
 * Callees:
 *     sub_14082BA68 @ 0x14082BA68 (sub_14082BA68.c)
 */

__int64 sub_140B06C30()
{
  __int64 result; // rax
  int v1; // ecx

  result = sub_14082BA68(*(char **)(qword_140C4F4D0 + 48));
  if ( (int)result >= 0 )
  {
    v1 = dword_140C54F84 | 0x10;
    dword_140C54F84 |= 0x10u;
    if ( (dword_140D06880 & 0x4000) != 0 )
      dword_140C54F84 = v1 | 8;
    return 0LL;
  }
  return result;
}
