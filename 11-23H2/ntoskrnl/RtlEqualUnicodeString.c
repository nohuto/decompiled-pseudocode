/*
 * XREFs of RtlEqualUnicodeString @ 0x1406DA320
 * Callers:
 *     AuthzBasepEqualUnicodeString @ 0x140225C98 (AuthzBasepEqualUnicodeString.c)
 *     AuthzBasepFindSecurityAttribute @ 0x14022D1D0 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x14030C3E8 (AuthzBasepCompareUnicodeStringOperands.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x14031D300 (RtlDeriveCapabilitySidsFromName.c)
 *     PnpMultiSzContainsString @ 0x1403CE770 (PnpMultiSzContainsString.c)
 *     PiDrvDbFindNode @ 0x140565700 (PiDrvDbFindNode.c)
 *     PopEmModuleAddressMatchCallback @ 0x140599F80 (PopEmModuleAddressMatchCallback.c)
 *     PopEmUpdateDeviceConstraintCallback @ 0x14059EEE0 (PopEmUpdateDeviceConstraintCallback.c)
 *     VfDriverRemoveAllDifVerification @ 0x1405CF410 (VfDriverRemoveAllDifVerification.c)
 *     VrpPreOpenOrCreate @ 0x14068CFD8 (VrpPreOpenOrCreate.c)
 *     IopQueryRegistryKeySystemPath @ 0x14068ECA0 (IopQueryRegistryKeySystemPath.c)
 *     MiResolveImageReferences @ 0x1406AE074 (MiResolveImageReferences.c)
 *     SepIsImageInMinTcbList @ 0x1406B9DB8 (SepIsImageInMinTcbList.c)
 *     EtwpLookupLoggerIdByName @ 0x1406BD788 (EtwpLookupLoggerIdByName.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1406BD81C (EtwpAcquireLoggerContextByLoggerName.c)
 *     CmSetValueKey @ 0x1406D3270 (CmSetValueKey.c)
 *     MiObtainSectionForDriver @ 0x1407049C8 (MiObtainSectionForDriver.c)
 *     IopParseDevice @ 0x14072CF50 (IopParseDevice.c)
 *     CmLoadAppKey @ 0x140769830 (CmLoadAppKey.c)
 *     VrpPreLoadKey @ 0x14077A634 (VrpPreLoadKey.c)
 *     VrpCreateNamespaceNode @ 0x14077BA08 (VrpCreateNamespaceNode.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x14077C5E4 (VrpFindDiffHiveEntryForMountPointWithLock.c)
 *     IopGetDeviceInterfaces @ 0x1407875E0 (IopGetDeviceInterfaces.c)
 *     _CmIsRootDevice @ 0x14079A688 (_CmIsRootDevice.c)
 *     ObpLookupDirectoryUsingHash @ 0x1407B7148 (ObpLookupDirectoryUsingHash.c)
 *     PipFindDeviceOverrideEntry @ 0x1407C1754 (PipFindDeviceOverrideEntry.c)
 *     PiFindDevInstMatch @ 0x1407C2284 (PiFindDevInstMatch.c)
 *     IopDeviceInterfaceFilterCallback @ 0x1407CE610 (IopDeviceInterfaceFilterCallback.c)
 *     SepIsNgenImage @ 0x1407DD748 (SepIsNgenImage.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x1407DE134 (PiUEventQueueBroadcastEventEntry.c)
 *     MiUseLargeDriverPage @ 0x1407E3124 (MiUseLargeDriverPage.c)
 *     PspIdentityBasedJobBreakaway @ 0x1407EA6E0 (PspIdentityBasedJobBreakaway.c)
 *     SepGetCachedHandlesEntry @ 0x1407F492C (SepGetCachedHandlesEntry.c)
 *     SepValidateReferencedCachedHandles @ 0x1407F4E30 (SepValidateReferencedCachedHandles.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1407F8E0C (EtwpGetLoggerInfoFromContext.c)
 *     KsepCacheDeviceQueryData @ 0x140808E7C (KsepCacheDeviceQueryData.c)
 *     CmpFindMachineHiveByMountPoint @ 0x14080E784 (CmpFindMachineHiveByMountPoint.c)
 *     SLQueryLicenseValueInternal @ 0x14080F564 (SLQueryLicenseValueInternal.c)
 *     PiPnpRtlInit @ 0x1408114E4 (PiPnpRtlInit.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x140813270 (PiDrvDbResolveFilePathKeyValues.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x14082B270 (_CmDeviceClassesSubkeyCallback.c)
 *     IopIsReportedAlready @ 0x1408358C0 (IopIsReportedAlready.c)
 *     PipQueryBindingResolution @ 0x1408380EC (PipQueryBindingResolution.c)
 *     PipAddRequestToEdge @ 0x1408383BC (PipAddRequestToEdge.c)
 *     IopCreateSecureDeviceClassSettings @ 0x14083AE94 (IopCreateSecureDeviceClassSettings.c)
 *     AdtpLookupDriveLetter @ 0x14083D570 (AdtpLookupDriveLetter.c)
 *     PiRemoveDeferredSetInterfaceState @ 0x140874038 (PiRemoveDeferredSetInterfaceState.c)
 *     DrvDbFindDatabaseNode @ 0x140877954 (DrvDbFindDatabaseNode.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x140879A24 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140879EB0 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgConfigureDevice @ 0x14087A974 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14087E324 (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgResolveVariable @ 0x14087EE40 (PiDevCfgResolveVariable.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x14087F484 (RtlpGetNtProductTypeFromRegistry.c)
 *     PipDeleteBindingId @ 0x140954704 (PipDeleteBindingId.c)
 *     PiPnpRtlServiceFilterCallback @ 0x14095AB10 (PiPnpRtlServiceFilterCallback.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x14095CAD0 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDrvDbResolveSystemFilePath @ 0x140971298 (PiDrvDbResolveSystemFilePath.c)
 *     KseHookQueryValueKey @ 0x140978330 (KseHookQueryValueKey.c)
 *     PopBatteryDeviceState @ 0x1409952CC (PopBatteryDeviceState.c)
 *     ExpFindArcName @ 0x1409FC5C0 (ExpFindArcName.c)
 *     MiInsertPreviouslyRegisteredHotPatchRecord @ 0x140A37F80 (MiInsertPreviouslyRegisteredHotPatchRecord.c)
 *     AdtpBuildAccessesString @ 0x140A5BB84 (AdtpBuildAccessesString.c)
 *     _PnpCtxFindNode @ 0x140A60BE8 (_PnpCtxFindNode.c)
 *     _CmClassFilterCallback @ 0x140A65170 (_CmClassFilterCallback.c)
 *     _CmServiceFilterCallback @ 0x140A65450 (_CmServiceFilterCallback.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x140A72C68 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 *     VfDriverLoadImage @ 0x140ABCDF4 (VfDriverLoadImage.c)
 *     VfDriverLoadSucceeded @ 0x140ABCEA0 (VfDriverLoadSucceeded.c)
 *     ViIsDriverSuspectForVerifier @ 0x140AC2B6C (ViIsDriverSuspectForVerifier.c)
 *     VfDriverApplyDifVerification @ 0x140ACA2F8 (VfDriverApplyDifVerification.c)
 *     VfDriverEnableVerifier @ 0x140ACA4B8 (VfDriverEnableVerifier.c)
 *     VfDriverRemoveDifVerification @ 0x140ACA798 (VfDriverRemoveDifVerification.c)
 *     ViDriverReApplyVerifierForAll @ 0x140ACA954 (ViDriverReApplyVerifierForAll.c)
 *     VfCheckUserHandle @ 0x140AD3D04 (VfCheckUserHandle.c)
 *     VfSuspectDriversLoadCallback @ 0x140ADA724 (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversUnloadCallback @ 0x140ADAAD4 (VfSuspectDriversUnloadCallback.c)
 *     ViSuspectDriversLookupEntry @ 0x140ADAD00 (ViSuspectDriversLookupEntry.c)
 *     VfAddVerifierEntry @ 0x140ADD650 (VfAddVerifierEntry.c)
 *     VfFilterAttach @ 0x140ADF22C (VfFilterAttach.c)
 *     sub_140B19730 @ 0x140B19730 (sub_140B19730.c)
 *     PpInitGetGroupOrderIndex @ 0x140B3E124 (PpInitGetGroupOrderIndex.c)
 *     PipLookupGroupName @ 0x140B3E294 (PipLookupGroupName.c)
 *     CmGetSystemDriverList @ 0x140B3E4A0 (CmGetSystemDriverList.c)
 *     VfInitBootDriversLoaded @ 0x140B577A4 (VfInitBootDriversLoaded.c)
 *     CmpFindHiveSubKey @ 0x140B590B8 (CmpFindHiveSubKey.c)
 *     CmpDoSort @ 0x140B5AE34 (CmpDoSort.c)
 *     CmpCreateHardwareProfiles @ 0x140B6660C (CmpCreateHardwareProfiles.c)
 *     ViInitSystemPhase0 @ 0x140B69A68 (ViInitSystemPhase0.c)
 *     PnpLoadBootFilterDriver @ 0x140B6C2AC (PnpLoadBootFilterDriver.c)
 *     ExpPrmInitialization @ 0x140B74A6C (ExpPrmInitialization.c)
 *     ViLogAndLoadXdv @ 0x140B96CF4 (ViLogAndLoadXdv.c)
 *     CmpGetKnownHivePathNode @ 0x140B98EFC (CmpGetKnownHivePathNode.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 */

