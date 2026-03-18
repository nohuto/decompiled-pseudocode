/*
 * XREFs of ?_PnpQueryCapabilities@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C001A2C0
 * Callers:
 *     <none>
 * Callees:
 *     ?PnpQueryCapabilities@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C001A2D8 (-PnpQueryCapabilities@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 */

int __fastcall FxPkgPdo::_PnpQueryCapabilities(FxPkgPdo *This, FxIrp *Irp)
{
  return FxPkgPdo::PnpQueryCapabilities(This, Irp);
}
