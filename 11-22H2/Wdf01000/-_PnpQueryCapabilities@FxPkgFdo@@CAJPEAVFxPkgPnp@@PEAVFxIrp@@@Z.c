/*
 * XREFs of ?_PnpQueryCapabilities@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0078910
 * Callers:
 *     <none>
 * Callees:
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C000927C (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?HandleQueryCapabilities@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z @ 0x1C0077C5C (-HandleQueryCapabilities@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z.c)
 *     ?HandleQueryCapabilitiesCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z @ 0x1C0077D5C (-HandleQueryCapabilitiesCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z.c)
 */

__int64 __fastcall FxPkgFdo::_PnpQueryCapabilities(FxPkgFdo *This, FxIrp *Irp)
{
  signed int v4; // esi

  FxPkgFdo::HandleQueryCapabilities(This, Irp);
  v4 = This->SendIrpSynchronously(This, Irp);
  if ( v4 >= 0 )
    FxPkgFdo::HandleQueryCapabilitiesCompletion(This, Irp);
  FxPkgPnp::CompletePnpRequest(This, Irp, v4);
  return (unsigned int)v4;
}
