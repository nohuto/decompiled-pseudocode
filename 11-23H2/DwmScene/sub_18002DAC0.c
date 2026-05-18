/*
 * XREFs of sub_18002DAC0 @ 0x18002DAC0
 * Callers:
 *     sub_1800344A0 @ 0x1800344A0 (sub_1800344A0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18002DAC0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8

  v2 = a2[2];
  if ( a2[3] >= 8uLL )
    a2 = (_QWORD *)*a2;
  return sub_18002F42C(a1, a2, v2);
}
