/*
 * XREFs of RaUnitProtocolCommandIoctl @ 0x1C005E1A4
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0006AF0 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaGetProtocolCommandEffects @ 0x1C0033EC4 (RaGetProtocolCommandEffects.c)
 *     RaValidateProtocolCommandIoctl @ 0x1C00578A4 (RaValidateProtocolCommandIoctl.c)
 *     RaidUnitSendSrbProtocolCommandSynchronously @ 0x1C00628FC (RaidUnitSendSrbProtocolCommandSynchronously.c)
 */

NTSTATUS __fastcall RaUnitProtocolCommandIoctl(__int64 a1, IRP *a2)
{
  __int64 CurrentStackLocation; // rcx
  IRP *v4; // rbx
  signed int ProtocolCommandEffects; // eax
  __int64 v7; // r8
  char v8; // [rsp+38h] [rbp+10h] BYREF
  char v9; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0;
  CurrentStackLocation = (__int64)a2->Tail.Overlay.CurrentStackLocation;
  v4 = a2;
  v9 = 0;
  if ( *(_DWORD *)(CurrentStackLocation + 16) < 0x10u )
  {
    ProtocolCommandEffects = -1073741820;
LABEL_11:
    v4->IoStatus.Information = 0LL;
    return RaidCompleteRequestEx(v4, 0, ProtocolCommandEffects);
  }
  if ( SHIDWORD(a2->AssociatedIrp.MasterIrp->MdlAddress) < 0 )
  {
    ++a2->CurrentLocation;
    a2->Tail.Overlay.CurrentStackLocation = (_IO_STACK_LOCATION *)(CurrentStackLocation + 72);
    return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), a2);
  }
  ProtocolCommandEffects = RaValidateProtocolCommandIoctl(CurrentStackLocation, (__int64)a2);
  if ( ProtocolCommandEffects < 0 )
    goto LABEL_11;
  ProtocolCommandEffects = RaGetProtocolCommandEffects(*(_QWORD *)(a1 + 8), v4, &v8, &v9);
  if ( ProtocolCommandEffects < 0 )
    goto LABEL_11;
  a2 = v4;
  if ( v8 )
  {
    ++v4->CurrentLocation;
    ++v4->Tail.Overlay.CurrentStackLocation;
    return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), a2);
  }
  LOBYTE(v7) = v9;
  ProtocolCommandEffects = RaidUnitSendSrbProtocolCommandSynchronously(a1, v4, v7);
  if ( ProtocolCommandEffects < 0 )
    goto LABEL_11;
  return RaidCompleteRequestEx(v4, 0, ProtocolCommandEffects);
}
