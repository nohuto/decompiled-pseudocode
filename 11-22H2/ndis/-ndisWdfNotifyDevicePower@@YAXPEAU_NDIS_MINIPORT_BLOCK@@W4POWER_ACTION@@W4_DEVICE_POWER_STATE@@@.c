/*
 * XREFs of ?ndisWdfNotifyDevicePower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@Z @ 0x1C008CC50
 * Callers:
 *     NdisWdfMiniportSetPower @ 0x1C008D470 (NdisWdfMiniportSetPower.c)
 * Callees:
 *     ?NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0014898 (-NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x1C0016378 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_LqZ @ 0x1C0016750 (WPP_RECORDER_SF_LqZ.c)
 *     ?ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C00168A0 (-ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002293C (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisWdfDevicePowerDown @ 0x1C008C4FC (ndisWdfDevicePowerDown.c)
 *     ndisWdfDevicePowerOn @ 0x1C008C754 (ndisWdfDevicePowerOn.c)
 *     ?ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C01178D0 (-ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 */

void __fastcall ndisWdfNotifyDevicePower(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2, __int64 a3)
{
  enum _NDIS_DEVICE_POWER_STATE v3; // edi
  int v4; // esi

  v3 = (int)a3;
  v4 = a2;
  if ( (a1->Flags & 0x80u) == 0 )
    NT_ASSERT("((((Miniport)->Flags & (0x00000080)) != 0))");
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_LqZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      a3,
      0x16u,
      (struct _GUID *)&WPP_d81ae1bd0d0e3cce0560c16a859ea6b0_Traceguids,
      a3,
      (char)a1,
      &a1->pAdapterInstanceName->Length);
  if ( (byte_1C00F7641 & 8) != 0 )
    McTemplateK0jqxqq_EtwWriteTransfer(
      (__int64)a1,
      &MiniportPowerDeviceState,
      &a1->InterfaceGuid,
      (__int64)&a1->InterfaceGuid,
      a1->IfIndex,
      a1->NetLuid.Value,
      1,
      v3);
  NDIS_COUNT_POWER_TRANSITION(a1, v3);
  if ( v3 == NdisDeviceStateD0 )
  {
    if ( v4 )
      ndisWdfDevicePowerOn(a1);
  }
  else if ( (v3 == NdisDeviceStateD1 || (unsigned int)(v3 - 3) <= 1) && v4 )
  {
    if ( !ndisIsMiniportStarted(a1) )
      NT_ASSERT("ndisIsMiniportStarted(Miniport)");
    if ( a1->PnPDeviceState != NdisPnPDeviceStarted )
      NT_ASSERT("Miniport->PnPDeviceState == NdisPnPDeviceStarted");
    if ( !_bittest((const signed __int32 *)&a1->PnPFlags, 0xBu) )
    {
      KeClearEvent(&a1->OpenReadyEvent.Event);
      ndisPrepForLowPowerCommon(a1, v3);
    }
    if ( _bittest((const signed __int32 *)&a1->PnPFlags, 0xBu) )
    {
      ndisSetDeviceInterfaceState(a1, 0);
      _InterlockedOr((volatile signed __int32 *)&a1->InterlockedFlags, 0x10u);
    }
    ndisWdfDevicePowerDown(a1, v3);
  }
}
