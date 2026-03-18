/*
 * XREFs of HalpGetProcessorStateByNtIndex @ 0x140384B38
 * Callers:
 *     HalpInterruptEnablePerformanceEvents @ 0x14037BD58 (HalpInterruptEnablePerformanceEvents.c)
 *     HalGetProcessorIdByNtNumber @ 0x140384B00 (HalGetProcessorIdByNtNumber.c)
 *     HalpInterruptStartBlockedProcessors @ 0x14051AA54 (HalpInterruptStartBlockedProcessors.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpGetProcessorStateByNtIndex(unsigned int a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 < (unsigned int)HalpInterruptProcessorCount )
    return *(_QWORD *)(HalpInterruptProcessorStateByNtIndex + 8LL * a1);
  return result;
}
