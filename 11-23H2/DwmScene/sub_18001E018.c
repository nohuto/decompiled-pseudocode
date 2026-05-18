/*
 * XREFs of sub_18001E018 @ 0x18001E018
 * Callers:
 *     sub_1800CF0F4 @ 0x1800CF0F4 (sub_1800CF0F4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001E018(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8

  v2 = a2[2];
  if ( a2[3] >= 0x10uLL )
    a2 = (_QWORD *)*a2;
  return sub_18001E034(a1, a2, v2);
}
