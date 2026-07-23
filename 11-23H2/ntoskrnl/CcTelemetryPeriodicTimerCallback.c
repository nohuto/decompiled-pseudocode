/*
 * XREFs of CcTelemetryPeriodicTimerCallback @ 0x140880E00
 * Callers:
 *     <none>
 * Callees:
 *     KeSetCoalescableTimer @ 0x140252620 (KeSetCoalescableTimer.c)
 *     CcForEachPartition @ 0x14031105C (CcForEachPartition.c)
 *     CcHasGlobalTelemetryChanged @ 0x1403D1294 (CcHasGlobalTelemetryChanged.c)
 *     CcPostVolumeTelemetry @ 0x1403D12B0 (CcPostVolumeTelemetry.c)
 */

void CcTelemetryPeriodicTimerCallback()
{
  char HasGlobalTelemetryChanged; // di
  char v1; // cl

  if ( CcTelemetryGlobalData )
  {
    _InterlockedExchange(&dword_140C5F9B8, 0);
    if ( _InterlockedIncrement(&dword_140C5F9B0) == 1 && !_InterlockedCompareExchange(&dword_140C5F9B4, 1, 0) )
    {
      ++qword_140C5F8B0;
      qword_140C5F8B8 += (unsigned int)CcNumberOfMappedVacbs;
      HasGlobalTelemetryChanged = CcHasGlobalTelemetryChanged();
      CcForEachPartition(
        (unsigned __int8 (__fastcall *)(__int64, _QWORD, __int64))CcPartitionTelemetryCallback,
        0LL,
        v1,
        v1);
      CcPostVolumeTelemetry();
      if ( byte_140C5F8A1 || !HasGlobalTelemetryChanged )
        _InterlockedExchange(&dword_140C5F9B4, 0);
      else
        KeSetCoalescableTimer(&Timer, DueTime, 0, 0x3A98u, &stru_140C5F9C0);
    }
    _InterlockedDecrement(&dword_140C5F9B0);
  }
}
