/*
 * XREFs of ?ndisQueueWorkitem@@YAXPEAU_WORK_QUEUE_ITEM@@@Z @ 0x1C0017174
 * Callers:
 *     NdisCloseAdapter @ 0x1C013BF70 (NdisCloseAdapter.c)
 *     ?ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C013C370 (-ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     NdisOpenAdapterEx @ 0x1C013EAC0 (NdisOpenAdapterEx.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisQueueWorkitem(struct _WORK_QUEUE_ITEM *a1)
{
  ExQueueWorkItem(a1, (WORK_QUEUE_TYPE)40);
}
