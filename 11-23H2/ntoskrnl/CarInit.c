/*
 * XREFs of CarInit @ 0x1405D4274
 * Callers:
 *     CarReportUnusualShutdown @ 0x1405D4B20 (CarReportUnusualShutdown.c)
 *     VfVolatileSetDifRuleClass @ 0x140ADDC0C (VfVolatileSetDifRuleClass.c)
 *     VfInitBootDriversLoaded @ 0x140B577A4 (VfInitBootDriversLoaded.c)
 * Callees:
 *     CarInitLogging @ 0x1405D37D0 (CarInitLogging.c)
 *     CarLoadConfig @ 0x1405D5C04 (CarLoadConfig.c)
 *     CarpBugcheckInit @ 0x1405D5E44 (CarpBugcheckInit.c)
 */

__int64 CarInit()
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedCompareExchange(&CarInitialized, 1, 0);
  if ( (_DWORD)result != 1 )
  {
    qword_140C368D8 = (__int64)&CarConfigurationEntries;
    CarConfigurationEntries = (__int64)&CarConfigurationEntries;
    CarLoadConfig();
    result = CarpBugcheckInit();
    if ( DifIsVolatileMode )
      return CarInitLogging();
  }
  return result;
}
