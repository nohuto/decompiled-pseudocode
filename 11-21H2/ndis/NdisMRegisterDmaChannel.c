/*
 * XREFs of NdisMRegisterDmaChannel @ 0x1C0148BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006130 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0020D34 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_d @ 0x1C002B684 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x1C005912C (McTemplateK0qqq_EtwWriteTransfer.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C01010E0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

NDIS_STATUS __stdcall NdisMRegisterDmaChannel(
        PNDIS_HANDLE MiniportDmaHandle,
        NDIS_HANDLE MiniportAdapterHandle,
        UINT DmaChannel,
        BOOLEAN Dma32BitAddresses,
        PNDIS_DMA_DESCRIPTION DmaDescription,
        ULONG MaximumLength)
{
  NDIS_STATUS v9; // ebx
  int v10; // r15d
  __int64 Pool2; // rax
  __int64 v12; // rdi
  int v13; // eax
  DMA_WIDTH DmaWidth; // eax
  ULONG DmaPort; // eax
  _DEVICE_OBJECT *v16; // rcx
  ULONG v17; // r12d
  struct _DMA_ADAPTER *DmaAdapter; // r15
  __int64 v19; // rax
  __int64 v20; // r14
  struct _KEVENT *v21; // r13
  int v22; // r12d
  __int64 v23; // rcx
  _QWORD *v24; // rax
  KIRQL v25; // r14
  char v27[8]; // [rsp+28h] [rbp-71h]
  KIRQL NewIrql; // [rsp+40h] [rbp-59h]
  ULONG NumberOfMapRegisters; // [rsp+44h] [rbp-55h] BYREF
  PNDIS_HANDLE v30; // [rsp+48h] [rbp-51h]
  _BYTE DeviceDescription[64]; // [rsp+50h] [rbp-49h] BYREF

  v30 = MiniportDmaHandle;
  memset(DeviceDescription, 0, sizeof(DeviceDescription));
  v9 = 0;
  NumberOfMapRegisters = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x24u,
      (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
      MiniportAdapterHandle);
  v10 = *((_DWORD *)MiniportAdapterHandle + 930);
  Pool2 = ExAllocatePool2(64LL, 176LL, 1650738254);
  v12 = Pool2;
  if ( Pool2 )
  {
    *(_WORD *)Pool2 = 271;
    *(_WORD *)(Pool2 + 2) = 176;
    *(_QWORD *)(Pool2 + 32) = *((_QWORD *)MiniportAdapterHandle + 3);
    v13 = *((_DWORD *)MiniportAdapterHandle + 30);
    *(_QWORD *)(v12 + 8) = MiniportAdapterHandle;
    if ( (v13 & 8) != 0 )
      *(_WORD *)&DeviceDescription[4] = 257;
    else
      DeviceDescription[5] = 0;
    DeviceDescription[6] = DmaDescription->DemandMode;
    DeviceDescription[7] = DmaDescription->AutoInitialize;
    *(_DWORD *)&DeviceDescription[12] = *((_DWORD *)MiniportAdapterHandle + 931);
    DmaWidth = DmaDescription->DmaWidth;
    *(_DWORD *)&DeviceDescription[16] = DmaChannel;
    *(_DWORD *)&DeviceDescription[24] = DmaWidth;
    *(_DWORD *)&DeviceDescription[28] = DmaDescription->DmaSpeed;
    DmaPort = DmaDescription->DmaPort;
    *(_DWORD *)&DeviceDescription[32] = MaximumLength;
    v16 = (_DEVICE_OBJECT *)*((_QWORD *)MiniportAdapterHandle + 479);
    *(_DWORD *)&DeviceDescription[36] = DmaPort;
    v17 = ((MaximumLength - 2) >> 12) + 2;
    DeviceDescription[8] = Dma32BitAddresses;
    *(_DWORD *)&DeviceDescription[20] = v10;
    DmaAdapter = IoGetDmaAdapter(v16, (struct _DEVICE_DESCRIPTION *)DeviceDescription, &NumberOfMapRegisters);
    if ( DmaAdapter )
    {
      if ( NumberOfMapRegisters >= v17 )
      {
        v19 = ExAllocatePool2(64LL, 56LL, 1650738254);
        v20 = v19;
        if ( v19 )
        {
          v21 = (struct _KEVENT *)(v19 + 8);
          KeInitializeEvent((PRKEVENT)(v19 + 8), NotificationEvent, 0);
          *(_QWORD *)(v20 + 40) = MiniportAdapterHandle;
          *(_QWORD *)(v20 + 32) = DmaAdapter;
          ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
          NewIrql = KfRaiseIrql(2u);
          v22 = DmaAdapter->DmaOperations->AllocateAdapterChannel(
                  DmaAdapter,
                  *((_DEVICE_OBJECT **)MiniportAdapterHandle + 478),
                  v17,
                  (_IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *))ndisDmaExecutionRoutine,
                  (void *)v20);
          if ( NewIrql != 2 )
            KeLowerIrql(NewIrql);
          ndisDereferencePackage((PVOID *)&ndisPkgs);
          if ( v22 >= 0 )
          {
            ndisWaitForKernelObject(v21);
            KeClearEvent(v21);
            v24 = v30;
            *(_BYTE *)(v20 + 48) = 0;
            *(_QWORD *)(v12 + 40) = DmaAdapter;
            *v24 = v20;
            _InterlockedIncrement((volatile signed __int32 *)(v12 + 88));
            *((_QWORD *)MiniportAdapterHandle + 63) = v12;
            goto LABEL_22;
          }
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            *(_DWORD *)v27 = v22;
            WPP_RECORDER_SF_d(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              1u,
              0x25u,
              (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
              *(_QWORD *)v27);
          }
          ExFreePoolWithTag((PVOID)v20, 0);
          if ( (byte_1C00EE581 & 1) != 0 )
            McTemplateK0qqq_EtwWriteTransfer(
              v23,
              &AllocateAdapterChannelFailed,
              (const GUID *)((char *)MiniportAdapterHandle + 4008),
              v22,
              1,
              0);
        }
      }
      v25 = KfRaiseIrql(2u);
      DmaAdapter->DmaOperations->PutDmaAdapter(DmaAdapter);
      if ( v25 != 2 )
        KeLowerIrql(v25);
    }
    *((_QWORD *)MiniportAdapterHandle + 63) = 0LL;
    ExFreePoolWithTag((PVOID)v12, 0);
  }
  v9 = -1073741670;
LABEL_22:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x26u,
      (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
      (char)MiniportAdapterHandle,
      v9);
  return v9;
}
