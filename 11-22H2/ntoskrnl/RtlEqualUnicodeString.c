/*
 * XREFs of RtlEqualUnicodeString @ 0x1406DA3A0
 * Callers:
 *     AuthzBasepEqualUnicodeString @ 0x140225BA8 (AuthzBasepEqualUnicodeString.c)
 *     AuthzBasepFindSecurityAttribute @ 0x14022D0E0 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x14030C028 (AuthzBasepCompareUnicodeStringOperands.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x14031CE90 (RtlDeriveCapabilitySidsFromName.c)
 *     PnpMultiSzContainsString @ 0x1403CDF30 (PnpMultiSzContainsString.c)
 *     PiDrvDbFindNode @ 0x1405650E0 (PiDrvDbFindNode.c)
 *     PopEmModuleAddressMatchCallback @ 0x140599B20 (PopEmModuleAddressMatchCallback.c)
 *     PopEmUpdateDeviceConstraintCallback @ 0x14059EA80 (PopEmUpdateDeviceConstraintCallback.c)
 *     VfDriverRemoveAllDifVerification @ 0x1405CEF30 (VfDriverRemoveAllDifVerification.c)
 *     VrpPreOpenOrCreate @ 0x14068CFD8 (VrpPreOpenOrCreate.c)
 *     IopQueryRegistryKeySystemPath @ 0x14068ECA0 (IopQueryRegistryKeySystemPath.c)
 *     MiResolveImageReferences @ 0x1406AE044 (MiResolveImageReferences.c)
 *     SepIsImageInMinTcbList @ 0x1406B9D88 (SepIsImageInMinTcbList.c)
 *     EtwpLookupLoggerIdByName @ 0x1406BD758 (EtwpLookupLoggerIdByName.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1406BD7EC (EtwpAcquireLoggerContextByLoggerName.c)
 *     CmSetValueKey @ 0x1406D32F0 (CmSetValueKey.c)
 *     MiObtainSectionForDriver @ 0x140704868 (MiObtainSectionForDriver.c)
 *     IopParseDevice @ 0x14072CDC0 (IopParseDevice.c)
 *     CmLoadAppKey @ 0x140769B50 (CmLoadAppKey.c)
 *     VrpPreLoadKey @ 0x14077A954 (VrpPreLoadKey.c)
 *     VrpCreateNamespaceNode @ 0x14077BD28 (VrpCreateNamespaceNode.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x14077C904 (VrpFindDiffHiveEntryForMountPointWithLock.c)
 *     IopGetDeviceInterfaces @ 0x140787900 (IopGetDeviceInterfaces.c)
 *     _CmIsRootDevice @ 0x14079A9A8 (_CmIsRootDevice.c)
 *     ObpLookupDirectoryUsingHash @ 0x1407B7418 (ObpLookupDirectoryUsingHash.c)
 *     PipFindDeviceOverrideEntry @ 0x1407C1A14 (PipFindDeviceOverrideEntry.c)
 *     PiFindDevInstMatch @ 0x1407C2544 (PiFindDevInstMatch.c)
 *     IopDeviceInterfaceFilterCallback @ 0x1407CE8D0 (IopDeviceInterfaceFilterCallback.c)
 *     SepIsNgenImage @ 0x1407DD9F8 (SepIsNgenImage.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x1407DE3E4 (PiUEventQueueBroadcastEventEntry.c)
 *     MiUseLargeDriverPage @ 0x1407E33D4 (MiUseLargeDriverPage.c)
 *     PspIdentityBasedJobBreakaway @ 0x1407EA990 (PspIdentityBasedJobBreakaway.c)
 *     SepGetCachedHandlesEntry @ 0x1407F4CCC (SepGetCachedHandlesEntry.c)
 *     SepValidateReferencedCachedHandles @ 0x1407F51D0 (SepValidateReferencedCachedHandles.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1407F91F0 (EtwpGetLoggerInfoFromContext.c)
 *     KsepCacheDeviceQueryData @ 0x14080B12C (KsepCacheDeviceQueryData.c)
 *     CmpFindMachineHiveByMountPoint @ 0x140810A34 (CmpFindMachineHiveByMountPoint.c)
 *     SLQueryLicenseValueInternal @ 0x140811814 (SLQueryLicenseValueInternal.c)
 *     PiPnpRtlInit @ 0x140813794 (PiPnpRtlInit.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x140815520 (PiDrvDbResolveFilePathKeyValues.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x14082CAC0 (_CmDeviceClassesSubkeyCallback.c)
 *     IopIsReportedAlready @ 0x140837110 (IopIsReportedAlready.c)
 *     PipQueryBindingResolution @ 0x14083993C (PipQueryBindingResolution.c)
 *     PipAddRequestToEdge @ 0x140839C0C (PipAddRequestToEdge.c)
 *     IopCreateSecureDeviceClassSettings @ 0x14083C924 (IopCreateSecureDeviceClassSettings.c)
 *     AdtpLookupDriveLetter @ 0x14083F000 (AdtpLookupDriveLetter.c)
 *     PiRemoveDeferredSetInterfaceState @ 0x1408742C8 (PiRemoveDeferredSetInterfaceState.c)
 *     DrvDbFindDatabaseNode @ 0x140877BE4 (DrvDbFindDatabaseNode.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x140879CB4 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgLogDeviceConfigured @ 0x14087A140 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgConfigureDevice @ 0x14087AC04 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14087E5B4 (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgResolveVariable @ 0x14087F0D0 (PiDevCfgResolveVariable.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x14087F714 (RtlpGetNtProductTypeFromRegistry.c)
 *     PipDeleteBindingId @ 0x1409545B4 (PipDeleteBindingId.c)
 *     PiPnpRtlServiceFilterCallback @ 0x14095A9C0 (PiPnpRtlServiceFilterCallback.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x14095C980 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDrvDbResolveSystemFilePath @ 0x140971148 (PiDrvDbResolveSystemFilePath.c)
 *     KseHookQueryValueKey @ 0x1409781E0 (KseHookQueryValueKey.c)
 *     PopBatteryDeviceState @ 0x14099517C (PopBatteryDeviceState.c)
 *     ExpFindArcName @ 0x1409FC3E0 (ExpFindArcName.c)
 *     MiInsertPreviouslyRegisteredHotPatchRecord @ 0x140A37D40 (MiInsertPreviouslyRegisteredHotPatchRecord.c)
 *     AdtpBuildAccessesString @ 0x140A5B944 (AdtpBuildAccessesString.c)
 *     _PnpCtxFindNode @ 0x140A609A8 (_PnpCtxFindNode.c)
 *     _CmClassFilterCallback @ 0x140A64F30 (_CmClassFilterCallback.c)
 *     _CmServiceFilterCallback @ 0x140A65210 (_CmServiceFilterCallback.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x140A72A28 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 *     VfDriverLoadImage @ 0x140ABDE04 (VfDriverLoadImage.c)
 *     VfDriverLoadSucceeded @ 0x140ABDEB0 (VfDriverLoadSucceeded.c)
 *     ViIsDriverSuspectForVerifier @ 0x140AC3B4C (ViIsDriverSuspectForVerifier.c)
 *     VfDriverApplyDifVerification @ 0x140ACB2D8 (VfDriverApplyDifVerification.c)
 *     VfDriverEnableVerifier @ 0x140ACB498 (VfDriverEnableVerifier.c)
 *     VfDriverRemoveDifVerification @ 0x140ACB778 (VfDriverRemoveDifVerification.c)
 *     ViDriverReApplyVerifierForAll @ 0x140ACB934 (ViDriverReApplyVerifierForAll.c)
 *     VfCheckUserHandle @ 0x140AD4CE4 (VfCheckUserHandle.c)
 *     VfSuspectDriversLoadCallback @ 0x140ADB704 (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversUnloadCallback @ 0x140ADBAB4 (VfSuspectDriversUnloadCallback.c)
 *     ViSuspectDriversLookupEntry @ 0x140ADBCE0 (ViSuspectDriversLookupEntry.c)
 *     VfAddVerifierEntry @ 0x140ADE630 (VfAddVerifierEntry.c)
 *     VfFilterAttach @ 0x140AE020C (VfFilterAttach.c)
 *     sub_140B1A730 @ 0x140B1A730 (sub_140B1A730.c)
 *     PpInitGetGroupOrderIndex @ 0x140B41824 (PpInitGetGroupOrderIndex.c)
 *     PipLookupGroupName @ 0x140B41994 (PipLookupGroupName.c)
 *     CmGetSystemDriverList @ 0x140B41BA0 (CmGetSystemDriverList.c)
 *     VfInitBootDriversLoaded @ 0x140B5A754 (VfInitBootDriversLoaded.c)
 *     CmpFindHiveSubKey @ 0x140B5C068 (CmpFindHiveSubKey.c)
 *     CmpDoSort @ 0x140B5DDE4 (CmpDoSort.c)
 *     CmpCreateHardwareProfiles @ 0x140B679AC (CmpCreateHardwareProfiles.c)
 *     ViInitSystemPhase0 @ 0x140B6A9C4 (ViInitSystemPhase0.c)
 *     PnpLoadBootFilterDriver @ 0x140B6D398 (PnpLoadBootFilterDriver.c)
 *     ExpPrmInitialization @ 0x140B7580C (ExpPrmInitialization.c)
 *     ViLogAndLoadXdv @ 0x140B97CF4 (ViLogAndLoadXdv.c)
 *     CmpGetKnownHivePathNode @ 0x140B99EFC (CmpGetKnownHivePathNode.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D390 (PsGetCurrentServerSiloGlobals.c)
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
