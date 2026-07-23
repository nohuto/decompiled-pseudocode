/*
 * XREFs of sub_140234EB4 @ 0x140234EB4
 * Callers:
 *     sub_14027A1F0 @ 0x14027A1F0 (sub_14027A1F0.c)
 *     sub_1403203D0 @ 0x1403203D0 (sub_1403203D0.c)
 *     sub_140339240 @ 0x140339240 (sub_140339240.c)
 *     sub_14033A920 @ 0x14033A920 (sub_14033A920.c)
 *     sub_1405ABD20 @ 0x1405ABD20 (sub_1405ABD20.c)
 * Callees:
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 */

__int64 __fastcall sub_140234EB4(__int64 a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx

  v2 = sub_140317A10(a1);
  v3 = v2;
  if ( qword_140C50780 )
  {
    if ( (v2 & 0x10) != 0 )
      v3 = v2 & 0xFFFFFFFFFFFFFFEFuLL;
    else
      v3 = v2 & ~qword_140C50780;
  }
  return sub_1402CBD10(a1, (v3 >> 12) & 0xFFFFFFFFFFLL, (v2 >> 5) & 0x1F);
}
