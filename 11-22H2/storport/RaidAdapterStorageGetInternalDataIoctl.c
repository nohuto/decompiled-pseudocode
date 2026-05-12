/*
 * XREFs of RaidAdapterStorageGetInternalDataIoctl @ 0x1C00A72DC
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C0007240 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaidIsAdapterControlSupported @ 0x1C00075D8 (RaidIsAdapterControlSupported.c)
 *     RaCallMiniportAdapterControl @ 0x1C00196B0 (RaCallMiniportAdapterControl.c)
 *     ExtensionSendStorportData @ 0x1C0041178 (ExtensionSendStorportData.c)
 */

__int64 __fastcall RaidAdapterStorageGetInternalDataIoctl(__int64 a1, IRP *a2)
{
  _IRP *MasterIrp; // rbx
  unsigned int v3; // r8d
  int MdlAddress_high; // eax
  int Flags; // ecx
  unsigned int v8; // eax

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v3 = 0;
  if ( !MasterIrp )
    goto LABEL_17;
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options < 0x1C )
  {
    v3 = -1073741820;
    goto LABEL_18;
  }
  if ( *(_DWORD *)&MasterIrp->Type != 28
    || *(_DWORD *)(&MasterIrp->Size + 1) != 28
    || (MdlAddress_high = HIDWORD(MasterIrp->MdlAddress)) == 0
    || MdlAddress_high >= 3
    || (Flags = MasterIrp->Flags, Flags >= 0) && Flags != 1 )
  {
LABEL_17:
    v3 = -1073741811;
    goto LABEL_18;
  }
  if ( MdlAddress_high == 1 )
  {
    v8 = ExtensionSendStorportData((__int64)MasterIrp, 2LL);
  }
  else
  {
    if ( MdlAddress_high != 2 )
      goto LABEL_18;
    if ( !(unsigned int)RaidIsAdapterControlSupported(a1, 21) )
    {
      v3 = -1073741637;
      goto LABEL_18;
    }
    v8 = RaCallMiniportAdapterControl(a1 + 336);
  }
  v3 = v8;
LABEL_18:
  a2->IoStatus.Information = 0LL;
  return RaidCompleteRequestEx(a2, 0, v3);
}
