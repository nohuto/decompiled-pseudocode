/*
 * XREFs of ?_PnpQueryInterface@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0069BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C000927C (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z @ 0x1C0072CCC (-HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z.c)
 */

__int64 __fastcall FxPkgPdo::_PnpQueryInterface(FxPkgPnp *This, FxIrp *Irp)
{
  unsigned int v4; // eax
  unsigned __int8 completeIrp; // [rsp+40h] [rbp+18h] BYREF

  completeIrp = 0;
  v4 = FxPkgPnp::HandleQueryInterface(This, Irp, &completeIrp);
  return FxPkgPnp::CompletePnpRequest(This, Irp, v4);
}
