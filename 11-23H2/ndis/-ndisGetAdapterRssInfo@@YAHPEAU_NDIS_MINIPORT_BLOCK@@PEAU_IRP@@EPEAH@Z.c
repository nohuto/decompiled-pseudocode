/*
 * XREFs of ?ndisGetAdapterRssInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@EPEAH@Z @ 0x1C0029A64
 * Callers:
 *     ?ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C000EA30 (-ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ndisLwmIoctlIrpHandler @ 0x1C00CBFB8 (ndisLwmIoctlIrpHandler.c)
 * Callees:
 *     NdisGetRssProcessorInformation @ 0x1C0029CF0 (NdisGetRssProcessorInformation.c)
 *     ?ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0029E68 (-ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     memmove @ 0x1C0038400 (memmove.c)
 *     memset @ 0x1C0038700 (memset.c)
 */

__int64 __fastcall ndisGetAdapterRssInfo(struct _NDIS_MINIPORT_BLOCK *a1, struct _IRP *a2, char a3, int *a4)
{
  unsigned int v6; // edi
  unsigned int Length; // r12d
  _IRP::<unnamed_type_AssociatedIrp> v8; // rbx
  unsigned int v9; // r15d
  _NDIS_RECEIVE_SCALE_PARAMETERS *CombinedNdisRSSParameters; // rax
  __int64 v11; // rcx
  int v12; // edi
  NDIS_STATUS RssProcessorInformation; // ebp
  struct _NDIS_RSS_PROCESSOR_INFO *v14; // rax
  struct _NDIS_RSS_PROCESSOR_INFO *v15; // rsi
  __int128 v16; // xmm0
  unsigned int v17; // r14d
  _LIST_ENTRY v18; // xmm1
  unsigned int v19; // r15d
  UCHAR *v20; // rdx
  __int128 v22; // [rsp+30h] [rbp-38h] BYREF
  ULONG_PTR Size; // [rsp+78h] [rbp+10h] BYREF

  *a4 = -1073741823;
  if ( a3 )
  {
    v6 = 144;
    Length = a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
    if ( Length < 0x90 )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      v8.MasterIrp = (_IRP *)a2->AssociatedIrp;
      *a4 = 0;
      memset(&v8.MasterIrp->AllocationProcessorNumber, 0, 0x8CuLL);
      *(_DWORD *)&v8.MasterIrp->Type = 9437568;
      v9 = 144;
      BYTE4(v8.MasterIrp->MdlAddress) = a1->MajorNdisVersion;
      BYTE5(v8.MasterIrp->MdlAddress) = a1->MinorNdisVersion;
      LODWORD(v8.MasterIrp->MdlAddress) = 144;
      v8.MasterIrp->Flags = 40;
      *(&v8.MasterIrp->Flags + 1) = 20;
      *(_OWORD *)&v8.MasterIrp->ThreadListEntry.Blink = *(_OWORD *)&a1->RecvScaleCapabilities.Header.Type;
      LODWORD(v8.MasterIrp->IoStatus.Information) = *(_DWORD *)&a1->RecvScaleCapabilities.NumberOfIndirectionTableEntries;
      if ( ndisIsRssEnabledForMiniport(a1) )
      {
        v8.MasterIrp->AssociatedIrp.IrpCount = 60;
        HIDWORD(v8.MasterIrp->AssociatedIrp.SystemBuffer) = 44;
        CombinedNdisRSSParameters = a1->CombinedNdisRSSParameters;
        *(_OWORD *)((char *)&v8.MasterIrp->IoStatus.Information + 4) = *(_OWORD *)&CombinedNdisRSSParameters->Header.Type;
        *(_OWORD *)((char *)&v8.MasterIrp->IoRingContext + 4) = *(_OWORD *)&CombinedNdisRSSParameters->IndirectionTableOffset;
        *(LONGLONG *)((char *)&v8.MasterIrp->Overlay.AllocationSize.QuadPart + 4) = *(_QWORD *)&CombinedNdisRSSParameters->NumberOfProcessorMasks;
        *((_DWORD *)&v8.MasterIrp->Overlay.AllocationSize + 3) = CombinedNdisRSSParameters->DefaultProcessorNumber;
        v9 = a1->CombinedNdisRSSParameters->HashSecretKeySize
           + a1->CombinedNdisRSSParameters->IndirectionTableSize
           + 144;
        LODWORD(v8.MasterIrp->MdlAddress) = v9;
        if ( Length < v9 )
        {
          HIDWORD(v8.MasterIrp->IoRingContext) = 0;
          HIDWORD(v8.MasterIrp->UserEvent) = 0;
        }
        else
        {
          HIDWORD(v8.MasterIrp->UserEvent) = 84;
          memmove(
            &v8.MasterIrp->Tail.CompletionKey + 3,
            &a1->CombinedNdisRSSParameters->Header.Type + a1->CombinedNdisRSSParameters->HashSecretKeyOffset,
            a1->CombinedNdisRSSParameters->HashSecretKeySize);
          v11 = (unsigned int)a1->CombinedNdisRSSParameters->HashSecretKeySize + 144;
          v12 = a1->CombinedNdisRSSParameters->HashSecretKeySize + 144;
          HIDWORD(v8.MasterIrp->IoRingContext) = a1->CombinedNdisRSSParameters->HashSecretKeySize + 84;
          memmove(
            (char *)v8.MasterIrp + v11,
            &a1->CombinedNdisRSSParameters->Header.Type + a1->CombinedNdisRSSParameters->IndirectionTableOffset,
            a1->CombinedNdisRSSParameters->IndirectionTableSize);
          v6 = a1->CombinedNdisRSSParameters->IndirectionTableSize + v12;
        }
      }
      else
      {
        *(_DWORD *)&v8.MasterIrp->AllocationProcessorNumber |= 0x40u;
      }
      Size = 0LL;
      v22 = 0LL;
      LOBYTE(v22) = 1;
      DWORD2(v22) = 0;
      RssProcessorInformation = NdisGetRssProcessorInformation(a1, 0LL, &Size);
      v14 = (struct _NDIS_RSS_PROCESSOR_INFO *)ExAllocatePool3(66LL, Size, 538985550LL, &v22, 1);
      v15 = v14;
      if ( v14 )
      {
        RssProcessorInformation = NdisGetRssProcessorInformation(a1, v14, &Size);
        if ( RssProcessorInformation >= 0 )
        {
          v16 = *(_OWORD *)&v15->Header.Type;
          v17 = v15->RssProcessorCount * v15->RssProcessorEntrySize;
          v18 = *(_LIST_ENTRY *)&v15->PreferredNumaNode;
          LODWORD(v8.MasterIrp->ThreadListEntry.Flink) = 104;
          *(_OWORD *)&v8.MasterIrp->CancelRoutine = v16;
          HIDWORD(v8.MasterIrp->ThreadListEntry.Flink) = 40;
          *(_QWORD *)&v16 = *(_QWORD *)&v15[1].Header.Type;
          v19 = v17 + v9;
          LODWORD(v8.MasterIrp->MdlAddress) = v19;
          v8.MasterIrp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry = v18;
          v8.MasterIrp->Tail.Overlay.DriverContext[2] = (void *)v16;
          if ( Length < v19 )
          {
            v8.MasterIrp->Tail.Apc.SpareLong0 = 0;
          }
          else
          {
            v20 = &v15->Header.Type + v15->RssProcessorArrayOffset;
            v8.MasterIrp->Tail.Apc.SpareLong0 = v6 - 104;
            memmove((char *)v8.MasterIrp + v6, v20, v17);
            v6 += v17;
          }
        }
        ExFreePoolWithTag(v15, 0x2020444Eu);
      }
      a2->IoStatus.Information = v6;
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)RssProcessorInformation;
}
