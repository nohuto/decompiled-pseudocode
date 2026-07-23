/*
 * XREFs of sub_1405E805C @ 0x1405E805C
 * Callers:
 *     sub_14029A86C @ 0x14029A86C (sub_14029A86C.c)
 * Callees:
 *     sub_14024ED80 @ 0x14024ED80 (sub_14024ED80.c)
 */

__int64 __fastcall sub_1405E805C(__int64 a1)
{
  if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    a1 &= MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708] | 0x8000000000000000uLL;
  return (unsigned int)sub_14024ED80(a1) - 512;
}
