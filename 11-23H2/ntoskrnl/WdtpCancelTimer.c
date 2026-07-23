/*
 * XREFs of WdtpCancelTimer @ 0x1407858BC
 * Callers:
 *     PnpDisableWatchdog @ 0x14078285C (PnpDisableWatchdog.c)
 *     PnpDisableAndFreeEventWatchdog @ 0x14078573C (PnpDisableAndFreeEventWatchdog.c)
 *     PnpWatchdogTimerPause @ 0x140785830 (PnpWatchdogTimerPause.c)
 *     PnpCallAddDevice @ 0x14079281C (PnpCallAddDevice.c)
 *     PnpCallDriverEntry @ 0x1407E1E98 (PnpCallDriverEntry.c)
 *     PnpDelayedRemoveWorker @ 0x1408818D0 (PnpDelayedRemoveWorker.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     ExDeleteTimer @ 0x14031DD40 (ExDeleteTimer.c)
 *     ExCancelTimer @ 0x14031E110 (ExCancelTimer.c)
 */

NTSTATUS __fastcall WdtpCancelTimer(__int64 a1, char a2)
{
  ULONG_PTR v3; // rcx
  NTSTATUS result; // eax

  v3 = *(_QWORD *)(a1 + 48);
  if ( a2 )
  {
    ExDeleteTimer(v3, 1, 1, 0LL);
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  else
  {
    ExCancelTimer(v3, 0LL);
  }
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_DWORD *)(a1 + 128) = 0;
  result = *(_DWORD *)(a1 + 88);
  if ( result > 0 )
    return KeWaitForSingleObject((PVOID)(a1 + 96), Executive, 0, 0, 0LL);
  return result;
}
