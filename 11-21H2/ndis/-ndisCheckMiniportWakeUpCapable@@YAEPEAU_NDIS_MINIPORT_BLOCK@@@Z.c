/*
 * XREFs of ?ndisCheckMiniportWakeUpCapable@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C008CC58
 * Callers:
 *     ?ndisMIndicatePMHardwareCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C008DEE0 (-ndisMIndicatePMHardwareCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C013FE7C (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x1C0014F58 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 */

unsigned __int8 __fastcall ndisCheckMiniportWakeUpCapable(struct _NDIS_MINIPORT_BLOCK *a1)
{
  if ( ((unsigned int)(a1->PMHardwareCapabilities.MinLinkChangeWakeUp - 2) <= 2
     || (unsigned int)(a1->PMHardwareCapabilities.MinMagicPacketWakeUp - 2) <= 2
     || (unsigned int)(a1->PMHardwareCapabilities.MinPatternWakeUp - 2) <= 2
     || (a1->PMHardwareCapabilities.Flags & 6) != 0)
    && a1->DeviceCaps.SystemWake
    && (unsigned int)(a1->DeviceCaps.DeviceWake - 2) <= 2
    && (*((_DWORD *)&a1->DeviceCaps + 1) & 0x3800) != 0 )
  {
    a1->PnPFlags |= 0x4000000u;
    return 1;
  }
  else
  {
    a1->PnPFlags &= ~0x4000000u;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x79u,
        (struct _GUID *)&WPP_c5d0b5f7d8c43de1f0150a9d8e7af364_Traceguids,
        a1);
    if ( (byte_1C00EE582 & 8) != 0 )
      McTemplateK0jqxqq_EtwWriteTransfer();
    return 0;
  }
}
