/*
 * XREFs of wcschr @ 0x1403DBAF0
 * Callers:
 *     PiDevCfgParsePropertyKeyName @ 0x1405627DC (PiDevCfgParsePropertyKeyName.c)
 *     SmUniqueIdParseProductName @ 0x1405CAD68 (SmUniqueIdParseProductName.c)
 *     LocalpConvertStringSidToSid @ 0x14069A428 (LocalpConvertStringSidToSid.c)
 *     LocalGetSDDLDeliminator @ 0x14069E3C0 (LocalGetSDDLDeliminator.c)
 *     _CmGetDeviceRegPropWorker @ 0x1406CD60C (_CmGetDeviceRegPropWorker.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x1406CF4CC (_CmGetDeviceInterfaceSubkeyPath.c)
 *     PiGetDeviceRegProperty @ 0x1407930F8 (PiGetDeviceRegProperty.c)
 *     _CmGetDeviceInterfaceSymbolicLinkName @ 0x14079414C (_CmGetDeviceInterfaceSymbolicLinkName.c)
 *     PiProcessNewDeviceNode @ 0x140795938 (PiProcessNewDeviceNode.c)
 *     _RegRtlCreateTreeTransacted @ 0x140797C20 (_RegRtlCreateTreeTransacted.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x1407C5B98 (_CmGetDeviceInterfaceReferenceString.c)
 *     EtwpGenerateFileName @ 0x1407E9570 (EtwpGenerateFileName.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x1407FBDAC (PiPnpRtlGetFilteredDeviceList.c)
 *     BiCreatePartitionDevice @ 0x1408069B0 (BiCreatePartitionDevice.c)
 *     SepParseElamCertResources @ 0x1408100DC (SepParseElamCertResources.c)
 *     MmCallDllInitialize @ 0x140811130 (MmCallDllInitialize.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x14082A4F0 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmSplitDevicePanelId @ 0x14082B8BC (_CmSplitDevicePanelId.c)
 *     PiSwFindSwDevice @ 0x14086A17C (PiSwFindSwDevice.c)
 *     PiNormalizeDeviceText @ 0x1408710F8 (PiNormalizeDeviceText.c)
 *     DrvDbGetDeviceIdMappedProperty @ 0x140876BB4 (DrvDbGetDeviceIdMappedProperty.c)
 *     DrvDbGetObjectDatabaseNode @ 0x140877250 (DrvDbGetObjectDatabaseNode.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x140879A24 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgFindDeviceDriver @ 0x14087D5F4 (PiDevCfgFindDeviceDriver.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x14087DA24 (DrvDbSplitDeviceIdDriverInfMatch.c)
 *     PiGetDeviceRegistryProperty @ 0x140954F18 (PiGetDeviceRegistryProperty.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140961CEC (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x14096283C (PiDevCfgSplitDriverConfigurationId.c)
 *     EtwpCovSampSplitSegments @ 0x1409F2F08 (EtwpCovSampSplitSegments.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x140A4EAAC (SdbpCreateSearchPathPartsFromPath.c)
 *     SdbQueryDataExTagID @ 0x140A4F238 (SdbQueryDataExTagID.c)
 *     AslPathClean @ 0x140A54E38 (AslPathClean.c)
 *     BiCreateFileDeviceElement @ 0x140A5D134 (BiCreateFileDeviceElement.c)
 *     BiDoesHiveKeyExist @ 0x140A5D708 (BiDoesHiveKeyExist.c)
 *     DrvDbDeleteObjectSubKey @ 0x140A6B26C (DrvDbDeleteObjectSubKey.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140A6CCA8 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbValidateDeviceIdName @ 0x140A6DA6C (DrvDbValidateDeviceIdName.c)
 *     DrvDbValidateDriverDatabaseName @ 0x140A6DAE4 (DrvDbValidateDriverDatabaseName.c)
 *     DrvDbValidateDriverInfFileName @ 0x140A6DB48 (DrvDbValidateDriverInfFileName.c)
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
