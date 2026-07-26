/*
 * XREFs of ?ndisIovTeardownVf@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0076A04
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C014C7DC (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 *     ?ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C01534F0 (-ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C010C600 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __fastcall ndisIovTeardownVf(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _IRP *InvalidateBlockIoctlVf; // rcx

  InvalidateBlockIoctlVf = a1->InvalidateBlockIoctlVf;
  if ( InvalidateBlockIoctlVf )
  {
    a1->InvalidateBlockCancelling = 1;
    IoCancelIrp(InvalidateBlockIoctlVf);
    ndisWaitForKernelObject(&a1->InvalidateBlockEvent);
    IoFreeIrp(a1->InvalidateBlockIoctlVf);
    a1->InvalidateBlockIoctlVf = 0LL;
  }
}
