/*
 * XREFs of PmIoctlQueryProperty @ 0x1C001C8F4
 * Callers:
 *     ?PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00038D0 (-PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x1C00070A0 (RtlStringCbCopyW.c)
 *     memset @ 0x1C000BA40 (memset.c)
 */

__int64 __fastcall PmIoctlQueryProperty(__int64 a1, IRP *a2)
{
  __int64 v2; // r14
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int v5; // ebx
  struct _IRP *MasterIrp; // rdi
  int v8; // ecx
  unsigned int Length; // ebp
  int v10; // ecx
  int v11; // r11d
  ULONG_PTR v12; // rax

  v2 = *(_QWORD *)(a1 + 64);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v5 = 0;
  if ( CurrentStackLocation->Parameters.Create.Options < 0xC )
  {
    v5 = -1073741820;
LABEL_16:
    a2->IoStatus.Status = v5;
    IofCompleteRequest(a2, 0);
    return v5;
  }
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  if ( *(_DWORD *)&MasterIrp->Type == 58 && *(_DWORD *)(*(_QWORD *)(v2 + 232) + 28LL) != 18 )
  {
    v8 = *(_DWORD *)(&MasterIrp->Size + 1);
    if ( v8 )
    {
      if ( v8 != 1 )
        v5 = -1073741822;
    }
    else
    {
      Length = CurrentStackLocation->Parameters.Read.Length;
      if ( Length < 8 )
      {
        v5 = -1073741789;
      }
      else
      {
        memset(a2->AssociatedIrp.MasterIrp, 0, Length);
        v10 = 36;
        *(_QWORD *)&MasterIrp->Type = 36LL;
        if ( Length >= 0x24 )
        {
          *(_OWORD *)&MasterIrp->MdlAddress = *(_OWORD *)(v2 + 408);
          MasterIrp->AssociatedIrp.MasterIrp = *(struct _IRP **)(v2 + 424);
        }
        *(_DWORD *)(&MasterIrp->Size + 1) = 36;
        v11 = *(unsigned __int16 *)(v2 + 450);
        if ( *(_WORD *)(v2 + 450) && v11 + 36 <= Length )
        {
          RtlStringCbCopyW(
            (NTSTRSAFE_PWSTR)&MasterIrp->ThreadListEntry.Flink + 2,
            Length - 36,
            *(NTSTRSAFE_PCWSTR *)(v2 + 456));
          v10 = *(_DWORD *)(&MasterIrp->Size + 1);
          LODWORD(MasterIrp->ThreadListEntry.Flink) = v10;
        }
        v12 = (unsigned int)(v10 + v11);
        *(_DWORD *)(&MasterIrp->Size + 1) = v12;
        if ( (unsigned int)v12 >= Length )
          v12 = Length;
        a2->IoStatus.Information = v12;
      }
    }
    goto LABEL_16;
  }
  ++a2->CurrentLocation;
  a2->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
  return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(v2 + 16), a2);
}
