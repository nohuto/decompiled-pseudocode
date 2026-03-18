/*
 * XREFs of WheapGenerateETWEvents @ 0x140613338
 * Callers:
 *     WheaReportHwError @ 0x1406106A0 (WheaReportHwError.c)
 *     WheapProcessWorkQueueItem @ 0x140611090 (WheapProcessWorkQueueItem.c)
 *     WheapProcessWaitingETWEvents @ 0x140861010 (WheapProcessWaitingETWEvents.c)
 * Callees:
 *     WheaIsCriticalState @ 0x1403811C0 (WheaIsCriticalState.c)
 *     WheapCompressErrorRecord @ 0x140610D98 (WheapCompressErrorRecord.c)
 *     WheapGenerateETWErrorRecord @ 0x1406131A0 (WheapGenerateETWErrorRecord.c)
 *     WheapGenerateETWErrorRecordLarge @ 0x140613220 (WheapGenerateETWErrorRecordLarge.c)
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