BOOLEAN __stdcall RtlEqualUnicodeString(PCUNICODE_STRING String1, PCUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  _QWORD *CurrentServerSiloGlobals; // rax
  unsigned __int16 *v4; // rdx
  char v5; // r8
  unsigned __int16 *v6; // r10
  unsigned __int64 v7; // r9
  __int64 v8; // rdi
  char *v10; // rax
  _QWORD *v11; // r10
  char *v12; // rbx
  signed __int64 v13; // r10
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // r11

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v7 = *v6;
  v8 = CurrentServerSiloGlobals[154];
  if ( (_DWORD)v7 != *v4 )
    return 0;
  v10 = (char *)*((_QWORD *)v6 + 1);
  v11 = (_QWORD *)*((_QWORD *)v4 + 1);
  v12 = &v10[v7];
  if ( v7 >= 8 )
  {
    do
    {
      if ( *(_QWORD *)v10 != *v11 )
        break;
      LODWORD(v7) = v7 - 8;
      if ( !(_DWORD)v7 )
        return 1;
      v10 += 8;
      ++v11;
    }
    while ( (unsigned int)v7 >= 8 );
  }
  if ( v10 < v12 )
  {
    if ( v5 )
    {
      v13 = (char *)v11 - v10;
      while ( 1 )
      {
        v14 = *(unsigned __int16 *)v10;
        v15 = *(unsigned __int16 *)&v10[v13];
        if ( (_WORD)v14 != (_WORD)v15 )
        {
          if ( (unsigned int)v14 >= 0x61 )
          {
            if ( (unsigned int)v14 > 0x7A )
            {
              if ( v8 && (unsigned __int16)v14 >= 0xC0u )
                LOWORD(v14) = *(_WORD *)(v8
                                       + 2
                                       * ((v14 & 0xF)
                                        + *(unsigned __int16 *)(v8
                                                              + 2LL
                                                              * (((unsigned __int8)v14 >> 4)
                                                               + (unsigned int)*(unsigned __int16 *)(v8 + 2 * (v14 >> 8))))))
                            + v14;
            }
            else
            {
              LOWORD(v14) = v14 - 32;
            }
          }
          if ( (unsigned int)v15 >= 0x61 )
          {
            if ( (unsigned int)v15 > 0x7A )
            {
              if ( v8 )
              {
                if ( (unsigned __int16)v15 >= 0xC0u )
                  LOWORD(v15) = *(_WORD *)(v8
                                         + 2
                                         * ((v15 & 0xF)
                                          + *(unsigned __int16 *)(v8
                                                                + 2LL
                                                                * (((unsigned __int8)v15 >> 4)
                                                                 + (unsigned int)*(unsigned __int16 *)(v8 + 2 * (v15 >> 8))))))
                              + v15;
              }
            }
            else
            {
              LOWORD(v15) = v15 - 32;
            }
          }
          if ( (_WORD)v14 != (_WORD)v15 )
            break;
        }
        v10 += 2;
        if ( v10 >= v12 )
          return 1;
      }
    }
    else
    {
      while ( *(_WORD *)v10 == *(_WORD *)v11 )
      {
        v10 += 2;
        v11 = (_QWORD *)((char *)v11 + 2);
        if ( v10 >= v12 )
          return 1;
      }
    }
    return 0;
  }
  return 1;
}
