/*
 * XREFs of PiSwIrpPropertySet @ 0x140762C04
 * Callers:
 *     PiSwDispatch @ 0x140764DB0 (PiSwDispatch.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     McTemplateK0zz_EtwWriteTransfer @ 0x14056370C (McTemplateK0zz_EtwWriteTransfer.c)
 *     McTemplateK0zzd_EtwWriteTransfer @ 0x1405637DC (McTemplateK0zzd_EtwWriteTransfer.c)
 *     PiSwUpdateArrayProperties @ 0x140762E04 (PiSwUpdateArrayProperties.c)
 *     PiSwDeviceOperationsAllowed @ 0x140763000 (PiSwDeviceOperationsAllowed.c)
 *     PiSwValidatePropertyArray @ 0x14076E6B4 (PiSwValidatePropertyArray.c)
 *     PiSwPropertySet @ 0x14076E714 (PiSwPropertySet.c)
 *     PnpAllocatePWSTR @ 0x14077DE70 (PnpAllocatePWSTR.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiSwIrpPropertySet(PIRP Irp, __int64 a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  const wchar_t **FsContext2; // rdi
  struct _IRP *MasterIrp; // rcx
  int PWSTR; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  PVOID v12; // [rsp+68h] [rbp+10h] BYREF
  PVOID P; // [rsp+70h] [rbp+18h]
  __int64 v14; // [rsp+78h] [rbp+20h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  FsContext2 = (const wchar_t **)CurrentStackLocation->FileObject->FsContext2;
  v14 = 0LL;
  v12 = 0LL;
  P = 0LL;
  if ( (byte_140C0DD4C & 2) != 0 )
    McTemplateK0zz_EtwWriteTransfer(
      (__int64)Irp,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_SetDeviceProperty_Start,
      a3,
      FsContext2[1],
      FsContext2[2]);
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  if ( !MasterIrp )
    goto LABEL_24;
  PWSTR = MesDecodeBufferHandleCreate(MasterIrp, CurrentStackLocation->Parameters.Create.Options, &v14);
  if ( PWSTR < 0 )
    goto LABEL_14;
  NdrMesTypeDecode3(v14, "TP 3\a", &off_140A380F0, &off_140C02FC0, 1, &v12, FsContext2);
  if ( v12 && *((_QWORD *)v12 + 1) && *(_DWORD *)v12 )
  {
    PWSTR = PiSwValidatePropertyArray(*((_QWORD *)v12 + 1));
    if ( PWSTR >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
      if ( (unsigned __int8)PiSwDeviceOperationsAllowed(FsContext2) )
      {
        PWSTR = PnpAllocatePWSTR(FsContext2[10]);
        if ( PWSTR >= 0 )
          PWSTR = PiSwUpdateArrayProperties(
                    FsContext2[21],
                    *((unsigned int *)FsContext2 + 44),
                    *((_QWORD *)v12 + 1),
                    *(unsigned int *)v12);
      }
      else
      {
        PWSTR = -1073741637;
      }
      ExReleaseResourceLite(&PiSwLockObj);
      KeLeaveCriticalRegion();
      if ( PWSTR >= 0 )
        PWSTR = PiSwPropertySet(P, 1LL, *((_QWORD *)v12 + 1), *(unsigned int *)v12);
    }
  }
  else
  {
LABEL_24:
    PWSTR = -1073741811;
  }
LABEL_14:
  if ( P )
    ExFreePoolWithTag(P, 0x57706E50u);
  if ( v12 )
    ExFreePoolWithTag(v12, 0x6370726Bu);
  if ( v14 )
    MesHandleFree();
  Irp->IoStatus.Status = PWSTR;
  IofCompleteRequest(Irp, 0);
  if ( (byte_140C0DD4C & 2) != 0 )
    McTemplateK0zzd_EtwWriteTransfer(
      v9,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_SetDeviceProperty_Stop,
      v10,
      FsContext2[1],
      FsContext2[2],
      PWSTR);
  return (unsigned int)PWSTR;
}
