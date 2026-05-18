/*
 * XREFs of sub_1800FC02C @ 0x1800FC02C
 * Callers:
 *     sub_1800FC0A4 @ 0x1800FC0A4 (sub_1800FC0A4.c)
 * Callees:
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 */

_QWORD *__fastcall sub_1800FC02C(_QWORD *a1)
{
  _QWORD *v2; // rax

  v2 = (_QWORD *)sub_18001D684();
  if ( v2 )
    *v2 = &Spectre::Utils::Tweening::ExponentialEaseInOutCurve::`vftable';
  *a1 = v2;
  return a1;
}
