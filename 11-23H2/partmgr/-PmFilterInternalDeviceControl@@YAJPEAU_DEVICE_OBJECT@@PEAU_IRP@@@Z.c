/*
 * XREFs of ?PmFilterInternalDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C000E940
 * Callers:
 *     <none>
 * Callees:
 *     PmInternalIoctlQueryPartitions @ 0x1C000E568 (PmInternalIoctlQueryPartitions.c)
 */

__int64 __fastcall PmFilterInternalDeviceControl(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  char *DeviceExtension; // r14
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  int v6; // eax
  unsigned int v7; // edi
  NTSTATUS Partitions; // eax

  DeviceExtension = (char *)a1->DeviceExtension;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  a2->IoStatus.Information = 0LL;
  v6 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 120), a2, File, 1u, 0x20u);
  v7 = v6;
  if ( v6 >= 0 )
  {
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 7356816 )
    {
      Partitions = PmInternalIoctlQueryPartitions((__int64)a1, a2);
      a2->IoStatus.Status = Partitions;
      v7 = Partitions;
      IofCompleteRequest(a2, 0);
    }
    else
    {
      ++a2->CurrentLocation;
      ++a2->Tail.Overlay.CurrentStackLocation;
      v7 = IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 2), a2);
    }
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 120), a2, 0x20u);
  }
  else
  {
    a2->IoStatus.Status = v6;
    IofCompleteRequest(a2, 0);
  }
  return v7;
}
