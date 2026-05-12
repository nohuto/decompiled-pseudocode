/*
 * XREFs of RaUnitStorageQueryDeviceNumaPropertyIoctl @ 0x1C0014D6C
 * Callers:
 *     RaUnitStorageQueryPropertyIoctl @ 0x1C00847D4 (RaUnitStorageQueryPropertyIoctl.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     memset @ 0x1C0024340 (memset.c)
 */

__int64 __fastcall RaUnitStorageQueryDeviceNumaPropertyIoctl(__int64 a1, IRP *a2)
{
  _IRP *MasterIrp; // rsi
  unsigned int v3; // ebx
  int v6; // r8d
  unsigned int Length; // edx

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v3 = 0;
  v6 = *(_DWORD *)(&MasterIrp->Size + 1);
  Length = a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  if ( v6 )
  {
    if ( v6 == 1 )
      return RaidCompleteRequestEx(a2, 0, v3);
    v3 = -1073741637;
LABEL_10:
    a2->IoStatus.Information = 0LL;
    return RaidCompleteRequestEx(a2, 0, v3);
  }
  if ( Length < 0xC )
  {
    if ( Length >= 8 )
    {
      *(_DWORD *)&MasterIrp->Type = 12;
      *(_DWORD *)(&MasterIrp->Size + 1) = 12;
      a2->IoStatus.Information = 8LL;
      return RaidCompleteRequestEx(a2, 0, v3);
    }
    v3 = -1073741789;
    goto LABEL_10;
  }
  memset(MasterIrp, 0, Length);
  *(_DWORD *)&MasterIrp->Type = 12;
  *(_DWORD *)(&MasterIrp->Size + 1) = 12;
  LODWORD(MasterIrp->MdlAddress) = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4528LL);
  a2->IoStatus.Information = 12LL;
  return RaidCompleteRequestEx(a2, 0, v3);
}
