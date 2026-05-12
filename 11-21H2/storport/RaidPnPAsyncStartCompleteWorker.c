/*
 * XREFs of RaidPnPAsyncStartCompleteWorker @ 0x1C003B200
 * Callers:
 *     <none>
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     RaidAcquireAdapterRemoveLock @ 0x1C000BA44 (RaidAcquireAdapterRemoveLock.c)
 *     RaidAdapterStartDevice @ 0x1C0037D70 (RaidAdapterStartDevice.c)
 */

void __fastcall RaidPnPAsyncStartCompleteWorker(PDEVICE_OBJECT DeviceObject, PIO_WORKITEM *Context)
{
  PEX_RUNDOWN_REF_CACHE_AWARE *DeviceExtension; // rbx
  IRP *v4; // rbp
  unsigned int started; // edi

  DeviceExtension = (PEX_RUNDOWN_REF_CACHE_AWARE *)DeviceObject->DeviceExtension;
  v4 = (IRP *)Context[1];
  RaidAcquireAdapterRemoveLock((__int64)DeviceExtension);
  started = RaidAdapterStartDevice((__int64)DeviceExtension, (__int64)v4);
  ExReleaseRundownProtectionCacheAware(DeviceExtension[37]);
  IoUninitializeWorkItem(*Context);
  ExFreePoolWithTag(Context, 0x49576152u);
  RaidCompleteRequestEx(v4, 0, started);
}
