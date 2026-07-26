/*
 * XREFs of ?ndisPowerDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0015D00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0008318 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C160 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000CB40 (WPP_RECORDER_SF_qq.c)
 *     ?ndisSetPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0015ED8 (-ndisSetPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisQueuePowerIrp@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C008289C (-ndisQueuePowerIrp@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisQueryPower@@_Y2PAGENPNP@@AJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C014798C (-ndisQueryPower@@_Y2PAGENPNP@@AJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisPowerDispatch(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  void *DeviceExtension; // rdi
  char v4; // si
  _DEVICE_OBJECT *v5; // rbp
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  NTSTATUS Power; // eax
  unsigned int v8; // esi
  _IO_STACK_LOCATION *v10; // rax
  _IO_STACK_LOCATION *v11; // rax
  _IO_STACK_LOCATION *v12; // rax
  char v13[8]; // [rsp+30h] [rbp-28h]

  DeviceExtension = a1->DeviceExtension;
  v4 = (char)a1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x6Cu,
      (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
      (char)DeviceExtension,
      a2);
  if ( *(_BYTE *)DeviceExtension != 17 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x6Du,
        (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
        v4,
        a2);
    v8 = -1073741808;
    a2->IoStatus.Status = -1073741808;
    goto LABEL_26;
  }
  v5 = (_DEVICE_OBJECT *)*((_QWORD *)DeviceExtension + 480);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x6Eu,
      (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
      DeviceExtension);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  switch ( CurrentStackLocation->MinorFunction )
  {
    case 0u:
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x70u,
          (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
          DeviceExtension);
      CurrentStackLocation->Parameters.Read.Length = *((_DWORD *)DeviceExtension + 333);
      v11 = a2->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v11[-1].MajorFunction = *(_OWORD *)&v11->MajorFunction;
      *(_OWORD *)&v11[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v11->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)&v11[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&v11->Parameters.ReadWriteConfig.Length;
      v11[-1].FileObject = v11->FileObject;
      v11[-1].Control = 0;
      v12 = a2->Tail.Overlay.CurrentStackLocation;
      v12[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ndisWaitWakeIoCompletion;
      v12[-1].Context = DeviceExtension;
      v12[-1].Control = -32;
      goto LABEL_36;
    case 1u:
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x6Fu,
          (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
          DeviceExtension);
      v10 = a2->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v10[-1].MajorFunction = *(_OWORD *)&v10->MajorFunction;
      *(_OWORD *)&v10[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v10->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)&v10[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&v10->Parameters.ReadWriteConfig.Length;
      v10[-1].FileObject = v10->FileObject;
      v10[-1].Control = 0;
      v8 = IoSynchronousCallDriver(v5, a2);
      a2->IoStatus.Status = v8;
LABEL_26:
      IofCompleteRequest(a2, 0);
      goto LABEL_14;
    case 2u:
      if ( !KeGetCurrentIrql() )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0xEu,
            0x72u,
            (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
            DeviceExtension);
        Power = ndisSetPower(a2, CurrentStackLocation, (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
        goto LABEL_13;
      }
      goto LABEL_30;
  }
  if ( CurrentStackLocation->MinorFunction != 3 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v13 = CurrentStackLocation->MinorFunction;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x73u,
        (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
        (char)DeviceExtension,
        *(_QWORD *)v13);
    }
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
LABEL_36:
    Power = IofCallDriver(v5, a2);
LABEL_13:
    v8 = Power;
    goto LABEL_14;
  }
  if ( !KeGetCurrentIrql() )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x71u,
        (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
        DeviceExtension);
    Power = ndisQueryPower(a2, CurrentStackLocation, (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
    goto LABEL_13;
  }
LABEL_30:
  ndisQueuePowerIrp((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension, a2);
  v8 = 259;
LABEL_14:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v13 = v8;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x74u,
      (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
      (char)DeviceExtension,
      *(_QWORD *)v13);
  }
  return v8;
}
