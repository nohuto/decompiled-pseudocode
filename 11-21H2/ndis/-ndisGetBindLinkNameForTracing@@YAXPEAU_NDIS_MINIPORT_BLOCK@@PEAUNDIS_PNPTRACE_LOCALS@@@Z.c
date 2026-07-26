/*
 * XREFs of ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C012EE78
 * Callers:
 *     ?ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0014428 (-ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     NdisWdfMiniportDataPathPause @ 0x1C005B1C0 (NdisWdfMiniportDataPathPause.c)
 *     NdisWdfMiniportDataPathStart @ 0x1C005B2A0 (NdisWdfMiniportDataPathStart.c)
 *     ?ndisIMInitializeDeviceInstanceInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x1C005E700 (-ndisIMInitializeDeviceInstanceInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z.c)
 *     NdisMSetMiniportSecondary @ 0x1C006A810 (NdisMSetMiniportSecondary.c)
 *     ndisWdfDevicePowerOn @ 0x1C00874B4 (ndisWdfDevicePowerOn.c)
 *     ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x1C0139680 (-ndisDevicePowerOn@@YAXPEAX@Z.c)
 *     ?ndisDevicePowerDown@@YAXPEAX@Z @ 0x1C0139C10 (-ndisDevicePowerDown@@YAXPEAX@Z.c)
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1C013EFE0 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C013FE7C (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 *     ?ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0147590 (-ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisGetBindLinkNameForTracing(struct _NDIS_MINIPORT_BLOCK *a1, struct NDIS_PNPTRACE_LOCALS *a2)
{
  _UNICODE_STRING *pAdapterInstanceName; // rax

  pAdapterInstanceName = 0LL;
  *(_QWORD *)a2 = a1;
  if ( a1 )
    pAdapterInstanceName = a1->pAdapterInstanceName;
  *((_QWORD *)a2 + 1) = pAdapterInstanceName;
}
