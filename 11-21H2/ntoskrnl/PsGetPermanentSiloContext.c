/*
 * XREFs of PsGetPermanentSiloContext @ 0x140211FA0
 * Callers:
 *     CmGetRootKeyObjectForSilo @ 0x140690BDC (CmGetRootKeyObjectForSilo.c)
 *     CmpGetOrCreateContextForSiloNoRef @ 0x140690C50 (CmpGetOrCreateContextForSiloNoRef.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x140690CFC (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x140691898 (VrpHandleIoctlCreateNamespaceNode.c)
 *     VRegEnabledInJob @ 0x1406928FC (VRegEnabledInJob.c)
 *     CmpParseKey @ 0x1407349A0 (CmpParseKey.c)
 *     ObpLookupObjectName @ 0x1407CB6C0 (ObpLookupObjectName.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x1407F5F80 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     CmLockKeyForWrite @ 0x14080F9EC (CmLockKeyForWrite.c)
 *     ObInitServerSilo @ 0x140859318 (ObInitServerSilo.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x1409262FC (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlModifyFlags @ 0x140926868 (VrpHandleIoctlModifyFlags.c)
 *     PspDeleteExternalServerSiloState @ 0x1409ABED8 (PspDeleteExternalServerSiloState.c)
 *     ObGetSiloRootDirectoryPath @ 0x140A34854 (ObGetSiloRootDirectoryPath.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetPermanentSiloContext(__int64 a1, unsigned int a2, unsigned __int64 *a3)
{
  __int64 v3; // rcx
  __int64 v4; // rcx

  if ( a1 )
    v3 = *(_QWORD *)(a1 + 1496);
  else
    v3 = qword_140D32A90;
  *a3 = 0LL;
  if ( a2 >= 0x20 )
  {
    a2 -= 32;
    if ( a2 >= 0x100 )
      return 3221225485LL;
    v3 = *(_QWORD *)(v3 + 512);
    if ( !v3 )
      return 3221226021LL;
  }
  v4 = *(_QWORD *)(v3 + 16LL * a2 + 8);
  if ( (v4 & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
    return 3221226021LL;
  if ( (v4 & 1) == 0 )
    return 3221225659LL;
  *a3 = v4 & 0xFFFFFFFFFFFFFFFEuLL;
  return 0LL;
}
