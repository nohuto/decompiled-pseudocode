/*
 * XREFs of NdisInitializeEvent @ 0x1C0025FA0
 * Callers:
 *     ?ndisSetOpenToTranslationMode@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0149EC4 (-ndisSetOpenToTranslationMode@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisInitializeEvent(PNDIS_EVENT Event)
{
  KeInitializeEvent(&Event->Event, NotificationEvent, 0);
}
