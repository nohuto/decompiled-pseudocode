/*
 * XREFs of KeSaveProcessorSpecificFeatures @ 0x14056C68C
 * Callers:
 *     PnprQuiesceProcessorDpc @ 0x140A9D2F0 (PnprQuiesceProcessorDpc.c)
 *     PopHandleNextState @ 0x140AA7F8C (PopHandleNextState.c)
 * Callees:
 *     KiSaveXSaveSupport @ 0x140A9F4DC (KiSaveXSaveSupport.c)
 */

__int64 KeSaveProcessorSpecificFeatures()
{
  return KiSaveXSaveSupport();
}
