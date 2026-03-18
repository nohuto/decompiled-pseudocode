/*
 * XREFs of CarInit @ 0x1405D3D04
 * Callers:
 *     CarReportUnusualShutdown @ 0x1405D45B0 (CarReportUnusualShutdown.c)
 *     VfVolatileSetDifRuleClass @ 0x140ADDC1C (VfVolatileSetDifRuleClass.c)
 *     VfInitBootDriversLoaded @ 0x140B577A4 (VfInitBootDriversLoaded.c)
 * Callees:
 *     CarInitLogging @ 0x1405D3260 (CarInitLogging.c)
 *     CarLoadConfig @ 0x1405D5694 (CarLoadConfig.c)
 *     CarpBugcheckInit @ 0x1405D58D4 (CarpBugcheckInit.c)
 */

__int64 CarInit()
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedCompareExchange(&CarInitialized, 1, 0);
  if ( (_DWORD)result != 1 )
  {
    qword_140C36948 = (__int64)&CarConfigurationEntries;
    CarConfigurationEntries = (__int64)&CarConfigurationEntries;
    CarLoadConfig();
    result = CarpBugcheckInit();
    if ( DifIsVolatileMode )
      return CarInitLogging();
  }
  return result;
}
