/*
 * XREFs of EtwpCoverageValidateCP @ 0x14036550C
 * Callers:
 *     EtwTelemetryCoverageReport @ 0x1403653E0 (EtwTelemetryCoverageReport.c)
 *     EtwpCoverageRecordAtHighIrql @ 0x1405FFEF4 (EtwpCoverageRecordAtHighIrql.c)
 *     EtwpCoverageRecord @ 0x1407DD850 (EtwpCoverageRecord.c)
 *     EtwpCoverageCheckCP @ 0x1409E8548 (EtwpCoverageCheckCP.c)
 *     EtwpCoverageResetCP @ 0x1409E88D0 (EtwpCoverageResetCP.c)
 * Callees:
 *     TelemetryCoverageStringHashInternal @ 0x14036556C (TelemetryCoverageStringHashInternal.c)
 *     TelemetryCoverageValidateName @ 0x1403655AC (TelemetryCoverageValidateName.c)
 */

__int64 __fastcall EtwpCoverageValidateCP(__int64 *a1, _DWORD *a2)
{
  __int64 v2; // rdi
  int v4; // eax
  __int64 v5; // r11
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v7 = 0;
  v4 = TelemetryCoverageStringHashInternal(v2, &v7);
  if ( v4 == *(_DWORD *)(v5 + 8) && (unsigned int)TelemetryCoverageValidateName(v2) )
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
