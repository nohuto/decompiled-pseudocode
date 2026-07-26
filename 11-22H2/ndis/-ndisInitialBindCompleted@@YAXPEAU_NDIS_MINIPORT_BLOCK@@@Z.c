/*
 * XREFs of ?ndisInitialBindCompleted@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0035BD4
 * Callers:
 *     ?ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4CallRunMode@@@Z @ 0x1C0116700 (-ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4Ca.c)
 * Callees:
 *     ?ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C0120680 (-ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?ndisIsSystemBooting@@YAEXZ @ 0x1C01215BC (-ndisIsSystemBooting@@YAEXZ.c)
 */

void __fastcall ndisInitialBindCompleted(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rcx

  if ( a1->InitMode )
  {
    if ( !ndisIsSystemBooting() )
      ndisMExitInitMode(v1, RunSynchronous);
  }
}
