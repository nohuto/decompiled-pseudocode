/*
 * XREFs of ?ndisWdfNotifyDevicePower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@Z @ 0x1C00879B0
 * Callers:
 *     NdisWdfMiniportSetPower @ 0x1C00881F0 (NdisWdfMiniportSetPower.c)
 * Callees:
 *     ?NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0014410 (-NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0014428 (-ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x1C0014F58 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_LqZ @ 0x1C0015328 (WPP_RECORDER_SF_LqZ.c)
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0020738 (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisWdfDevicePowerDown @ 0x1C0087264 (ndisWdfDevicePowerDown.c)
 *     ndisWdfDevicePowerOn @ 0x1C00874B4 (ndisWdfDevicePowerOn.c)
 *     ?ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C010C570 (-ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 */

void __fastcall ndisWdfNotifyDevicePower(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2, __int64 a3)
{
  enum _NDIS_DEVICE_POWER_STATE v3; // edi
  int v4; // esi
  struct _NDIS_MINIPORT_BLOCK *v6; // rcx
  unsigned int PnPFlags; // eax

  v3 = (int)a3;
  v4 = a2;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_LqZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      a3,
      0x16u,
      (struct _GUID *)&WPP_cc38803a95a73ced301517c87e670f26_Traceguids,
      a3,
      (char)a1,
      &a1->pAdapterInstanceName->Length);
  if ( (byte_1C00EE581 & 8) != 0 )
    McTemplateK0jqxqq_EtwWriteTransfer();
  NDIS_COUNT_POWER_TRANSITION(a1, v3);
  if ( v3 == NdisDeviceStateD0 )
  {
    if ( v4 )
      ndisWdfDevicePowerOn(v6);
  }
  else if ( (unsigned int)(v3 - 2) <= 2 && v4 )
  {
    if ( !ndisIsMiniportStarted(v6) )
      NT_ASSERT("ndisIsMiniportStarted(Miniport)");
    if ( a1->PnPDeviceState != NdisPnPDeviceStarted )
      NT_ASSERT("Miniport->PnPDeviceState == NdisPnPDeviceStarted");
    PnPFlags = a1->PnPFlags;
    if ( (PnPFlags & 0x800) == 0 )
    {
      KeClearEvent(&a1->OpenReadyEvent.Event);
      ndisPrepForLowPowerCommon(a1, v3);
      PnPFlags = a1->PnPFlags;
    }
    if ( (PnPFlags & 0x800) != 0 )
    {
      ndisSetDeviceInterfaceState(a1, 0);
      _InterlockedOr((volatile signed __int32 *)&a1->InterlockedFlags, 0x10u);
    }
    ndisWdfDevicePowerDown(a1, v3);
  }
}
