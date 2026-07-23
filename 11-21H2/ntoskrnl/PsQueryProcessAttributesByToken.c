/*
 * XREFs of PsQueryProcessAttributesByToken @ 0x14070BA70
 * Callers:
 *     sub_1406745EC @ 0x1406745EC (sub_1406745EC.c)
 *     sub_14070B934 @ 0x14070B934 (sub_14070B934.c)
 *     sub_14070BA00 @ 0x14070BA00 (sub_14070BA00.c)
 *     sub_1409E4114 @ 0x1409E4114 (sub_1409E4114.c)
 *     sub_1409F4DA0 @ 0x1409F4DA0 (sub_1409F4DA0.c)
 * Callees:
 *     SeSecurityAttributePresent @ 0x140300420 (SeSecurityAttributePresent.c)
 */

void __fastcall PsQueryProcessAttributesByToken(__int64 a1, _BYTE *a2, _BYTE *a3)
{
  if ( a2 )
    *a2 = SeSecurityAttributePresent(a1, (__int64)&qword_140A38B30, (__int64)a3);
  if ( a3 )
    *a3 = SeSecurityAttributePresent(a1, (__int64)&qword_140A38B50, (__int64)a3);
}
