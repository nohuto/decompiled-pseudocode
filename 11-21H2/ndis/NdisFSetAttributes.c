/*
 * XREFs of NdisFSetAttributes @ 0x1C00191C0
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C00060EC (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     ?ndisSetupLwfMiniportHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0019FF0 (-ndisSetupLwfMiniportHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

NDIS_STATUS __stdcall NdisFSetAttributes(
        NDIS_HANDLE NdisFilterHandle,
        NDIS_HANDLE FilterModuleContext,
        PNDIS_FILTER_ATTRIBUTES FilterAttributes)
{
  struct _NDIS_MINIPORT_BLOCK *v3; // rdi
  KIRQL v6; // dl
  KIRQL NewIrql; // [rsp+50h] [rbp+8h] BYREF

  v3 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)NdisFilterHandle + 4);
  NewIrql = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x1Fu,
      (struct _GUID *)&WPP_63db700a80b438f6540a523b9430c1eb_Traceguids,
      NdisFilterHandle);
  *((_QWORD *)NdisFilterHandle + 3) = FilterModuleContext;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v3, &NewIrql);
  ndisSetupLwfMiniportHandlers(v3);
  v6 = NewIrql;
  v3->MiniportThread = 0LL;
  KeReleaseSpinLock(&v3->Lock, v6);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x20u,
      (struct _GUID *)&WPP_63db700a80b438f6540a523b9430c1eb_Traceguids,
      NdisFilterHandle);
  return 0;
}
