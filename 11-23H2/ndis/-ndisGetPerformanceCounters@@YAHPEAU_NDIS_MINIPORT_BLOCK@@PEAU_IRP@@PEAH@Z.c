/*
 * XREFs of ?ndisGetPerformanceCounters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z @ 0x1C00689FC
 * Callers:
 *     ?ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C000EA30 (-ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 * Callees:
 *     ?ndisPcwGetMiniportDataBlock@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0136CE8 (-ndisPcwGetMiniportDataBlock@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisGetPerformanceCounters(struct _NDIS_MINIPORT_BLOCK *a1, struct _IRP *a2, int *a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r10
  unsigned int v4; // ebx
  _IO_STATUS_BLOCK *p_IoStatus; // r14
  unsigned __int64 Length; // rcx
  unsigned int v9; // esi
  _IRP::<unnamed_type_AssociatedIrp> v10; // rdi
  unsigned int v11; // edx
  unsigned int v12; // r8d
  struct _NDIS_PCW_DATA_BLOCK *MiniportDataBlock; // rax
  struct _NDIS_PCW_DATA_BLOCK *v14; // r10
  unsigned int v15; // r9d
  __int64 v16; // r11
  __int64 v17; // rax
  _IO_STATUS_BLOCK *v18; // r8
  _IO_STATUS_BLOCK *v19; // rcx
  _IO_STATUS_BLOCK v20; // xmm0

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = 0;
  *a3 = -1073741823;
  p_IoStatus = 0LL;
  if ( !*((_BYTE *)CurrentStackLocation->FileObject->FsContext + 24) )
    return (unsigned int)-1073741790;
  Length = CurrentStackLocation->Parameters.Read.Length;
  v9 = 48;
  v10.MasterIrp = (_IRP *)a2->AssociatedIrp;
  if ( (unsigned int)Length < 0x30 )
    return (unsigned int)-1073741811;
  v11 = ndisMaxNumberOfProcessors;
  *(_OWORD *)&v10.MasterIrp->Type = 0LL;
  *a3 = 0;
  *(_OWORD *)&v10.MasterIrp->Flags = 0LL;
  v10.MasterIrp->ThreadListEntry = 0LL;
  *(_DWORD *)&v10.MasterIrp->Type = 3146112;
  *(&v10.MasterIrp->Flags + 1) = v11;
  v10.MasterIrp->AssociatedIrp.MasterIrp = (_IRP *)a1->NumberOfIndirectionTableChanges;
  HIDWORD(v10.MasterIrp->MdlAddress) = a1->PcwDatapathEventMask;
  v12 = 304 * v11 + 48;
  v10.MasterIrp->Flags = a1->PcwDatapathCycleMask;
  if ( (unsigned int)Length < v12 )
  {
    LODWORD(v10.MasterIrp->ThreadListEntry.Flink) = Length / 0x130;
    if ( !(unsigned int)(Length / 0x130) )
      goto LABEL_10;
    HIDWORD(v10.MasterIrp->ThreadListEntry.Flink) = 48;
    v9 = 304 * (Length / 0x130) + 48;
  }
  else
  {
    HIDWORD(v10.MasterIrp->ThreadListEntry.Flink) = 48;
    v9 = 304 * v11 + 48;
    LODWORD(v10.MasterIrp->ThreadListEntry.Flink) = v11;
  }
  LODWORD(v10.MasterIrp->ThreadListEntry.Blink) = 304;
  p_IoStatus = &v10.MasterIrp->IoStatus;
LABEL_10:
  LODWORD(v10.MasterIrp->MdlAddress) = v12;
  MiniportDataBlock = ndisPcwGetMiniportDataBlock(a1);
  v14 = MiniportDataBlock;
  if ( p_IoStatus )
  {
    if ( MiniportDataBlock )
    {
      v15 = 0;
      if ( LODWORD(v10.MasterIrp->ThreadListEntry.Flink) )
      {
        v16 = ndisPcwOffsetToPerCpuData;
        do
        {
          v17 = 2LL;
          v18 = &p_IoStatus[19 * v15];
          v19 = (_IO_STATUS_BLOCK *)((char *)v14 + v16 + ndisPcwPerCpuDataStride * v15);
          do
          {
            v20 = *v19;
            v19 += 8;
            *v18 = v20;
            v18 += 8;
            v18[-7] = v19[-7];
            v18[-6] = v19[-6];
            v18[-5] = v19[-5];
            v18[-4] = v19[-4];
            v18[-3] = v19[-3];
            v18[-2] = v19[-2];
            v18[-1] = v19[-1];
            --v17;
          }
          while ( v17 );
          ++v15;
          *v18 = *v19;
          v18[1] = v19[1];
          v18[2] = v19[2];
        }
        while ( v15 < LODWORD(v10.MasterIrp->ThreadListEntry.Flink) );
      }
    }
  }
  a2->IoStatus.Information = v9;
  return v4;
}
