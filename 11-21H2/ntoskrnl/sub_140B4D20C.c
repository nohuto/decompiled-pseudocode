/*
 * XREFs of sub_140B4D20C @ 0x140B4D20C
 * Callers:
 *     sub_140B4D124 @ 0x140B4D124 (sub_140B4D124.c)
 * Callees:
 *     sub_140B4CCF8 @ 0x140B4CCF8 (sub_140B4CCF8.c)
 */

__int64 sub_140B4D20C()
{
  __int64 result; // rax

  result = sub_140B4CCF8(qword_140C4ABF8, (__int64)qword_140C4C138, qword_140C4C140, 1, 4);
  if ( (int)result >= 0 )
    return sub_140B4CCF8(qword_140C4AC00, (__int64)qword_140C4C138, (unsigned __int64)qword_140C4C138, 1, 64);
  return result;
}
