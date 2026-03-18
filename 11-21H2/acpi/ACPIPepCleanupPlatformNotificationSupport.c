/*
 * XREFs of ACPIPepCleanupPlatformNotificationSupport @ 0x1C00B0268
 * Callers:
 *     ACPIBusIrpRemoveDevice @ 0x1C004C350 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C004C940 (ACPIBusIrpSurpriseRemoval.c)
 *     ACPIBusIrpStopDevice @ 0x1C00ACBF0 (ACPIBusIrpStopDevice.c)
 * Callees:
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C00071F0 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     ACPISetDeviceWorker @ 0x1C00215BC (ACPISetDeviceWorker.c)
 */

char __fastcall ACPIPepCleanupPlatformNotificationSupport(ULONG_PTR a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  char result; // al

  if ( *(_BYTE *)(a1 + 240) )
  {
    v2 = *(void **)(a1 + 272);
    if ( v2 )
    {
      PoUnregisterPowerSettingCallback(v2);
      *(_QWORD *)(a1 + 272) = 0LL;
    }
    v3 = *(void **)(a1 + 280);
    if ( v3 )
    {
      PoUnregisterPowerSettingCallback(v3);
      *(_QWORD *)(a1 + 280) = 0LL;
    }
    v4 = *(void **)(a1 + 288);
    if ( v4 )
    {
      PoUnregisterPowerSettingCallback(v4);
      *(_QWORD *)(a1 + 288) = 0LL;
    }
    v5 = *(void **)(a1 + 296);
    if ( v5 )
    {
      PoUnregisterPowerSettingCallback(v5);
      *(_QWORD *)(a1 + 296) = 0LL;
    }
    ExAcquireFastMutex((PFAST_MUTEX)(a1 + 184));
    KeInitializeEvent((PRKEVENT)(a1 + 304), NotificationEvent, 0);
    *(_DWORD *)(a1 + 264) = 0;
    *(_DWORD *)(a1 + 248) = 0;
    *(_DWORD *)(a1 + 252) = 0;
    *(_DWORD *)(a1 + 260) = 1;
    ACPISetDeviceWorker(a1, 1);
    ExReleaseFastMutex((PFAST_MUTEX)(a1 + 184));
    KeWaitForSingleObject((PVOID)(a1 + 304), Executive, 0, 0, 0LL);
    *(_BYTE *)(a1 + 240) = 0;
    return ACPIInitDereferenceDeviceExtensionUnlocked(a1);
  }
  return result;
}
