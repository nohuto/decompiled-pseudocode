/*
 * XREFs of RtlEqualUnicodeString @ 0x1407CD6A0
 * Callers:
 *     AuthzBasepEqualUnicodeString @ 0x1402053BC (AuthzBasepEqualUnicodeString.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x140218F84 (AuthzBasepCompareUnicodeStringOperands.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x1402E0B30 (RtlDeriveCapabilitySidsFromName.c)
 *     AuthzBasepFindSecurityAttribute @ 0x1403008B0 (AuthzBasepFindSecurityAttribute.c)
 *     PnpMultiSzContainsString @ 0x14039F184 (PnpMultiSzContainsString.c)
 *     PiDrvDbFindNode @ 0x140564D60 (PiDrvDbFindNode.c)
 *     PopEmUpdateDeviceConstraintCallback @ 0x1405D4980 (PopEmUpdateDeviceConstraintCallback.c)
 *     PopEmModuleAddressMatchCallback @ 0x1405D9260 (PopEmModuleAddressMatchCallback.c)
 *     VfDriverRemoveAllDifVerification @ 0x1405FEBA0 (VfDriverRemoveAllDifVerification.c)
 *     SepIsNgenImage @ 0x140671B34 (SepIsNgenImage.c)
 *     PiFindDevInstMatch @ 0x14067A98C (PiFindDevInstMatch.c)
 *     IopQueryRegistryKeySystemPath @ 0x14067AFB0 (IopQueryRegistryKeySystemPath.c)
 *     VrpPreLoadKey @ 0x14069061C (VrpPreLoadKey.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x1406915F0 (VrpFindDiffHiveEntryForMountPointWithLock.c)
 *     VrpCreateNamespaceNode @ 0x140692514 (VrpCreateNamespaceNode.c)
 *     SepFindMatchingCachedHandlesEntry @ 0x14069654C (SepFindMatchingCachedHandlesEntry.c)
 *     SepValidateReferencedCachedHandles @ 0x140696944 (SepValidateReferencedCachedHandles.c)
 *     PiDevCfgResolveVariable @ 0x14069A1F8 (PiDevCfgResolveVariable.c)
 *     ObpLookupDirectoryUsingHash @ 0x1406A9C60 (ObpLookupDirectoryUsingHash.c)
 *     DrvDbFindDatabaseNode @ 0x1406C2248 (DrvDbFindDatabaseNode.c)
 *     SepIsImageInMinTcbList @ 0x1406C2FDC (SepIsImageInMinTcbList.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x1406DF01C (PiUEventQueueBroadcastEventEntry.c)
 *     MiUseLargeDriverPage @ 0x1406E7320 (MiUseLargeDriverPage.c)
 *     PspIdentityBasedJobBreakaway @ 0x1406E91DC (PspIdentityBasedJobBreakaway.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1406EF280 (EtwpGetLoggerInfoFromContext.c)
 *     EtwpLookupLoggerIdByName @ 0x1406F01A4 (EtwpLookupLoggerIdByName.c)
 *     CmLoadAppKey @ 0x14071A870 (CmLoadAppKey.c)
 *     CmSetValueKey @ 0x140720260 (CmSetValueKey.c)
 *     IopCreateSecureDeviceClassSettings @ 0x1407444A8 (IopCreateSecureDeviceClassSettings.c)
 *     PiDevCfgFindDeviceDriver @ 0x1407449E0 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1407455A8 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1407459F4 (PiDevCfgLogDeviceConfigured.c)
 *     MiResolveImageReferences @ 0x140757FFC (MiResolveImageReferences.c)
 *     MiObtainSectionForDriver @ 0x1407603D4 (MiObtainSectionForDriver.c)
 *     PiDevCfgConfigureDevice @ 0x1407702BC (PiDevCfgConfigureDevice.c)
 *     IopDeviceInterfaceFilterCallback @ 0x14077CB00 (IopDeviceInterfaceFilterCallback.c)
 *     VrpPreOpenOrCreate @ 0x14077E168 (VrpPreOpenOrCreate.c)
 *     IopGetDeviceInterfaces @ 0x1407879A8 (IopGetDeviceInterfaces.c)
 *     _CmIsRootDevice @ 0x140789040 (_CmIsRootDevice.c)
 *     PipFindDeviceOverrideEntry @ 0x14078A988 (PipFindDeviceOverrideEntry.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1407940E4 (EtwpAcquireLoggerContextByLoggerName.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x14080A670 (RtlpGetNtProductTypeFromRegistry.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14080A890 (PiDevCfgResolveMultiSzValue.c)
 *     PiRemoveDeferredSetInterfaceState @ 0x1408111C8 (PiRemoveDeferredSetInterfaceState.c)
 *     IopIsReportedAlready @ 0x14081EFBC (IopIsReportedAlready.c)
 *     SLQueryLicenseValueInternal @ 0x14082D870 (SLQueryLicenseValueInternal.c)
 *     CmpFindMachineHiveByMountPoint @ 0x140833A64 (CmpFindMachineHiveByMountPoint.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x14083E6C0 (_CmDeviceClassesSubkeyCallback.c)
 *     PipQueryBindingResolution @ 0x14084436C (PipQueryBindingResolution.c)
 *     AdtpLookupDriveLetter @ 0x140845150 (AdtpLookupDriveLetter.c)
 *     KsepCacheDeviceQueryData @ 0x140856C80 (KsepCacheDeviceQueryData.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x1409269C4 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 *     PipAddRequestToEdge @ 0x140942760 (PipAddRequestToEdge.c)
 *     PipDeleteBindingId @ 0x1409429D4 (PipDeleteBindingId.c)
 *     PiPnpRtlServiceFilterCallback @ 0x140948B70 (PiPnpRtlServiceFilterCallback.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x14094AA64 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x14095D488 (PiDrvDbResolveFilePathKeyValues.c)
 *     PiDrvDbResolveSystemFilePath @ 0x14095DC2C (PiDrvDbResolveSystemFilePath.c)
 *     KseHookQueryValueKey @ 0x140965AD0 (KseHookQueryValueKey.c)
 *     PopBatteryDeviceState @ 0x1409949AC (PopBatteryDeviceState.c)
 *     ExpFindArcName @ 0x1409FC2D0 (ExpFindArcName.c)
 *     AdtpBuildAccessesString @ 0x140A1C148 (AdtpBuildAccessesString.c)
 *     _PnpCtxFindNode @ 0x140A22B30 (_PnpCtxFindNode.c)
 *     _CmClassFilterCallback @ 0x140A27060 (_CmClassFilterCallback.c)
 *     _CmServiceFilterCallback @ 0x140A27340 (_CmServiceFilterCallback.c)
 *     VfDriverLoadImage @ 0x140A7C1B8 (VfDriverLoadImage.c)
 *     VfDriverLoadSucceeded @ 0x140A7C224 (VfDriverLoadSucceeded.c)
 *     ViIsDriverSuspectForVerifier @ 0x140A821E0 (ViIsDriverSuspectForVerifier.c)
 *     VfDriverApplyDifVerification @ 0x140A898F0 (VfDriverApplyDifVerification.c)
 *     VfDriverEnableVerifier @ 0x140A89AB0 (VfDriverEnableVerifier.c)
 *     VfDriverRemoveDifVerification @ 0x140A89D94 (VfDriverRemoveDifVerification.c)
 *     ViDriverReApplyVerifierForAll @ 0x140A89FE0 (ViDriverReApplyVerifierForAll.c)
 *     VfCheckUserHandle @ 0x140A9466C (VfCheckUserHandle.c)
 *     VfSuspectDriversLoadCallback @ 0x140A9A8F8 (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversUnloadCallback @ 0x140A9ACE0 (VfSuspectDriversUnloadCallback.c)
 *     ViSuspectDriversLookupEntry @ 0x140A9AF40 (ViSuspectDriversLookupEntry.c)
 *     VfAddVerifierEntry @ 0x140A9C668 (VfAddVerifierEntry.c)
 *     VfFilterAttach @ 0x140A9E12C (VfFilterAttach.c)
 *     sub_140AD7DE4 @ 0x140AD7DE4 (sub_140AD7DE4.c)
 *     VfInitBootDriversLoaded @ 0x140B0DBD4 (VfInitBootDriversLoaded.c)
 *     PpInitGetGroupOrderIndex @ 0x140B1244C (PpInitGetGroupOrderIndex.c)
 *     PipLookupGroupName @ 0x140B125BC (PipLookupGroupName.c)
 *     PnpLoadBootFilterDriver @ 0x140B127A0 (PnpLoadBootFilterDriver.c)
 *     CmGetSystemDriverList @ 0x140B12C84 (CmGetSystemDriverList.c)
 *     CmpDoSort @ 0x140B13790 (CmpDoSort.c)
 *     CmpFindHiveSubKey @ 0x140B14608 (CmpFindHiveSubKey.c)
 *     CmpCreateHardwareProfiles @ 0x140B183B4 (CmpCreateHardwareProfiles.c)
 *     ViInitSystemPhase0 @ 0x140B27B30 (ViInitSystemPhase0.c)
 *     ExpPrmInitialization @ 0x140B2FFCC (ExpPrmInitialization.c)
 *     CmpGetKnownHivePathNode @ 0x140B4E1B0 (CmpGetKnownHivePathNode.c)
 *     ViLogAndLoadXdv @ 0x140B536A4 (ViLogAndLoadXdv.c)
 * Callees:
 *     NLS_UPCASE @ 0x1403477B0 (NLS_UPCASE.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 */

