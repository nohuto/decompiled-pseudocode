/*
 * XREFs of sub_1800FC070 @ 0x1800FC070
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 */

_QWORD *__fastcall sub_1800FC070(_QWORD *a1, char a2)
{
  *a1 = &Spectre::Utils::Tweening::ICurve::`vftable';
  if ( (a2 & 1) != 0 )
    sub_18000B998(a1);
  return a1;
}
