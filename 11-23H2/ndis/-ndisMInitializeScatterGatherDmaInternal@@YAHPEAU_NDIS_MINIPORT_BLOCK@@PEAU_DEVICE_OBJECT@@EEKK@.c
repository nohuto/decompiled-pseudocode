/*
 * XREFs of ?ndisMInitializeScatterGatherDmaInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_DEVICE_OBJECT@@EEKK@Z @ 0x1C00CD320
 * Callers:
 *     NdisMInitializeScatterGatherDma @ 0x1C00C5F10 (NdisMInitializeScatterGatherDma.c)
 *     ndisRegisterScatterGatherDmaForMiniport @ 0x1C00CD940 (ndisRegisterScatterGatherDmaForMiniport.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0006820 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C2F0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qLL @ 0x1C0018668 (WPP_RECORDER_SF_qLL.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     ?ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z @ 0x1C005D9B4 (-ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z.c)
 *     NdisWriteErrorLogEntry @ 0x1C0069690 (NdisWriteErrorLogEntry.c)
 *     ndisAssignSGListLookasideList @ 0x1C00CC764 (ndisAssignSGListLookasideList.c)
 *     PplpCreateLookasideListEx @ 0x1C00CE65C (PplpCreateLookasideListEx.c)
 */

__int64 __fastcall ndisMInitializeScatterGatherDmaInternal(
        struct _NDIS_MINIPORT_BLOCK *a1,
        PDEVICE_OBJECT PhysicalDeviceObject,
        char a3,
        char a4,
        unsigned int a5,
        unsigned int a6)
{
  int v10; // edx
  __int64 LookasideList; // r15
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rdx
  unsigned __int8 MajorNdisVersion; // cl
  unsigned int Flags; // eax
  _NDIS_SG_DMA_BLOCK *MiniportSGDmaBlock; // rcx
  unsigned int v16; // ebx
  __int64 Pool2; // rax
  _NDIS_SG_DMA_BLOCK *v18; // rsi
  unsigned int SGMapRegistersNeeded; // ecx
  struct _DMA_ADAPTER *DmaAdapter; // rax
  bool v22; // zf
  unsigned int v23; // eax
  SIZE_T v24; // rbx
  ULONG MaximumProcessorCount; // eax
  int v26; // edx
  int v27; // r8d
  int v28; // r9d
  __int64 v29; // [rsp+30h] [rbp-69h]
  ULONG NumberOfMapRegisters; // [rsp+50h] [rbp-49h] BYREF
  SIZE_T v31; // [rsp+54h] [rbp-45h] BYREF
  struct _DEVICE_DESCRIPTION DeviceDescription; // [rsp+60h] [rbp-39h] BYREF

  memset(&DeviceDescription, 0, sizeof(DeviceDescription));
  NumberOfMapRegisters = 0;
  LookasideList = 0LL;
  v31 = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      1u,
      0x14u,
      (struct _GUID *)&WPP_9631851058cb35c6ce0e43959fab5e67_Traceguids,
      (char)a1,
      a3,
      a6);
  DriverHandle = a1->DriverHandle;
  MajorNdisVersion = DriverHandle->MajorNdisVersion;
  if ( MajorNdisVersion >= 5u && (Flags = a1->Flags, (Flags & 8) != 0) )
  {
    if ( MajorNdisVersion == 5
      && DriverHandle->MinorNdisVersion == 2
      && (MiniportSGDmaBlock = a1->MiniportSGDmaBlock) != 0LL )
    {
      v16 = 0;
      a1->InfoFlags |= 4u;
      a1->Flags = Flags | 0x40;
      _InterlockedIncrement(&MiniportSGDmaBlock->DmaAdapterRefCount);
    }
    else if ( (a1->DriverVerifyFlags & 0x100) != 0 )
    {
      v16 = -1073741670;
    }
    else
    {
      Pool2 = ExAllocatePool2(64LL, 176LL, 1650738254);
      v18 = (_NDIS_SG_DMA_BLOCK *)Pool2;
      if ( Pool2 )
      {
        *(_WORD *)Pool2 = 271;
        *(_WORD *)(Pool2 + 2) = 176;
        *(_QWORD *)(Pool2 + 32) = a1->MiniportAdapterContext;
        DeviceDescription.BusNumber = a1->BusNumber;
        DeviceDescription.InterfaceType = a1->AdapterType;
        *(_QWORD *)(Pool2 + 8) = a1;
        *(_QWORD *)(Pool2 + 24) = PhysicalDeviceObject;
        *(_DWORD *)(Pool2 + 68) = a6;
        *(_WORD *)&DeviceDescription.Master = 257;
        DeviceDescription.DmaChannel = 0;
        if ( a3 )
        {
          a1->Flags |= 0x10u;
          DeviceDescription.Dma32BitAddresses = 0;
          DeviceDescription.Dma64BitAddresses = 1;
        }
        else
        {
          DeviceDescription.Dma32BitAddresses = 1;
          DeviceDescription.Dma64BitAddresses = 0;
        }
        if ( a4 )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
            && *((_WORD *)WPP_GLOBAL_Control + 36) )
          {
            WPP_RECORDER_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              5u,
              1u,
              0x15u,
              (struct _GUID *)&WPP_9631851058cb35c6ce0e43959fab5e67_Traceguids);
          }
          DeviceDescription.Reserved1 = 1;
        }
        SGMapRegistersNeeded = a1->SGMapRegistersNeeded;
        if ( ((2 * a6 - 2) >> 12) + 2 >= SGMapRegistersNeeded )
          DeviceDescription.MaximumLength = 2 * a6;
        else
          DeviceDescription.MaximumLength = (SGMapRegistersNeeded << 12) - 4096;
        DeviceDescription.Version = a5;
        if ( a5 >= 3 )
          DeviceDescription.DmaAddressWidth = a3 != 0 ? 64 : 32;
        if ( v18->DmaAdapterObject
          || (DmaAdapter = IoGetDmaAdapter(PhysicalDeviceObject, &DeviceDescription, &NumberOfMapRegisters),
              (v18->DmaAdapterObject = DmaAdapter) != 0LL) )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v29) = NumberOfMapRegisters;
            WPP_RECORDER_SF_qL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              1u,
              0x17u,
              (struct _GUID *)&WPP_9631851058cb35c6ce0e43959fab5e67_Traceguids,
              (char)a1,
              v29);
          }
          _InterlockedIncrement(&v18->DmaAdapterRefCount);
          v22 = (a1->Flags & 0x40000) == 0;
          a1->MiniportSGDmaBlock = v18;
          if ( v22 )
            a1->SendCompleteHandler = (void (__fastcall *)(void *, _NDIS_PACKET *, int))ndisMSendCompleteSG;
          if ( ((int (__fastcall *)(_DMA_ADAPTER *, _QWORD, _QWORD, _QWORD))v18->DmaAdapterObject->DmaOperations->CalculateScatterGatherList)(
                 v18->DmaAdapterObject,
                 0LL,
                 0LL,
                 NumberOfMapRegisters << 12) >= 0
            && ((v23 = v31, v18->ScatterGatherListSize = v31, v18->SGListLookasideList)
             || (v24 = v23,
                 MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu),
                 (LookasideList = PplpCreateLookasideListEx(MaximumProcessorCount, v26, v27, v28, (int)&v31, v24)) != 0)) )
          {
            a1->Flags |= 0x40u;
            v16 = 0;
            a1->InfoFlags |= 4u;
            if ( LookasideList )
              ndisAssignSGListLookasideList((__int64)v18, LookasideList);
          }
          else
          {
            v16 = -1073741670;
            ndisDereferenceDmaAdapter(v18);
          }
        }
        else
        {
          NdisWriteErrorLogEntry(a1, 0xC0001389, 1u, 0xFFFFFFFFLL);
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              1u,
              0x16u,
              (struct _GUID *)&WPP_9631851058cb35c6ce0e43959fab5e67_Traceguids,
              a1);
          v16 = -1073741670;
          ExFreePoolWithTag(v18, 0);
          a1->MiniportSGDmaBlock = 0LL;
        }
      }
      else
      {
        v16 = -1073741670;
      }
    }
  }
  else
  {
    v16 = -1073741637;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v29) = v16;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x18u,
      (struct _GUID *)&WPP_9631851058cb35c6ce0e43959fab5e67_Traceguids,
      (char)a1,
      v29);
  }
  return v16;
}
