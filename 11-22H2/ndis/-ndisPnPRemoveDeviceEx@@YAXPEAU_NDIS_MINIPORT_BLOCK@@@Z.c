/*
 * XREFs of ?ndisPnPRemoveDeviceEx@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C007F94C
 * Callers:
 *     NdisLWMUninitializeNetworkInterface @ 0x1C005EFA0 (NdisLWMUninitializeNetworkInterface.c)
 *     ?ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C0135C20 (-ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpSurpriseRemovalInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0135E94 (-ndisPnPIrpSurpriseRemovalInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWdfPreReleaseHardware@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01362AC (-ndisWdfPreReleaseHardware@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002293C (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C01534F0 (-ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 */

void __fastcall ndisPnPRemoveDeviceEx(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int v2; // eax
  bool v3; // zf
  unsigned int v4; // eax
  _DEVICE_OBJECT *InputBuffer; // [rsp+30h] [rbp-18h] BYREF
  int v6; // [rsp+38h] [rbp-10h]
  char v7; // [rsp+3Ch] [rbp-Ch]
  char v8; // [rsp+3Dh] [rbp-Bh]
  __int16 v9; // [rsp+3Eh] [rbp-Ah]

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x1Du,
      (struct _GUID *)&WPP_6b67e79cbf5736d8de5dcc27eb05ee5a_Traceguids,
      a1);
  v2 = a1->PnPFlags & 0xFFFEFFFF;
  a1->PnPDeviceState = NdisPnPDeviceRemoved;
  a1->PnPFlags = v2 | 0x10;
  if ( ndisIsMiniportStarted(a1)
    && ((a1->PnPFlags & 0x200000) != 0 && ndisAoAcCapable || (a1->FilterPnPFlags & 0x200) != 0)
    && a1->PhysicalMediumType == NdisPhysicalMedium802_3 )
  {
    v3 = a1->PMHardwareCapabilities.Header.Revision == 2;
    InputBuffer = a1->PhysicalDeviceObject;
    v9 = 0;
    v6 = 4;
    v7 = 0;
    if ( !v3
      || (a1->PMHardwareCapabilities.SupportedWoLPacketPatterns & 1) == 0
      || a1->PMHardwareCapabilities.NumTotalWoLPatterns < 0x10
      || a1->PMHardwareCapabilities.MaxWoLPatternSize < 0x4A
      || (unsigned int)(a1->PMHardwareCapabilities.MinPatternWakeUp - 3) > 1
      || (a1->PMHardwareCapabilities.SupportedWakeUpEvents & 1) == 0
      || (v4 = a1->PMHardwareCapabilities.SupportedProtocolOffloads & 3, v8 = 1, (_BYTE)v4 != 3) )
    {
      v8 = 0;
    }
    ZwPowerInformation(CsDeviceNotification, &InputBuffer, 0x10u, 0LL, 0);
  }
  ndisPnPRemoveDevice(a1, 1u);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x1Eu,
      (struct _GUID *)&WPP_6b67e79cbf5736d8de5dcc27eb05ee5a_Traceguids,
      a1);
}
