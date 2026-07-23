/*
 * XREFs of RtlGUIDFromString @ 0x1406CF6F0
 * Callers:
 *     RtlQueryPackageClaims @ 0x140226150 (RtlQueryPackageClaims.c)
 *     PiDevCfgParseInterfaceKeyName @ 0x140562744 (PiDevCfgParseInterfaceKeyName.c)
 *     PiDevCfgParsePropertyKeyName @ 0x1405627DC (PiDevCfgParsePropertyKeyName.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x1405B1510 (RtlRaiseCustomSystemEventTrigger.c)
 *     PipGenerateContainerID @ 0x1406850A8 (PipGenerateContainerID.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x1406C9EF0 (_CmGetDeviceInterfaceClassGuid.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406CA3EC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     PiDmCacheDataDecode @ 0x1406CC0F4 (PiDmCacheDataDecode.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1406CC800 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmValidateDeviceInterfaceName @ 0x1406CE9F0 (_CmValidateDeviceInterfaceName.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x1406CF4CC (_CmGetDeviceInterfaceSubkeyPath.c)
 *     IoVolumeDeviceToGuid @ 0x1407020B0 (IoVolumeDeviceToGuid.c)
 *     _PnpIsValidGuidString @ 0x140787FCC (_PnpIsValidGuidString.c)
 *     PiPnpRtlCmActionCallback @ 0x140788D10 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectUpdateCachedCmProperty @ 0x140789418 (PiDmObjectUpdateCachedCmProperty.c)
 *     PiProcessNewDeviceNode @ 0x140795938 (PiProcessNewDeviceNode.c)
 *     PipProcessStartPhase3 @ 0x14079BBB4 (PipProcessStartPhase3.c)
 *     PiPnpRtlGetFilteredDeviceInterfaceList @ 0x1407FC02C (PiPnpRtlGetFilteredDeviceInterfaceList.c)
 *     BiBindEfiEntries @ 0x140803AB8 (BiBindEfiEntries.c)
 *     BiBuildIdentifierList @ 0x140804938 (BiBuildIdentifierList.c)
 *     BiGetObjectIdentifier @ 0x140805A30 (BiGetObjectIdentifier.c)
 *     BiConvertRegistryDataToElement @ 0x140805C04 (BiConvertRegistryDataToElement.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x140805F48 (BiGetObjectReferenceFromEfiEntry.c)
 *     EtwpEnableAutoLoggerProvider @ 0x1408094A4 (EtwpEnableAutoLoggerProvider.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14081A8C0 (PiCreateDriverSwDeviceCallback.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x14082AC90 (_CmDevicePanelEnumSubkeyCallback.c)
 *     _CmSplitDevicePanelId @ 0x14082B8BC (_CmSplitDevicePanelId.c)
 *     WdipSemLoadNextEndEvent @ 0x140830A80 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextContextProvider @ 0x140830D84 (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadScenarioTable @ 0x140831004 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x140831410 (WdipSemLoadNextScenario.c)
 *     EtwStartAutoLogger @ 0x14083C2A8 (EtwStartAutoLogger.c)
 *     PiDcInitUpdateProperties @ 0x14084F7A8 (PiDcInitUpdateProperties.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x140875E04 (_PnpGetGenericStorePropertyKeys.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x140878E30 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PnpIsValidGuidString @ 0x140884630 (PnpIsValidGuidString.c)
 *     IoVolumeDeviceNameToGuid @ 0x14094ACC0 (IoVolumeDeviceNameToGuid.c)
 *     PipGetDriverKsrGuidRegistryValue @ 0x140953498 (PipGetDriverKsrGuidRegistryValue.c)
 *     PiDevCfgConvertPropertyFromValue @ 0x14095D8E4 (PiDevCfgConvertPropertyFromValue.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14095DC8C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x14095F000 (PiDevCfgQueryDeviceMigrationNode.c)
 *     SddlpUuidFromString @ 0x1409D2C68 (SddlpUuidFromString.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x1409DE288 (WdipSemLoadLocalGroupPolicy.c)
 *     ExpParseSignatureName @ 0x1409FD100 (ExpParseSignatureName.c)
 *     BcdEnumerateObjects @ 0x140A5C6E0 (BcdEnumerateObjects.c)
 *     PopProcessWakeSourceWork @ 0x140AA11A8 (PopProcessWakeSourceWork.c)
 *     VhdAutoAttachVirtualDisks @ 0x140B34A9C (VhdAutoAttachVirtualDisks.c)
 *     IopInitializePlugPlayServices @ 0x140B3E904 (IopInitializePlugPlayServices.c)
 *     EmpParseEntryTypes @ 0x140B55B34 (EmpParseEntryTypes.c)
 *     EmpInfParseGetGuidFromName @ 0x140B56950 (EmpInfParseGetGuidFromName.c)
 *     PipResetDevice @ 0x140B94660 (PipResetDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ScanHexFormat @ 0x1406CF810 (ScanHexFormat.c)
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
