/*
 * XREFs of HalGetProcessorIdByNtNumber @ 0x140384CE0
 * Callers:
 *     HalGetMessageRoutingInfo @ 0x1403204B0 (HalGetMessageRoutingInfo.c)
 *     HalpInterruptGenerateMessage @ 0x14037CEC4 (HalpInterruptGenerateMessage.c)
 *     KeRegisterProcessorChangeCallback @ 0x140822990 (KeRegisterProcessorChangeCallback.c)
 *     PnprIsProcessorDevice @ 0x1409665F8 (PnprIsProcessorDevice.c)
 *     HalpInterruptReinitialize @ 0x140A952BC (HalpInterruptReinitialize.c)
 *     HalpDpStartProcessor @ 0x140A979E4 (HalpDpStartProcessor.c)
 *     PnprQuiesceProcessorDpc @ 0x140A9D2F0 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     HalpGetProcessorStateByNtIndex @ 0x140384D18 (HalpGetProcessorStateByNtIndex.c)
 */

__int64 __fastcall HalGetProcessorIdByNtNumber(__int64 a1)
{
  _DWORD *ProcessorStateByNtIndex; // rax
  _DWORD *v2; // rdx

  if ( (unsigned int)a1 >= (unsigned int)HalpInterruptProcessorCount )
    return 3221225485LL;
  ProcessorStateByNtIndex = (_DWORD *)HalpGetProcessorStateByNtIndex(a1);
  if ( !ProcessorStateByNtIndex )
    return 3221226021LL;
  *v2 = *ProcessorStateByNtIndex;
  return 0LL;
}
