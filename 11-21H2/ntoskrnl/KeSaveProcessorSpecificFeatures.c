/*
 * XREFs of KeSaveProcessorSpecificFeatures @ 0x14038D050
 * Callers:
 *     PopHandleNextState @ 0x140A4B5A0 (PopHandleNextState.c)
 *     PnprQuiesceProcessorDpc @ 0x140A687F0 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     KiSaveXSaveSupport @ 0x140A4DC40 (KiSaveXSaveSupport.c)
 */

__int64 KeSaveProcessorSpecificFeatures()
{
  return KiSaveXSaveSupport();
}
