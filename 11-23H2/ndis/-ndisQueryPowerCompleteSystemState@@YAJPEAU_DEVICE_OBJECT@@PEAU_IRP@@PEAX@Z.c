/*
 * XREFs of ?ndisQueryPowerCompleteSystemState@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0017F50
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0jqxq_EtwWriteTransfer @ 0x1C0006AF8 (McTemplateK0jqxq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C2F0 (WPP_RECORDER_SF_qL.c)
 */

__int64 __fastcall ndisQueryPowerCompleteSystemState(struct _DEVICE_OBJECT *a1, struct _IRP *a2, unsigned int *a3)
{
  _IO_STATUS_BLOCK *p_IoStatus; // rdi
  NTSTATUS v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // esi
  __int64 v10; // [rsp+30h] [rbp-28h]
  char v11[4]; // [rsp+30h] [rbp-28h]

  p_IoStatus = &a2->IoStatus;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v11 = p_IoStatus->Status;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x22u,
      (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
      (char)a3,
      *(_DWORD *)v11);
  }
  if ( p_IoStatus->Status < 0 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v10) = p_IoStatus->Status;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x23u,
        (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
        (char)a3,
        v10);
    }
    if ( (byte_1C00F7641 & 8) != 0 )
      McTemplateK0jqxq_EtwWriteTransfer(
        a3[1014],
        (__int64)&QueryPowerCompleteSystemState,
        (__int64)(a3 + 1002),
        (__int64)(a3 + 1002),
        a3[1014],
        *((_QWORD *)a3 + 503),
        p_IoStatus->Status);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(a3 + 1030), a2, 0x20u);
    return (unsigned int)p_IoStatus->Status;
  }
  else
  {
    v6 = PoRequestPowerIrp(*((PDEVICE_OBJECT *)a3 + 479), 3u, (POWER_STATE)a3[786], ndisQueryPowerComplete, a3, 0LL);
    v8 = v6;
    if ( v6 < 0 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v10) = v6;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x24u,
          (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
          (char)a3,
          v10);
      }
      if ( (byte_1C00F7641 & 8) != 0 )
        McTemplateK0jqxq_EtwWriteTransfer(
          v7,
          (__int64)&QueryPowerCompleteSystemStatePoRequest,
          (__int64)(a3 + 1002),
          (__int64)(a3 + 1002),
          a3[1014],
          *((_QWORD *)a3 + 503),
          v8);
      p_IoStatus->Status = v8;
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(a3 + 1030), a2, 0x20u);
    }
    else
    {
      *((_QWORD *)a3 + 97) = a2;
      v8 = -1073741802;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x25u,
        (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
        a3);
    return v8;
  }
}
