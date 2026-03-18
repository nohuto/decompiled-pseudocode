/*
 * XREFs of RtlStringCchCopyW @ 0x14022C6D0
 * Callers:
 *     PopLogNotifyDevice @ 0x1404629CA (PopLogNotifyDevice.c)
 *     CarCopyRuleViolationDetails @ 0x1405D3820 (CarCopyRuleViolationDetails.c)
 *     CarpSaveViolationSnapshot @ 0x1405D59E4 (CarpSaveViolationSnapshot.c)
 *     SdbpGetPathAppPatchPreRS3 @ 0x14066E180 (SdbpGetPathAppPatchPreRS3.c)
 *     AslpFileQueryVersionString @ 0x1406D4614 (AslpFileQueryVersionString.c)
 *     AslStringDuplicate @ 0x1406D4AA8 (AslStringDuplicate.c)
 *     SdbpCreateSearchDBContext @ 0x140758754 (SdbpCreateSearchDBContext.c)
 *     AslPathSplit @ 0x1407590D0 (AslPathSplit.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x14079B574 (_CmGetDeviceContainerIdFromBase.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x14082C4E0 (_CmDevicePanelEnumSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x14082C810 (_CmEnumSubkeyCallback.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x14082CAC0 (_CmDeviceClassesSubkeyCallback.c)
 *     PpmRegisterProfiles @ 0x14084AD78 (PpmRegisterProfiles.c)
 *     PdcPortOpenCommon @ 0x140857028 (PdcPortOpenCommon.c)
 *     PnpNotifyUserModeDeviceRemoval @ 0x140867F18 (PnpNotifyUserModeDeviceRemoval.c)
 *     WmipMangleInstanceName @ 0x14086B424 (WmipMangleInstanceName.c)
 *     PipMakeGloballyUniqueId @ 0x140870EF0 (PipMakeGloballyUniqueId.c)
 *     DbgkWerCaptureLiveKernelDump2 @ 0x140883A30 (DbgkWerCaptureLiveKernelDump2.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x140984CE0 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     TtmNotifyDeviceArrival @ 0x1409A2610 (TtmNotifyDeviceArrival.c)
 *     TtmpPublishDeviceEvent @ 0x1409A3994 (TtmpPublishDeviceEvent.c)
 *     SdbQueryDataExTagID @ 0x140A4EFF8 (SdbQueryDataExTagID.c)
 *     AslPathCombine @ 0x140A5515C (AslPathCombine.c)
 *     AslPathWildcardFindFirst @ 0x140A555C4 (AslPathWildcardFindFirst.c)
 *     AslEnvGetSysNativeDirPathForGuestBuf @ 0x140A57218 (AslEnvGetSysNativeDirPathForGuestBuf.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x140A5746C (AslEnvGetSystem32DirPathBuf.c)
 *     AslpEnvResolveVars @ 0x140A57834 (AslpEnvResolveVars.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140A6C580 (DrvDbGetObjectSubKeyCallback.c)
 *     IopStoreSystemPartitionInformation @ 0x140B3F574 (IopStoreSystemPartitionInformation.c)
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
