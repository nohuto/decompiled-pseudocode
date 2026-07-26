/*
 * XREFs of ?ndisSetPerfTrackParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z @ 0x1C006423C
 * Callers:
 *     ?ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C000F1D0 (-ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 * Callees:
 *     memset @ 0x1C0036340 (memset.c)
 *     ?ndisPcwGetMiniportDataBlock@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012B040 (-ndisPcwGetMiniportDataBlock@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisSetPerfTrackParameters(struct _NDIS_MINIPORT_BLOCK *a1, struct _IRP *a2, int *a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int v5; // ebx
  _IRP *MasterIrp; // rsi
  int MdlAddress; // ecx
  int v9; // ecx
  int v10; // ecx
  struct _NDIS_PCW_DATA_BLOCK *MiniportDataBlock; // r15
  unsigned int v12; // r14d
  unsigned int v13; // esi
  __int64 v14; // r12

  *a3 = -1073741823;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v5 = 0;
  if ( !*((_BYTE *)CurrentStackLocation->FileObject->FsContext + 24) )
    return (unsigned int)-1073741790;
  if ( CurrentStackLocation->Parameters.Create.Options < 0x14 )
    return (unsigned int)-1073741811;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  MdlAddress = (int)MasterIrp->MdlAddress;
  if ( (unsigned int)(MdlAddress - 1) > 2 )
  {
    *a3 = -1073741811;
    return (unsigned int)-1073741811;
  }
  *a3 = 0;
  v9 = MdlAddress - 1;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      if ( v10 == 1 )
      {
        MiniportDataBlock = ndisPcwGetMiniportDataBlock(a1);
        if ( MiniportDataBlock )
        {
          v12 = ndisMaxNumberOfProcessors;
          v13 = 0;
          if ( ndisMaxNumberOfProcessors )
          {
            v14 = ndisPcwOffsetToPerCpuData;
            do
            {
              memset((char *)MiniportDataBlock + v14 + v13 * ndisPcwPerCpuDataStride, 0, 0x130uLL);
              ++v13;
            }
            while ( v13 < v12 );
          }
        }
        a1->NumberOfIndirectionTableChanges = 0LL;
      }
    }
    else
    {
      a1->PcwDatapathEventMask = 0;
      a1->PcwDatapathCycleMask = 0;
    }
  }
  else if ( ndisPcwGetMiniportDataBlock(a1) )
  {
    a1->PcwDatapathEventMask = HIDWORD(MasterIrp->MdlAddress);
    a1->PcwDatapathCycleMask = MasterIrp->Flags;
  }
  a2->IoStatus.Information = 0LL;
  return v5;
}
