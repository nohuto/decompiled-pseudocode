/*
 * XREFs of NdisIMDeInitializeDeviceInstance @ 0x1C005E700
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00030D0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C2F0 (WPP_RECORDER_SF_qL.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00113A8 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z @ 0x1C001F354 (-ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C0021450 (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C00214DC (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x1C00228F4 (-ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z.c)
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0022ACC (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01177E4 (-ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C01534F0 (-ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisDeQueueMiniportOnDriver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_M_DRIVER_BLOCK@@@Z @ 0x1C0155AE4 (-ndisDeQueueMiniportOnDriver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_M_DRIVER_BLOCK@@@Z.c)
 */

NDIS_STATUS __stdcall NdisIMDeInitializeDeviceInstance(NDIS_HANDLE NdisMiniportHandle)
{
  NDIS_STATUS v2; // edi
  struct _NDIS_M_DRIVER_BLOCK *v3; // rsi
  bool v4; // cf
  char v6[4]; // [rsp+30h] [rbp-28h]
  int v7; // [rsp+60h] [rbp+8h] BYREF

  v2 = -1073741823;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x10u,
      (struct _GUID *)&WPP_9c2ae63cf1b030f77db7d8db8508a9c2_Traceguids,
      NdisMiniportHandle);
  v3 = (struct _NDIS_M_DRIVER_BLOCK *)*((_QWORD *)NdisMiniportHandle + 470);
  if ( ndisReferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle, 0x16u) )
  {
    v7 = 0;
    ndisReferenceRefEx(&v3->Ref.SpinLock, 0, (enum _NDIS_REFERENCE_STATUS *)&v7);
    v4 = *((_BYTE *)NdisMiniportHandle + 32) < 6u;
    *((_DWORD *)NdisMiniportHandle + 380) = 3;
    if ( v4 )
      *((_BYTE *)NdisMiniportHandle + 5273) = 1;
    ndisPnPRemoveDevice((struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle, 0);
    *((_DWORD *)NdisMiniportHandle + 967) = 0;
    *((_DWORD *)NdisMiniportHandle + 970) = 0;
    *((_DWORD *)NdisMiniportHandle + 1017) = 0;
    *((_DWORD *)NdisMiniportHandle + 1016) = 7;
    *((_BYTE *)NdisMiniportHandle + 5273) = 0;
    if ( ndisMReferenceIfBlock((struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle, 0) )
    {
      *(_DWORD *)(*((_QWORD *)NdisMiniportHandle + 505) + 1112LL) = 7;
      *(_DWORD *)(*((_QWORD *)NdisMiniportHandle + 505) + 1116LL) = 0;
      ndisNsiSyncMiniportOperStatusNotification((struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle);
      ndisMDereferenceIfBlock((struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle, MPIFREF_IMDEINIT);
    }
    if ( ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle) )
    {
      ndisDeQueueMiniportOnDriver(
        (struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle,
        *((struct _NDIS_M_DRIVER_BLOCK **)NdisMiniportHandle + 470));
      ndisDereferenceDriver(*((struct _NDIS_M_DRIVER_BLOCK **)NdisMiniportHandle + 470), 0, 2u);
    }
    ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle, 0x16u);
    ndisDereferenceDriver(v3, 0, 0);
    v2 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v6 = v2;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x11u,
      (struct _GUID *)&WPP_9c2ae63cf1b030f77db7d8db8508a9c2_Traceguids,
      (char)NdisMiniportHandle,
      *(_DWORD *)v6);
  }
  return v2;
}
