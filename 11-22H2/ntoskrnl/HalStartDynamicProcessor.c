/*
 * XREFs of HalStartDynamicProcessor @ 0x140504D00
 * Callers:
 *     KiStartDynamicProcessor @ 0x1409738B8 (KiStartDynamicProcessor.c)
 *     HalpInterruptReinitialize @ 0x140A9550C (HalpInterruptReinitialize.c)
 * Callees:
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x1403776B0 (HalpQueryMaximumRegisteredProcessorCount.c)
 *     HalpCheckNumaConfiguration @ 0x14051AC18 (HalpCheckNumaConfiguration.c)
 *     HalpUpdateNumaConfiguration @ 0x14051B2D4 (HalpUpdateNumaConfiguration.c)
 *     HalpMcUpdateLock @ 0x14051BD2C (HalpMcUpdateLock.c)
 *     HalpMcUpdateUnlock @ 0x14051BD84 (HalpMcUpdateUnlock.c)
 *     MmLockPagableSectionByHandle @ 0x1406F5800 (MmLockPagableSectionByHandle.c)
 *     HalpInterruptStartProcessor @ 0x140A895A0 (HalpInterruptStartProcessor.c)
 */

__int64 __fastcall HalStartDynamicProcessor(__int64 a1, unsigned int a2, unsigned int a3, unsigned __int16 a4)
{
  unsigned int started; // ebx

  if ( HalpInterruptProcessorCap && HalpInterruptProcessorsStarted >= (unsigned int)HalpInterruptProcessorCap )
    return 2LL;
  if ( a2 >= (unsigned int)HalpQueryMaximumRegisteredProcessorCount()
    || !HalpInterruptClusterModeEnabled && !HalpInterruptPhysicalModeOnly && a2 >= HalpInterruptLogicalFlatLimit )
  {
    return 2LL;
  }
  if ( !HalpHiberInProgress )
  {
    MmLockPagableSectionByHandle(HalpSleepPageLock);
    HalpMcUpdateLock();
    if ( !(unsigned __int8)HalpCheckNumaConfiguration(a3, a4) )
      return 2LL;
  }
  started = HalpInterruptStartProcessor(a2, a3, 1LL, a1);
  if ( started != 4 && !HalpHiberInProgress )
    HalpUpdateNumaConfiguration(a3, a4);
  if ( !HalpHiberInProgress )
    HalpMcUpdateUnlock();
  return started;
}
