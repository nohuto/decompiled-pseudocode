/*
 * XREFs of RaUnitHwFirmwareGetInfoIoctl @ 0x1C001EA0C
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0006AF0 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaBuildHwFirmwareGetInfoBufferForMiniport @ 0x1C001EBE4 (RaBuildHwFirmwareGetInfoBufferForMiniport.c)
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1C001ECDC (RaidUnitSendSrbIoControlSynchronously.c)
 *     RaTranslateMiniportFirmwareInfoToHwFirmwareInfo @ 0x1C001F09C (RaTranslateMiniportFirmwareInfoToHwFirmwareInfo.c)
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 */

NTSTATUS __fastcall RaUnitHwFirmwareGetInfoIoctl(_QWORD *a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r15
  _IRP *MasterIrp; // rsi
  __int64 v6; // rbx
  unsigned int Length; // ecx
  __int64 v8; // rdx
  __int64 v9; // rax
  signed int InfoBufferForMiniport; // ebx
  int v11; // eax
  unsigned int v12; // ecx
  int v14; // [rsp+60h] [rbp+8h] BYREF
  PVOID P; // [rsp+68h] [rbp+10h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  P = 0LL;
  v14 = 0;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v6 = a1[13];
  if ( CurrentStackLocation->Parameters.Create.Options < 0x10 )
  {
    InfoBufferForMiniport = -1073741820;
LABEL_26:
    a2->IoStatus.Information = 0LL;
    return RaidCompleteRequestEx(a2, 0, InfoBufferForMiniport);
  }
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( Length < 0x38 )
  {
    InfoBufferForMiniport = -1073741789;
    goto LABEL_26;
  }
  if ( ((__int64)MasterIrp->MdlAddress & 1) == 0 )
  {
    memset_0(MasterIrp, 0, Length);
    LOBYTE(MasterIrp->MdlAddress) |= 1u;
    *(_DWORD *)(&MasterIrp->Size + 1) = 56;
    BYTE1(MasterIrp->ThreadListEntry.Flink) &= ~1u;
    MasterIrp->AssociatedIrp.IrpCount = 32;
    HIDWORD(MasterIrp->AssociatedIrp.SystemBuffer) = 32;
    *(_DWORD *)&MasterIrp->Type = 56;
    *(_DWORD *)((char *)&MasterIrp->MdlAddress + 1) = 16711681;
    MasterIrp->Flags = 4096;
    *(&MasterIrp->Flags + 1) = 0x10000;
    LOBYTE(MasterIrp->ThreadListEntry.Flink) = 0;
    v9 = a1[19];
    if ( v9 )
    {
      *(_OWORD *)&MasterIrp->ThreadListEntry.Blink = *(_OWORD *)(v9 + 90);
    }
    else
    {
      v8 = a1[18];
      if ( v8 && (*(_DWORD *)(*(_QWORD *)(a1[3] + 568LL) + 184LL) & 0x40) != 0 )
        MasterIrp->ThreadListEntry.Blink = *(_LIST_ENTRY **)(v8 + 41);
      else
        LODWORD(MasterIrp->ThreadListEntry.Blink) = *(_DWORD *)(v6 + 32);
    }
    InfoBufferForMiniport = RaBuildHwFirmwareGetInfoBufferForMiniport(a1[1], v8, &P, &v14);
    if ( InfoBufferForMiniport >= 0 && P )
    {
      v11 = RaidUnitSendSrbIoControlSynchronously(
              (_DWORD)a1,
              (_DWORD)a2,
              (_DWORD)P,
              v14,
              (__int64)PortSrbTranslateFirmwareIoctlStatusToNtStatus);
      InfoBufferForMiniport = v11;
      if ( v11 < 0 )
      {
        if ( v11 == -1073741801 )
          goto LABEL_16;
        if ( v11 != -1073741670 )
        {
          InfoBufferForMiniport = 0;
          goto LABEL_13;
        }
      }
      else
      {
        InfoBufferForMiniport = RaTranslateMiniportFirmwareInfoToHwFirmwareInfo(a2, P);
        if ( InfoBufferForMiniport == -1073741801 )
          goto LABEL_16;
      }
      if ( InfoBufferForMiniport != -1073741670 )
      {
LABEL_13:
        v12 = CurrentStackLocation->Parameters.Read.Length;
        if ( v12 >= *(_DWORD *)(&MasterIrp->Size + 1) )
          v12 = *(_DWORD *)(&MasterIrp->Size + 1);
        a2->IoStatus.Information = v12;
      }
    }
    else
    {
      a2->IoStatus.Information = 0LL;
    }
LABEL_16:
    if ( P )
      ExFreePoolWithTag(P, 0x72536152u);
    return RaidCompleteRequestEx(a2, 0, InfoBufferForMiniport);
  }
  ++a2->CurrentLocation;
  a2->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
  return IofCallDriver(*(PDEVICE_OBJECT *)(a1[3] + 8LL), a2);
}
