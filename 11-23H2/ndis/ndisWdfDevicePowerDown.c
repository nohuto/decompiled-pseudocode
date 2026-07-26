/*
 * XREFs of ndisWdfDevicePowerDown @ 0x1C008C51C
 * Callers:
 *     ?ndisWdfNotifyDevicePower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@Z @ 0x1C008CC70 (-ndisWdfNotifyDevicePower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C000301C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     McTemplateK0jqxq_EtwWriteTransfer @ 0x1C0006AF8 (McTemplateK0jqxq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qD @ 0x1C00084A8 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x1C0016508 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     NdisMIndicateStatusEx @ 0x1C001A410 (NdisMIndicateStatusEx.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C0021450 (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C00214DC (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     ndisWdfMiniportUpdatePowerState @ 0x1C008CC44 (ndisWdfMiniportUpdatePowerState.c)
 *     ?ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01177E4 (-ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisWdfDevicePowerDown(struct _NDIS_MINIPORT_BLOCK *a1, unsigned int a2)
{
  char v4; // r14
  __int64 v5; // rcx
  unsigned int v6; // eax
  _NDIS_IF_BLOCK *IfBlock; // rax
  KIRQL v8; // dl
  __int64 v9; // rcx
  _NDIS_IF_BLOCK *v10; // rcx
  KIRQL NewIrql[16]; // [rsp+40h] [rbp-69h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+50h] [rbp-59h] BYREF
  _DWORD v14[4]; // [rsp+C0h] [rbp+17h] BYREF

  NewIrql[0] = 0;
  v4 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x10u,
      (struct _GUID *)&WPP_d81ae1bd0d0e3cce0560c16a859ea6b0_Traceguids,
      (char)a1,
      a2);
  ndisWdfMiniportUpdatePowerState(a1, a2);
  if ( (byte_1C00F7641 & 8) != 0 )
    McTemplateK0jqxqq_EtwWriteTransfer(
      v5,
      &DevicePowerStateChange,
      &a1->InterfaceGuid,
      (__int64)&a1->InterfaceGuid,
      a1->IfIndex,
      a1->NetLuid.Value,
      1,
      a2);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, NewIrql);
  v6 = a1->OperStatusFlags & 0xFEFFFFFF;
  a1->OperStatus = NET_IF_OPER_STATUS_DORMANT;
  a1->OperStatusFlags = v6 | 8;
  if ( ndisMReferenceIfBlock(a1, 0xEu) )
  {
    IfBlock = a1->IfBlock;
    if ( IfBlock->ifOperStatus != NET_IF_OPER_STATUS_DORMANT )
    {
      IfBlock->ifOperStatus = NET_IF_OPER_STATUS_DORMANT;
      v4 = 1;
      a1->IfBlock->ifOperStatusFlags = a1->OperStatusFlags;
    }
    ndisMDereferenceIfBlock(a1, MPIFREF_POWERDOWN);
  }
  v8 = NewIrql[0];
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v8);
  if ( v4 )
  {
    ndisNsiSyncMiniportOperStatusNotification(a1);
    v10 = a1->IfBlock;
    v14[0] = 786816;
    v14[1] = v10->ifOperStatus;
    v14[2] = v10->ifOperStatusFlags;
    memset(&StatusIndication, 0, sizeof(StatusIndication));
    StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
    StatusIndication.StatusBuffer = v14;
    StatusIndication.SourceHandle = a1;
    StatusIndication.StatusCode = 1073807395;
    StatusIndication.StatusBufferSize = 12;
    NdisMIndicateStatusEx(a1, &StatusIndication);
  }
  a1->LastWakeReason = 65534;
  if ( (byte_1C00F7643 & 4) != 0 )
    McTemplateK0jqxq_EtwWriteTransfer(
      v9,
      (__int64)&DevicePowerDownComplete,
      (__int64)&a1->InterfaceGuid,
      (__int64)&a1->InterfaceGuid,
      a1->IfIndex,
      a1->NetLuid.Value,
      0);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x11u,
      (struct _GUID *)&WPP_d81ae1bd0d0e3cce0560c16a859ea6b0_Traceguids,
      a1);
}
