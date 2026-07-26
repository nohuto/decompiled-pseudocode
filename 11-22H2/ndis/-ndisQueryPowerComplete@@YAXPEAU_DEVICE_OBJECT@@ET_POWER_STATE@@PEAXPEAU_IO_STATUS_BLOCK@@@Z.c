/*
 * XREFs of ?ndisQueryPowerComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C00180C0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0jqxq_EtwWriteTransfer @ 0x1C0006968 (McTemplateK0jqxq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C160 (WPP_RECORDER_SF_qL.c)
 */

void __fastcall ndisQueryPowerComplete(
        __int64 DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        char *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  int Status; // esi
  _IRP *v7; // rbx
  __int64 v8; // [rsp+30h] [rbp-18h]
  int v9; // [rsp+30h] [rbp-18h]

  Status = IoStatus->Status;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v9 = IoStatus->Status;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x1Fu,
      (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
      (char)Context,
      v9);
  }
  if ( Status < 0 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v8) = IoStatus->Status;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x20u,
        (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
        (char)Context,
        v8);
    }
    if ( (byte_1C00F7641 & 8) != 0 )
      McTemplateK0jqxq_EtwWriteTransfer(
        DeviceObject,
        (__int64)&QueryPowerComplete,
        (__int64)(Context + 4008),
        (__int64)(Context + 4008),
        *((_DWORD *)Context + 1014),
        *((_QWORD *)Context + 503),
        IoStatus->Status);
  }
  v7 = (_IRP *)*((_QWORD *)Context + 97);
  v7->IoStatus.Status = Status;
  IofCompleteRequest(v7, 0);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(Context + 4120), v7, 0x20u);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x21u,
      (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
      Context);
}
