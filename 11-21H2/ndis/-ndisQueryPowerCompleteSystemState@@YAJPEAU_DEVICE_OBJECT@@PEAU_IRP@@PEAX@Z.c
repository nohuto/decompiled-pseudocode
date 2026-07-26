/*
 * XREFs of ?ndisQueryPowerCompleteSystemState@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0017B00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1C0014380 (McTemplateK0jqxd_EtwWriteTransfer.c)
 */

__int64 __fastcall ndisQueryPowerCompleteSystemState(struct _DEVICE_OBJECT *a1, struct _IRP *a2, char *a3)
{
  NTSTATUS v5; // eax
  unsigned int v6; // esi
  __int64 v8; // [rsp+30h] [rbp-18h]
  int Status; // [rsp+30h] [rbp-18h]

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    Status = a2->IoStatus.Status;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x22u,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (char)a3,
      Status);
  }
  if ( a2->IoStatus.Status < 0 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v8) = a2->IoStatus.Status;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x23u,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        (char)a3,
        v8);
    }
    if ( (byte_1C00EE581 & 8) != 0 )
      McTemplateK0jqxd_EtwWriteTransfer();
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(a3 + 4120), a2, 0x20u);
    return (unsigned int)a2->IoStatus.Status;
  }
  else
  {
    v5 = PoRequestPowerIrp(
           *((PDEVICE_OBJECT *)a3 + 479),
           3u,
           *(POWER_STATE *)(a3 + 3144),
           ndisQueryPowerComplete,
           a3,
           0LL);
    v6 = v5;
    if ( v5 < 0 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v8) = v5;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x24u,
          (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
          (char)a3,
          v8);
      }
      if ( (byte_1C00EE581 & 8) != 0 )
        McTemplateK0jqxd_EtwWriteTransfer();
      a2->IoStatus.Status = v6;
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(a3 + 4120), a2, 0x20u);
    }
    else
    {
      *((_QWORD *)a3 + 97) = a2;
      v6 = -1073741802;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x25u,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        a3);
    return v6;
  }
}
