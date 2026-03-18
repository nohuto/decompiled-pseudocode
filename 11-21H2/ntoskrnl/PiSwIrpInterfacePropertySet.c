/*
 * XREFs of PiSwIrpInterfacePropertySet @ 0x14084F808
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
 *     PiSwDeviceFindInterfaceEntry @ 0x14076302C (PiSwDeviceFindInterfaceEntry.c)
 *     PiSwValidatePropertyArray @ 0x14076E6B4 (PiSwValidatePropertyArray.c)
 *     PiSwPropertySet @ 0x14076E714 (PiSwPropertySet.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
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
  __int64 *InterfaceEntry; // rax
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
  if ( (byte_140C0DD4C & 2) != 0 )
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
  NdrMesTypeDecode3(v16, "TP 3\a", &off_140A380F0, &off_140C02FC0, 4, &P);
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
        InterfaceEntry = PiSwDeviceFindInterfaceEntry(v10, *(const wchar_t **)P);
        v7 = InterfaceEntry
           ? PiSwUpdateArrayProperties(
               InterfaceEntry[3],
               *((_DWORD *)InterfaceEntry + 8),
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
        v7 = PiSwPropertySet(*(_QWORD *)P, 3u, *((_QWORD *)P + 2), *((_DWORD *)P + 2));
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
  if ( (byte_140C0DD4C & 2) != 0 )
    McTemplateK0zzd_EtwWriteTransfer(
      v12,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_SetInterfaceProperty_Stop,
      v13,
      *(const wchar_t **)(FsContext2 + 8),
      *(const wchar_t **)(FsContext2 + 16),
      v7);
  return (unsigned int)v7;
}
