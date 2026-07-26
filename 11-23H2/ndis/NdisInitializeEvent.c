/*
 * XREFs of NdisInitializeEvent @ 0x1C0024EF0
 * Callers:
 *     ?ndisSetOpenToTranslationMode@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0155E14 (-ndisSetOpenToTranslationMode@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisInitializeEvent(PNDIS_EVENT Event)
{
  KeInitializeEvent(&Event->Event, NotificationEvent, 0);
}
