/*
 * XREFs of ?PmPowerCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C000EC60
 * Callers:
 *     <none>
 * Callees:
 *     PmWakeupNotificationWorkItem @ 0x1C000353C (PmWakeupNotificationWorkItem.c)
 */

__int64 __fastcall PmPowerCompletion(PDEVICE_OBJECT DeviceObject, PIRP Irp, void *a3)
{
  char *DeviceExtension; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  KIRQL v7; // al
  KIRQL v8; // r15

  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( Irp->PendingReturned )
    CurrentStackLocation->Control |= 1u;
  if ( Irp->IoStatus.Status >= 0 )
  {
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)DeviceExtension + 14);
    *((_DWORD *)DeviceExtension + 152) = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    v8 = v7;
    if ( PoSetPowerState(DeviceObject, DevicePowerState, CurrentStackLocation->Parameters.Power.State).SystemState != *((_DWORD *)DeviceExtension + 152) )
    {
      *((_DWORD *)DeviceExtension + 128) |= 0x80u;
      PmWakeupNotificationWorkItem((__int64)DeviceExtension);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)DeviceExtension + 14, v8);
  }
  PoStartNextPowerIrp(Irp);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 120), 0LL, 0x20u);
  return 0LL;
}
