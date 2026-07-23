/*
 * XREFs of WmipSendWmiIrp @ 0x1406C73C8
 * Callers:
 *     WmipQuerySetExecuteSI @ 0x1406C6D6C (WmipQuerySetExecuteSI.c)
 *     WmipQueryAllData @ 0x1406C7AAC (WmipQueryAllData.c)
 *     WmipSendEnableDisableRequest @ 0x1407D6260 (WmipSendEnableDisableRequest.c)
 *     WmipRegisterOrUpdateDS @ 0x14086A204 (WmipRegisterOrUpdateDS.c)
 *     WmipEnableCollectionForNewGuid @ 0x14086AE2C (WmipEnableCollectionForNewGuid.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140883654 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipDereferenceEvent @ 0x1409E0780 (WmipDereferenceEvent.c)
 *     WmipProcessLegacyEtwCallback @ 0x1409E1CB0 (WmipProcessLegacyEtwCallback.c)
 * Callees:
 *     IoAllocateIrp @ 0x14022E720 (IoAllocateIrp.c)
 *     IoFreeIrp @ 0x1402AF4A0 (IoFreeIrp.c)
 *     WmipForwardWmiIrp @ 0x1406C74B0 (WmipForwardWmiIrp.c)
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
