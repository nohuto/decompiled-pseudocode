/*
 * XREFs of sub_140656234 @ 0x140656234
 * Callers:
 *     sub_140656340 @ 0x140656340 (sub_140656340.c)
 *     sub_1406563D0 @ 0x1406563D0 (sub_1406563D0.c)
 *     sub_140656584 @ 0x140656584 (sub_140656584.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140656234(__int16 a1)
{
  __int64 result; // rax
  int v2; // edx

  result = (unsigned int)qword_140D03CC0;
  v2 = ((_WORD)qword_140D03CC0 + 1) & 0x3FF;
  if ( v2 != HIDWORD(qword_140D03CC0) )
  {
    word_140D03CCA[(unsigned int)qword_140D03CC0] = a1;
    LODWORD(qword_140D03CC0) = v2;
  }
  return result;
}
