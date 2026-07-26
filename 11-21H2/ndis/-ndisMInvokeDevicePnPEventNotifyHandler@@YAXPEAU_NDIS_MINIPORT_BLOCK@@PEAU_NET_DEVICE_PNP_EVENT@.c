/*
 * XREFs of ?ndisMInvokeDevicePnPEventNotifyHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_DEVICE_PNP_EVENT@@@Z @ 0x1C010C190
 * Callers:
 *     ?ndisDevicePnPEventNotifyMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z @ 0x1C00251E8 (-ndisDevicePnPEventNotifyMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@.c)
 *     ?ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z @ 0x1C005FD70 (-ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z.c)
 * Callees:
 *     ?ndisIsMiniportVerified@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@@Z @ 0x1C0009A64 (-ndisIsMiniportVerified@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001E848 (WPP_RECORDER_SF_qD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisMInvokeDevicePnPEventNotifyHandler(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NET_DEVICE_PNP_EVENT *a2)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rsi
  _NDIS_DEVICE_PNP_EVENT DevicePnPEvent; // ebp
  __int64 v6; // [rsp+30h] [rbp-28h]
  char v7[4]; // [rsp+30h] [rbp-28h]

  DriverHandle = a1->DriverHandle;
  DevicePnPEvent = a2->DevicePnPEvent;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v7 = a2->DevicePnPEvent;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xECu,
      (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
      (char)a1,
      *(_DWORD *)v7);
  }
  if ( ndisIsMiniportVerified(DriverHandle) )
    (*((void (__fastcall **)(void *, struct _NET_DEVICE_PNP_EVENT *, struct _NDIS_MINIPORT_BLOCK *, void *, void (__fastcall *)(void *, _NET_DEVICE_PNP_EVENT *)))ndisVerifierNdisDispatch
     + 6))(
      a1->MiniportAdapterContext,
      a2,
      a1,
      a1->VerifierContext,
      DriverHandle->MiniportDriverCharacteristics.DevicePnPEventNotifyHandler);
  else
    DriverHandle->MiniportDriverCharacteristics.DevicePnPEventNotifyHandler(a1->MiniportAdapterContext, a2);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v6) = DevicePnPEvent;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xEDu,
      (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
      (char)a1,
      v6);
  }
}
