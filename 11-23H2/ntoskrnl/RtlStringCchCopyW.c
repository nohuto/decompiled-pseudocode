/*
 * XREFs of RtlStringCchCopyW @ 0x14022C6B0
 * Callers:
 *     PopLogNotifyDevice @ 0x14046302A (PopLogNotifyDevice.c)
 *     CarCopyRuleViolationDetails @ 0x1405D3790 (CarCopyRuleViolationDetails.c)
 *     CarpSaveViolationSnapshot @ 0x1405D5954 (CarpSaveViolationSnapshot.c)
 *     SdbpGetPathAppPatchPreRS3 @ 0x14066E110 (SdbpGetPathAppPatchPreRS3.c)
 *     AslpFileQueryVersionString @ 0x1406D4564 (AslpFileQueryVersionString.c)
 *     AslStringDuplicate @ 0x1406D49F8 (AslStringDuplicate.c)
 *     SdbpCreateSearchDBContext @ 0x140758244 (SdbpCreateSearchDBContext.c)
 *     AslPathSplit @ 0x140758BC0 (AslPathSplit.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x14079B064 (_CmGetDeviceContainerIdFromBase.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x14082A990 (_CmDevicePanelEnumSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x14082ACC0 (_CmEnumSubkeyCallback.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x14082AF70 (_CmDeviceClassesSubkeyCallback.c)
 *     PpmRegisterProfiles @ 0x140849B18 (PpmRegisterProfiles.c)
 *     PdcPortOpenCommon @ 0x140856118 (PdcPortOpenCommon.c)
 *     PnpNotifyUserModeDeviceRemoval @ 0x140867A48 (PnpNotifyUserModeDeviceRemoval.c)
 *     WmipMangleInstanceName @ 0x14086AF54 (WmipMangleInstanceName.c)
 *     PipMakeGloballyUniqueId @ 0x140870A20 (PipMakeGloballyUniqueId.c)
 *     DbgkWerCaptureLiveKernelDump2 @ 0x140883560 (DbgkWerCaptureLiveKernelDump2.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x140984C30 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     TtmNotifyDeviceArrival @ 0x1409A2560 (TtmNotifyDeviceArrival.c)
 *     TtmpPublishDeviceEvent @ 0x1409A38E4 (TtmpPublishDeviceEvent.c)
 *     SdbQueryDataExTagID @ 0x140A4EF88 (SdbQueryDataExTagID.c)
 *     AslPathCombine @ 0x140A550EC (AslPathCombine.c)
 *     AslPathWildcardFindFirst @ 0x140A55554 (AslPathWildcardFindFirst.c)
 *     AslEnvGetSysNativeDirPathForGuestBuf @ 0x140A571A8 (AslEnvGetSysNativeDirPathForGuestBuf.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x140A573FC (AslEnvGetSystem32DirPathBuf.c)
 *     AslpEnvResolveVars @ 0x140A577C4 (AslpEnvResolveVars.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140A6C510 (DrvDbGetObjectSubKeyCallback.c)
 *     IopStoreSystemPartitionInformation @ 0x140B3BE74 (IopStoreSystemPartitionInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchCopyW(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszSrc)
{
  size_t v3; // r9
  NTSTATUS v4; // r11d
  signed __int64 v5; // r8
  wchar_t v6; // ax
  NTSTATUS result; // eax

  if ( cchDest - 1 <= 0x7FFFFFFE )
  {
    v3 = 2147483646 - cchDest;
    v4 = 0;
    v5 = (char *)pszSrc - (char *)pszDest;
    while ( v3 + cchDest )
    {
      v6 = *(NTSTRSAFE_PWSTR)((char *)pszDest + v5);
      if ( !v6 )
      {
        if ( !cchDest )
        {
LABEL_6:
          --pszDest;
          v4 = -2147483643;
          break;
        }
        break;
      }
      *pszDest++ = v6;
      if ( !--cchDest )
        goto LABEL_6;
    }
    result = v4;
    goto LABEL_9;
  }
  result = -1073741811;
  if ( cchDest )
LABEL_9:
    *pszDest = 0;
  return result;
}
