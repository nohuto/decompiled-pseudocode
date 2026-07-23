/*
 * XREFs of sub_1405AE11C @ 0x1405AE11C
 * Callers:
 *     sub_14097023C @ 0x14097023C (sub_14097023C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405AE11C(__int64 a1)
{
  if ( qword_140C50780 && (a1 & 0x10) == 0 )
    a1 &= ~qword_140C50780;
  return a1 >> 16;
}
