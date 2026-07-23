/*
 * XREFs of sub_14024F59C @ 0x14024F59C
 * Callers:
 *     EtwTelemetryCoverageReport @ 0x14024F470 (EtwTelemetryCoverageReport.c)
 *     sub_1406310E4 @ 0x1406310E4 (sub_1406310E4.c)
 *     sub_1406D45B4 @ 0x1406D45B4 (sub_1406D45B4.c)
 *     sub_1409E512C @ 0x1409E512C (sub_1409E512C.c)
 *     sub_1409E54B0 @ 0x1409E54B0 (sub_1409E54B0.c)
 * Callees:
 *     sub_14024F5FC @ 0x14024F5FC (sub_14024F5FC.c)
 *     sub_14024F664 @ 0x14024F664 (sub_14024F664.c)
 */

__int64 __fastcall sub_14024F59C(__int64 *a1, _DWORD *a2)
{
  __int64 v2; // rdi
  int v4; // eax
  __int64 v5; // r11
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v7 = 0;
  v4 = sub_14024F664(v2, &v7);
  if ( v4 == *(_DWORD *)(v5 + 8) && (unsigned int)sub_14024F5FC(v2) )
  {
    *a2 = v7;
    return 1LL;
  }
  else
  {
    *(_DWORD *)(v5 + 12) = -1;
    return 0LL;
  }
}
