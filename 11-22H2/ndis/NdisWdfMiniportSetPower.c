/*
 * XREFs of NdisWdfMiniportSetPower @ 0x1C008D470
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0020E6C (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisWdfNotifyDevicePower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@Z @ 0x1C008CC50 (-ndisWdfNotifyDevicePower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@.c)
 *     ?ndisWdfNotifySystemPower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@Z @ 0x1C008CDA4 (-ndisWdfNotifySystemPower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@.c)
 *     ?ndisSelectiveSuspendClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C00ADD1C (-ndisSelectiveSuspendClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 */

void __fastcall NdisWdfMiniportSetPower(
        struct _NDIS_MINIPORT_BLOCK *a1,
        unsigned int a2,
        enum _NDIS_DEVICE_POWER_STATE a3)
{
  enum _NDIS_MINIPORT_EVENT v6; // dx
  enum _NDIS_MINIPORT_EVENT v7; // dx

  if ( !a2 )
  {
    if ( a3 == NdisDeviceStateD0 )
    {
      v7 = NdisMEventD0_S0Idle;
    }
    else
    {
      if ( a3 != NdisDeviceStateD1 && (unsigned int)(a3 - 3) > 1 )
        goto LABEL_20;
      v7 = NdisMEventDx_S0Idle;
    }
    ndisLogMiniportEvent(a1, v7);
    goto LABEL_20;
  }
  if ( a2 == 2 || a2 == 3 || a2 == 4 || a2 - 5 <= 1 )
  {
    if ( a3 == NdisDeviceStateD0 )
    {
      v6 = NdisMEventD0_Sx;
      goto LABEL_11;
    }
    if ( a3 == NdisDeviceStateD1 || (unsigned int)(a3 - 3) <= 1 )
    {
      v6 = NdisMEventDx_Sx;
LABEL_11:
      ndisLogMiniportEvent(a1, v6);
    }
  }
  if ( a2 - 2 <= 4 )
    ndisWdfNotifySystemPower((__int64)a1, a2, a3);
LABEL_20:
  ndisWdfNotifyDevicePower(a1, a2, (unsigned int)a3);
  if ( a3 == NdisDeviceStateD0 && a2 - 2 <= 1 )
  {
    if ( a1->SelectiveSuspend )
      ndisSelectiveSuspendClearStop(a1, 6LL);
  }
}
