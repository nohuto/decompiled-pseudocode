/*
 * XREFs of sub_18001F288 @ 0x18001F288
 * Callers:
 *     sub_1800A2BB0 @ 0x1800A2BB0 (sub_1800A2BB0.c)
 * Callees:
 *     sub_18001F2B4 @ 0x18001F2B4 (sub_18001F2B4.c)
 */

__int64 __fastcall sub_18001F288(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r8

  v3 = a2[2];
  if ( a2[3] >= 0x10uLL )
    a2 = (_QWORD *)*a2;
  sub_18001F2B4(a1, a2, v3);
  return a1;
}
