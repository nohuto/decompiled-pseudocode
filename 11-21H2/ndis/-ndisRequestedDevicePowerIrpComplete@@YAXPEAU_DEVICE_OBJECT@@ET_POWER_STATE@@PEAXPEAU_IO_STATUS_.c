/*
 * XREFs of ?ndisRequestedDevicePowerIrpComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C00178F0
 * Callers:
 *     ?ndisSetSystemPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0014C04 (-ndisSetSystemPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     McTemplateK0qq_EtwWriteTransfer @ 0x1C00396A6 (McTemplateK0qq_EtwWriteTransfer.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x1C005912C (McTemplateK0qqq_EtwWriteTransfer.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C010C274 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 */

void __fastcall ndisRequestedDevicePowerIrpComplete(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        _IO_STATUS_BLOCK *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  unsigned __int64 Information; // rbp
  __int64 v8; // r14
  unsigned __int64 v9; // rax
  int v10; // ecx
  char v11[4]; // [rsp+30h] [rbp-28h]

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x38u,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      DeviceObject);
  Information = Context[11].Information;
  v8 = *(_QWORD *)(*(_QWORD *)(Information + 40) + 64LL);
  Context[3] = *IoStatus;
  if ( IoStatus->Status < 0 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        0x3Au,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        DeviceObject);
    Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(v8 + 5232);
    if ( (byte_1C00EE582 & 0x40) != 0 )
      McTemplateK0qqq_EtwWriteTransfer(
        v10,
        (unsigned int)&IrpSetPowerFailed,
        (unsigned int)&NDIS_PROVIDER_ID,
        IoStatus->Status,
        1,
        (char)DeviceObject);
    IofCompleteRequest((PIRP)Context, 0);
  }
  else
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v11 = *(_DWORD *)(Information + 24);
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x39u,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        (char)DeviceObject,
        *(_DWORD *)v11);
    }
    if ( (byte_1C00EE581 & 8) != 0 )
      McTemplateK0qq_EtwWriteTransfer(
        DeviceObject,
        &PowerIrpComplete,
        &NDIS_PROVIDER_ID,
        (unsigned int)DeviceObject,
        *(_DWORD *)(Information + 24));
    PoSetPowerState(*(PDEVICE_OBJECT *)(Information + 40), SystemPowerState, *(POWER_STATE *)(Information + 24));
    v9 = Context[11].Information;
    *(_OWORD *)(v9 - 72) = *(_OWORD *)v9;
    *(_OWORD *)(v9 - 56) = *(_OWORD *)(v9 + 16);
    *(_OWORD *)(v9 - 40) = *(_OWORD *)(v9 + 32);
    *(_QWORD *)(v9 - 24) = *(_QWORD *)(v9 + 48);
    *(_BYTE *)(v9 - 69) = 0;
    IofCallDriver(*(PDEVICE_OBJECT *)(v8 + 3840), (PIRP)Context);
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x3Bu,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      DeviceObject);
}
