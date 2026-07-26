/*
 * XREFs of NdisNblTrackerDeregisterComponent @ 0x1C0021770
 * Callers:
 *     ?ndisDereferenceFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z @ 0x1C00151F4 (-ndisDereferenceFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z.c)
 *     ?ndisFreeOpenBlock@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C001538C (-ndisFreeOpenBlock@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisUpdateNoPauseOnSuspend@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0021724 (-ndisUpdateNoPauseOnSuspend@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMCleanupMiniportBlockOnStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006AE50 (-ndisMCleanupMiniportBlockOnStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSelectiveSuspendFree@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0138C00 (-ndisSelectiveSuspendFree@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisNblTrackerVerifyNoNblsHeld@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C0017360 (-ndisNblTrackerVerifyNoNblsHeld@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 *     ?ndisNblTrackerDeleteTracker@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C001781C (-ndisNblTrackerDeleteTracker@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 */

void __fastcall NdisNblTrackerDeregisterComponent(__int64 a1)
{
  ULONG_PTR *v1; // rbx
  KIRQL v2; // al
  ULONG_PTR v3; // r8
  KIRQL v4; // di
  ULONG_PTR **v5; // rdx

  if ( (a1 & 1) != 0 )
  {
    v1 = (ULONG_PTR *)(a1 & 0xFFFFFFFFFFFFFFF8uLL);
    v2 = KeAcquireSpinLockRaiseToDpc(&ndisNblTrackerListLock);
    v3 = *v1;
    v4 = v2;
    if ( *(ULONG_PTR **)(*v1 + 8) != v1 || (v5 = (ULONG_PTR **)v1[1], *v5 != v1) )
      __fastfail(3u);
    *v5 = (ULONG_PTR *)v3;
    *(_QWORD *)(v3 + 8) = v5;
    ndisNblTrackerVerifyNoNblsHeld((ULONG_PTR)v1);
    KeReleaseSpinLock(&ndisNblTrackerListLock, v4);
    ndisNblTrackerDeleteTracker(v1);
  }
}
