/*
 * XREFs of sub_14025ECDC @ 0x14025ECDC
 * Callers:
 *     sub_1406EC2D4 @ 0x1406EC2D4 (sub_1406EC2D4.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_14025ECDC(unsigned __int64 a1)
{
  if ( qword_140C50780 && (a1 & 0x10) == 0 )
    a1 &= ~qword_140C50780;
  return HIDWORD(a1);
}
