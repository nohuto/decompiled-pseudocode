/*
 * XREFs of ?ndisNotifyWmiAdapterArrival@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0034820
 * Callers:
 *     NdisWdfNotifyWmiAdapterArrival @ 0x1C0060660 (NdisWdfNotifyWmiAdapterArrival.c)
 *     ndisMiniportDeviceReadyNotification @ 0x1C0120A90 (ndisMiniportDeviceReadyNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C2F0 (WPP_RECORDER_SF_qL.c)
 *     ?ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1C001C840 (-ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE.c)
 *     memmove @ 0x1C0038400 (memmove.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x1C005E39C (McTemplateK0qqq_EtwWriteTransfer.c)
 */

void __fastcall ndisNotifyWmiAdapterArrival(struct _NDIS_MINIPORT_BLOCK *a1)
{
  int Length; // r8d
  _UNICODE_STRING *pAdapterInstanceName; // rdx
  PVOID v4; // rdi
  unsigned __int16 *v5; // rcx
  NTSTATUS v6; // eax
  NTSTATUS v7; // esi
  unsigned int *v8; // rcx
  char v9[4]; // [rsp+30h] [rbp-18h]
  PVOID WnodeEventItem; // [rsp+50h] [rbp+8h] BYREF

  Length = a1->MiniportName.Length;
  pAdapterInstanceName = a1->pAdapterInstanceName;
  WnodeEventItem = 0LL;
  ndisSetupWmiNode(
    a1,
    pAdapterInstanceName,
    Length + 2,
    (__int128 *)&GUID_NDIS_NOTIFY_ADAPTER_ARRIVAL,
    (struct tagWNODE_SINGLE_INSTANCE **)&WnodeEventItem);
  v4 = WnodeEventItem;
  if ( WnodeEventItem )
  {
    v5 = (unsigned __int16 *)((char *)WnodeEventItem + *((unsigned int *)WnodeEventItem + 14));
    *v5 = a1->MiniportName.Length;
    memmove(v5 + 1, a1->MiniportName.Buffer, a1->MiniportName.Length);
    v6 = IoWMIWriteEvent(v4);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = &WPP_RECORDER_INITIALIZED;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v9 = v6;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          1u,
          0x56u,
          (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
          (char)a1,
          *(_DWORD *)v9);
      }
      if ( (byte_1C00F7641 & 0x10) != 0 )
        McTemplateK0qqq_EtwWriteTransfer((_DWORD)v8, (unsigned int)&IoWMIWriteEventFailed, (_DWORD)a1 + 4008, v7, 2, 0);
      ExFreePoolWithTag(v4, 0);
    }
    else if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0x57u,
        (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
        a1);
    }
  }
}
