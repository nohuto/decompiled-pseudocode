/*
 * XREFs of sub_1800A52D0 @ 0x1800A52D0
 * Callers:
 *     sub_1800A4630 @ 0x1800A4630 (sub_1800A4630.c)
 *     sub_1800A46AC @ 0x1800A46AC (sub_1800A46AC.c)
 * Callees:
 *     sub_1800A4C3C @ 0x1800A4C3C (sub_1800A4C3C.c)
 */

_OWORD *__fastcall sub_1800A52D0(__int128 *a1, void *a2, __int64 a3)
{
  __int128 v3; // xmm6
  _OWORD *result; // rax

  v3 = *a1;
  result = (_OWORD *)sub_1800A4C3C(a2, a3, a1);
  *result = v3;
  return result;
}
