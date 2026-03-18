/*
 * XREFs of RtlGUIDFromString @ 0x1406CF770
 * Callers:
 *     RtlQueryPackageClaims @ 0x140226060 (RtlQueryPackageClaims.c)
 *     PiDevCfgParseInterfaceKeyName @ 0x140562124 (PiDevCfgParseInterfaceKeyName.c)
 *     PiDevCfgParsePropertyKeyName @ 0x1405621BC (PiDevCfgParsePropertyKeyName.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x1405B1030 (RtlRaiseCustomSystemEventTrigger.c)
 *     PipGenerateContainerID @ 0x1406850A8 (PipGenerateContainerID.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x1406C9F70 (_CmGetDeviceInterfaceClassGuid.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406CA46C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     PiDmCacheDataDecode @ 0x1406CC174 (PiDmCacheDataDecode.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1406CC880 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmValidateDeviceInterfaceName @ 0x1406CEA70 (_CmValidateDeviceInterfaceName.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x1406CF54C (_CmGetDeviceInterfaceSubkeyPath.c)
 *     IoVolumeDeviceToGuid @ 0x140701F50 (IoVolumeDeviceToGuid.c)
 *     _PnpIsValidGuidString @ 0x1407882EC (_PnpIsValidGuidString.c)
 *     PiPnpRtlCmActionCallback @ 0x140789030 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectUpdateCachedCmProperty @ 0x140789738 (PiDmObjectUpdateCachedCmProperty.c)
 *     PiProcessNewDeviceNode @ 0x140795C58 (PiProcessNewDeviceNode.c)
 *     PipProcessStartPhase3 @ 0x14079BED4 (PipProcessStartPhase3.c)
 *     PiPnpRtlGetFilteredDeviceInterfaceList @ 0x1407FC40C (PiPnpRtlGetFilteredDeviceInterfaceList.c)
 *     BiBindEfiEntries @ 0x140805D6C (BiBindEfiEntries.c)
 *     BiBuildIdentifierList @ 0x140806BE8 (BiBuildIdentifierList.c)
 *     BiGetObjectIdentifier @ 0x140807CE0 (BiGetObjectIdentifier.c)
 *     BiConvertRegistryDataToElement @ 0x140807EB4 (BiConvertRegistryDataToElement.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x1408081F8 (BiGetObjectReferenceFromEfiEntry.c)
 *     EtwpEnableAutoLoggerProvider @ 0x14080B754 (EtwpEnableAutoLoggerProvider.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14081CB70 (PiCreateDriverSwDeviceCallback.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x14082C4E0 (_CmDevicePanelEnumSubkeyCallback.c)
 *     _CmSplitDevicePanelId @ 0x14082D10C (_CmSplitDevicePanelId.c)
 *     WdipSemLoadNextEndEvent @ 0x1408322D0 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextContextProvider @ 0x1408325D4 (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadScenarioTable @ 0x140832854 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x140832C60 (WdipSemLoadNextScenario.c)
 *     EtwStartAutoLogger @ 0x14083DD38 (EtwStartAutoLogger.c)
 *     PiDcInitUpdateProperties @ 0x140850328 (PiDcInitUpdateProperties.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x140876094 (_PnpGetGenericStorePropertyKeys.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1408790C0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PnpIsValidGuidString @ 0x1408848C0 (PnpIsValidGuidString.c)
 *     IoVolumeDeviceNameToGuid @ 0x14094AB70 (IoVolumeDeviceNameToGuid.c)
 *     PipGetDriverKsrGuidRegistryValue @ 0x140953348 (PipGetDriverKsrGuidRegistryValue.c)
 *     PiDevCfgConvertPropertyFromValue @ 0x14095D794 (PiDevCfgConvertPropertyFromValue.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14095DB3C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x14095EEB0 (PiDevCfgQueryDeviceMigrationNode.c)
 *     SddlpUuidFromString @ 0x1409D2B18 (SddlpUuidFromString.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x1409DE138 (WdipSemLoadLocalGroupPolicy.c)
 *     ExpParseSignatureName @ 0x1409FCF20 (ExpParseSignatureName.c)
 *     BcdEnumerateObjects @ 0x140A5C4A0 (BcdEnumerateObjects.c)
 *     PopProcessWakeSourceWork @ 0x140AA13F8 (PopProcessWakeSourceWork.c)
 *     VhdAutoAttachVirtualDisks @ 0x140B35A9C (VhdAutoAttachVirtualDisks.c)
 *     IopInitializePlugPlayServices @ 0x140B42004 (IopInitializePlugPlayServices.c)
 *     EmpParseEntryTypes @ 0x140B55494 (EmpParseEntryTypes.c)
 *     EmpInfParseGetGuidFromName @ 0x140B562B0 (EmpInfParseGetGuidFromName.c)
 *     PipResetDevice @ 0x140B95660 (PipResetDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ScanHexFormat @ 0x1406CF890 (ScanHexFormat.c)
 */

NTSTATUS __stdcall RtlGUIDFromString(PCUNICODE_STRING GuidString, GUID *Guid)
{
  unsigned __int16 *p_Data2; // r8
  unsigned __int16 *p_Data3; // rax
  unsigned int Length; // edx
  wchar_t *Buffer; // rcx
  unsigned int v7; // r8d
  unsigned __int8 *v8; // rdx
  unsigned __int8 *v9; // rax
  unsigned __int8 v10; // cl
  __int128 v12; // [rsp+70h] [rbp-28h] BYREF

  p_Data2 = &Guid->Data2;
  p_Data3 = &Guid->Data3;
  Length = GuidString->Length;
  Buffer = GuidString->Buffer;
  v12 = 0LL;
  if ( (unsigned int)ScanHexFormat(
                       Buffer,
                       Length >> 1,
                       L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
                       Guid,
                       p_Data2,
                       p_Data3,
                       &v12,
                       (char *)&v12 + 2,
                       (char *)&v12 + 4,
                       (char *)&v12 + 6,
                       (char *)&v12 + 8,
                       (char *)&v12 + 10,
                       (char *)&v12 + 12,
                       (char *)&v12 + 14) == -1 )
    return -1073741811;
  v7 = 0;
  v8 = &Guid->Data4[1];
  v9 = (unsigned __int8 *)&v12 + 2;
  do
  {
    v7 += 8;
    *(v8 - 1) = *(v9 - 2);
    v8 += 8;
    v10 = *v9;
    v9 += 16;
    *(v8 - 8) = v10;
    *(v8 - 7) = *(v9 - 14);
    *(v8 - 6) = *(v9 - 12);
    *(v8 - 5) = *(v9 - 10);
    *(v8 - 4) = *(v9 - 8);
    *(v8 - 3) = *(v9 - 6);
    *(v8 - 2) = *(v9 - 4);
  }
  while ( v7 < 8 );
  return 0;
}
