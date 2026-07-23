/*
 * XREFs of sub_1405F2998 @ 0x1405F2998
 * Callers:
 *     sub_1409C5570 @ 0x1409C5570 (sub_1409C5570.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1405F2998(__int64 a1)
{
  _QWORD *result; // rax

  result = off_140C09080;
  if ( *off_140C09080 != (_UNKNOWN *)&off_140C09078 )
    __fastfail(3u);
  *(_QWORD *)a1 = &off_140C09078;
  *(_QWORD *)(a1 + 8) = result;
  *result = a1;
  off_140C09080 = (_UNKNOWN **)a1;
  return result;
}
