/*
 * XREFs of RtlEqualUnicodeString @ 0x1406DA2F0
 * Callers:
 *     AuthzBasepEqualUnicodeString @ 0x140225B88 (AuthzBasepEqualUnicodeString.c)
 *     AuthzBasepFindSecurityAttribute @ 0x14022D0C0 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x14030C158 (AuthzBasepCompareUnicodeStringOperands.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x14031D070 (RtlDeriveCapabilitySidsFromName.c)
 *     PnpMultiSzContainsString @ 0x1403CE590 (PnpMultiSzContainsString.c)
 *     PiDrvDbFindNode @ 0x140565040 (PiDrvDbFindNode.c)
 *     PopEmModuleAddressMatchCallback @ 0x140599A90 (PopEmModuleAddressMatchCallback.c)
 *     PopEmUpdateDeviceConstraintCallback @ 0x14059E9F0 (PopEmUpdateDeviceConstraintCallback.c)
 *     VfDriverRemoveAllDifVerification @ 0x1405CEEA0 (VfDriverRemoveAllDifVerification.c)
 *     VrpPreOpenOrCreate @ 0x14068CFD8 (VrpPreOpenOrCreate.c)
 *     IopQueryRegistryKeySystemPath @ 0x14068ECA0 (IopQueryRegistryKeySystemPath.c)
 *     MiResolveImageReferences @ 0x1406AE044 (MiResolveImageReferences.c)
 *     SepIsImageInMinTcbList @ 0x1406B9D88 (SepIsImageInMinTcbList.c)
 *     EtwpLookupLoggerIdByName @ 0x1406BD758 (EtwpLookupLoggerIdByName.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1406BD7EC (EtwpAcquireLoggerContextByLoggerName.c)
 *     CmSetValueKey @ 0x1406D3240 (CmSetValueKey.c)
 *     MiObtainSectionForDriver @ 0x1407047B8 (MiObtainSectionForDriver.c)
 *     IopParseDevice @ 0x14072CD50 (IopParseDevice.c)
 *     CmLoadAppKey @ 0x140769640 (CmLoadAppKey.c)
 *     VrpPreLoadKey @ 0x14077A444 (VrpPreLoadKey.c)
 *     VrpCreateNamespaceNode @ 0x14077B818 (VrpCreateNamespaceNode.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x14077C3F4 (VrpFindDiffHiveEntryForMountPointWithLock.c)
 *     IopGetDeviceInterfaces @ 0x1407873F0 (IopGetDeviceInterfaces.c)
 *     _CmIsRootDevice @ 0x14079A498 (_CmIsRootDevice.c)
 *     ObpLookupDirectoryUsingHash @ 0x1407B6E68 (ObpLookupDirectoryUsingHash.c)
 *     PipFindDeviceOverrideEntry @ 0x1407C1484 (PipFindDeviceOverrideEntry.c)
 *     PiFindDevInstMatch @ 0x1407C1FB4 (PiFindDevInstMatch.c)
 *     IopDeviceInterfaceFilterCallback @ 0x1407CE340 (IopDeviceInterfaceFilterCallback.c)
 *     SepIsNgenImage @ 0x1407DD478 (SepIsNgenImage.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x1407DDE64 (PiUEventQueueBroadcastEventEntry.c)
 *     MiUseLargeDriverPage @ 0x1407E2E54 (MiUseLargeDriverPage.c)
 *     PspIdentityBasedJobBreakaway @ 0x1407EA410 (PspIdentityBasedJobBreakaway.c)
 *     SepGetCachedHandlesEntry @ 0x1407F465C (SepGetCachedHandlesEntry.c)
 *     SepValidateReferencedCachedHandles @ 0x1407F4B60 (SepValidateReferencedCachedHandles.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1407F8B3C (EtwpGetLoggerInfoFromContext.c)
 *     KsepCacheDeviceQueryData @ 0x140808BAC (KsepCacheDeviceQueryData.c)
 *     CmpFindMachineHiveByMountPoint @ 0x14080E4B4 (CmpFindMachineHiveByMountPoint.c)
 *     SLQueryLicenseValueInternal @ 0x14080F294 (SLQueryLicenseValueInternal.c)
 *     PiPnpRtlInit @ 0x140811214 (PiPnpRtlInit.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x140812FA0 (PiDrvDbResolveFilePathKeyValues.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x14082AF70 (_CmDeviceClassesSubkeyCallback.c)
 *     IopIsReportedAlready @ 0x1408355C0 (IopIsReportedAlready.c)
 *     PipQueryBindingResolution @ 0x140837DEC (PipQueryBindingResolution.c)
 *     PipAddRequestToEdge @ 0x1408380BC (PipAddRequestToEdge.c)
 *     IopCreateSecureDeviceClassSettings @ 0x14083AB94 (IopCreateSecureDeviceClassSettings.c)
 *     AdtpLookupDriveLetter @ 0x14083D270 (AdtpLookupDriveLetter.c)
 *     PiRemoveDeferredSetInterfaceState @ 0x140873DF8 (PiRemoveDeferredSetInterfaceState.c)
 *     DrvDbFindDatabaseNode @ 0x140877714 (DrvDbFindDatabaseNode.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1408797E4 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140879C70 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgConfigureDevice @ 0x14087A734 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14087E0E4 (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgResolveVariable @ 0x14087EC00 (PiDevCfgResolveVariable.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x14087F244 (RtlpGetNtProductTypeFromRegistry.c)
 *     PipDeleteBindingId @ 0x140954504 (PipDeleteBindingId.c)
 *     PiPnpRtlServiceFilterCallback @ 0x14095A910 (PiPnpRtlServiceFilterCallback.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x14095C8D0 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDrvDbResolveSystemFilePath @ 0x140971098 (PiDrvDbResolveSystemFilePath.c)
 *     KseHookQueryValueKey @ 0x140978130 (KseHookQueryValueKey.c)
 *     PopBatteryDeviceState @ 0x1409950CC (PopBatteryDeviceState.c)
 *     ExpFindArcName @ 0x1409FC330 (ExpFindArcName.c)
 *     MiInsertPreviouslyRegisteredHotPatchRecord @ 0x140A37CD0 (MiInsertPreviouslyRegisteredHotPatchRecord.c)
 *     AdtpBuildAccessesString @ 0x140A5B8D4 (AdtpBuildAccessesString.c)
 *     _PnpCtxFindNode @ 0x140A60938 (_PnpCtxFindNode.c)
 *     _CmClassFilterCallback @ 0x140A64EC0 (_CmClassFilterCallback.c)
 *     _CmServiceFilterCallback @ 0x140A651A0 (_CmServiceFilterCallback.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x140A729B8 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 *     VfDriverLoadImage @ 0x140ABCE04 (VfDriverLoadImage.c)
 *     VfDriverLoadSucceeded @ 0x140ABCEB0 (VfDriverLoadSucceeded.c)
 *     ViIsDriverSuspectForVerifier @ 0x140AC2B7C (ViIsDriverSuspectForVerifier.c)
 *     VfDriverApplyDifVerification @ 0x140ACA308 (VfDriverApplyDifVerification.c)
 *     VfDriverEnableVerifier @ 0x140ACA4C8 (VfDriverEnableVerifier.c)
 *     VfDriverRemoveDifVerification @ 0x140ACA7A8 (VfDriverRemoveDifVerification.c)
 *     ViDriverReApplyVerifierForAll @ 0x140ACA964 (ViDriverReApplyVerifierForAll.c)
 *     VfCheckUserHandle @ 0x140AD3D14 (VfCheckUserHandle.c)
 *     VfSuspectDriversLoadCallback @ 0x140ADA734 (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversUnloadCallback @ 0x140ADAAE4 (VfSuspectDriversUnloadCallback.c)
 *     ViSuspectDriversLookupEntry @ 0x140ADAD10 (ViSuspectDriversLookupEntry.c)
 *     VfAddVerifierEntry @ 0x140ADD660 (VfAddVerifierEntry.c)
 *     VfFilterAttach @ 0x140ADF23C (VfFilterAttach.c)
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
 *     PsGetCurrentServerSiloGlobals @ 0x14022D370 (PsGetCurrentServerSiloGlobals.c)
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
