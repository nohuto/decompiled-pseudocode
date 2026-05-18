/*
 * XREFs of sub_18001C7B4 @ 0x18001C7B4
 * Callers:
 *     sub_18001CAA0 @ 0x18001CAA0 (sub_18001CAA0.c)
 *     sub_18001CB40 @ 0x18001CB40 (sub_18001CB40.c)
 *     sub_18002AAE4 @ 0x18002AAE4 (sub_18002AAE4.c)
 *     sub_18002EBE0 @ 0x18002EBE0 (sub_18002EBE0.c)
 *     sub_18002EE38 @ 0x18002EE38 (sub_18002EE38.c)
 *     sub_180058DE4 @ 0x180058DE4 (sub_180058DE4.c)
 *     sub_1800A23F4 @ 0x1800A23F4 (sub_1800A23F4.c)
 *     sub_1800A2510 @ 0x1800A2510 (sub_1800A2510.c)
 * Callees:
 *     sub_18001CD3C @ 0x18001CD3C (sub_18001CD3C.c)
 */

__int64 __fastcall sub_18001C7B4(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r9
  __int64 v3; // rax

  v2 = a2[2];
  if ( a2[3] >= 0x10uLL )
    a2 = (_QWORD *)*a2;
  v3 = a1[2];
  if ( a1[3] >= 0x10uLL )
    a1 = (_QWORD *)*a1;
  return (unsigned int)sub_18001CD3C(a1, v3, a2, v2) >> 31;
}
