/*
 * XREFs of CcSetTelemetryPeriodicTimer @ 0x140875774
 * Callers:
 *     CcCopyReadEx @ 0x140261D60 (CcCopyReadEx.c)
 *     CcFlushCachePreProcess @ 0x14029DE80 (CcFlushCachePreProcess.c)
 *     CcAsyncCopyRead @ 0x1402C1070 (CcAsyncCopyRead.c)
 *     CcCopyWriteEx @ 0x1402C8D20 (CcCopyWriteEx.c)
 *     CcSetValidData @ 0x140354E24 (CcSetValidData.c)
 *     CcInitializeTelemetry @ 0x140B34E14 (CcInitializeTelemetry.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x140252560 (KeSetCoalescableTimer.c)
 */

char __fastcall CcSetTelemetryPeriodicTimer(LARGE_INTEGER DueTime)
{
  signed __int32 v1; // eax

  v1 = _InterlockedCompareExchange(&dword_140C5F9B4, 1, 0);
  if ( !v1 )
    LOBYTE(v1) = KeSetCoalescableTimer(&Timer, DueTime, 0, 0x3A98u, &stru_140C5F9C0);
  return v1;
}
