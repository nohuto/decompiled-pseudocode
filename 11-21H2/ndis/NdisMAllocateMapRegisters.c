/*
 * XREFs of NdisMAllocateMapRegisters @ 0x1C0148040
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006130 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0020D34 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_d @ 0x1C002B684 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ?ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z @ 0x1C0058744 (-ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x1C005912C (McTemplateK0qqq_EtwWriteTransfer.c)
 *     NdisWriteErrorLogEntry @ 0x1C0064690 (NdisWriteErrorLogEntry.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C01010E0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

NDIS_STATUS __stdcall NdisMAllocateMapRegisters(
        NDIS_HANDLE MiniportAdapterHandle,
        UINT DmaChannel,
        NDIS_DMA_SIZE DmaSize,
        ULONG BaseMapRegistersNeeded,
        ULONG MaximumPhysicalMapping)
{
  char *v6; // rsi
  __int64 v7; // r15
  struct _NDIS_SG_DMA_BLOCK *v8; // rbx
  NDIS_STATUS v9; // edi
  char v10; // r14
  __int64 Pool2; // rax
  void *v12; // r14
  __int64 v13; // rax
  int v14; // eax
  ULONG v15; // r12d
  unsigned __int64 v16; // r13
  struct _DMA_ADAPTER *DmaAdapter; // rax
  struct _DMA_ADAPTER *v18; // r15
  char v19; // r14
  _DMA_OPERATIONS *DmaOperations; // rcx
  unsigned __int16 v21; // r14
  KIRQL v22; // r13
  __int64 v23; // rcx
  void (__fastcall *v24)(_DMA_ADAPTER *, void *, unsigned int); // r15
  __int64 v25; // rdi
  KIRQL v26; // r14
  char v28[8]; // [rsp+28h] [rbp-89h]
  __int64 v29; // [rsp+30h] [rbp-81h]
  char v30; // [rsp+41h] [rbp-70h]
  int v32; // [rsp+44h] [rbp-6Dh]
  ULONG NumberOfMapRegisters; // [rsp+48h] [rbp-69h] BYREF
  int (__fastcall *AllocateAdapterChannel)(_DMA_ADAPTER *, _DEVICE_OBJECT *, unsigned int, _IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *), void *); // [rsp+50h] [rbp-61h]
  void (__fastcall *FreeMapRegisters)(_DMA_ADAPTER *, void *, unsigned int); // [rsp+58h] [rbp-59h]
  char *v36; // [rsp+60h] [rbp-51h]
  struct _KEVENT Event; // [rsp+68h] [rbp-49h] BYREF
  _BYTE DeviceDescription[64]; // [rsp+80h] [rbp-31h] BYREF

  v36 = (char *)MiniportAdapterHandle;
  v6 = (char *)MiniportAdapterHandle;
  v7 = BaseMapRegistersNeeded;
  memset(DeviceDescription, 0, sizeof(DeviceDescription));
  NumberOfMapRegisters = 0;
  v8 = 0LL;
  v9 = 0;
  v10 = 0;
  memset(&Event, 0, sizeof(Event));
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x29u,
      (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
      (char)v6,
      v7);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  if ( (*((_DWORD *)v6 + 922) & 1) != 0 )
    goto LABEL_4;
  if ( (*((_DWORD *)v6 + 30) & 8) == 0 )
    goto LABEL_59;
  Pool2 = ExAllocatePool2(64LL, 176LL, 1650738254);
  v8 = (struct _NDIS_SG_DMA_BLOCK *)Pool2;
  if ( Pool2 )
  {
    *(_WORD *)Pool2 = 271;
    *(_WORD *)(Pool2 + 2) = 176;
    *(_QWORD *)(Pool2 + 32) = *((_QWORD *)v6 + 3);
    v12 = 0LL;
    *(_QWORD *)(Pool2 + 8) = v6;
    *(_WORD *)(Pool2 + 170) = v7;
    *(_DWORD *)(Pool2 + 68) = MaximumPhysicalMapping;
    *(_QWORD *)(Pool2 + 152) = 0LL;
    if ( (_DWORD)v7 )
    {
      v13 = ExAllocatePool2(66LL, 16 * v7, 1919763534);
      v8->MapRegisters = (_MAP_REGISTER_ENTRY *)v13;
      v12 = (void *)v13;
      if ( !v13 )
      {
        NdisWriteErrorLogEntry(v6, 0xC0001389, 1u, 0xFFFFFFFFLL);
        v9 = -1073741670;
        v10 = 1;
        goto LABEL_51;
      }
    }
    v8->AllocationEvent = &Event;
    KeInitializeEvent(&Event, NotificationEvent, 0);
    *(_DWORD *)&DeviceDescription[12] = *((_DWORD *)v6 + 931);
    v14 = *((_DWORD *)v6 + 119);
    *(_WORD *)&DeviceDescription[4] = 257;
    *(_DWORD *)&DeviceDescription[16] = DmaChannel;
    *(_DWORD *)&DeviceDescription[20] = v14;
    if ( v14 == 1 )
    {
      *(_DWORD *)&DeviceDescription[28] = 0;
      *(_DWORD *)&DeviceDescription[24] = DmaChannel > 4;
    }
    else if ( v14 == 5 )
    {
      if ( DmaSize == 1 )
      {
        DeviceDescription[8] = 1;
      }
      else if ( DmaSize == 2 )
      {
        *((_DWORD *)v6 + 30) |= 0x10u;
        DeviceDescription[11] = 1;
      }
    }
    *(_DWORD *)&DeviceDescription[32] = MaximumPhysicalMapping;
    v15 = ((MaximumPhysicalMapping - 2) >> 12) + 2;
    v16 = v15 * (unsigned __int64)(unsigned __int16)v7;
    if ( v16 > 0xFFFFFFFF )
    {
      NdisWriteErrorLogEntry(v6, 0xC0001389, 1u, 4294967294LL);
    }
    else
    {
      DmaAdapter = IoGetDmaAdapter(
                     *((PDEVICE_OBJECT *)v6 + 479),
                     (struct _DEVICE_DESCRIPTION *)DeviceDescription,
                     &NumberOfMapRegisters);
      v18 = DmaAdapter;
      if ( DmaAdapter && NumberOfMapRegisters >= v15 )
      {
        v8->DmaAdapterObject = DmaAdapter;
        v8->SavedDmaAdapterObject = 0LL;
        *((_QWORD *)v6 + 63) = v8;
        _InterlockedIncrement(&v8->DmaAdapterRefCount);
        v19 = 0;
        DmaOperations = DmaAdapter->DmaOperations;
        v30 = 0;
        AllocateAdapterChannel = DmaOperations->AllocateAdapterChannel;
        FreeMapRegisters = DmaOperations->FreeMapRegisters;
        if ( *(_DWORD *)&DeviceDescription[20] == 1 )
          goto LABEL_62;
        if ( HalPrivateDispatchTable[12](DmaAdapter, v15, v8->BaseMapRegistersNeeded, v8->MapRegisters) < 0 )
        {
          if ( (unsigned int)v16 <= 0x40 )
          {
            v19 = 1;
          }
          else
          {
            ExFreePoolWithTag(v8->MapRegisters, 0);
            v8->MapRegisters = 0LL;
            ndisDereferenceDmaAdapter(v8);
            v30 = 1;
            NdisWriteErrorLogEntry(v6, 0xC0001389, 1u, (unsigned int)v16);
          }
        }
        if ( *(_DWORD *)&DeviceDescription[20] == 1 || v19 )
        {
LABEL_62:
          v21 = 0;
          if ( v8->BaseMapRegistersNeeded )
          {
            while ( 1 )
            {
              v8->CurrentMapRegister = v21;
              v22 = KfRaiseIrql(2u);
              v32 = AllocateAdapterChannel(
                      v18,
                      *((_DEVICE_OBJECT **)v6 + 478),
                      v15,
                      (_IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *))ndisAllocationExecutionRoutine,
                      v8);
              v23 = (unsigned int)v32;
              if ( v32 < 0 )
                break;
              if ( v22 != 2 )
                KeLowerIrql(v22);
              ndisWaitForKernelObject(&Event);
              KeClearEvent(&Event);
              if ( ++v21 >= v8->BaseMapRegistersNeeded )
                goto LABEL_32;
            }
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              *(_DWORD *)v28 = v32;
              WPP_RECORDER_SF_d(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                2u,
                1u,
                0x2Bu,
                (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
                *(_QWORD *)v28);
              v23 = (unsigned int)v32;
            }
            if ( (byte_1C00EE581 & 1) != 0 )
              McTemplateK0qqq_EtwWriteTransfer(v23, &AllocateAdapterChannelFailed, (const GUID *)(v6 + 4008), v23, 2, 0);
            if ( v21 )
            {
              v24 = FreeMapRegisters;
              v25 = 16LL * v21 - 16;
              do
              {
                v24(v8->DmaAdapterObject, *(void **)((char *)&v8->MapRegisters->MapRegister + v25), v15);
                v25 -= 16LL;
                --v21;
              }
              while ( v21 );
              v6 = v36;
            }
            if ( v22 != 2 )
              KeLowerIrql(v22);
            NdisWriteErrorLogEntry(v6, 0xC0001389, 1u, 0xFFFFFFFFLL);
            ExFreePoolWithTag(v8->MapRegisters, 0);
            v8->MapRegisters = 0LL;
            ndisDereferenceDmaAdapter(v8);
            goto LABEL_33;
          }
        }
LABEL_32:
        if ( v30 )
        {
LABEL_33:
          v10 = 0;
          v9 = -1073741670;
          goto LABEL_51;
        }
LABEL_59:
        v10 = 0;
        goto LABEL_51;
      }
      NdisWriteErrorLogEntry(v6, 0xC0001389, 1u, 0xFFFFFFFFLL);
      if ( v12 )
      {
        ExFreePoolWithTag(v12, 0);
        v8->MapRegisters = 0LL;
      }
      v9 = -1073741670;
      if ( v18 )
      {
        v26 = KfRaiseIrql(2u);
        v18->DmaOperations->PutDmaAdapter(v18);
        if ( v26 != 2 )
          KeLowerIrql(v26);
      }
    }
    v10 = 1;
    goto LABEL_51;
  }
LABEL_4:
  v9 = -1073741670;
LABEL_51:
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( v9 && v10 && v8 )
    ExFreePoolWithTag(v8, 0);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v29) = v9;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x2Cu,
      (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
      (char)v6,
      v29);
  }
  return v9;
}
