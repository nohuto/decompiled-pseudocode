/*
 * XREFs of StorUnitQueryBypassIOProperty @ 0x1C006368C
 * Callers:
 *     RaUnitStorageInternalQueryPropertyIoctl @ 0x1C00AA010 (RaUnitStorageInternalQueryPropertyIoctl.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     memset_0 @ 0x1C0023980 (memset_0.c)
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
      memset_0(MasterIrp, 0, Length);
      *(_DWORD *)&MasterIrp->Type = 40;
      *(_DWORD *)(&MasterIrp->Size + 1) = 40;
      if ( (unsigned int)Length >= 0x28 )
      {
        if ( (*(_DWORD *)(a1 + 1872) & 0x40) != 0 )
        {
          v9 = 0;
          MasterIrp->MdlAddress = *(_MDL **)(a1 + 8);
          v3 = 40LL;
          *a3 = 1;
          *(_QWORD *)&MasterIrp->Flags = StorUnitDereferenceDeviceObject;
          MasterIrp->AssociatedIrp.MasterIrp = (_IRP *)&StorUnitStartBypassIo;
        }
        else
        {
          v9 = -1073741637;
        }
      }
      else
      {
        v9 = 0;
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
