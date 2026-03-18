/*
 * XREFs of WmipSendWmiIrp @ 0x1407839B4
 * Callers:
 *     WmipSendEnableDisableRequest @ 0x1406D8994 (WmipSendEnableDisableRequest.c)
 *     WmipEnableCollectionForNewGuid @ 0x14075DA88 (WmipEnableCollectionForNewGuid.c)
 *     WmipRegisterOrUpdateDS @ 0x14075EE80 (WmipRegisterOrUpdateDS.c)
 *     WmipQuerySetExecuteSI @ 0x14078362C (WmipQuerySetExecuteSI.c)
 *     WmipQueryAllData @ 0x14078CD70 (WmipQueryAllData.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x14080EEFC (WmipDisableCollectionForRemovedGuid.c)
 *     WmipDereferenceEvent @ 0x1409DCFD4 (WmipDereferenceEvent.c)
 *     WmipProcessLegacyEtwCallback @ 0x1409DE380 (WmipProcessLegacyEtwCallback.c)
 * Callees:
 *     IoAllocateIrp @ 0x1402AAB20 (IoAllocateIrp.c)
 *     IoFreeIrp @ 0x140348610 (IoFreeIrp.c)
 *     WmipForwardWmiIrp @ 0x140783A9C (WmipForwardWmiIrp.c)
 */

__int64 __fastcall WmipSendWmiIrp(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, _OWORD *a6)
{
  PIRP Irp; // rax
  PIRP v8; // rbx
  unsigned int v9; // edi

  while ( 1 )
  {
    Irp = IoAllocateIrp(WmipServiceDeviceObject->StackSize + 1, 0);
    v8 = Irp;
    if ( !Irp )
      break;
    --Irp->Tail.Overlay.CurrentStackLocation;
    --Irp->CurrentLocation;
    Irp->Tail.Overlay.CurrentStackLocation->DeviceObject = WmipServiceDeviceObject;
    Irp->Tail.Overlay.Thread = KeGetCurrentThread();
    Irp->AssociatedIrp.MasterIrp = (struct _IRP *)a5;
    v9 = WmipForwardWmiIrp(Irp, a4, a5);
    *a6 = *(_OWORD *)&v8->IoStatus.Status;
    IoFreeIrp(v8);
    if ( v9 != -1073741160 )
      return v9;
  }
  return 3221225626LL;
}
