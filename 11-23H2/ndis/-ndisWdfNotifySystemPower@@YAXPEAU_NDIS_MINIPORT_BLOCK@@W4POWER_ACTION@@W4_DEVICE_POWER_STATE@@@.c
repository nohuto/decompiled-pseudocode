/*
 * XREFs of ?ndisWdfNotifySystemPower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@Z @ 0x1C008CDC4
 * Callers:
 *     NdisWdfMiniportSetPower @ 0x1C008D490 (NdisWdfMiniportSetPower.c)
 * Callees:
 *     McTemplateK0jqxq_EtwWriteTransfer @ 0x1C0006AF8 (McTemplateK0jqxq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qD @ 0x1C00084A8 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x1C0016508 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     ?ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0016A30 (-ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C002702C (WPP_RECORDER_SF_qDD_ea_1C002702C.c)
 *     ?ndisSendSystemPowerStateIndication@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@@Z @ 0x1C0082B78 (-ndisSendSystemPowerStateIndication@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@@Z.c)
 *     WPP_RECORDER_SF_DqZ @ 0x1C008D57C (WPP_RECORDER_SF_DqZ.c)
 *     ?ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C00AE0D8 (-ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisCancelInitModeTimeoutTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0117790 (-ndisCancelInitModeTimeoutTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 */

void __fastcall ndisWdfNotifySystemPower(__int64 a1, int a2, enum _NDIS_DEVICE_POWER_STATE a3)
{
  struct _NDIS_MINIPORT_BLOCK *v5; // rbx
  char v6; // bp
  char v7[8]; // [rsp+30h] [rbp-28h]
  char v8[8]; // [rsp+38h] [rbp-20h]

  v5 = (struct _NDIS_MINIPORT_BLOCK *)a1;
  if ( (*(_DWORD *)(a1 + 120) & 0x80u) == 0 )
    NT_ASSERT("((((Miniport)->Flags & (0x00000080)) != 0))");
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DqZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      9,
      18,
      (struct _GUID *)&WPP_d81ae1bd0d0e3cce0560c16a859ea6b0_Traceguids,
      a2,
      a1,
      *(_QWORD *)(a1 + 3856));
  v6 = 0;
  if ( !a2 )
    goto LABEL_17;
  if ( a3 == NdisDeviceStateD0 )
  {
    v6 = 1;
    if ( byte_1C00F7643 < 0 )
      McTemplateK0jqxq_EtwWriteTransfer(
        a1,
        (__int64)&PowerWakeUpDevice,
        (__int64)&v5->InterfaceGuid,
        (__int64)&v5->InterfaceGuid,
        v5->IfIndex,
        v5->NetLuid.Value,
        1);
    v5->PnPFlags &= ~0x800u;
    a1 = MEMORY[0xFFFFF78000000014] - v5->LastSystemSleepTime.QuadPart;
    v5->TotalSystemSleepTimeMs += a1 / 10000;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x13u,
        (struct _GUID *)&WPP_d81ae1bd0d0e3cce0560c16a859ea6b0_Traceguids,
        v5);
    goto LABEL_26;
  }
  if ( (unsigned int)(a2 - 4) <= 2 )
  {
    v6 = 6;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v7 = a2;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x15u,
        (struct _GUID *)&WPP_d81ae1bd0d0e3cce0560c16a859ea6b0_Traceguids,
        (char)v5,
        *(_QWORD *)v7);
    }
    if ( (byte_1C00F7643 & 4) != 0 )
      McTemplateK0jqxqq_EtwWriteTransfer(
        a1,
        &MiniportPowerSystemState,
        &v5->InterfaceGuid,
        (__int64)&v5->InterfaceGuid,
        v5->IfIndex,
        v5->NetLuid.Value,
        6,
        6);
    ndisSendSystemPowerStateIndication(v5, PowerSystemShutdown);
  }
  else
  {
LABEL_17:
    if ( a2 == 3 )
    {
      v6 = 5;
    }
    else
    {
      if ( a2 != 2 )
        goto LABEL_26;
      v6 = 4;
    }
    if ( v5->SelectiveSuspend )
      ndisSelectiveSuspendStop(v5, 6LL);
    v5->PnPFlags |= 0x800u;
    v5->LastSystemSleepTime.QuadPart = MEMORY[0xFFFFF78000000014];
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v8 = a3;
      WPP_RECORDER_SF_qDD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x14u,
        (struct _GUID *)&WPP_d81ae1bd0d0e3cce0560c16a859ea6b0_Traceguids,
        (char)v5,
        a2,
        *(_QWORD *)v8);
    }
    KeClearEvent(&v5->OpenReadyEvent.Event);
    ndisCancelInitModeTimeoutTimer(v5, 1u);
    ndisPrepForLowPowerCommon(v5, a3);
  }
LABEL_26:
  if ( (byte_1C00F7643 & 4) != 0 )
    McTemplateK0jqxqq_EtwWriteTransfer(
      a1,
      &MiniportPowerStates,
      &v5->InterfaceGuid,
      (__int64)&v5->InterfaceGuid,
      v5->IfIndex,
      v5->NetLuid.Value,
      v6,
      a3);
}
