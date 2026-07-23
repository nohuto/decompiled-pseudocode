/*
 * XREFs of PiSwIrpInterfacePropertySet @ 0x14081B3F4
 * Callers:
 *     PiSwDispatch @ 0x14079C810 (PiSwDispatch.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402391B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     IofCompleteRequest @ 0x1402C9C10 (IofCompleteRequest.c)
 *     McTemplateK0zz_EtwWriteTransfer @ 0x140563E94 (McTemplateK0zz_EtwWriteTransfer.c)
 *     McTemplateK0zzd_EtwWriteTransfer @ 0x140563F64 (McTemplateK0zzd_EtwWriteTransfer.c)
 *     PiSwValidatePropertyArray @ 0x14079CAE8 (PiSwValidatePropertyArray.c)
 *     PiSwUpdateArrayProperties @ 0x14079CB48 (PiSwUpdateArrayProperties.c)
 *     PiSwPropertySet @ 0x14079CC50 (PiSwPropertySet.c)
 *     PiSwDeviceOperationsAllowed @ 0x14079CD68 (PiSwDeviceOperationsAllowed.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x14081B5D8 (PiSwDeviceFindInterfaceEntry.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiSwIrpInterfacePropertySet(PIRP Irp, __int64 a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  __int64 FsContext2; // rdi
  struct _IRP *MasterIrp; // rcx
  int v7; // ebx
  unsigned int v8; // edx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rcx
  __int64 InterfaceEntry; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  PVOID P; // [rsp+58h] [rbp+10h] BYREF
  __int64 v16; // [rsp+60h] [rbp+18h] BYREF
  __int64 v17; // [rsp+68h] [rbp+20h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  FsContext2 = (__int64)CurrentStackLocation->FileObject->FsContext2;
  v17 = FsContext2;
  v16 = 0LL;
  P = 0LL;
  if ( (byte_140C0E20C & 8) != 0 )
    McTemplateK0zz_EtwWriteTransfer(
      (__int64)Irp,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_SetInterfaceProperty_Start,
      a3,
      *(const wchar_t **)(FsContext2 + 8),
      *(const wchar_t **)(FsContext2 + 16));
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  if ( !MasterIrp )
    goto LABEL_24;
  v7 = MesDecodeBufferHandleCreate(MasterIrp, CurrentStackLocation->Parameters.Create.Options, &v16);
  if ( v7 < 0 )
    goto LABEL_15;
  NdrMesTypeDecode3(v16, "TP 3\a", &off_140A780E8, &off_140C02F50, 4, &P);
  if ( P && *(_QWORD *)P && *((_QWORD *)P + 2) && (v8 = *((_DWORD *)P + 2)) != 0 )
  {
    v7 = PiSwValidatePropertyArray(*((_QWORD *)P + 2), v8);
    if ( v7 >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
      if ( PiSwDeviceOperationsAllowed(FsContext2) )
      {
        InterfaceEntry = PiSwDeviceFindInterfaceEntry(v10, *(_QWORD *)P);
        v7 = InterfaceEntry
           ? PiSwUpdateArrayProperties(
               *(_QWORD *)(InterfaceEntry + 24),
               *(_DWORD *)(InterfaceEntry + 32),
               *((_QWORD *)P + 2),
               *((_DWORD *)P + 2))
           : -1073741275;
      }
      else
      {
        v7 = -1073741637;
      }
      ExReleaseResourceLite(&PiSwLockObj);
      KeLeaveCriticalRegion();
      if ( v7 >= 0 )
        v7 = PiSwPropertySet(*(const WCHAR **)P, 3u, *((_QWORD *)P + 2), *((_DWORD *)P + 2));
    }
  }
  else
  {
LABEL_24:
    v7 = -1073741811;
  }
LABEL_15:
  if ( P )
    ExFreePoolWithTag(P, 0x6370726Bu);
  if ( v16 )
    MesHandleFree();
  Irp->IoStatus.Status = v7;
  IofCompleteRequest(Irp, 0);
  if ( (byte_140C0E20C & 8) != 0 )
    McTemplateK0zzd_EtwWriteTransfer(
      v12,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_SetInterfaceProperty_Stop,
      v13,
      *(const wchar_t **)(FsContext2 + 8),
      *(const wchar_t **)(FsContext2 + 16),
      v7);
  return (unsigned int)v7;
}
