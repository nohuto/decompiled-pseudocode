/*
 * XREFs of ExEnableNlsSectionCache @ 0x1409FB7C8
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x14080ABF0 (CmCompleteRegistryInitialization.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 */

_QWORD *ExEnableNlsSectionCache()
{
  _QWORD *result; // rax

  result = PsGetCurrentServerSiloGlobals();
  *(_QWORD *)(result[132] + 8LL) = 1LL;
  return result;
}
