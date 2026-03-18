/*
 * XREFs of PsIsThreadInSilo @ 0x1402F6170
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140690378 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x140690CFC (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x140691898 (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x1407F5E04 (VrpHandleIoctlGetVirtualRootKey.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x1407F5F80 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x1409262FC (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 * Callees:
 *     PsIsProcessInSilo @ 0x140300B74 (PsIsProcessInSilo.c)
 *     PspIsSiloInSilo @ 0x1406E1570 (PspIsSiloInSilo.c)
 */

char __fastcall PsIsThreadInSilo(__int64 a1, __int64 a2)
{
  if ( !a2 )
    return 1;
  if ( *(_QWORD *)(a1 + 1624) == -3LL )
    return PsIsProcessInSilo(*(_QWORD *)(a1 + 544));
  return (unsigned __int8)PspIsSiloInSilo(*(_QWORD *)(a1 + 1624)) != 0;
}
