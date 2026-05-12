/*
 * XREFs of ?PartitionChildIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C000E810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PartitionChildIoCompletion(struct _DEVICE_OBJECT *a1, struct _IRP *a2, volatile signed __int32 *a3)
{
  if ( a2->PendingReturned )
    a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  _InterlockedExchangeAdd(a3 + 14, a2->IoStatus.Information);
  IoSetMasterIrpStatus(a3, (unsigned int)a2->IoStatus.Status);
  if ( _InterlockedExchangeAdd(a3 + 30, 0xFFFFFFFF) == 1 )
    IofCompleteRequest((PIRP)a3, 1);
  IoFreeMdl(a2->MdlAddress);
  IoFreeIrp(a2);
  return 3221225494LL;
}
