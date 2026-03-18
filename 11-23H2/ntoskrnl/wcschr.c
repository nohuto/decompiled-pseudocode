/*
 * XREFs of wcschr @ 0x1403DB910
 * Callers:
 *     PiDevCfgParsePropertyKeyName @ 0x14056211C (PiDevCfgParsePropertyKeyName.c)
 *     SmUniqueIdParseProductName @ 0x1405CA7F8 (SmUniqueIdParseProductName.c)
 *     LocalpConvertStringSidToSid @ 0x14069A428 (LocalpConvertStringSidToSid.c)
 *     LocalGetSDDLDeliminator @ 0x14069E3C0 (LocalGetSDDLDeliminator.c)
 *     _CmGetDeviceRegPropWorker @ 0x1406CD5DC (_CmGetDeviceRegPropWorker.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x1406CF49C (_CmGetDeviceInterfaceSubkeyPath.c)
 *     PiGetDeviceRegProperty @ 0x140792F08 (PiGetDeviceRegProperty.c)
 *     _CmGetDeviceInterfaceSymbolicLinkName @ 0x140793F5C (_CmGetDeviceInterfaceSymbolicLinkName.c)
 *     PiProcessNewDeviceNode @ 0x140795748 (PiProcessNewDeviceNode.c)
 *     _RegRtlCreateTreeTransacted @ 0x140797A30 (_RegRtlCreateTreeTransacted.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x1407C58C8 (_CmGetDeviceInterfaceReferenceString.c)
 *     EtwpGenerateFileName @ 0x1407E92A0 (EtwpGenerateFileName.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x1407FBADC (PiPnpRtlGetFilteredDeviceList.c)
 *     BiCreatePartitionDevice @ 0x1408066E0 (BiCreatePartitionDevice.c)
 *     SepParseElamCertResources @ 0x14080FE0C (SepParseElamCertResources.c)
 *     MmCallDllInitialize @ 0x140810E60 (MmCallDllInitialize.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x14082A1F0 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmSplitDevicePanelId @ 0x14082B5BC (_CmSplitDevicePanelId.c)
 *     PiSwFindSwDevice @ 0x140869F3C (PiSwFindSwDevice.c)
 *     PiNormalizeDeviceText @ 0x140870EB8 (PiNormalizeDeviceText.c)
 *     DrvDbGetDeviceIdMappedProperty @ 0x140876974 (DrvDbGetDeviceIdMappedProperty.c)
 *     DrvDbGetObjectDatabaseNode @ 0x140877010 (DrvDbGetObjectDatabaseNode.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1408797E4 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgFindDeviceDriver @ 0x14087D3B4 (PiDevCfgFindDeviceDriver.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x14087D7E4 (DrvDbSplitDeviceIdDriverInfMatch.c)
 *     PiGetDeviceRegistryProperty @ 0x140954D18 (PiGetDeviceRegistryProperty.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140961AEC (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x14096263C (PiDevCfgSplitDriverConfigurationId.c)
 *     EtwpCovSampSplitSegments @ 0x1409F2C78 (EtwpCovSampSplitSegments.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x140A4E7FC (SdbpCreateSearchPathPartsFromPath.c)
 *     SdbQueryDataExTagID @ 0x140A4EF88 (SdbQueryDataExTagID.c)
 *     AslPathClean @ 0x140A54B88 (AslPathClean.c)
 *     BiCreateFileDeviceElement @ 0x140A5CE84 (BiCreateFileDeviceElement.c)
 *     BiDoesHiveKeyExist @ 0x140A5D458 (BiDoesHiveKeyExist.c)
 *     DrvDbDeleteObjectSubKey @ 0x140A6AFBC (DrvDbDeleteObjectSubKey.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140A6C9F8 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbValidateDeviceIdName @ 0x140A6D7BC (DrvDbValidateDeviceIdName.c)
 *     DrvDbValidateDriverDatabaseName @ 0x140A6D834 (DrvDbValidateDriverDatabaseName.c)
 *     DrvDbValidateDriverInfFileName @ 0x140A6D898 (DrvDbValidateDriverInfFileName.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcschr(const wchar_t *Str, wchar_t Ch)
{
  wchar_t v2; // ax
  wchar_t v3; // r8

  v2 = *Str;
  if ( *Str )
  {
    v3 = *Str;
    do
    {
      v2 = v3;
      if ( v3 == Ch )
        break;
      v2 = *++Str;
      v3 = *Str;
    }
    while ( *Str );
  }
  if ( v2 != Ch )
    return 0LL;
  return (wchar_t *)Str;
}
