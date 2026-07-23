/*
 * XREFs of sub_1406CA588 @ 0x1406CA588
 * Callers:
 *     sub_1406CA514 @ 0x1406CA514 (sub_1406CA514.c)
 *     sub_14071F430 @ 0x14071F430 (sub_14071F430.c)
 * Callees:
 *     sub_1405CFA04 @ 0x1405CFA04 (sub_1405CFA04.c)
 */

void sub_1406CA588()
{
  if ( (dword_140C0B8C0 & 8) != 0 )
  {
    if ( byte_140C54CD8 )
      sub_1405CFA04(qword_140C48DE8, 0);
  }
}
