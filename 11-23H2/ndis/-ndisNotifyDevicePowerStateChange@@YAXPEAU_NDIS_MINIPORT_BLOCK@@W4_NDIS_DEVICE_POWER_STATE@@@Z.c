/*
 * XREFs of ?ndisNotifyDevicePowerStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0016C0C
 * Callers:
 *     ?ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0016A30 (-ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ndisWdfDevicePowerOn @ 0x1C008C774 (ndisWdfDevicePowerOn.c)
 *     ?ndisDevicePowerDown@@YAXPEAX@Z @ 0x1C0146970 (-ndisDevicePowerDown@@YAXPEAX@Z.c)
 *     ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x1C0146CC0 (-ndisDevicePowerOn@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000C2F0 (WPP_RECORDER_SF_qL.c)
 *     ?ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1C001C840 (-ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE.c)
 *     WPP_RECORDER_SF_L @ 0x1C0030D84 (WPP_RECORDER_SF_L_ea_1C0030D84.c)
 *     memmove @ 0x1C0038400 (memmove.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x1C005E39C (McTemplateK0qqq_EtwWriteTransfer.c)
 */

void __fastcall ndisNotifyDevicePowerStateChange(struct _NDIS_MINIPORT_BLOCK *a1, enum _NDIS_DEVICE_POWER_STATE a2)
{
  GUID *v4; // r9
  PVOID v5; // rdi
  NTSTATUS v6; // eax
  int v7; // edx
  int v8; // ecx
  NTSTATUS v9; // esi
  GUID *v10; // r9
  PVOID v11; // rdi
  unsigned __int16 *v12; // rcx
  NTSTATUS v13; // eax
  int v14; // edx
  int v15; // ecx
  NTSTATUS v16; // esi
  __int64 v17; // [rsp+30h] [rbp-28h]
  PVOID WnodeEventItem; // [rsp+60h] [rbp+8h] BYREF

  WnodeEventItem = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x3Fu,
      (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
      (char)a1,
      a2);
  v4 = &GUID_NDIS_NOTIFY_DEVICE_POWER_ON;
  if ( a2 != NdisDeviceStateD0 )
    v4 = &GUID_NDIS_NOTIFY_DEVICE_POWER_OFF;
  ndisSetupWmiNode(
    a1,
    a1->pAdapterInstanceName,
    a1->MiniportName.Length + 2,
    v4,
    (struct tagWNODE_SINGLE_INSTANCE **)&WnodeEventItem);
  v5 = WnodeEventItem;
  if ( WnodeEventItem )
  {
    memmove(
      (char *)WnodeEventItem + *((unsigned int *)WnodeEventItem + 14),
      a1->MiniportName.Buffer,
      a1->MiniportName.Length);
    v6 = IoWMIWriteEvent(v5);
    v9 = v6;
    if ( v6 < 0 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = 2;
        WPP_RECORDER_SF_L(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v7,
          14,
          64,
          (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
          v6);
      }
      if ( (byte_1C00F7641 & 0x10) != 0 )
        McTemplateK0qqq_EtwWriteTransfer(v8, (unsigned int)&IoWMIWriteEventFailed, (_DWORD)a1 + 4008, v9, 5, 0);
      ExFreePoolWithTag(v5, 0);
    }
  }
  v10 = &GUID_NDIS_NOTIFY_DEVICE_POWER_ON_EX;
  if ( a2 != NdisDeviceStateD0 )
    v10 = &GUID_NDIS_NOTIFY_DEVICE_POWER_OFF_EX;
  ndisSetupWmiNode(
    a1,
    a1->pAdapterInstanceName,
    a1->MiniportName.Length + 2,
    v10,
    (struct tagWNODE_SINGLE_INSTANCE **)&WnodeEventItem);
  v11 = WnodeEventItem;
  if ( WnodeEventItem )
  {
    v12 = (unsigned __int16 *)((char *)WnodeEventItem + *((unsigned int *)WnodeEventItem + 14));
    *v12 = a1->MiniportName.Length;
    memmove(v12 + 1, a1->MiniportName.Buffer, a1->MiniportName.Length);
    v13 = IoWMIWriteEvent(v11);
    v16 = v13;
    if ( v13 < 0 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 2;
        WPP_RECORDER_SF_L(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v14,
          14,
          65,
          (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
          v13);
      }
      if ( (byte_1C00F7641 & 0x10) != 0 )
        McTemplateK0qqq_EtwWriteTransfer(v15, (unsigned int)&IoWMIWriteEventFailed, (_DWORD)a1 + 4008, v16, 6, 0);
      ExFreePoolWithTag(v11, 0);
    }
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v17) = a2;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x42u,
      (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
      (char)a1,
      v17);
  }
}
