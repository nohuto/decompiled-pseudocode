/*
 * XREFs of ?ndisGenericWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C0081CA0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0jqxq_EtwWriteTransfer @ 0x1C0006968 (McTemplateK0jqxq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C00170C4 (WPP_RECORDER_SF_qqd_ea_1C00170C4.c)
 *     ?ndisRequestDevicePowerD0@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C00179B0 (-ndisRequestDevicePowerD0@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     WPP_RECORDER_SF_qd @ 0x1C00200C4 (WPP_RECORDER_SF_qd_ea_1C00200C4.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x1C00643A0 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     ?ndisCompleteWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0081C2C (-ndisCompleteWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisGenericWaitWakeCallback(
        __int64 DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        struct _NDIS_MINIPORT_BLOCK *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  int Status; // edi
  __int64 v7; // [rsp+30h] [rbp-28h]
  int v8; // [rsp+38h] [rbp-20h]

  Status = IoStatus->Status;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v8 = IoStatus->Status;
    WPP_RECORDER_SF_qqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x1Au,
      (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
      (char)Context,
      (char)Context->WaitWakeIrp,
      v8);
  }
  if ( Status < 0 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v7) = Status;
      WPP_RECORDER_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x1Eu,
        (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
        (char)Context,
        v7);
    }
    if ( (byte_1C00F7642 & 0x40) != 0 )
      McTemplateK0jqxddq_EtwWriteTransfer(
        DeviceObject,
        &WaitWakeIrpFailed,
        &Context->InterfaceGuid,
        (__int64)&Context->InterfaceGuid,
        Context->IfIndex,
        Context->NetLuid.Value,
        Status,
        1,
        0);
  }
  else
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x1Bu,
        (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
        Context);
    if ( (byte_1C00F7641 & 8) != 0 )
      McTemplateK0jqxq_EtwWriteTransfer(
        DeviceObject,
        (__int64)&WaitWakeComplete,
        (__int64)&Context->InterfaceGuid,
        (__int64)&Context->InterfaceGuid,
        Context->IfIndex,
        Context->NetLuid.Value,
        1);
    if ( (Context->PnPFlags & 0x800) != 0 || (unsigned int)(Context->CurrentDevicePowerState - 2) > 2 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x1Du,
          (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
          Context);
      if ( byte_1C00F7643 < 0 )
        McTemplateK0jqxq_EtwWriteTransfer(
          DeviceObject,
          (__int64)&WakeByMiniport,
          (__int64)&Context->InterfaceGuid,
          (__int64)&Context->InterfaceGuid,
          Context->IfIndex,
          Context->NetLuid.Value,
          1);
    }
    else
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x1Cu,
          (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
          Context);
      if ( (byte_1C00F7641 & 8) != 0 )
        McTemplateK0jqxq_EtwWriteTransfer(
          DeviceObject,
          (__int64)&MiniportPoweringUp,
          (__int64)&Context->InterfaceGuid,
          (__int64)&Context->InterfaceGuid,
          Context->IfIndex,
          Context->NetLuid.Value,
          1);
      ndisRequestDevicePowerD0(Context, NdisMEventD0_D3DWake);
    }
  }
  ndisCompleteWaitWake(Context);
}
