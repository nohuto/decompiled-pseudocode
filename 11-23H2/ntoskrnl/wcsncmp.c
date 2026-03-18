/*
 * XREFs of wcsncmp @ 0x1403DBA50
 * Callers:
 *     LdrpCompareResourceNamesWithValidation @ 0x140358DF0 (LdrpCompareResourceNamesWithValidation.c)
 *     HalpInsertProfileSource @ 0x14050782C (HalpInsertProfileSource.c)
 *     CarFindDriverInfoByDriverName @ 0x1405D2FF0 (CarFindDriverInfoByDriverName.c)
 *     EtwpApplyPredicate @ 0x140604C64 (EtwpApplyPredicate.c)
 *     PfSnFindPrefetchVolumeInfoInList @ 0x14075C914 (PfSnFindPrefetchVolumeInfoInList.c)
 *     LdrpResCompareResourceNames @ 0x1407BCD78 (LdrpResCompareResourceNames.c)
 *     pIoQueryBusDescription @ 0x1407CEA28 (pIoQueryBusDescription.c)
 *     WmipFindISinGEbyName @ 0x14086B060 (WmipFindISinGEbyName.c)
 *     PfSnAltProfileTreeCompareByScenarioId @ 0x14097F698 (PfSnAltProfileTreeCompareByScenarioId.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x140984C30 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopPluginInitializeSocSubsystemStaticInfo @ 0x140986348 (PopPluginInitializeSocSubsystemStaticInfo.c)
 *     PopWakeSourceIsChild @ 0x140987B68 (PopWakeSourceIsChild.c)
 *     PopWakeSourceIsParent @ 0x140987BE4 (PopWakeSourceIsParent.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1409E4A24 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     AslPathClean @ 0x140A54B88 (AslPathClean.c)
 *     AslPathCleanUstr @ 0x140A54DFC (AslPathCleanUstr.c)
 *     AslPathWildcardFindFirst @ 0x140A55554 (AslPathWildcardFindFirst.c)
 *     AslpPathWildcardMakeLeaves @ 0x140A56928 (AslpPathWildcardMakeLeaves.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140A6C9F8 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     HalpDeviceEquals @ 0x140AB2150 (HalpDeviceEquals.c)
 *     HalpFindDevice @ 0x140AB2410 (HalpFindDevice.c)
 *     ExpWatchProductTypeInitialization @ 0x140B67484 (ExpWatchProductTypeInitialization.c)
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
