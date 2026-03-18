/*
 * XREFs of IoCancelIrp @ 0x140351890
 * Callers:
 *     FsRtlpWaitOnIrp @ 0x1402010B8 (FsRtlpWaitOnIrp.c)
 *     IopCancelIrpsInFileObjectList @ 0x1402AF910 (IopCancelIrpsInFileObjectList.c)
 *     IopCancelIrpsInCurrentThreadList @ 0x140351704 (IopCancelIrpsInCurrentThreadList.c)
 *     PopThermalPollingPowerSettingCallback @ 0x1403B5900 (PopThermalPollingPowerSettingCallback.c)
 *     PopThermalZoneDpc @ 0x1403CC560 (PopThermalZoneDpc.c)
 *     PopThermalZoneTimerCallback @ 0x1404629B0 (PopThermalZoneTimerCallback.c)
 *     IoCancelThreadIo @ 0x14076E9F4 (IoCancelThreadIo.c)
 *     FsRtlKernelFsControlFile @ 0x140772DD0 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x140773AC0 (FsRtlQueryKernelEaFile.c)
 *     NtCancelIoFile @ 0x1407C1CC0 (NtCancelIoFile.c)
 *     FsRtlSetKernelEaFile @ 0x1407D5EE0 (FsRtlSetKernelEaFile.c)
 *     PopBatteryWorker @ 0x140870230 (PopBatteryWorker.c)
 *     FsRtlQueryInformationFile @ 0x14093EDD0 (FsRtlQueryInformationFile.c)
 *     IopCancelAlertedRequest @ 0x14094442C (IopCancelAlertedRequest.c)
 *     IopCancelPendingEject @ 0x14096CD38 (IopCancelPendingEject.c)
 *     PopThermalReadCounters @ 0x14098AF64 (PopThermalReadCounters.c)
 *     PopThermalZoneRemove @ 0x14098B0C0 (PopThermalZoneRemove.c)
 *     PopThermalZoneUpdateCoolingPolicy @ 0x14098B21C (PopThermalZoneUpdateCoolingPolicy.c)
 *     PopBatteryRemove @ 0x1409957F0 (PopBatteryRemove.c)
 *     PopFanRemove @ 0x1409973C0 (PopFanRemove.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402A0640 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140302810 (KeReleaseQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     IovpCancelRoutine @ 0x140AC0CBC (IovpCancelRoutine.c)
 *     IovCancelIrp @ 0x140AC2448 (IovCancelIrp.c)
 */

BOOLEAN __stdcall IoCancelIrp(PIRP Irp)
{
  KIRQL v2; // al
  void (__fastcall *v3)(PDEVICE_OBJECT, PIRP); // rdi
  KIRQL v4; // si
  bool v5; // zf

  if ( ViVerifierEnabled && (VfRuleClasses & 0xFF217644) != 0 )
    IovCancelIrp();
  v2 = KeAcquireQueuedSpinLock(7uLL);
  Irp->Cancel = 1;
  v3 = (void (__fastcall *)(PDEVICE_OBJECT, PIRP))_InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, 0LL);
  v4 = v2;
  if ( v3 )
  {
    if ( Irp->CurrentLocation > (char)(Irp->StackCount + 1) )
      KeBugCheckEx(0x48u, (ULONG_PTR)Irp, (ULONG_PTR)v3, 0LL, 0LL);
    v5 = ViVerifierEnabled == 0;
    Irp->CancelIrql = v2;
    if ( v5 || !VfXdvEnabled )
      v3(Irp->Tail.Overlay.CurrentStackLocation->DeviceObject, Irp);
    else
      IovpCancelRoutine(Irp->Tail.Overlay.CurrentStackLocation->DeviceObject, Irp, v3);
    if ( KeGetCurrentIrql() == 2 && v4 != 2 )
      KeBugCheckEx(0x11Bu, (ULONG_PTR)Irp, (ULONG_PTR)v3, 0LL, 0LL);
    return 1;
  }
  else
  {
    KeReleaseQueuedSpinLock(7uLL, v2);
    return 0;
  }
}
