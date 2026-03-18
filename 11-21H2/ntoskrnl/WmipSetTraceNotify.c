/*
 * XREFs of WmipSetTraceNotify @ 0x140810B00
 * Callers:
 *     IoWMIRegistrationControl @ 0x1406C8220 (IoWMIRegistrationControl.c)
 * Callees:
 *     IoWMIDeviceObjectToProviderId @ 0x1402487F0 (IoWMIDeviceObjectToProviderId.c)
 *     IoAllocateIrp @ 0x1402AAB20 (IoAllocateIrp.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     IoFreeIrp @ 0x140348610 (IoFreeIrp.c)
 *     WmipForwardWmiIrp @ 0x140783A9C (WmipForwardWmiIrp.c)
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
LABEL_3:
      LODWORD(v8) = 1;
LABEL_4:
      v9 = v3;
      break;
    case 0x200000:
      v3 = (__int64 *)EtwpTdiIoNotify;
      goto LABEL_3;
    case 0x400000:
      LODWORD(v8) = 2;
      v3 = (__int64 *)&EtwpFileIoNotifyRoutines;
      goto LABEL_4;
    case 0x800000:
      v3 = &EtwpSplitIoNotifyRoutines;
      goto LABEL_3;
  }
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
