/*
 * XREFs of PnpEnableWatchdog @ 0x14078601C
 * Callers:
 *     PnpAllocateAndEnableEventWatchdog @ 0x140785740 (PnpAllocateAndEnableEventWatchdog.c)
 *     PnpCallAddDevice @ 0x14079262C (PnpCallAddDevice.c)
 *     PnpDeviceCompletionRequestCreate @ 0x140794E8C (PnpDeviceCompletionRequestCreate.c)
 *     PnpCallDriverEntry @ 0x1407E1BC8 (PnpCallDriverEntry.c)
 *     PnpDelayedRemoveWorker @ 0x140881690 (PnpDelayedRemoveWorker.c)
 * Callees:
 *     PnpAllocateWatchdog @ 0x14031E298 (PnpAllocateWatchdog.c)
 *     PnpWatchdogTimerStart @ 0x140785610 (PnpWatchdogTimerStart.c)
 */

__int64 __fastcall PnpEnableWatchdog(int a1, __int64 a2, const UNICODE_STRING *a3)
{
  __int64 Watchdog; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx

  Watchdog = PnpAllocateWatchdog(a3);
  v6 = Watchdog;
  if ( Watchdog )
  {
    *(_QWORD *)(Watchdog + 24) = a2;
    *(_DWORD *)(Watchdog + 16) = a1;
    v7 = *(_QWORD *)(Watchdog + 8);
    *(_QWORD *)Watchdog = MEMORY[0xFFFFF78000000008];
    PnpWatchdogTimerStart(v7);
  }
  return v6;
}
