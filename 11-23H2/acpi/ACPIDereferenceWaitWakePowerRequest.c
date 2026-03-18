/*
 * XREFs of ACPIDereferenceWaitWakePowerRequest @ 0x1C00447E0
 * Callers:
 *     ACPIDeviceCancelWaitWakeIrpCallBack @ 0x1C001C470 (ACPIDeviceCancelWaitWakeIrpCallBack.c)
 *     ACPIDeviceCompleteRequest @ 0x1C001C97C (ACPIDeviceCompleteRequest.c)
 *     ACPIDeviceInitializePowerRequest @ 0x1C001CFB8 (ACPIDeviceInitializePowerRequest.c)
 *     ACPIDeviceIrpWaitWakeRequestPending @ 0x1C001E2C0 (ACPIDeviceIrpWaitWakeRequestPending.c)
 *     ACPIWakeDisconnectWakeInterrupts @ 0x1C00450DC (ACPIWakeDisconnectWakeInterrupts.c)
 * Callees:
 *     ACPIFreeWaitWakePowerRequest @ 0x1C0044A10 (ACPIFreeWaitWakePowerRequest.c)
 *     ACPIWakeEmulationDisable @ 0x1C0045274 (ACPIWakeEmulationDisable.c)
 */

void __fastcall ACPIDereferenceWaitWakePowerRequest(char *Entry)
{
  KIRQL v2; // al
  int v3; // ebx

  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v3 = --*((_DWORD *)Entry + 28);
  KeReleaseSpinLock(&AcpiPowerLock, v2);
  if ( !v3 )
  {
    ACPIWakeEmulationDisable(Entry);
    if ( KeGetCurrentIrql() <= 1u )
    {
      ACPIFreeWaitWakePowerRequest(Entry);
    }
    else
    {
      *((_QWORD *)Entry + 15) = 0LL;
      *((_QWORD *)Entry + 17) = ACPIFreeWaitWakePowerRequest;
      *((_QWORD *)Entry + 18) = Entry;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(Entry + 120), DelayedWorkQueue);
    }
  }
}
