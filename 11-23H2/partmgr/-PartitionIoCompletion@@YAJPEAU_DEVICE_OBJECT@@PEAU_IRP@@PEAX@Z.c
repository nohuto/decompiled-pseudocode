/*
 * XREFs of ?PartitionIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0001F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PartitionIoCompletion(struct _DEVICE_OBJECT *a1, struct _IRP *a2, void *a3)
{
  PVOID DeviceExtension; // rcx

  DeviceExtension = a1->DeviceExtension;
  if ( a2->PendingReturned )
    a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  if ( a2->IoStatus.Status < 0 && (*((_DWORD *)DeviceExtension + 10) & 0x80u) != 0 )
  {
    a2->IoStatus.Status = -1073741810;
    a2->IoStatus.Information = 0LL;
  }
  ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)DeviceExtension + 50));
  return 0LL;
}
