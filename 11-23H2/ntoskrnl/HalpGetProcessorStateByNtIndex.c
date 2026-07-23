/*
 * XREFs of HalpGetProcessorStateByNtIndex @ 0x140384D18
 * Callers:
 *     HalpInterruptEnablePerformanceEvents @ 0x14037BEF8 (HalpInterruptEnablePerformanceEvents.c)
 *     HalGetProcessorIdByNtNumber @ 0x140384CE0 (HalGetProcessorIdByNtNumber.c)
 *     HalpInterruptStartBlockedProcessors @ 0x14051AFA4 (HalpInterruptStartBlockedProcessors.c)
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
