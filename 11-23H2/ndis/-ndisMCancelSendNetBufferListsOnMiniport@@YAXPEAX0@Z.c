/*
 * XREFs of ?ndisMCancelSendNetBufferListsOnMiniport@@YAXPEAX0@Z @ 0x1C00B0C60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     ?ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x1C003EFAE (-ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z.c)
 *     ?ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C003F880 (-ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 */

void __fastcall ndisMCancelSendNetBufferListsOnMiniport(struct _NDIS_MINIPORT_BLOCK *a1, void *a2)
{
  if ( !a1->SelectiveSuspend || (unsigned __int8)ndisSetBusyAsync((__int64)a1) )
  {
    a1->DriverHandle->MiniportDriverCharacteristics.CancelSendHandler(a1->MiniportAdapterContext, a2);
    if ( a1->SelectiveSuspend )
      ndisClearBusy(a1, 1, 53);
  }
}
