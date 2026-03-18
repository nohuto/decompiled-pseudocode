/*
 * XREFs of ?_DispatchWaitWake@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C000FD90
 * Callers:
 *     <none>
 * Callees:
 *     ?DispatchWaitWake@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C00720F4 (-DispatchWaitWake@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 */

int __fastcall FxPkgPnp::_DispatchWaitWake(FxPkgPnp *This, FxIrp *Irp)
{
  return FxPkgPnp::DispatchWaitWake(This, Irp);
}
