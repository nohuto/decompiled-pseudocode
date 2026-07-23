/*
 * XREFs of ExUpdateLicenseData @ 0x1407EAFC0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     SLUpdateLicenseDataInternal @ 0x1409FA924 (SLUpdateLicenseDataInternal.c)
 */

__int64 ExUpdateLicenseData()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  unsigned int v2; // r9d

  v1 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 113);
  if ( qword_140D53510 )
    return qword_140D53510(v1, v2, v0);
  else
    return SLUpdateLicenseDataInternal(v1, v2, v0);
}
