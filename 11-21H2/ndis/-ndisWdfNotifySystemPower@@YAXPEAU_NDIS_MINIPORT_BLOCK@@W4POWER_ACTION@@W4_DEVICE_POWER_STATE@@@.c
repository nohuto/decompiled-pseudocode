/*
 * XREFs of ?ndisWdfNotifySystemPower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@Z @ 0x1C0087AEC
 * Callers:
 *     NdisWdfMiniportSetPower @ 0x1C00881F0 (NdisWdfMiniportSetPower.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1C0014380 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     ?ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0014428 (-ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x1C0014F58 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001E848 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C0023F10 (WPP_RECORDER_SF_qDD_ea_1C0023F10.c)
 *     ?ndisSendSystemPowerStateIndication@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@@Z @ 0x1C007D618 (-ndisSendSystemPowerStateIndication@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@@Z.c)
 *     WPP_RECORDER_SF_DqZ @ 0x1C0088268 (WPP_RECORDER_SF_DqZ.c)
 *     ?ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C00A7F34 (-ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisCancelInitModeTimeoutTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C010BDB8 (-ndisCancelInitModeTimeoutTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 */

void __fastcall ndisWdfNotifySystemPower(struct _NDIS_MINIPORT_BLOCK *a1, int a2, enum _NDIS_DEVICE_POWER_STATE a3)
{
  __int64 v6; // [rsp+30h] [rbp-28h]
  __int64 v7; // [rsp+38h] [rbp-20h]

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DqZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      9,
      18,
      (struct _GUID *)&WPP_cc38803a95a73ced301517c87e670f26_Traceguids,
      a2,
      (char)a1,
      (__int64)a1->pAdapterInstanceName);
  if ( a2 )
  {
    if ( a3 == NdisDeviceStateD0 )
    {
      if ( byte_1C00EE583 < 0 )
        McTemplateK0jqxd_EtwWriteTransfer();
      a1->PnPFlags &= ~0x800u;
      a1->TotalSystemSleepTimeMs += (MEMORY[0xFFFFF78000000014] - a1->LastSystemSleepTime.QuadPart) / 10000;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x13u,
          (struct _GUID *)&WPP_cc38803a95a73ced301517c87e670f26_Traceguids,
          a1);
      goto LABEL_23;
    }
    if ( (unsigned int)(a2 - 4) <= 1 )
      goto LABEL_18;
  }
  if ( a2 == 6 )
  {
LABEL_18:
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v6) = a2;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x15u,
        (struct _GUID *)&WPP_cc38803a95a73ced301517c87e670f26_Traceguids,
        (char)a1,
        v6);
    }
    if ( (byte_1C00EE583 & 4) != 0 )
      McTemplateK0jqxqq_EtwWriteTransfer();
    ndisSendSystemPowerStateIndication(a1, PowerSystemShutdown);
  }
  else if ( a2 == 3 || a2 == 2 )
  {
    if ( a1->SelectiveSuspend )
      ndisSelectiveSuspendStop(a1, 6LL);
    a1->PnPFlags |= 0x800u;
    a1->LastSystemSleepTime.QuadPart = MEMORY[0xFFFFF78000000014];
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v7) = a3;
      WPP_RECORDER_SF_qDD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x14u,
        (struct _GUID *)&WPP_cc38803a95a73ced301517c87e670f26_Traceguids,
        (char)a1,
        a2,
        v7);
    }
    KeClearEvent(&a1->OpenReadyEvent.Event);
    ndisCancelInitModeTimeoutTimer(a1, 1u);
    ndisPrepForLowPowerCommon(a1, a3);
  }
LABEL_23:
  if ( (byte_1C00EE583 & 4) != 0 )
    McTemplateK0jqxqq_EtwWriteTransfer();
}
