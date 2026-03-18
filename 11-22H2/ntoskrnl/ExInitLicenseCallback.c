/*
 * XREFs of ExInitLicenseCallback @ 0x140865F2C
 * Callers:
 *     Phase1InitializationDiscard @ 0x140B4FF9C (Phase1InitializationDiscard.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D390 (PsGetCurrentServerSiloGlobals.c)
 *     ExCreateCallback @ 0x1407DC8B0 (ExCreateCallback.c)
 */

NTSTATUS ExInitLicenseCallback()
{
  __int64 v0; // rbx
  NTSTATUS result; // eax

  v0 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 113);
  result = ExCreateCallback((PCALLBACK_OBJECT *)(v0 + 46848), (POBJECT_ATTRIBUTES)&stru_140A78F10, 1u, 1u);
  if ( result < 0 )
    *(_QWORD *)(v0 + 46848) = 0LL;
  return result;
}
