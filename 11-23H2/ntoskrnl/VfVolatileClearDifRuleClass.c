/*
 * XREFs of VfVolatileClearDifRuleClass @ 0x140ADDA9C
 * Callers:
 *     NtSetSystemInformation @ 0x14075F020 (NtSetSystemInformation.c)
 *     VfDriverUnloadImage @ 0x140ABCEC4 (VfDriverUnloadImage.c)
 * Callees:
 *     CarCleanup @ 0x1405D3CA8 (CarCleanup.c)
 *     DifDeregisterAllPlugins @ 0x1405D5178 (DifDeregisterAllPlugins.c)
 *     DifSetPluginRunningWithoutReboot @ 0x1405D5970 (DifSetPluginRunningWithoutReboot.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     VfClearDifWithoutReboot @ 0x140AC2BCC (VfClearDifWithoutReboot.c)
 */

__int64 VfVolatileClearDifRuleClass()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( !ViFullyInitialized || (VfOptionFlags & 0x800) != 0 )
  {
    DifDeregisterAllPlugins();
    if ( ViWdmThunksWithIatIndex )
    {
      ExFreePoolWithTag(ViWdmThunksWithIatIndex, 0x6D4D7644u);
      ViWdmThunksWithIatIndex = 0LL;
    }
    CarCleanup();
    VfDifRunningWithoutReboot = 0;
    DifSetPluginRunningWithoutReboot(0);
    VfAllowedVolatileRC = 0LL;
    VfRuleClasses = 0LL;
    DifpPoolTags = 0LL;
    qword_140D17F70 = 0LL;
    xmmword_140D17F60 = 0LL;
    DifpPoolTagsSize = 0;
    DifpPoolTagsSizeBytes = 0;
    VfOptionFlags = 0;
    MmVerifierData = 0;
    if ( VfInitializedWithoutReboot )
    {
      VfClearDifWithoutReboot();
      VfInitializedWithoutReboot = 0;
    }
  }
  else
  {
    return (unsigned int)-1073738628;
  }
  return v0;
}
