/*
 * XREFs of ?_PnpQueryResources@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0080DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?PnpQueryResources@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0080BB4 (-PnpQueryResources@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 */

__int64 __fastcall FxPkgPdo::_PnpQueryResources(FxPkgPdo *This, FxIrp *Irp, FxDevice *a3, _WDF_OBJECT_ATTRIBUTES *a4)
{
  return FxPkgPdo::PnpQueryResources(This, Irp, a3, a4);
}
