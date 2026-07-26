/*
 * XREFs of ?NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C008A62C
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1C0139008 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     <none>
 */

struct _NDIS_WDF_CX_DRIVER_BLOCK *__fastcall NdisWdfGetCxBlockFromMiniport(struct _NDIS_MINIPORT_BLOCK *a1)
{
  return a1->DriverHandle->CxBlock;
}
