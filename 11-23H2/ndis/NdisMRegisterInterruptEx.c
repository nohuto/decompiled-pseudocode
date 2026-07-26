/*
 * XREFs of NdisMRegisterInterruptEx @ 0x1C0155390
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C000301C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0003060 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C2F0 (WPP_RECORDER_SF_qL.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C001C58C (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     memmove @ 0x1C0038400 (memmove.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     GetMsgDpc @ 0x1C006439C (GetMsgDpc.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x1C00643C0 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     NdisMDeregisterInterruptEx @ 0x1C01551E0 (NdisMDeregisterInterruptEx.c)
 */

NDIS_STATUS __stdcall NdisMRegisterInterruptEx(
        NDIS_HANDLE MiniportAdapterHandle,
        NDIS_HANDLE MiniportInterruptContext,
        PNDIS_MINIPORT_INTERRUPT_CHARACTERISTICS MiniportInterruptCharacteristics,
        PNDIS_HANDLE NdisInterruptHandle)
{
  __int64 v4; // rdi
  NDIS_STATUS v9; // r14d
  __int64 v10; // rcx
  unsigned __int64 v11; // r13
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 Pool2; // rax
  __int64 v15; // rax
  KIRQL v16; // dl
  unsigned __int8 (__fastcall *MessageInterruptHandler)(void *, unsigned int, unsigned __int8 *, unsigned int *); // rax
  unsigned __int64 v18; // r13
  ULONG v19; // ebx
  __int64 v20; // rcx
  unsigned __int64 v21; // r12
  unsigned __int64 v22; // rax
  unsigned int v23; // r12d
  unsigned __int64 v24; // r13
  unsigned int i; // ebx
  struct _KDPC *MsgDpc; // rax
  struct _KDPC *v27; // rax
  struct _KDPC *v28; // rax
  struct _KDPC *v29; // rax
  struct _KDPC *v30; // rax
  unsigned int v31; // r12d
  unsigned __int64 v32; // rbx
  __int64 v33; // rax
  _QWORD *v34; // rcx
  __int64 v35; // r12
  NTSTATUS v36; // eax
  __int64 v37; // r13
  __int64 v38; // r12
  __int64 v39; // rax
  _IO_INTERRUPT_MESSAGE_INFO *v40; // rbx
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int64 *j; // rcx
  __int64 v44; // rax
  KIRQL v45; // dl
  __int64 v46; // rcx
  __int64 v48; // [rsp+30h] [rbp-59h]
  _PROCESSOR_NUMBER v49[2]; // [rsp+50h] [rbp-39h] BYREF
  unsigned __int64 v50; // [rsp+58h] [rbp-31h]
  struct _IO_CONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+60h] [rbp-29h] BYREF
  KIRQL NewIrql; // [rsp+F0h] [rbp+67h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+100h] [rbp+77h] BYREF
  PNDIS_HANDLE v54; // [rsp+108h] [rbp+7Fh]

  v54 = NdisInterruptHandle;
  v4 = 0LL;
  NewIrql = 0;
  v9 = 0;
  memset(&Parameters, 0, sizeof(Parameters));
  v10 = *((unsigned int *)MiniportAdapterHandle + 853);
  v11 = (unsigned __int64)ndisMaxNumberOfProcessors << 6;
  v12 = (v10 * (ndisMaxNumberOfProcessors + 1)) << 6;
  *(_QWORD *)&v49[0].Group = v12;
  if ( !(_DWORD)v10 )
    LODWORD(v10) = 1;
  v13 = 80 * ndisMaxNumberOfProcessors * (unsigned __int64)(unsigned int)v10;
  v50 = v13;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xAu,
      (struct _GUID *)&WPP_ad107ce1d5553708f9afef3ea157b65d_Traceguids,
      MiniportAdapterHandle);
    v12 = *(_QWORD *)&v49[0].Group;
    v13 = v50;
  }
  *NdisInterruptHandle = 0LL;
  MiniportInterruptCharacteristics->MessageInfoTable = 0LL;
  MiniportInterruptCharacteristics->InterruptType = NDIS_CONNECT_LINE_BASED;
  if ( (*((_DWORD *)MiniportAdapterHandle + 922) & 2) != 0
    || (Pool2 = ExAllocatePool2(64LL, v13 + v12 + v11 + 232, 1835091022), (v4 = Pool2) == 0) )
  {
    v9 = -1073741670;
    goto LABEL_42;
  }
  *(_QWORD *)(Pool2 + 8) = MiniportInterruptContext;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, &NewIrql);
  v15 = *((_QWORD *)MiniportAdapterHandle + 98);
  *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
  v16 = NewIrql;
  *(_QWORD *)(v4 + 160) = v15;
  *((_QWORD *)MiniportAdapterHandle + 98) = v4;
  KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, v16);
  _InterlockedAdd((volatile signed __int32 *)MiniportAdapterHandle + 476, 1u);
  *(_QWORD *)(v4 + 16) = MiniportInterruptCharacteristics->InterruptHandler;
  *(_QWORD *)(v4 + 24) = MiniportInterruptCharacteristics->InterruptDpcHandler;
  MessageInterruptHandler = MiniportInterruptCharacteristics->MessageInterruptHandler;
  *(_DWORD *)(v4 + 104) = 0;
  *(_DWORD *)v4 = 15204614;
  *(_BYTE *)(v4 + 4) = 0;
  *(_QWORD *)(v4 + 96) = MiniportAdapterHandle;
  *(_WORD *)(v4 + 152) = 257;
  if ( MessageInterruptHandler )
  {
    *(_QWORD *)(v4 + 176) = MessageInterruptHandler;
    *(_QWORD *)(v4 + 184) = MiniportInterruptCharacteristics->MessageInterruptDpcHandler;
    *(_BYTE *)(v4 + 192) = 1;
  }
  KeInitializeEvent((PRKEVENT)(v4 + 128), SynchronizationEvent, 0);
  KeInitializeDpc((PRKDPC)(v4 + 32), (PKDEFERRED_ROUTINE)ndisInterruptDpc, (PVOID)v4);
  KeSetImportanceDpc((PRKDPC)(v4 + 32), MediumImportance);
  v18 = v11 + 232;
  v19 = 0;
  for ( *(_QWORD *)(v4 + 112) = v4 + 232; v19 < ndisMaxNumberOfProcessors; ++v19 )
  {
    v20 = *(_QWORD *)(v4 + 112);
    ProcNumber = 0;
    v21 = (unsigned __int64)v19 << 6;
    KeInitializeDpc((PRKDPC)(v21 + v20), (PKDEFERRED_ROUTINE)ndisInterruptDpc, (PVOID)v4);
    KeSetImportanceDpc((PRKDPC)(v21 + *(_QWORD *)(v4 + 112)), MediumHighImportance);
    if ( KeGetProcessorNumberFromIndex(v19, &ProcNumber) >= 0 )
      KeSetTargetProcessorDpcEx((PKDPC)(v21 + *(_QWORD *)(v4 + 112)), &ProcNumber);
  }
  v22 = v4 + v18;
  v23 = 0;
  v24 = *(_QWORD *)&v49[0].Group + v18;
  for ( *(_QWORD *)(v4 + 224) = v22; v23 < *((_DWORD *)MiniportAdapterHandle + 853); ++v23 )
  {
    for ( i = 0; i < ndisMaxNumberOfProcessors; ++i )
    {
      v49[0] = 0;
      MsgDpc = (struct _KDPC *)GetMsgDpc(v4, v23, i);
      KeInitializeDpc(MsgDpc, (PKDEFERRED_ROUTINE)ndisInterruptDpc, (PVOID)v4);
      v27 = (struct _KDPC *)GetMsgDpc(v4, v23, i);
      KeSetImportanceDpc(v27, MediumHighImportance);
      if ( KeGetProcessorNumberFromIndex(i, v49) >= 0 )
      {
        v28 = (struct _KDPC *)GetMsgDpc(v4, v23, i);
        KeSetTargetProcessorDpcEx(v28, v49);
      }
    }
    v29 = (struct _KDPC *)GetMsgDpc(v4, v23, i);
    KeInitializeDpc(v29, (PKDEFERRED_ROUTINE)ndisInterruptDpc, (PVOID)v4);
    v30 = (struct _KDPC *)GetMsgDpc(v4, v23, i);
    KeSetImportanceDpc(v30, MediumHighImportance);
  }
  *(_QWORD *)(v4 + 216) = v4 + v24;
  v31 = 0;
  v32 = v50 / 0x50;
  if ( v50 / 0x50 )
  {
    v33 = 0LL;
    do
    {
      v34 = (_QWORD *)(80 * v33 + *(_QWORD *)(v4 + 216));
      v34[2] = ndisQueuedMiniportDpcWorkItem;
      v34[3] = v34;
      *v34 = 0LL;
      KeInitializeSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v4 + 216) + 80 * v33 + 72));
      v33 = ++v31;
    }
    while ( v31 < v32 );
  }
  *((_DWORD *)MiniportAdapterHandle + 30) &= ~0x20u;
  v35 = v4 + 120;
  Parameters.FullySpecified.PhysicalDeviceObject = (PDEVICE_OBJECT)*((_QWORD *)MiniportAdapterHandle + 479);
  Parameters.FullySpecified.InterruptObject = (PKINTERRUPT *)(v4 + 120);
  Parameters.FullySpecified.ServiceContext = (PVOID)v4;
  if ( *(_BYTE *)(v4 + 192) )
  {
    Parameters.Version = 3;
    Parameters.FullySpecified.ServiceRoutine = (PKSERVICE_ROUTINE)ndisMiniportMessageIsr;
    Parameters.MessageBased.FallBackServiceRoutine = (PKSERVICE_ROUTINE)ndisMiniportIsr;
    if ( MiniportInterruptCharacteristics->MsiSyncWithAllMessages )
    {
      KeInitializeSpinLock((PKSPIN_LOCK)(v4 + 200));
      Parameters.FullySpecified.SpinLock = (PKSPIN_LOCK)(v4 + 200);
    }
  }
  else
  {
    Parameters.Version = 2;
    Parameters.FullySpecified.ServiceRoutine = (PKSERVICE_ROUTINE)ndisMiniportIsr;
    Parameters.FullySpecified.SpinLock = 0LL;
  }
  *(_WORD *)&Parameters.MessageBased.SynchronizeIrql = 0;
  v36 = IoConnectInterruptEx(&Parameters);
  if ( v36 >= 0 )
  {
    if ( Parameters.Version == 3 )
    {
      v37 = *(_QWORD *)v35;
      v38 = *(unsigned int *)(*(_QWORD *)v35 + 4LL);
      *(_BYTE *)(v4 + 193) = 1;
      *(_DWORD *)(v4 + 168) = 1;
      v39 = ExAllocatePool2(66LL, (unsigned int)(48 * (v38 - 1) + 56), 1835091022);
      v40 = (_IO_INTERRUPT_MESSAGE_INFO *)v39;
      if ( !v39 )
      {
        v9 = -1073741670;
        NdisMDeregisterInterruptEx((NDIS_HANDLE)v4);
        goto LABEL_42;
      }
      v41 = *(_OWORD *)(v37 + 16);
      *(_OWORD *)v39 = *(_OWORD *)v37;
      v42 = *(_OWORD *)(v37 + 32);
      *(_OWORD *)(v39 + 16) = v41;
      *(_QWORD *)&v41 = *(_QWORD *)(v37 + 48);
      *(_OWORD *)(v39 + 32) = v42;
      *(_QWORD *)(v39 + 48) = v41;
      if ( (_DWORD)v38 )
        memmove((void *)(v39 + 8), (const void *)(v37 + 8), 48 * v38);
      MiniportInterruptCharacteristics->InterruptType = NDIS_CONNECT_MESSAGE_BASED;
      MiniportInterruptCharacteristics->MessageInfoTable = v40;
      *(_QWORD *)(v4 + 208) = v40;
      *(_DWORD *)(v4 + 168) = 1;
      if ( (unsigned int)v38 > 1 )
      {
        *((_BYTE *)MiniportAdapterHandle + 1992) = 1;
        if ( *((_WORD *)MiniportAdapterHandle + 1347) )
        {
          *((_DWORD *)MiniportAdapterHandle + 674) |= 0x8000000u;
          *((_DWORD *)MiniportAdapterHandle + 777) |= 0x8000000u;
        }
      }
    }
    if ( Parameters.Version == 2 )
    {
      MiniportInterruptCharacteristics->InterruptType = NDIS_CONNECT_LINE_BASED;
      MiniportInterruptCharacteristics->MessageInfoTable = 0LL;
      *(_DWORD *)(v4 + 168) = 0;
    }
    *v54 = (PVOID)v4;
    goto LABEL_50;
  }
  v9 = -1073741823;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      1u,
      0xBu,
      (struct _GUID *)&WPP_ad107ce1d5553708f9afef3ea157b65d_Traceguids,
      (char)MiniportAdapterHandle,
      v36);
  *(_QWORD *)v35 = 0LL;
LABEL_42:
  _InterlockedDecrement((volatile signed __int32 *)MiniportAdapterHandle + 476);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, &NewIrql);
  for ( j = (__int64 *)((char *)MiniportAdapterHandle + 784); ; j = (__int64 *)(v44 + 160) )
  {
    v44 = *j;
    if ( !*j )
      break;
    if ( v44 == v4 )
    {
      *j = *(_QWORD *)(v4 + 160);
      break;
    }
  }
  v45 = NewIrql;
  *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, v45);
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( (byte_1C00F7641 & 1) != 0 )
    McTemplateK0jqxddq_EtwWriteTransfer(
      v46,
      &RegisterInterruptFailed,
      (const GUID *)((char *)MiniportAdapterHandle + 4008),
      (__int64)MiniportAdapterHandle + 4008,
      *((_DWORD *)MiniportAdapterHandle + 1014),
      *((_QWORD *)MiniportAdapterHandle + 503),
      v9,
      3,
      0);
LABEL_50:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v48) = v9;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xCu,
      (struct _GUID *)&WPP_ad107ce1d5553708f9afef3ea157b65d_Traceguids,
      (char)MiniportAdapterHandle,
      v48);
  }
  return v9;
}
