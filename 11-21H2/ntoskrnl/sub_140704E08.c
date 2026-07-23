/*
 * XREFs of sub_140704E08 @ 0x140704E08
 * Callers:
 *     sub_1406747FC @ 0x1406747FC (sub_1406747FC.c)
 *     sub_140704980 @ 0x140704980 (sub_140704980.c)
 *     sub_140704D58 @ 0x140704D58 (sub_140704D58.c)
 *     sub_140705D0C @ 0x140705D0C (sub_140705D0C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140704E08(unsigned __int16 a1)
{
  unsigned int v1; // r8d

  v1 = 0;
  switch ( a1 )
  {
    case 0x14Cu:
      return 0x10000;
    case 0x1C4u:
      return 0x200000;
    case 0x8664u:
      return 0x100000;
    case 0xAA64u:
      return 0x400000;
  }
  return v1;
}
