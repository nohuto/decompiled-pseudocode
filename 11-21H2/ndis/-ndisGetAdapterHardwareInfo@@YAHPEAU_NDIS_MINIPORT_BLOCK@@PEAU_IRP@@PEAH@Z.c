/*
 * XREFs of ?ndisGetAdapterHardwareInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z @ 0x1C0029628
 * Callers:
 *     ?ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C000F1D0 (-ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 * Callees:
 *     memset @ 0x1C0036340 (memset.c)
 */

__int64 __fastcall ndisGetAdapterHardwareInfo(struct _NDIS_MINIPORT_BLOCK *a1, struct _IRP *a2, int *a3)
{
  unsigned int v3; // edi
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  char *v7; // r15
  unsigned int Length; // r12d
  unsigned int v10; // r14d
  _IRP::<unnamed_type_AssociatedIrp> v11; // rbx
  unsigned int v12; // eax
  struct _NDIS_INTERRUPT_BLOCK *InterruptEx; // rbp
  int v14; // edx
  __int64 v15; // r8
  unsigned int i; // r12d
  int v17; // ecx
  int v18; // eax
  int v19; // eax

  v3 = 0;
  *a3 = -1073741823;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v7 = 0LL;
  if ( *((_BYTE *)CurrentStackLocation->FileObject->FsContext + 24) )
  {
    Length = CurrentStackLocation->Parameters.Read.Length;
    v10 = 668;
    v11.MasterIrp = (_IRP *)a2->AssociatedIrp;
    if ( Length >= 0x29C )
    {
      *a3 = 0;
      memset(&v11.MasterIrp->AllocationProcessorNumber, 0, 0x298uLL);
      *(_DWORD *)&v11.MasterIrp->Type = 43778432;
      BYTE4(v11.MasterIrp->MdlAddress) = a1->MajorNdisVersion;
      BYTE5(v11.MasterIrp->MdlAddress) = a1->MinorNdisVersion;
      v12 = 668;
      InterruptEx = a1->InterruptEx;
      if ( InterruptEx )
      {
        if ( *((_BYTE *)InterruptEx + 192) )
        {
          v12 = 16 * *(_DWORD *)(*((_QWORD *)InterruptEx + 15) + 4LL) + 668;
          if ( Length >= v12 )
          {
            v7 = (char *)&v11.MasterIrp[3].ThreadListEntry.Blink + 4;
            HIDWORD(v11.MasterIrp->IoStatus.Information) = 668;
          }
        }
      }
      LODWORD(v11.MasterIrp->MdlAddress) = v12;
      if ( v7 )
        v10 = v12;
      if ( InterruptEx )
      {
        v14 = *(_DWORD *)&v11.MasterIrp->AllocationProcessorNumber;
        *(_OWORD *)&v11.MasterIrp->AssociatedIrp.MasterIrp = *(_OWORD *)&a1->MsiCaps.Header.CapabilityID;
        v11.MasterIrp->ThreadListEntry.Blink = *(_LIST_ENTRY **)&a1->MsiCaps.Option64Bit.MaskBits;
        v11.MasterIrp->IoStatus.Pointer = *(void **)&a1->MsiXCaps.Header.CapabilityID;
        LODWORD(v11.MasterIrp->IoStatus.Information) = a1->MsiXCaps.PBATable.TableOffset;
        if ( *((_BYTE *)InterruptEx + 192)
          && (v14 |= 4u, *(_DWORD *)&v11.MasterIrp->AllocationProcessorNumber = v14, *((_BYTE *)InterruptEx + 193)) )
        {
          *(&v11.MasterIrp->Flags + 1) = *(_DWORD *)(*((_QWORD *)InterruptEx + 15) + 4LL);
          *(_DWORD *)&v11.MasterIrp->AllocationProcessorNumber = v14 | 8;
          if ( v7 )
          {
            v15 = *((_QWORD *)InterruptEx + 15);
            for ( i = 0; i < *(_DWORD *)(v15 + 4); ++i )
            {
              IoGetAffinityInterrupt(*(PKINTERRUPT *)(v15 + 48LL * i + 24), (PGROUP_AFFINITY)&v7[16 * i]);
              v15 = *((_QWORD *)InterruptEx + 15);
            }
          }
          if ( a1->MsiXCaps.Header.CapabilityID == 17 )
          {
            v17 = *(_DWORD *)&v11.MasterIrp->AllocationProcessorNumber | 0x10;
            *(_DWORD *)&v11.MasterIrp->AllocationProcessorNumber = v17;
            v11.MasterIrp->Flags = (*(_WORD *)&a1->MsiXCaps.MessageControl & 0x7FF) + 1;
            if ( _bittest16((const signed __int16 *)&a1->MsiXCaps.MessageControl, 0xFu) )
              *(_DWORD *)&v11.MasterIrp->AllocationProcessorNumber = v17 | 0x20;
          }
        }
        else
        {
          *(_DWORD *)&v11.MasterIrp->AllocationProcessorNumber = v14 | 2;
        }
      }
      else
      {
        v18 = *(_DWORD *)&v11.MasterIrp->AllocationProcessorNumber;
        if ( a1->Interrupt )
          v19 = v18 | 2;
        else
          v19 = v18 | 1;
        *(_DWORD *)&v11.MasterIrp->AllocationProcessorNumber = v19;
      }
      BYTE4(v11.MasterIrp->UserEvent) = (a1->Flags & 0x10) != 0;
      a2->IoStatus.Information = v10;
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v3;
}
