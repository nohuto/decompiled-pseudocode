/*
 * XREFs of ExEnableNlsSectionCache @ 0x1409FB538
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x14080A920 (CmCompleteRegistryInitialization.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D370 (PsGetCurrentServerSiloGlobals.c)
 */

_QWORD *ExEnableNlsSectionCache()
{
  _QWORD *result; // rax

  result = PsGetCurrentServerSiloGlobals();
  *(_QWORD *)(result[132] + 8LL) = 1LL;
  return result;
}
