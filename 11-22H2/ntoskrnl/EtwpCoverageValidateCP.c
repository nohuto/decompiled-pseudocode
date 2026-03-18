/*
 * XREFs of EtwpCoverageValidateCP @ 0x140364D1C
 * Callers:
 *     EtwTelemetryCoverageReport @ 0x140364BF0 (EtwTelemetryCoverageReport.c)
 *     EtwpCoverageRecordAtHighIrql @ 0x1405FFA14 (EtwpCoverageRecordAtHighIrql.c)
 *     EtwpCoverageRecord @ 0x1407DDB00 (EtwpCoverageRecord.c)
 *     EtwpCoverageCheckCP @ 0x1409E8368 (EtwpCoverageCheckCP.c)
 *     EtwpCoverageResetCP @ 0x1409E86F0 (EtwpCoverageResetCP.c)
 * Callees:
 *     TelemetryCoverageStringHashInternal @ 0x140364D7C (TelemetryCoverageStringHashInternal.c)
 *     TelemetryCoverageValidateName @ 0x140364DBC (TelemetryCoverageValidateName.c)
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
