/*
 * XREFs of sub_14024B3B0 @ 0x14024B3B0
 * Callers:
 *     sub_1402C1F50 @ 0x1402C1F50 (sub_1402C1F50.c)
 * Callees:
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 */

__int64 __fastcall sub_14024B3B0(unsigned __int64 a1)
{
  int v1; // ebx
  int v3; // ecx
  unsigned __int64 v4; // rdx

  v1 = 0;
  v3 = 0;
  v4 = a1;
  while ( 1 )
  {
    v4 = (__int64)(v4 << 25) >> 16;
    if ( v4 < 0xFFFFF68000000000uLL || v4 > 0xFFFFF6FFFFFFFFFFuLL )
      break;
    ++v3;
  }
  if ( (unsigned int)(v3 - 1) > 1 )
    return 0LL;
  while ( (sub_140317A10(a1) & 0x1000000000000081LL) != 0x1000000000000081LL )
  {
    a1 += 8LL;
    if ( (unsigned int)++v1 >= 0x200 )
      return 0LL;
  }
  return 1LL;
}
