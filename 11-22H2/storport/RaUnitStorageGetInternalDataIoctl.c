/*
 * XREFs of RaUnitStorageGetInternalDataIoctl @ 0x1C00A9E70
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0006AF0 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaidIsUnitControlSupported @ 0x1C00046D0 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x1C0017914 (RaCallMiniportUnitControl.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     ExtensionSendStorportData @ 0x1C0041178 (ExtensionSendStorportData.c)
 */

NTSTATUS __fastcall RaUnitStorageGetInternalDataIoctl(__int64 a1, IRP *a2)
{
  _IRP *MasterIrp; // rbx
  unsigned int v3; // r8d
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  int MdlAddress_high; // ecx
  int Flags; // eax
  unsigned int v10; // eax

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v3 = 0;
  if ( !MasterIrp )
    goto LABEL_19;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->Parameters.Create.Options < 0x1C )
  {
    v3 = -1073741820;
    goto LABEL_20;
  }
  if ( *(_DWORD *)&MasterIrp->Type != 28
    || *(_DWORD *)(&MasterIrp->Size + 1) != 28
    || (MdlAddress_high = HIDWORD(MasterIrp->MdlAddress)) == 0
    || MdlAddress_high >= 3
    || (Flags = MasterIrp->Flags, Flags >= 0) && Flags != 1 )
  {
LABEL_19:
    v3 = -1073741811;
    goto LABEL_20;
  }
  if ( ((__int64)MasterIrp->MdlAddress & 1) != 0 )
  {
    ++a2->CurrentLocation;
    a2->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
    return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), a2);
  }
  if ( MdlAddress_high == 1 )
  {
    v10 = ExtensionSendStorportData((__int64)MasterIrp, 1LL);
  }
  else
  {
    if ( MdlAddress_high != 2 )
      goto LABEL_20;
    if ( !RaidIsUnitControlSupported(a1, 14) )
    {
      v3 = -1073741637;
      goto LABEL_20;
    }
    v10 = RaCallMiniportUnitControl(*(_QWORD *)(a1 + 24) + 336LL);
  }
  v3 = v10;
LABEL_20:
  a2->IoStatus.Information = 0LL;
  return RaidCompleteRequestEx(a2, 0, v3);
}
