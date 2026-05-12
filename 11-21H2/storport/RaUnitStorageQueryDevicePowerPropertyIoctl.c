/*
 * XREFs of RaUnitStorageQueryDevicePowerPropertyIoctl @ 0x1C0089D80
 * Callers:
 *     RaUnitStorageQueryPropertyIoctl @ 0x1C00847D4 (RaUnitStorageQueryPropertyIoctl.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000C8C8 (RaidUnitCheckAndAcquirePoFx.c)
 *     memset @ 0x1C0024340 (memset.c)
 */

__int64 __fastcall RaUnitStorageQueryDevicePowerPropertyIoctl(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IRP *MasterIrp; // rbx
  unsigned int Length; // ecx
  int v7; // edx
  unsigned int v8; // r8d

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  Length = CurrentStackLocation->Parameters.Read.Length;
  v7 = *(_DWORD *)(&MasterIrp->Size + 1);
  if ( v7 )
  {
    if ( v7 != 1 )
    {
      v8 = -1073741637;
      return RaidCompleteRequestEx(a2, 0, v8);
    }
  }
  else
  {
    if ( Length < 8 )
    {
      a2->IoStatus.Information = 0LL;
      v8 = -1073741789;
      return RaidCompleteRequestEx(a2, 0, v8);
    }
    if ( Length >= 0x14 )
    {
      memset(MasterIrp, 0, CurrentStackLocation->Parameters.Read.Length);
      *(_DWORD *)&MasterIrp->Type = 20;
      *(_DWORD *)(&MasterIrp->Size + 1) = 20;
      LOBYTE(MasterIrp->MdlAddress) = (*(_DWORD *)(a1 + 1824) & 2) != 0;
      BYTE1(MasterIrp->MdlAddress) = (*(_DWORD *)(a1 + 1824) & 4) != 0;
      if ( RaidUnitCheckAndAcquirePoFx(a1) )
      {
        BYTE2(MasterIrp->MdlAddress) = 1;
        BYTE3(MasterIrp->MdlAddress) = (*(_BYTE *)(a1 + 449) & 4) != 0;
        MasterIrp->Flags = *(_DWORD *)(*(_QWORD *)(a1 + 1744) + 20LL);
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736));
      }
      else
      {
        WORD1(MasterIrp->MdlAddress) = 0;
        MasterIrp->Flags = 0;
      }
      BYTE4(MasterIrp->MdlAddress) = (*(_BYTE *)(a1 + 449) & 2) != 0;
      a2->IoStatus.Information = *(unsigned int *)(&MasterIrp->Size + 1);
    }
    else
    {
      *(_DWORD *)&MasterIrp->Type = 20;
      *(_DWORD *)(&MasterIrp->Size + 1) = 20;
      a2->IoStatus.Information = 8LL;
    }
  }
  v8 = 0;
  return RaidCompleteRequestEx(a2, 0, v8);
}
