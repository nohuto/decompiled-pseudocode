/*
 * XREFs of ?ndisGenericWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C007C7A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     ?ndisRequestDevicePowerD0@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0013E88 (-ndisRequestDevicePowerD0@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1C0014380 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C0016E68 (WPP_RECORDER_SF_qqd.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001E848 (WPP_RECORDER_SF_qD.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x1C005F2C0 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     ?ndisCompleteWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C007C72C (-ndisCompleteWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
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
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (char)Context,
      (char)Context->WaitWakeIrp,
      v8);
  }
  if ( Status < 0 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v7) = Status;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x1Eu,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        (char)Context,
        v7);
    }
    if ( (byte_1C00EE582 & 0x40) != 0 )
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
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        Context);
    if ( (byte_1C00EE581 & 8) != 0 )
      McTemplateK0jqxd_EtwWriteTransfer();
    if ( (Context->PnPFlags & 0x800) != 0 || (unsigned int)(Context->CurrentDevicePowerState - 2) > 2 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x1Du,
          (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
          Context);
      if ( byte_1C00EE583 < 0 )
        McTemplateK0jqxd_EtwWriteTransfer();
    }
    else
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x1Cu,
          (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
          Context);
      if ( (byte_1C00EE581 & 8) != 0 )
        McTemplateK0jqxd_EtwWriteTransfer();
      ndisRequestDevicePowerD0(Context, NdisMEventD0_D3DWake);
    }
  }
  ndisCompleteWaitWake(Context);
}
