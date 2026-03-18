/*
 * XREFs of WdtpCancelTimer @ 0x1407856CC
 * Callers:
 *     PnpDisableWatchdog @ 0x14078266C (PnpDisableWatchdog.c)
 *     PnpDisableAndFreeEventWatchdog @ 0x14078554C (PnpDisableAndFreeEventWatchdog.c)
 *     PnpWatchdogTimerPause @ 0x140785640 (PnpWatchdogTimerPause.c)
 *     PnpCallAddDevice @ 0x14079262C (PnpCallAddDevice.c)
 *     PnpCallDriverEntry @ 0x1407E1BC8 (PnpCallDriverEntry.c)
 *     PnpDelayedRemoveWorker @ 0x140881690 (PnpDelayedRemoveWorker.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CE0 (KeWaitForSingleObject.c)
 *     ExDeleteTimer @ 0x14031DAB0 (ExDeleteTimer.c)
 *     ExCancelTimer @ 0x14031DE80 (ExCancelTimer.c)
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
