/*
 * XREFs of wcsncmp @ 0x1403DBC30
 * Callers:
 *     LdrpCompareResourceNamesWithValidation @ 0x140358F90 (LdrpCompareResourceNamesWithValidation.c)
 *     HalpInsertProfileSource @ 0x140507D7C (HalpInsertProfileSource.c)
 *     CarFindDriverInfoByDriverName @ 0x1405D3560 (CarFindDriverInfoByDriverName.c)
 *     EtwpApplyPredicate @ 0x1406051B4 (EtwpApplyPredicate.c)
 *     PfSnFindPrefetchVolumeInfoInList @ 0x14075CB04 (PfSnFindPrefetchVolumeInfoInList.c)
 *     LdrpResCompareResourceNames @ 0x1407BD048 (LdrpResCompareResourceNames.c)
 *     pIoQueryBusDescription @ 0x1407CECF8 (pIoQueryBusDescription.c)
 *     WmipFindISinGEbyName @ 0x14086B2A0 (WmipFindISinGEbyName.c)
 *     PfSnAltProfileTreeCompareByScenarioId @ 0x14097F898 (PfSnAltProfileTreeCompareByScenarioId.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x140984E30 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopPluginInitializeSocSubsystemStaticInfo @ 0x140986548 (PopPluginInitializeSocSubsystemStaticInfo.c)
 *     PopWakeSourceIsChild @ 0x140987D68 (PopWakeSourceIsChild.c)
 *     PopWakeSourceIsParent @ 0x140987DE4 (PopWakeSourceIsParent.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1409E4CB4 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     AslPathClean @ 0x140A54E38 (AslPathClean.c)
 *     AslPathCleanUstr @ 0x140A550AC (AslPathCleanUstr.c)
 *     AslPathWildcardFindFirst @ 0x140A55804 (AslPathWildcardFindFirst.c)
 *     AslpPathWildcardMakeLeaves @ 0x140A56BD8 (AslpPathWildcardMakeLeaves.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140A6CCA8 (DrvDbSetDeviceIdDriverInfMatches.c)
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
