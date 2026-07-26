/*
 * XREFs of ?ndisGetHardwareInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z @ 0x1C0068540
 * Callers:
 *     ?ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C000E8A0 (-ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 * Callees:
 *     NdisGetRssProcessorInformation @ 0x1C0029B60 (NdisGetRssProcessorInformation.c)
 *     ?ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0029CD8 (-ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     memmove @ 0x1C0038280 (memmove.c)
 *     memset @ 0x1C0038580 (memset.c)
 */

__int64 __fastcall ndisGetHardwareInfo(struct _NDIS_MINIPORT_BLOCK *a1, struct _IRP *a2, int *a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  $0E5A8DB73A6070C6895AC8D4E8F7F73C *v6; // r15
  NDIS_STATUS RssProcessorInformation; // r15d
  unsigned int Length; // r12d
  unsigned int v9; // esi
  _IRP::<unnamed_type_AssociatedIrp> v10; // rbx
  unsigned int v11; // r14d
  struct _NDIS_INTERRUPT_BLOCK *InterruptEx; // r8
  int v13; // edx
  __int64 v14; // rdx
  unsigned int i; // r9d
  __int64 v16; // rcx
  int v17; // ecx
  int v18; // eax
  int v19; // eax
  _NDIS_RECEIVE_SCALE_PARAMETERS *CombinedNdisRSSParameters; // rax
  unsigned int v21; // esi
  struct _NDIS_RSS_PROCESSOR_INFO *v22; // rax
  struct _NDIS_RSS_PROCESSOR_INFO *v23; // rbp
  __int128 v24; // xmm0
  unsigned int v25; // edi
  __int128 v26; // xmm1
  unsigned int v27; // r14d
  UCHAR *v28; // rdx
  __int128 v30; // [rsp+30h] [rbp-38h] BYREF
  ULONG_PTR Size; // [rsp+78h] [rbp+10h] BYREF

  *a3 = -1073741823;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v6 = 0LL;
  if ( *((_BYTE *)CurrentStackLocation->FileObject->FsContext + 24) )
  {
    Length = CurrentStackLocation->Parameters.Read.Length;
    v9 = 1320;
    v10.MasterIrp = (_IRP *)a2->AssociatedIrp;
    if ( Length >= 0x528 )
    {
      *a3 = 0;
      memset(&v10.MasterIrp->AllocationProcessorNumber, 0, 0x524uLL);
      *(_DWORD *)&v10.MasterIrp->Type = 86508160;
      v11 = 1320;
      BYTE4(v10.MasterIrp->MdlAddress) = a1->MajorNdisVersion;
      BYTE5(v10.MasterIrp->MdlAddress) = a1->MinorNdisVersion;
      HIWORD(v10.MasterIrp->MdlAddress) = HIWORD(a1->DriverHandle->DriverVersion);
      LOWORD(v10.MasterIrp->Flags) = a1->DriverHandle->DriverVersion;
      InterruptEx = a1->InterruptEx;
      if ( InterruptEx )
      {
        if ( *((_BYTE *)InterruptEx + 192) )
        {
          v11 = 8 * *(_DWORD *)(*((_QWORD *)InterruptEx + 15) + 4LL) + 1320;
          if ( Length >= v11 )
          {
            v6 = &v10.MasterIrp[6].72;
            *(_DWORD *)&v10.MasterIrp->Cancel = 1320;
          }
        }
      }
      LODWORD(v10.MasterIrp->MdlAddress) = v11;
      if ( v6 )
        v9 = v11;
      if ( InterruptEx )
      {
        v13 = *(_DWORD *)&v10.MasterIrp->AllocationProcessorNumber;
        v10.MasterIrp->ThreadListEntry = *(_LIST_ENTRY *)&a1->MsiCaps.Header.CapabilityID;
        v10.MasterIrp->IoStatus.Pointer = *(void **)&a1->MsiCaps.Option64Bit.MaskBits;
        v10.MasterIrp->IoStatus.Information = *(_QWORD *)&a1->MsiXCaps.Header.CapabilityID;
        *(_DWORD *)&v10.MasterIrp->RequestorMode = a1->MsiXCaps.PBATable.TableOffset;
        if ( *((_BYTE *)InterruptEx + 192)
          && (v13 |= 4u, *(_DWORD *)&v10.MasterIrp->AllocationProcessorNumber = v13, *((_BYTE *)InterruptEx + 193)) )
        {
          HIDWORD(v10.MasterIrp->AssociatedIrp.SystemBuffer) = *(_DWORD *)(*((_QWORD *)InterruptEx + 15) + 4LL);
          *(_DWORD *)&v10.MasterIrp->AllocationProcessorNumber = v13 | 8;
          if ( v6 )
          {
            v14 = *((_QWORD *)InterruptEx + 15);
            for ( i = 0; i < *(_DWORD *)(v14 + 4); v14 = *((_QWORD *)InterruptEx + 15) )
            {
              v16 = i++;
              v6[v16] = *($0E5A8DB73A6070C6895AC8D4E8F7F73C *)(v14 + 48 * v16 + 16);
            }
          }
          if ( a1->MsiXCaps.Header.CapabilityID == 17 )
          {
            v17 = *(_DWORD *)&v10.MasterIrp->AllocationProcessorNumber | 0x10;
            *(_DWORD *)&v10.MasterIrp->AllocationProcessorNumber = v17;
            v10.MasterIrp->AssociatedIrp.IrpCount = (*(_WORD *)&a1->MsiXCaps.MessageControl & 0x7FF) + 1;
            if ( _bittest16((const signed __int16 *)&a1->MsiXCaps.MessageControl, 0xFu) )
              *(_DWORD *)&v10.MasterIrp->AllocationProcessorNumber = v17 | 0x20;
          }
        }
        else
        {
          *(_DWORD *)&v10.MasterIrp->AllocationProcessorNumber = v13 | 2;
        }
      }
      else
      {
        v18 = *(_DWORD *)&v10.MasterIrp->AllocationProcessorNumber;
        if ( a1->Interrupt )
          v19 = v18 | 2;
        else
          v19 = v18 | 1;
        *(_DWORD *)&v10.MasterIrp->AllocationProcessorNumber = v19;
      }
      v10.MasterIrp->Overlay.AllocationSize.LowPart = 120;
      v10.MasterIrp->Overlay.AllocationSize.HighPart = 52;
      v10.MasterIrp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry = *(_LIST_ENTRY *)&a1->PciDeviceCustomProperties.Header.Type;
      *((_OWORD *)&v10.MasterIrp->Tail.CompletionKey + 1) = *(_OWORD *)&a1->PciDeviceCustomProperties.MaxPayloadSize;
      *((_OWORD *)&v10.MasterIrp->Tail.CompletionKey + 2) = *(_OWORD *)&a1->PciDeviceCustomProperties.MaxLinkSpeed;
      *((_DWORD *)&v10.MasterIrp->Tail.CompletionKey + 12) = a1->PciDeviceCustomProperties.MaxInterruptMessages;
      HIDWORD(v10.MasterIrp->IoRingContext) = a1->PciDeviceCustomProperties.PciExpressVersion;
      LODWORD(v10.MasterIrp->UserEvent) = a1->PciDeviceCustomProperties.InterruptType;
      HIDWORD(v10.MasterIrp->UserEvent) = a1->PciDeviceCustomProperties.MaxInterruptMessages;
      HIDWORD(v10.MasterIrp[1].AssociatedIrp.SystemBuffer) = a1->PciDeviceSriovSupport;
      LOBYTE(v10.MasterIrp[1].ThreadListEntry.Flink) = a1->S0WakeupSupported;
      BYTE1(v10.MasterIrp[1].ThreadListEntry.Flink) = (a1->Flags & 0x10) != 0;
      *((_DWORD *)&v10.MasterIrp->Overlay.AllocationSize + 2) = 172;
      *((_DWORD *)&v10.MasterIrp->Overlay.AllocationSize + 3) = 20;
      *(_OWORD *)((char *)&v10.MasterIrp->Tail.CompletionKey + 52) = *(_OWORD *)&a1->RecvScaleCapabilities.Header.Type;
      *((_DWORD *)&v10.MasterIrp->Tail.CompletionKey + 17) = *(_DWORD *)&a1->RecvScaleCapabilities.NumberOfIndirectionTableEntries;
      if ( ndisIsRssEnabledForMiniport(a1) )
      {
        LODWORD(v10.MasterIrp->CancelRoutine) = 192;
        HIDWORD(v10.MasterIrp->CancelRoutine) = 44;
        CombinedNdisRSSParameters = a1->CombinedNdisRSSParameters;
        *(_OWORD *)(&v10.MasterIrp->Tail.CompletionKey + 9) = *(_OWORD *)&CombinedNdisRSSParameters->Header.Type;
        *(_OWORD *)&v10.MasterIrp[1].Type = *(_OWORD *)&CombinedNdisRSSParameters->IndirectionTableOffset;
        *(_QWORD *)&v10.MasterIrp[1].Flags = *(_QWORD *)&CombinedNdisRSSParameters->NumberOfProcessorMasks;
        v10.MasterIrp[1].AssociatedIrp.IrpCount = (int)CombinedNdisRSSParameters->DefaultProcessorNumber;
        v11 += a1->CombinedNdisRSSParameters->HashSecretKeySize + a1->CombinedNdisRSSParameters->IndirectionTableSize;
        LODWORD(v10.MasterIrp->MdlAddress) = v11;
        if ( Length < v11 )
        {
          *(_DWORD *)&v10.MasterIrp[1].Type = 0;
          LODWORD(v10.MasterIrp[1].MdlAddress) = 0;
        }
        else
        {
          LODWORD(v10.MasterIrp[1].MdlAddress) = v9 - 192;
          memmove(
            (char *)v10.MasterIrp + v9,
            &a1->CombinedNdisRSSParameters->Header.Type + a1->CombinedNdisRSSParameters->HashSecretKeyOffset,
            a1->CombinedNdisRSSParameters->HashSecretKeySize);
          v21 = a1->CombinedNdisRSSParameters->HashSecretKeySize + v9;
          *(_DWORD *)&v10.MasterIrp[1].Type = v21 - 192;
          memmove(
            (char *)v10.MasterIrp + v21,
            &a1->CombinedNdisRSSParameters->Header.Type + a1->CombinedNdisRSSParameters->IndirectionTableOffset,
            a1->CombinedNdisRSSParameters->IndirectionTableSize);
          v9 = a1->CombinedNdisRSSParameters->IndirectionTableSize + v21;
        }
      }
      else
      {
        *(_DWORD *)&v10.MasterIrp->AllocationProcessorNumber |= 0x40u;
      }
      Size = 0LL;
      v30 = 0LL;
      LOBYTE(v30) = 1;
      DWORD2(v30) = 0;
      RssProcessorInformation = NdisGetRssProcessorInformation(a1, 0LL, &Size);
      v22 = (struct _NDIS_RSS_PROCESSOR_INFO *)ExAllocatePool3(66LL, Size, 538985550LL, &v30, 1);
      v23 = v22;
      if ( v22 )
      {
        RssProcessorInformation = NdisGetRssProcessorInformation(a1, v22, &Size);
        if ( RssProcessorInformation >= 0 )
        {
          v24 = *(_OWORD *)&v23->Header.Type;
          v25 = v23->RssProcessorCount * v23->RssProcessorEntrySize;
          v26 = *(_OWORD *)&v23->PreferredNumaNode;
          LODWORD(v10.MasterIrp->UserBuffer) = 248;
          *(_OWORD *)&v10.MasterIrp[1].ThreadListEntry.Blink = v24;
          HIDWORD(v10.MasterIrp->UserBuffer) = 40;
          *(_QWORD *)&v24 = *(_QWORD *)&v23[1].Header.Type;
          v27 = v25 + v11;
          LODWORD(v10.MasterIrp->MdlAddress) = v27;
          *(_OWORD *)&v10.MasterIrp[1].IoStatus.Information = v26;
          v10.MasterIrp[1].UserIosb = (_IO_STATUS_BLOCK *)v24;
          if ( Length < v27 )
          {
            HIDWORD(v10.MasterIrp[1].IoStatus.Information) = 0;
          }
          else
          {
            v28 = &v23->Header.Type + v23->RssProcessorArrayOffset;
            HIDWORD(v10.MasterIrp[1].IoStatus.Information) = v9 - 248;
            memmove((char *)v10.MasterIrp + v9, v28, v25);
            v9 += v25;
          }
        }
        ExFreePoolWithTag(v23, 0x2020444Eu);
      }
      a2->IoStatus.Information = v9;
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
  return (unsigned int)RssProcessorInformation;
}
