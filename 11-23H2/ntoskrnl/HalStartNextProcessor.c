/*
 * XREFs of HalStartNextProcessor @ 0x140376AB0
 * Callers:
 *     HalpInterruptReinitialize @ 0x140A9544C (HalpInterruptReinitialize.c)
 *     KeStartAllProcessors @ 0x140B47590 (KeStartAllProcessors.c)
 * Callees:
 *     HalpInterruptModel @ 0x14031FADC (HalpInterruptModel.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x140377060 (HalpQueryMaximumRegisteredProcessorCount.c)
 *     HalpInterruptStartBlockedProcessors @ 0x14051AA54 (HalpInterruptStartBlockedProcessors.c)
 *     HalpInterruptStartProcessor @ 0x140A88D4C (HalpInterruptStartProcessor.c)
 */

__int64 __fastcall HalStartNextProcessor(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int started; // edi

  if ( (unsigned int)HalpInterruptModel() - 1 > 3 || a2 >= (unsigned int)HalpQueryMaximumRegisteredProcessorCount() )
    return 2LL;
  started = HalpInterruptStartProcessor(a2, a3, 0LL, a1);
  if ( HalpInterruptBlockedProcessors )
  {
    if ( started == 4 )
      HalpInterruptStartBlockedProcessors(a2);
  }
  return started;
}
