/*
 * XREFs of PsGetPermanentSiloContext @ 0x14031C840
 * Callers:
 *     VRegEnabledInJob @ 0x14068EB28 (VRegEnabledInJob.c)
 *     CmpParseKey @ 0x1406E6980 (CmpParseKey.c)
 *     ObpLookupObjectName @ 0x1406ED720 (ObpLookupObjectName.c)
 *     CmGetRootKeyObjectForSilo @ 0x14077A3D0 (CmGetRootKeyObjectForSilo.c)
 *     CmpGetOrCreateContextForSiloNoRef @ 0x14077A73C (CmpGetOrCreateContextForSiloNoRef.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x14077A7E8 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x14077AD68 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x14077B1D0 (VrpHandleIoctlCreateNamespaceNode.c)
 *     CmLockKeyForWrite @ 0x1408472CC (CmLockKeyForWrite.c)
 *     ObInitServerSilo @ 0x14085596C (ObInitServerSilo.c)
 *     PspDeleteExternalServerSiloState @ 0x1409ACDB8 (PspDeleteExternalServerSiloState.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x140A720EC (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlModifyFlags @ 0x140A7282C (VrpHandleIoctlModifyFlags.c)
 *     ObGetSiloRootDirectoryPath @ 0x140A73E44 (ObGetSiloRootDirectoryPath.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetPermanentSiloContext(__int64 a1, unsigned int a2, unsigned __int64 *a3)
{
  __int64 v3; // rcx
  __int64 v4; // rcx

  if ( a1 )
    v3 = *(_QWORD *)(a1 + 1520);
  else
    v3 = qword_140D49ED0;
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
