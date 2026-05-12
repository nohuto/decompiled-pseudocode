/*
 * XREFs of StorUnitQueryBypassIOProperty @ 0x1C00568BC
 * Callers:
 *     RaUnitStorageInternalQueryPropertyIoctl @ 0x1C008F6D0 (RaUnitStorageInternalQueryPropertyIoctl.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     memset @ 0x1C0024340 (memset.c)
 */

__int64 __fastcall StorUnitQueryBypassIOProperty(__int64 a1, IRP *a2, _BYTE *a3)
{
  __int64 v3; // rbx
  _IRP *MasterIrp; // rsi
  size_t Length; // rbp
  unsigned int v9; // r8d

  v3 = 0LL;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  Length = a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  if ( a3 )
  {
    *a3 = 0;
    if ( a2->RequestorMode )
    {
      v9 = -1073741790;
    }
    else if ( (unsigned int)Length >= 8 )
    {
      memset(MasterIrp, 0, Length);
      v9 = 0;
      *(_DWORD *)&MasterIrp->Type = 40;
      *(_DWORD *)(&MasterIrp->Size + 1) = 40;
      if ( (unsigned int)Length >= 0x28 )
      {
        v3 = 40LL;
        MasterIrp->MdlAddress = *(_MDL **)(a1 + 8);
        *(_QWORD *)&MasterIrp->Flags = StorUnitDereferenceDeviceObject;
        MasterIrp->AssociatedIrp.MasterIrp = (_IRP *)&StorUnitStartBypassIo;
        *a3 = 1;
      }
      else
      {
        v3 = 8LL;
      }
    }
    else
    {
      v9 = -1073741789;
    }
  }
  else
  {
    v9 = -1073741811;
  }
  a2->IoStatus.Information = v3;
  return RaidCompleteRequestEx(a2, 0, v9);
}
