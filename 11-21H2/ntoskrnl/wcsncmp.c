/*
 * XREFs of wcsncmp @ 0x1403E33F0
 * Callers:
 *     LdrpCompareResourceNamesWithValidation @ 0x14024A520 (LdrpCompareResourceNamesWithValidation.c)
 *     HalpInsertProfileSource @ 0x14050B7C0 (HalpInsertProfileSource.c)
 *     CarFindDriverInfoByDriverName @ 0x140602C4C (CarFindDriverInfoByDriverName.c)
 *     EtwpApplyPredicate @ 0x140637E70 (EtwpApplyPredicate.c)
 *     pIoQueryBusDescription @ 0x1406DE494 (pIoQueryBusDescription.c)
 *     WmipFindISinGEbyName @ 0x14075F09C (WmipFindISinGEbyName.c)
 *     LdrpResCompareResourceNames @ 0x1407D4430 (LdrpResCompareResourceNames.c)
 *     PfSnFindPrefetchVolumeInfoInList @ 0x1407DFBDC (PfSnFindPrefetchVolumeInfoInList.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x14098D0C0 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopPluginInitializeSocSubsystemStaticInfo @ 0x14098E51C (PopPluginInitializeSocSubsystemStaticInfo.c)
 *     PopWakeSourceIsChild @ 0x14098F4D4 (PopWakeSourceIsChild.c)
 *     PopWakeSourceIsParent @ 0x14098F540 (PopWakeSourceIsParent.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1409E190C (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     AslPathClean @ 0x140A15610 (AslPathClean.c)
 *     AslPathCleanUstr @ 0x140A1582C (AslPathCleanUstr.c)
 *     AslPathWildcardFindFirst @ 0x140A15ECC (AslPathWildcardFindFirst.c)
 *     AslpPathWildcardMakeLeaves @ 0x140A172D4 (AslpPathWildcardMakeLeaves.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140A2F5D0 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     HalpFindDevice @ 0x140A70F24 (HalpFindDevice.c)
 *     HalpDeviceEquals @ 0x140A71270 (HalpDeviceEquals.c)
 *     ExpWatchProductTypeInitialization @ 0x140B1CC84 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     <none>
 */

int __cdecl wcsncmp(const wchar_t *Str1, const wchar_t *Str2, size_t MaxCount)
{
  if ( !MaxCount )
    return 0;
  while ( --MaxCount && *Str1 && *Str1 == *Str2 )
  {
    ++Str1;
    ++Str2;
  }
  return *Str1 - *Str2;
}
