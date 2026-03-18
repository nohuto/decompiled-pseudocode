/*
 * XREFs of wcschr @ 0x1403DB2B0
 * Callers:
 *     PiDevCfgParsePropertyKeyName @ 0x1405621BC (PiDevCfgParsePropertyKeyName.c)
 *     SmUniqueIdParseProductName @ 0x1405CA888 (SmUniqueIdParseProductName.c)
 *     LocalpConvertStringSidToSid @ 0x14069A428 (LocalpConvertStringSidToSid.c)
 *     LocalGetSDDLDeliminator @ 0x14069E3C0 (LocalGetSDDLDeliminator.c)
 *     _CmGetDeviceRegPropWorker @ 0x1406CD68C (_CmGetDeviceRegPropWorker.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x1406CF54C (_CmGetDeviceInterfaceSubkeyPath.c)
 *     PiGetDeviceRegProperty @ 0x140793418 (PiGetDeviceRegProperty.c)
 *     _CmGetDeviceInterfaceSymbolicLinkName @ 0x14079446C (_CmGetDeviceInterfaceSymbolicLinkName.c)
 *     PiProcessNewDeviceNode @ 0x140795C58 (PiProcessNewDeviceNode.c)
 *     _RegRtlCreateTreeTransacted @ 0x140797F40 (_RegRtlCreateTreeTransacted.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x1407C5E58 (_CmGetDeviceInterfaceReferenceString.c)
 *     EtwpGenerateFileName @ 0x1407E9820 (EtwpGenerateFileName.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x1407FC18C (PiPnpRtlGetFilteredDeviceList.c)
 *     BiCreatePartitionDevice @ 0x140808C60 (BiCreatePartitionDevice.c)
 *     SepParseElamCertResources @ 0x14081238C (SepParseElamCertResources.c)
 *     MmCallDllInitialize @ 0x1408133E0 (MmCallDllInitialize.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x14082BD40 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmSplitDevicePanelId @ 0x14082D10C (_CmSplitDevicePanelId.c)
 *     PiSwFindSwDevice @ 0x14086A40C (PiSwFindSwDevice.c)
 *     PiNormalizeDeviceText @ 0x140871388 (PiNormalizeDeviceText.c)
 *     DrvDbGetDeviceIdMappedProperty @ 0x140876E44 (DrvDbGetDeviceIdMappedProperty.c)
 *     DrvDbGetObjectDatabaseNode @ 0x1408774E0 (DrvDbGetObjectDatabaseNode.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x140879CB4 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgFindDeviceDriver @ 0x14087D884 (PiDevCfgFindDeviceDriver.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x14087DCB4 (DrvDbSplitDeviceIdDriverInfMatch.c)
 *     PiGetDeviceRegistryProperty @ 0x140954DC8 (PiGetDeviceRegistryProperty.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140961B9C (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x1409626EC (PiDevCfgSplitDriverConfigurationId.c)
 *     EtwpCovSampSplitSegments @ 0x1409F2D28 (EtwpCovSampSplitSegments.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x140A4E86C (SdbpCreateSearchPathPartsFromPath.c)
 *     SdbQueryDataExTagID @ 0x140A4EFF8 (SdbQueryDataExTagID.c)
 *     AslPathClean @ 0x140A54BF8 (AslPathClean.c)
 *     BiCreateFileDeviceElement @ 0x140A5CEF4 (BiCreateFileDeviceElement.c)
 *     BiDoesHiveKeyExist @ 0x140A5D4C8 (BiDoesHiveKeyExist.c)
 *     DrvDbDeleteObjectSubKey @ 0x140A6B02C (DrvDbDeleteObjectSubKey.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140A6CA68 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbValidateDeviceIdName @ 0x140A6D82C (DrvDbValidateDeviceIdName.c)
 *     DrvDbValidateDriverDatabaseName @ 0x140A6D8A4 (DrvDbValidateDriverDatabaseName.c)
 *     DrvDbValidateDriverInfFileName @ 0x140A6D908 (DrvDbValidateDriverInfFileName.c)
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
