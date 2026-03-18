/*
 * XREFs of HalGetProcessorIdByNtNumber @ 0x140384B00
 * Callers:
 *     HalGetMessageRoutingInfo @ 0x140320220 (HalGetMessageRoutingInfo.c)
 *     HalpInterruptGenerateMessage @ 0x14037CD24 (HalpInterruptGenerateMessage.c)
 *     KeRegisterProcessorChangeCallback @ 0x140822690 (KeRegisterProcessorChangeCallback.c)
 *     PnprIsProcessorDevice @ 0x1409663F8 (PnprIsProcessorDevice.c)
 *     HalpInterruptReinitialize @ 0x140A9544C (HalpInterruptReinitialize.c)
 *     HalpDpStartProcessor @ 0x140A97B74 (HalpDpStartProcessor.c)
 *     PnprQuiesceProcessorDpc @ 0x140A9D480 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     HalpGetProcessorStateByNtIndex @ 0x140384B38 (HalpGetProcessorStateByNtIndex.c)
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
