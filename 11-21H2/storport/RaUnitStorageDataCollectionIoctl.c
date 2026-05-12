/*
 * XREFs of RaUnitStorageDataCollectionIoctl @ 0x1C008F190
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C000B054 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     StorpTelemetrySendUnitIoSizeDistributionData @ 0x1C00635DC (StorpTelemetrySendUnitIoSizeDistributionData.c)
 *     StorpInitializePerUnitIoSizeDistribution @ 0x1C0090064 (StorpInitializePerUnitIoSizeDistribution.c)
 */

__int64 __fastcall RaUnitStorageDataCollectionIoctl(__int64 a1, IRP *a2)
{
  _IRP *MasterIrp; // r8
  unsigned int v3; // ebx
  unsigned int Options; // edx
  int MdlAddress_high; // r9d
  unsigned int v7; // eax
  int MdlAddress; // edx
  char v9; // al

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v3 = 0;
  if ( !MasterIrp )
    goto LABEL_20;
  Options = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options;
  if ( Options < 0x14 || *(_DWORD *)&MasterIrp->Type != 20 )
    goto LABEL_20;
  MdlAddress_high = HIDWORD(MasterIrp->MdlAddress);
  v7 = MdlAddress_high + 16;
  if ( (unsigned int)(MdlAddress_high + 16) < 0x14 )
    v7 = 20;
  if ( *(_DWORD *)(&MasterIrp->Size + 1) == v7
    && Options >= v7
    && (MdlAddress = (int)MasterIrp->MdlAddress, (unsigned int)(MdlAddress - 1) <= 2)
    && !MdlAddress_high )
  {
    if ( g_StorpTraceLoggingIoSizeDistributionEnabled )
    {
      v3 = -1073741637;
    }
    else
    {
      switch ( MdlAddress )
      {
        case 1:
          if ( (*(_BYTE *)(a1 + 451) & 0x10) == 0 )
            v3 = StorpInitializePerUnitIoSizeDistribution(a1);
          break;
        case 2:
          v9 = *(_BYTE *)(a1 + 451);
          if ( (v9 & 0x10) != 0 )
            *(_BYTE *)(a1 + 451) = v9 & 0xEF;
          break;
        case 3:
          StorpTelemetrySendUnitIoSizeDistributionData(a1);
          break;
      }
    }
  }
  else
  {
LABEL_20:
    v3 = -1073741811;
  }
  a2->IoStatus.Information = 0LL;
  return RaidCompleteRequestEx(a2, 0, v3);
}
