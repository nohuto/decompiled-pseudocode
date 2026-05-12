/*
 * XREFs of RaUnitStorageQueryDeviceSelfEncryptionPropertyIoctl @ 0x1C00538B0
 * Callers:
 *     RaUnitStorageQueryPropertyIoctl @ 0x1C00847D4 (RaUnitStorageQueryPropertyIoctl.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     memset @ 0x1C0024340 (memset.c)
 */

__int64 __fastcall RaUnitStorageQueryDeviceSelfEncryptionPropertyIoctl(__int64 a1, IRP *a2)
{
  _IRP *MasterIrp; // rsi
  unsigned int v3; // ebx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v6; // ecx
  unsigned int Length; // edx

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v3 = 0;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v6 = *(_DWORD *)(&MasterIrp->Size + 1);
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( v6 )
  {
    if ( v6 != 1 )
    {
      v3 = -1073741637;
LABEL_8:
      a2->IoStatus.Information = 0LL;
    }
  }
  else
  {
    if ( Length >= 0xC )
    {
      memset(MasterIrp, 0, CurrentStackLocation->Parameters.Read.Length);
      *(_DWORD *)&MasterIrp->Type = 12;
      *(_DWORD *)(&MasterIrp->Size + 1) = 12;
      LOBYTE(MasterIrp->MdlAddress) = 0;
      a2->IoStatus.Information = 12LL;
      return RaidCompleteRequestEx(a2, 0, v3);
    }
    if ( Length < 8 )
    {
      v3 = -1073741789;
      goto LABEL_8;
    }
    *(_DWORD *)&MasterIrp->Type = 12;
    *(_DWORD *)(&MasterIrp->Size + 1) = 12;
    a2->IoStatus.Information = 8LL;
  }
  return RaidCompleteRequestEx(a2, 0, v3);
}
