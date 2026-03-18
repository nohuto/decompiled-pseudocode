/*
 * XREFs of PpDeviceRegistration @ 0x1407CF564
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140795748 (PiProcessNewDeviceNode.c)
 *     PpDevCfgProcessDevices @ 0x140810D14 (PpDevCfgProcessDevices.c)
 *     IopInitializeDeviceInstanceKey @ 0x1408121C4 (IopInitializeDeviceInstanceKey.c)
 *     IoReportDetectedDevice @ 0x140834DD0 (IoReportDetectedDevice.c)
 *     PnpCleanupDeviceRegistryValues @ 0x140884BAC (PnpCleanupDeviceRegistryValues.c)
 *     PiCMCreateDevice @ 0x140968430 (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x140968E48 (PiCMDeleteDevice.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402390E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D410 (ExReleaseResourceLite.c)
 *     PiDeviceRegistration @ 0x1407CF5EC (PiDeviceRegistration.c)
 */

__int64 __fastcall PpDeviceRegistration(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  char v6; // si
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v9; // ebx

  v6 = a2;
  if ( !a4 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  }
  LOBYTE(a2) = v6;
  v9 = PiDeviceRegistration(a1, a2, a3);
  if ( !a4 )
  {
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegion();
  }
  return v9;
}
