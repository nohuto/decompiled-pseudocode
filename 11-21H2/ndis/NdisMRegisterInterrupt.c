/*
 * XREFs of NdisMRegisterInterrupt @ 0x1C00C29E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qDL @ 0x1C0018A58 (WPP_RECORDER_SF_qDL.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00561C8 (WPP_RECORDER_SF_DD_ea_1C00561C8.c)
 *     ?ndisTranslateResources@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HT_LARGE_INTEGER@@PEAT2@PEAPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z @ 0x1C0057408 (-ndisTranslateResources@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HT_LARGE_INTEGER@@PEAT2@PEAPEAU_CM_PARTIAL.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x1C005F2C0 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 */

NDIS_STATUS __stdcall NdisMRegisterInterrupt(
        PNDIS_MINIPORT_INTERRUPT Interrupt,
        NDIS_HANDLE MiniportAdapterHandle,
        UINT InterruptVector,
        UINT InterruptLevel,
        BOOLEAN RequestIsr,
        BOOLEAN SharedInterrupt,
        NDIS_INTERRUPT_MODE InterruptMode)
{
  union _LARGE_INTEGER v7; // r15
  unsigned __int8 Class; // r14
  int v11; // edx
  NDIS_STATUS v12; // ebx
  BOOLEAN v13; // r12
  void (__fastcall *v14)(void *); // rcx
  __int64 v15; // rcx
  KAFFINITY Affinity; // rcx
  unsigned __int16 Flags; // dx
  LONG HighPart; // r13d
  NTSTATUS v19; // eax
  __int64 v20; // rcx
  char v21; // r12
  __int64 v23; // [rsp+38h] [rbp-61h]
  __int64 v24; // [rsp+40h] [rbp-59h]
  union _LARGE_INTEGER v25; // [rsp+58h] [rbp-41h] BYREF
  _IO_CONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+68h] [rbp-31h] BYREF
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v27; // [rsp+F0h] [rbp+57h] BYREF

  v7.QuadPart = InterruptLevel;
  v27 = 0LL;
  v25.QuadPart = 0LL;
  Class = 0;
  memset(&Parameters, 0, sizeof(Parameters));
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xAu,
      (struct _GUID *)&WPP_b57355dc9ebc301c1304e623da4026ea_Traceguids,
      (char)MiniportAdapterHandle,
      v7.LowPart);
  if ( *((_BYTE *)MiniportAdapterHandle + 32) >= 6u )
  {
    v12 = -1071448020;
LABEL_22:
    _InterlockedDecrement((volatile signed __int32 *)MiniportAdapterHandle + 476);
    *((_QWORD *)MiniportAdapterHandle + 14) = 0LL;
    goto LABEL_23;
  }
  if ( (*((_DWORD *)MiniportAdapterHandle + 922) & 2) != 0 )
  {
    v12 = -1073741670;
    goto LABEL_22;
  }
  _InterlockedIncrement((volatile signed __int32 *)MiniportAdapterHandle + 476);
  v13 = SharedInterrupt;
  Interrupt->Reserved = (void *)*((_QWORD *)MiniportAdapterHandle + 3);
  *((_QWORD *)MiniportAdapterHandle + 14) = Interrupt;
  Interrupt->DpcCount = 0;
  Interrupt->IsDeregistered = 0;
  Interrupt->Miniport = (_NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle;
  Interrupt->MiniportIsr = *(void (__fastcall **)(unsigned __int8 *, unsigned __int8 *, void *))(*((_QWORD *)MiniportAdapterHandle
                                                                                                 + 470)
                                                                                               + 168LL);
  v14 = *(void (__fastcall **)(void *))(*((_QWORD *)MiniportAdapterHandle + 470) + 152LL);
  Interrupt->IsrRequested = RequestIsr;
  Interrupt->MiniportDpc = v14;
  Interrupt->SharedInterrupt = v13;
  if ( !v13 )
    *((_DWORD *)MiniportAdapterHandle + 468) |= 0x4000000u;
  KeInitializeEvent(&Interrupt->DpcsCompletedEvent, SynchronizationEvent, 0);
  KeInitializeDpc(&Interrupt->InterruptDpc, (PKDEFERRED_ROUTINE)ndis5InterruptDpc, Interrupt);
  KeSetImportanceDpc(&Interrupt->InterruptDpc, MediumImportance);
  *((_DWORD *)MiniportAdapterHandle + 30) &= ~0x20u;
  *((_QWORD *)MiniportAdapterHandle + 429) = ndis5QueuedMiniportDpcWorkItem;
  *((_QWORD *)MiniportAdapterHandle + 430) = MiniportAdapterHandle;
  *((_QWORD *)MiniportAdapterHandle + 427) = 0LL;
  v12 = ndisTranslateResources((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, 2, v7, &v25, &v27);
  if ( v12 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v23) = v7.LowPart;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0xBu,
        (struct _GUID *)&WPP_b57355dc9ebc301c1304e623da4026ea_Traceguids,
        (char)MiniportAdapterHandle,
        v23);
    }
    if ( (byte_1C00EE581 & 1) != 0 )
      McTemplateK0jqxddq_EtwWriteTransfer(
        v15,
        &RegisterInterruptFailed,
        (const GUID *)((char *)MiniportAdapterHandle + 4008),
        (__int64)MiniportAdapterHandle + 4008,
        *((_DWORD *)MiniportAdapterHandle + 1014),
        *((_QWORD *)MiniportAdapterHandle + 503),
        v12,
        1,
        0);
    v12 = -1073741823;
    goto LABEL_22;
  }
  if ( v27 )
  {
    Affinity = v27->u.Interrupt.Affinity;
    Flags = v27->Flags;
    Class = v27->u.Connection.Class;
    HighPart = v27->u.Generic.Start.HighPart;
    Parameters.FullySpecified.PhysicalDeviceObject = (PDEVICE_OBJECT)*((_QWORD *)MiniportAdapterHandle + 479);
    Parameters.FullySpecified.ServiceRoutine = (PKSERVICE_ROUTINE)ndisMIsr;
    Parameters.FullySpecified.ProcessorEnableMask = Affinity;
    *((_DWORD *)MiniportAdapterHandle + 31) |= 0x80000000;
    Parameters.FullySpecified.InterruptMode = Flags != 0;
    Parameters.Version = 1;
    Parameters.FullySpecified.InterruptObject = &Interrupt->InterruptObject;
    *(_OWORD *)&Parameters.MessageBased.ServiceContext = (unsigned __int64)Interrupt;
    Parameters.FullySpecified.Vector = HighPart;
    Parameters.FullySpecified.Irql = Class;
    *(_WORD *)&Parameters.MessageBased.SynchronizeIrql = Class;
    Parameters.FullySpecified.ShareVector = v13;
    v19 = IoConnectInterruptEx(&Parameters);
    v21 = v19;
    if ( v19 < 0 )
    {
      v12 = -1073741823;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v23) = HighPart;
        WPP_RECORDER_SF_DD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          1u,
          0xCu,
          (struct _GUID *)&WPP_b57355dc9ebc301c1304e623da4026ea_Traceguids,
          Class,
          v23);
      }
      if ( (byte_1C00EE581 & 1) != 0 )
        McTemplateK0jqxddq_EtwWriteTransfer(
          v20,
          &RegisterInterruptFailed,
          (const GUID *)((char *)MiniportAdapterHandle + 4008),
          (__int64)MiniportAdapterHandle + 4008,
          *((_DWORD *)MiniportAdapterHandle + 1014),
          *((_QWORD *)MiniportAdapterHandle + 503),
          v21,
          2,
          Class);
      Interrupt->InterruptObject = 0LL;
      goto LABEL_22;
    }
  }
LABEL_23:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v24) = v12;
    WPP_RECORDER_SF_qDL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      1u,
      0xDu,
      (struct _GUID *)&WPP_b57355dc9ebc301c1304e623da4026ea_Traceguids,
      (char)MiniportAdapterHandle,
      Class,
      v24);
  }
  return v12;
}
