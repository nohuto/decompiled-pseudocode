/*
 * XREFs of KiXSavesManagesIpt @ 0x14057336C
 * Callers:
 *     KiQueryIptSupport @ 0x140A9F460 (KiQueryIptSupport.c)
 * Callees:
 *     <none>
 */

bool KiXSavesManagesIpt()
{
  return (_bittest64(&KeEnabledSupervisorXStateFeatures, 8u) & _bittest64(&KeFeatureBits, 0x17u)) != 0;
}
