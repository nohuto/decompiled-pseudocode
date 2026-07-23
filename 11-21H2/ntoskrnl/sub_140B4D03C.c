/*
 * XREFs of sub_140B4D03C @ 0x140B4D03C
 * Callers:
 *     sub_140B4CFB4 @ 0x140B4CFB4 (sub_140B4CFB4.c)
 * Callees:
 *     sub_140B4CE34 @ 0x140B4CE34 (sub_140B4CE34.c)
 */

__int64 __fastcall sub_140B4D03C(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( !sub_140B4CE34(
          (char *)(a1 & 0xFFFFFFFFFFFFF000uLL),
          ((unsigned __int64)(a1 & 0xFFF) + a2 + 4095) >> 12,
          (__int64)a3,
          32,
          a3) )
    return (unsigned int)-1073741801;
  return v3;
}
