/*
 * XREFs of sub_180057084 @ 0x180057084
 * Callers:
 *     sub_180057870 @ 0x180057870 (sub_180057870.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 */

_QWORD *__fastcall sub_180057084(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v6; // rax

  v6 = (_QWORD *)sub_18001C190();
  if ( v6 )
  {
    *v6 = *a3;
    v6[1] = *a2;
  }
  *a1 = v6;
  return a1;
}
