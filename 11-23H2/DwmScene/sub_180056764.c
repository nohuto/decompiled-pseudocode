/*
 * XREFs of sub_180056764 @ 0x180056764
 * Callers:
 *     sub_1800562B0 @ 0x1800562B0 (sub_1800562B0.c)
 *     sub_1800567A0 @ 0x1800567A0 (sub_1800567A0.c)
 *     sub_1800CD1B0 @ 0x1800CD1B0 (sub_1800CD1B0.c)
 *     sub_1800CD298 @ 0x1800CD298 (sub_1800CD298.c)
 *     sub_1800CEBF8 @ 0x1800CEBF8 (sub_1800CEBF8.c)
 * Callees:
 *     sub_1800488C8 @ 0x1800488C8 (sub_1800488C8.c)
 */

__int64 __fastcall sub_180056764(int a1)
{
  int v1; // eax
  int v2; // r10d
  int v4; // eax
  int v5; // r10d

  if ( a1 == 23 || a1 == 24 )
  {
    v4 = sub_1800488C8(a1);
    return ((v5 + 1) & 0xFFFFFFFE) * v4;
  }
  else
  {
    v1 = sub_1800488C8(a1);
    return (unsigned int)(v2 * v1);
  }
}
