/*
 * XREFs of sub_14094774C @ 0x14094774C
 * Callers:
 *     sub_1409585A4 @ 0x1409585A4 (sub_1409585A4.c)
 * Callees:
 *     sub_140775698 @ 0x140775698 (sub_140775698.c)
 *     sub_14077572C @ 0x14077572C (sub_14077572C.c)
 */

char __fastcall sub_14094774C(_QWORD *a1)
{
  _QWORD *v2; // rax

  sub_14077572C(1);
  v2 = (_QWORD *)qword_140C46148;
  if ( *(__int64 **)qword_140C46148 != &qword_140C46140 )
    __fastfail(3u);
  *a1 = &qword_140C46140;
  a1[1] = v2;
  *v2 = a1;
  qword_140C46148 = (__int64)a1;
  sub_140775698(1);
  return 1;
}
