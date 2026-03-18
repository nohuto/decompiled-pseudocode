/*
 * XREFs of PsIsThreadInSilo @ 0x14031C898
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x14077A068 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x14077A7E8 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x14077AD68 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x14077B1D0 (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x140A720EC (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x140A7246C (VrpHandleIoctlGetVirtualRootKey.c)
 * Callees:
 *     PsIsProcessInSilo @ 0x140289FEC (PsIsProcessInSilo.c)
 *     PspIsSiloInSilo @ 0x1407E5410 (PspIsSiloInSilo.c)
 */

char __fastcall PsIsThreadInSilo(__int64 a1, __int64 a2)
{
  if ( !a2 )
    return 1;
  if ( *(_QWORD *)(a1 + 1624) == -3LL )
    return PsIsProcessInSilo(*(struct _KPROCESS **)(a1 + 544), a2);
  return (unsigned __int8)PspIsSiloInSilo(*(_QWORD *)(a1 + 1624)) != 0;
}
