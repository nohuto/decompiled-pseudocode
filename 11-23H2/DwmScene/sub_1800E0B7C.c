/*
 * XREFs of sub_1800E0B7C @ 0x1800E0B7C
 * Callers:
 *     sub_1800E0BF4 @ 0x1800E0BF4 (sub_1800E0BF4.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 */

_QWORD *__fastcall sub_1800E0B7C(_QWORD *a1)
{
  _QWORD *v2; // rax

  v2 = (_QWORD *)sub_18001C190();
  if ( v2 )
    *v2 = &Spectre::Utils::Tweening::ExponentialEaseInOutCurve::`vftable';
  *a1 = v2;
  return a1;
}