BOOLEAN __stdcall RtlEqualUnicodeString(PCUNICODE_STRING String1, PCUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  _QWORD *CurrentServerSiloGlobals; // rax
  unsigned __int16 *v4; // rdx
  char v5; // r8
  unsigned __int16 *v6; // r10
  __int64 v7; // r9
  __int64 v8; // rbp
  char *v10; // r10
  _QWORD *v11; // rbx
  char *i; // rsi
  signed __int64 v13; // rbx
  unsigned __int16 v14; // di
  unsigned __int16 v15; // dx
  unsigned __int16 v16; // ax
  __int16 v17; // r11

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v7 = *v6;
  v8 = CurrentServerSiloGlobals[154];
  if ( (_DWORD)v7 != *v4 )
    return 0;
  v10 = (char *)*((_QWORD *)v6 + 1);
  v11 = (_QWORD *)*((_QWORD *)v4 + 1);
  for ( i = &v10[v7]; (unsigned int)v7 >= 8; ++v11 )
  {
    if ( *(_QWORD *)v10 != *v11 )
      break;
    LODWORD(v7) = v7 - 8;
    if ( !(_DWORD)v7 )
      return 1;
    v10 += 8;
  }
  if ( v10 < i )
  {
    if ( v5 )
    {
      v13 = (char *)v11 - v10;
      while ( 1 )
      {
        v14 = *(_WORD *)v10;
        v15 = *(_WORD *)&v10[v13];
        if ( *(_WORD *)v10 != v15 )
        {
          NLS_UPCASE(v8, v15);
          v16 = NLS_UPCASE(v8, v14);
          if ( v16 != v17 )
            break;
        }
        v10 += 2;
        if ( v10 >= i )
          return 1;
      }
    }
    else
    {
      while ( *(_WORD *)v10 == *(_WORD *)v11 )
      {
        v10 += 2;
        v11 = (_QWORD *)((char *)v11 + 2);
        if ( v10 >= i )
          return 1;
      }
    }
    return 0;
  }
  return 1;
}
