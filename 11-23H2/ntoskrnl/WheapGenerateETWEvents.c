/*
 * XREFs of WheapGenerateETWEvents @ 0x140613818
 * Callers:
 *     WheaReportHwError @ 0x140610B80 (WheaReportHwError.c)
 *     WheapProcessWorkQueueItem @ 0x140611570 (WheapProcessWorkQueueItem.c)
 *     WheapProcessWaitingETWEvents @ 0x140861180 (WheapProcessWaitingETWEvents.c)
 * Callees:
 *     WheaIsCriticalState @ 0x140380D10 (WheaIsCriticalState.c)
 *     WheapCompressErrorRecord @ 0x140611278 (WheapCompressErrorRecord.c)
 *     WheapGenerateETWErrorRecord @ 0x140613680 (WheapGenerateETWErrorRecord.c)
 *     WheapGenerateETWErrorRecordLarge @ 0x140613700 (WheapGenerateETWErrorRecordLarge.c)
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
