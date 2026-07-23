/*
 * XREFs of sub_14024F6A4 @ 0x14024F6A4
 * Callers:
 *     EtwTelemetryCoverageReport @ 0x14024F470 (EtwTelemetryCoverageReport.c)
 *     sub_1406D45B4 @ 0x1406D45B4 (sub_1406D45B4.c)
 * Callees:
 *     sub_14024F6E4 @ 0x14024F6E4 (sub_14024F6E4.c)
 */

__int64 __fastcall sub_14024F6A4(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rcx
  unsigned __int64 v6; // rdx
  __int64 v7; // r10
  __int64 v8; // r11

  v4 = *(_QWORD *)(a1 + 24);
  v6 = *(_QWORD *)(a1 + 16) - v4;
  if ( v6 < (unsigned int)(a3 + 1) )
    return 0LL;
  sub_14024F6E4(v4, v6, a2);
  *(_QWORD *)(v7 + 24) += v8;
  return 1LL;
}
