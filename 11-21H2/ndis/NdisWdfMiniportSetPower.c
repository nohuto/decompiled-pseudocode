/*
 * XREFs of NdisWdfMiniportSetPower @ 0x1C00881F0
 * Callers:
 *     <none>
 * Callees:
 *     ndisWdfLogMiniportPowerTransition @ 0x1C00353F0 (ndisWdfLogMiniportPowerTransition.c)
 *     ?ndisWdfNotifyDevicePower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@Z @ 0x1C00879B0 (-ndisWdfNotifyDevicePower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@.c)
 *     ?ndisWdfNotifySystemPower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@Z @ 0x1C0087AEC (-ndisWdfNotifySystemPower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@.c)
 *     ?ndisSelectiveSuspendClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C00A7B9C (-ndisSelectiveSuspendClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 */

void __fastcall NdisWdfMiniportSetPower(
        struct _NDIS_MINIPORT_BLOCK *a1,
        unsigned int a2,
        enum _NDIS_DEVICE_POWER_STATE a3)
{
  ndisWdfLogMiniportPowerTransition(a1, a2, a3);
  if ( a2 - 2 <= 4 )
    ndisWdfNotifySystemPower(a1, a2, a3);
  ndisWdfNotifyDevicePower(a1, a2, (unsigned int)a3);
  if ( a3 == NdisDeviceStateD0 && a2 - 2 <= 1 )
  {
    if ( a1->SelectiveSuspend )
      ndisSelectiveSuspendClearStop(a1, 6LL);
  }
}
