/*
 * XREFs of NdisIfDeregisterInterface @ 0x1C0110130
 * Callers:
 *     ?ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00157C8 (-ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ndisIfDeleteCompartment @ 0x1C00B865C (ndisIfDeleteCompartment.c)
 * Callees:
 *     ?ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z @ 0x1C0015B50 (-ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z.c)
 */

void __stdcall NdisIfDeregisterInterface(NET_IFINDEX ifIndex)
{
  ndisIfDeregisterInterfaceEx(ifIndex, 0);
}
