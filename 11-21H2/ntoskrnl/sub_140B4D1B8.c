/*
 * XREFs of sub_140B4D1B8 @ 0x140B4D1B8
 * Callers:
 *     sub_140B4D124 @ 0x140B4D124 (sub_140B4D124.c)
 * Callees:
 *     sub_140B4CCF8 @ 0x140B4CCF8 (sub_140B4CCF8.c)
 */

__int64 sub_140B4D1B8()
{
  __int64 result; // rax

  result = 0LL;
  if ( !byte_140D011A2 && !byte_140C54BD8 )
  {
    if ( qword_140C54BD0 )
      return sub_140B4CCF8(qword_140C4ABF8, qword_140C4AD28, qword_140C54BD0, 0, 4);
    else
      return 3221225486LL;
  }
  return result;
}
