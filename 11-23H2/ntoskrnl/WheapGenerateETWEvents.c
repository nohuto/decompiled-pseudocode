/*
 * XREFs of WheapGenerateETWEvents @ 0x1406132C8
 * Callers:
 *     WheaReportHwError @ 0x140610630 (WheaReportHwError.c)
 *     WheapProcessWorkQueueItem @ 0x140611020 (WheapProcessWorkQueueItem.c)
 *     WheapProcessWaitingETWEvents @ 0x140860F40 (WheapProcessWaitingETWEvents.c)
 * Callees:
 *     WheaIsCriticalState @ 0x140380B70 (WheaIsCriticalState.c)
 *     WheapCompressErrorRecord @ 0x140610D28 (WheapCompressErrorRecord.c)
 *     WheapGenerateETWErrorRecord @ 0x140613130 (WheapGenerateETWErrorRecord.c)
 *     WheapGenerateETWErrorRecordLarge @ 0x1406131B0 (WheapGenerateETWErrorRecordLarge.c)
 */

char __fastcall WheapGenerateETWEvents(__int64 a1)
{
  char result; // al

  result = WheaIsCriticalState();
  if ( !result && (*(_DWORD *)(a1 + 104) & 0x100) == 0 )
  {
    WheapCompressErrorRecord(3, a1);
    if ( *(_DWORD *)(a1 + 20) <= 0xEFFBu )
      return WheapGenerateETWErrorRecord(a1);
    else
      return WheapGenerateETWErrorRecordLarge(a1);
  }
  return result;
}
