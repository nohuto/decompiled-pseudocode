/*
 * XREFs of sub_140AA5DA4 @ 0x140AA5DA4
 * Callers:
 *     sub_140A7FA0C @ 0x140A7FA0C (sub_140A7FA0C.c)
 *     sub_140AA5A48 @ 0x140AA5A48 (sub_140AA5A48.c)
 * Callees:
 *     sub_140A81A34 @ 0x140A81A34 (sub_140A81A34.c)
 */

_QWORD *__fastcall sub_140AA5DA4(unsigned __int64 a1)
{
  __int64 v1; // r10
  __int64 v2; // r11
  _QWORD *i; // rax

  if ( (unsigned int)sub_140A81A34(
                       (unsigned __int64 *)(16LL * (unsigned __int8)(-125 * (a1 >> 12)) + qword_140C1ADF8),
                       a1,
                       a1 + 208) )
  {
    for ( i = *(_QWORD **)((char *)qword_140C1AE00 + v1); i != (_QWORD *)((char *)qword_140C1AE00 + v1); i = (_QWORD *)*i )
    {
      if ( *(i - 4) == v2 )
        return i - 4;
    }
  }
  return 0LL;
}
