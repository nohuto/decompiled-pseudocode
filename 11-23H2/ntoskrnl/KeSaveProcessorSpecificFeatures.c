/*
 * XREFs of KeSaveProcessorSpecificFeatures @ 0x14056BFCC
 * Callers:
 *     PnprQuiesceProcessorDpc @ 0x140A9D480 (PnprQuiesceProcessorDpc.c)
 *     PopHandleNextState @ 0x140AA811C (PopHandleNextState.c)
 * Callees:
 *     KiSaveXSaveSupport @ 0x140A9F66C (KiSaveXSaveSupport.c)
 */

__int64 KeSaveProcessorSpecificFeatures()
{
  return KiSaveXSaveSupport();
}
