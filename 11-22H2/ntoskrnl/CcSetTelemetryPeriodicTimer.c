/*
 * XREFs of CcSetTelemetryPeriodicTimer @ 0x140875C44
 * Callers:
 *     CcCopyReadEx @ 0x140261C40 (CcCopyReadEx.c)
 *     CcFlushCachePreProcess @ 0x14029DD60 (CcFlushCachePreProcess.c)
 *     CcAsyncCopyRead @ 0x1402C1040 (CcAsyncCopyRead.c)
 *     CcCopyWriteEx @ 0x1402C8CF0 (CcCopyWriteEx.c)
 *     CcSetValidData @ 0x140354824 (CcSetValidData.c)
 *     CcInitializeTelemetry @ 0x140B35E14 (CcInitializeTelemetry.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x140252440 (KeSetCoalescableTimer.c)
 */

char __fastcall CcSetTelemetryPeriodicTimer(LARGE_INTEGER DueTime)
{
  signed __int32 v1; // eax

  v1 = _InterlockedCompareExchange(&dword_140C5FA74, 1, 0);
  if ( !v1 )
    LOBYTE(v1) = KeSetCoalescableTimer(&Timer, DueTime, 0, 0x3A98u, &stru_140C5FA80);
  return v1;
}
