/*
 * XREFs of ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXK0K_K@Z @ 0x1C0112614
 * Callers:
 *     ?ndisFForwardNetPnPEventToFilter@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C00157DC (-ndisFForwardNetPnPEventToFilter@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     ?ndisCancelIdleRequestSync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KKE@Z @ 0x1C00ACCA4 (-ndisCancelIdleRequestSync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KKE@Z.c)
 *     ?ndisDeliverNetPnPEventSynchronously@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C01124B0 (-ndisDeliverNetPnPEventSynchronously@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NE.c)
 *     ?ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0145D48 (-ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0147C28 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0147F18 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C01484E0 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x1C0148F94 (-ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 * Callees:
 *     ?ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z @ 0x1C010C7B0 (-ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z.c)
 *     ?ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ @ 0x1C0112690 (-ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ.c)
 */

struct NDISWATCHDOG__ **__fastcall ndisMakeWatchdog(
        struct NDISWATCHDOG__ **a1,
        void *a2,
        int a3,
        void *a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  struct NDISWATCHDOG__ *Watchdog; // rbx
  struct NDISWATCHDOG__ **result; // rax

  Watchdog = ndisAllocateWatchdog();
  ndisArmWatchdog(Watchdog, a2, a3, a4, a5, a6);
  result = a1;
  *a1 = Watchdog;
  return result;
}
