/*
 * XREFs of CcSetTelemetryPeriodicTimer @ 0x1408759B4
 * Callers:
 *     CcCopyReadEx @ 0x140261FF0 (CcCopyReadEx.c)
 *     CcFlushCachePreProcess @ 0x14029E110 (CcFlushCachePreProcess.c)
 *     CcAsyncCopyRead @ 0x1402C1300 (CcAsyncCopyRead.c)
 *     CcCopyWriteEx @ 0x1402C8FB0 (CcCopyWriteEx.c)
 *     CcSetValidData @ 0x140354FC4 (CcSetValidData.c)
 *     CcInitializeTelemetry @ 0x140B34E14 (CcInitializeTelemetry.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x140252620 (KeSetCoalescableTimer.c)
 */

char __fastcall CcSetTelemetryPeriodicTimer(LARGE_INTEGER DueTime)
{
  signed __int32 v1; // eax

  v1 = _InterlockedCompareExchange(&dword_140C5F9B4, 1, 0);
  if ( !v1 )
    LOBYTE(v1) = KeSetCoalescableTimer(&Timer, DueTime, 0, 0x3A98u, &stru_140C5F9C0);
  return v1;
}
