/*
 * XREFs of KiXSavesManagesIpt @ 0x140572E2C
 * Callers:
 *     KiQueryIptSupport @ 0x140A9F5F0 (KiQueryIptSupport.c)
 * Callees:
 *     <none>
 */

bool KiXSavesManagesIpt()
{
  return (_bittest64(&KeEnabledSupervisorXStateFeatures, 8u) & _bittest64(&KeFeatureBits, 0x17u)) != 0;
}
