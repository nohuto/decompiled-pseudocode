/*
 * XREFs of RtlStringCchCopyW @ 0x14022C7C0
 * Callers:
 *     PopLogNotifyDevice @ 0x14046342A (PopLogNotifyDevice.c)
 *     CarCopyRuleViolationDetails @ 0x1405D3D00 (CarCopyRuleViolationDetails.c)
 *     CarpSaveViolationSnapshot @ 0x1405D5EC4 (CarpSaveViolationSnapshot.c)
 *     SdbpGetPathAppPatchPreRS3 @ 0x14066E660 (SdbpGetPathAppPatchPreRS3.c)
 *     AslpFileQueryVersionString @ 0x1406D4594 (AslpFileQueryVersionString.c)
 *     AslStringDuplicate @ 0x1406D4A28 (AslStringDuplicate.c)
 *     SdbpCreateSearchDBContext @ 0x140758434 (SdbpCreateSearchDBContext.c)
 *     AslPathSplit @ 0x140758DB0 (AslPathSplit.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x14079B254 (_CmGetDeviceContainerIdFromBase.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x14082AC90 (_CmDevicePanelEnumSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x14082AFC0 (_CmEnumSubkeyCallback.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x14082B270 (_CmDeviceClassesSubkeyCallback.c)
 *     PpmRegisterProfiles @ 0x140849E18 (PpmRegisterProfiles.c)
 *     PdcPortOpenCommon @ 0x140856418 (PdcPortOpenCommon.c)
 *     PnpNotifyUserModeDeviceRemoval @ 0x140867C88 (PnpNotifyUserModeDeviceRemoval.c)
 *     WmipMangleInstanceName @ 0x14086B194 (WmipMangleInstanceName.c)
 *     PipMakeGloballyUniqueId @ 0x140870C60 (PipMakeGloballyUniqueId.c)
 *     DbgkWerCaptureLiveKernelDump2 @ 0x1408837A0 (DbgkWerCaptureLiveKernelDump2.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x140984E30 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     TtmNotifyDeviceArrival @ 0x1409A2760 (TtmNotifyDeviceArrival.c)
 *     TtmpPublishDeviceEvent @ 0x1409A3AE4 (TtmpPublishDeviceEvent.c)
 *     SdbQueryDataExTagID @ 0x140A4F238 (SdbQueryDataExTagID.c)
 *     AslPathCombine @ 0x140A5539C (AslPathCombine.c)
 *     AslPathWildcardFindFirst @ 0x140A55804 (AslPathWildcardFindFirst.c)
 *     AslEnvGetSysNativeDirPathForGuestBuf @ 0x140A57458 (AslEnvGetSysNativeDirPathForGuestBuf.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x140A576AC (AslEnvGetSystem32DirPathBuf.c)
 *     AslpEnvResolveVars @ 0x140A57A74 (AslpEnvResolveVars.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140A6C7C0 (DrvDbGetObjectSubKeyCallback.c)
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
