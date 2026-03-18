/*
 * XREFs of ExInitLicenseCallback @ 0x140864CD4
 * Callers:
 *     Phase1InitializationDiscard @ 0x140AFBDF4 (Phase1InitializationDiscard.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 *     ExCreateCallback @ 0x1406E0E40 (ExCreateCallback.c)
 */

NTSTATUS ExInitLicenseCallback()
{
  __int64 v0; // rbx
  NTSTATUS result; // eax

  v0 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 113);
  result = ExCreateCallback((PCALLBACK_OBJECT *)(v0 + 46848), (POBJECT_ATTRIBUTES)&stru_140A39120, 1u, 1u);
  if ( result < 0 )
    *(_QWORD *)(v0 + 46848) = 0LL;
  return result;
}
