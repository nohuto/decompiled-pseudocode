/*
 * XREFs of WmipSetTraceNotify @ 0x14086BFC0
 * Callers:
 *     IoWMIRegistrationControl @ 0x14086C0F0 (IoWMIRegistrationControl.c)
 * Callees:
 *     IoAllocateIrp @ 0x14022E720 (IoAllocateIrp.c)
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     IoFreeIrp @ 0x1402AF4A0 (IoFreeIrp.c)
 *     KeReleaseMutex @ 0x1402B0200 (KeReleaseMutex.c)
 *     IoWMIDeviceObjectToProviderId @ 0x1403C2740 (IoWMIDeviceObjectToProviderId.c)
 *     WmipForwardWmiIrp @ 0x1406C74B0 (WmipForwardWmiIrp.c)
 */

void __fastcall WmipSetTraceNotify(PDEVICE_OBJECT DeviceObject, int a2)
{
  __int64 *v3; // rax
  CCHAR v4; // bl
  PIRP Irp; // rax
  IRP *v6; // rbx
  ULONG v7; // eax
  __int64 v8; // [rsp+30h] [rbp-18h] BYREF
  __int64 *v9; // [rsp+38h] [rbp-10h]

  v8 = 0LL;
  LODWORD(v9) = 0;
  switch ( a2 )
  {
    case 0x100000:
      v3 = &EtwpDiskIoNotifyRoutines;
      break;
    case 0x200000:
      v3 = (__int64 *)EtwpTdiIoNotify;
      break;
    case 0x400000:
      LODWORD(v8) = 2;
      v3 = (__int64 *)&EtwpFileIoNotifyRoutines;
      goto LABEL_8;
    case 0x800000:
      v3 = &EtwpSplitIoNotifyRoutines;
      break;
    default:
      goto LABEL_9;
  }
  LODWORD(v8) = 1;
LABEL_8:
  v9 = v3;
LABEL_9:
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v4 = WmipServiceDeviceObject->StackSize + 1;
  KeReleaseMutex(&WmipSMMutex, 0);
  Irp = IoAllocateIrp(v4, 0);
  v6 = Irp;
  if ( Irp )
  {
    --Irp->Tail.Overlay.CurrentStackLocation;
    --Irp->CurrentLocation;
    Irp->Tail.Overlay.CurrentStackLocation->DeviceObject = WmipServiceDeviceObject;
    v7 = IoWMIDeviceObjectToProviderId(DeviceObject);
    WmipForwardWmiIrp(v6, 0xDu, v7, 0LL, 0x10u, (__int64)&v8);
    IoFreeIrp(v6);
  }
}
