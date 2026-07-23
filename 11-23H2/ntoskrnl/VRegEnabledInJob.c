/*
 * XREFs of VRegEnabledInJob @ 0x14068EB28
 * Callers:
 *     VrpRegistryCallback @ 0x14068E300 (VrpRegistryCallback.c)
 *     VrpIoctlDeviceDispatch @ 0x14077B270 (VrpIoctlDeviceDispatch.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x14077B3C0 (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x140A7239C (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x14022E310 (PsGetCurrentSilo.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x1402936E0 (PdcCreateWatchdogAroundClientCall.c)
 *     PsGetPermanentSiloContext @ 0x14031CAD0 (PsGetPermanentSiloContext.c)
 *     PsGetParentSilo @ 0x1406831E0 (PsGetParentSilo.c)
 */

__int64 __fastcall VRegEnabledInJob(unsigned __int64 *a1)
{
  __int64 CurrentSilo; // rbx
  __int64 v3; // rdi

  CurrentSilo = (__int64)PsGetCurrentSilo();
  v3 = PdcCreateWatchdogAroundClientCall();
  if ( CurrentSilo == v3 )
    return 0LL;
  while ( (int)PsGetPermanentSiloContext(CurrentSilo, VrpSiloContextSlot, a1) < 0 )
  {
    CurrentSilo = PsGetParentSilo(CurrentSilo);
    if ( CurrentSilo == v3 )
      return 0LL;
  }
  return 1LL;
}
