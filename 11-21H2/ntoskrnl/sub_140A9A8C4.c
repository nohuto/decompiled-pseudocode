/*
 * XREFs of sub_140A9A8C4 @ 0x140A9A8C4
 * Callers:
 *     sub_140B53724 @ 0x140B53724 (sub_140B53724.c)
 *     sub_140B53B88 @ 0x140B53B88 (sub_140B53B88.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_140A9A8C4(_QWORD *a1)
{
  _QWORD *result; // rax

  result = (_QWORD *)qword_140C1B2C8;
  if ( *(__int64 **)qword_140C1B2C8 != &qword_140C1B2C0 )
    __fastfail(3u);
  *a1 = &qword_140C1B2C0;
  a1[1] = result;
  *result = a1;
  qword_140C1B2C8 = (__int64)a1;
  return result;
}
