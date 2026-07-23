/*
 * XREFs of sub_140810B00 @ 0x140810B00
 * Callers:
 *     IoWMIRegistrationControl @ 0x1406C8220 (IoWMIRegistrationControl.c)
 * Callees:
 *     IoWMIDeviceObjectToProviderId @ 0x1402487F0 (IoWMIDeviceObjectToProviderId.c)
 *     IoAllocateIrp @ 0x1402AAB20 (IoAllocateIrp.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     IoFreeIrp @ 0x140348610 (IoFreeIrp.c)
 *     sub_140783A9C @ 0x140783A9C (sub_140783A9C.c)
 */

void __fastcall sub_140810B00(PDEVICE_OBJECT DeviceObject, int a2)
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
      v3 = &qword_140C4EF30;
LABEL_3:
      LODWORD(v8) = 1;
LABEL_4:
      v9 = v3;
      break;
    case 0x200000:
      v3 = (__int64 *)qword_140D01498;
      goto LABEL_3;
    case 0x400000:
      LODWORD(v8) = 2;
      v3 = (__int64 *)&off_140C00300;
      goto LABEL_4;
    case 0x800000:
      v3 = &qword_140CF7088;
      goto LABEL_3;
  }
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  v4 = qword_140C164D8->StackSize + 1;
  KeReleaseMutex(&Object, 0);
  Irp = IoAllocateIrp(v4, 0);
  v6 = Irp;
  if ( Irp )
  {
    --Irp->Tail.Overlay.CurrentStackLocation;
    --Irp->CurrentLocation;
    Irp->Tail.Overlay.CurrentStackLocation->DeviceObject = qword_140C164D8;
    v7 = IoWMIDeviceObjectToProviderId(DeviceObject);
    sub_140783A9C(v6, 0xDu, v7, 0LL, 16, (__int64)&v8);
    IoFreeIrp(v6);
  }
}
