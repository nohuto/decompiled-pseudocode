/*
 * XREFs of RtlCompareMemory @ 0x140429820
 * Callers:
 *     SepIsPackageSid @ 0x14022A7AC (SepIsPackageSid.c)
 *     SepIsCapabilitySid @ 0x14022A804 (SepIsCapabilitySid.c)
 *     SepNormalAccessCheck @ 0x140233540 (SepNormalAccessCheck.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x14031D730 (IoReportTargetDeviceChangeAsynchronous.c)
 *     PpmPerfCalculateQosClassPolicies @ 0x14032A968 (PpmPerfCalculateQosClassPolicies.c)
 *     PopWriteBsdPoInfo @ 0x14032B2E0 (PopWriteBsdPoInfo.c)
 *     HalpHpetDiscover @ 0x1403777E0 (HalpHpetDiscover.c)
 *     EtwpTraceStackKey @ 0x140469570 (EtwpTraceStackKey.c)
 *     WheaGetErrPacketFromErrRecord @ 0x1405194E0 (WheaGetErrPacketFromErrRecord.c)
 *     HalpGenericErrorSourceRecovery @ 0x1405196A0 (HalpGenericErrorSourceRecovery.c)
 *     SecureDump_ValidateAmeCertChain @ 0x14055E7D0 (SecureDump_ValidateAmeCertChain.c)
 *     RtlpStdLogCapturedStackTrace @ 0x1405A9B64 (RtlpStdLogCapturedStackTrace.c)
 *     RtlpHpSizeHeap @ 0x1405B67B8 (RtlpHpSizeHeap.c)
 *     EtwpGetCrimsonStackKey @ 0x140601C0C (EtwpGetCrimsonStackKey.c)
 *     MmReportParkedProcessors @ 0x140655E48 (MmReportParkedProcessors.c)
 *     MinCryptIsKeyPresent @ 0x14067769C (MinCryptIsKeyPresent.c)
 *     PipGenerateContainerID @ 0x1406850A8 (PipGenerateContainerID.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x140696D48 (ExCovReadjustUnloadedModuleEntry.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1406BFE40 (EtwpClearSessionAndUnreferenceEntry.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x1406D283C (CmpCompareNewValueDataAgainstKCBCache.c)
 *     AlpcpExposeWorkOnBehalfAttribute @ 0x14073C3C0 (AlpcpExposeWorkOnBehalfAttribute.c)
 *     sub_140761D28 @ 0x140761D28 (sub_140761D28.c)
 *     EtwpTrackDebugIdForSession @ 0x14077E150 (EtwpTrackDebugIdForSession.c)
 *     EtwpCalculateUpdateNotification @ 0x1407814A0 (EtwpCalculateUpdateNotification.c)
 *     PopArePowerSettingsEqual @ 0x140782E50 (PopArePowerSettingsEqual.c)
 *     PnpNotifyTargetDeviceChange @ 0x14078335C (PnpNotifyTargetDeviceChange.c)
 *     PnpIsNullGuid @ 0x140786834 (PnpIsNullGuid.c)
 *     PnpCompareInterruptInformation @ 0x14078F10C (PnpCompareInterruptInformation.c)
 *     PnpNotifyDeviceClassChange @ 0x14078F280 (PnpNotifyDeviceClassChange.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x1407973CC (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1407BC220 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     WbInitializeEncryptionSegment @ 0x1407D28F8 (WbInitializeEncryptionSegment.c)
 *     PnpBusTypeGuidGetIndex @ 0x1407DB9EC (PnpBusTypeGuidGetIndex.c)
 *     ObpCompareEntryLevel2 @ 0x1407DCAB0 (ObpCompareEntryLevel2.c)
 *     IopPnPDispatch @ 0x1407EB020 (IopPnPDispatch.c)
 *     RtlIsCapabilitySid @ 0x1407F2BA8 (RtlIsCapabilitySid.c)
 *     RtlIsPackageSid @ 0x1407F2E24 (RtlIsPackageSid.c)
 *     RtlGetAppContainerSidType @ 0x1407F43A0 (RtlGetAppContainerSidType.c)
 *     SPCallServerHandleFileIntegrityQuery @ 0x1407FF058 (SPCallServerHandleFileIntegrityQuery.c)
 *     BiUpdateBcdObject @ 0x140804304 (BiUpdateBcdObject.c)
 *     PopInitializeHeteroProcessors @ 0x14082CE90 (PopInitializeHeteroProcessors.c)
 *     CmpFilterAcpiDockingState @ 0x14084AAF4 (CmpFilterAcpiDockingState.c)
 *     IoReportTargetDeviceChange @ 0x140881D10 (IoReportTargetDeviceChange.c)
 *     EtwpTrackBinaryForSession @ 0x1408AB250 (EtwpTrackBinaryForSession.c)
 *     PipMatchPersistentMemory @ 0x140953A08 (PipMatchPersistentMemory.c)
 *     PnpNotifyHwProfileChange @ 0x14095669C (PnpNotifyHwProfileChange.c)
 *     PnpRequestHwProfileChangeNotification @ 0x140956A18 (PnpRequestHwProfileChangeNotification.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x140970CE0 (PiDrvDbQuerySyncNodesUpdated.c)
 *     ObpGetTraceIndex @ 0x14097CD90 (ObpGetTraceIndex.c)
 *     PpmCompareAndApplyPolicySettings @ 0x140992E4C (PpmCompareAndApplyPolicySettings.c)
 *     CompareNamesCaseSensitive @ 0x1409BA6D8 (CompareNamesCaseSensitive.c)
 *     SepCheckCapabilities @ 0x1409CF25C (SepCheckCapabilities.c)
 *     SepIsAclEqual @ 0x1409D11D8 (SepIsAclEqual.c)
 *     WmipParseSysIdTable @ 0x1409DFE90 (WmipParseSysIdTable.c)
 *     SLUpdateLicenseDataInternal @ 0x1409FA694 (SLUpdateLicenseDataInternal.c)
 *     ExpCovIsModulePresent @ 0x140A0646C (ExpCovIsModulePresent.c)
 *     CmpTransUowIsEqual @ 0x140A1C2D0 (CmpTransUowIsEqual.c)
 *     MiCompareUserSidHotPatchNodes @ 0x140A36634 (MiCompareUserSidHotPatchNodes.c)
 *     SdbpMergeAreTagValuesEqual @ 0x140A53AC4 (SdbpMergeAreTagValuesEqual.c)
 *     MinCryptDecodeHashAlgorithmIdentifier @ 0x140A6F178 (MinCryptDecodeHashAlgorithmIdentifier.c)
 *     MinCryptDecodeSignatureAlgorithmIdentifier @ 0x140A6F220 (MinCryptDecodeSignatureAlgorithmIdentifier.c)
 *     I_MinCryptFindIssuerCertificateByName @ 0x140A6F570 (I_MinCryptFindIssuerCertificateByName.c)
 *     I_MinCryptFindRootByName @ 0x140A6F688 (I_MinCryptFindRootByName.c)
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x140A6F858 (MinCryptVerifyCertificateWithPolicy2.c)
 *     VfUtilEqualUnicodeString @ 0x140AC269C (VfUtilEqualUnicodeString.c)
 *     ViDdiDispatchWmiQueryAllData @ 0x140AC3C34 (ViDdiDispatchWmiQueryAllData.c)
 *     ViCheckTag @ 0x140AC8544 (ViCheckTag.c)
 *     ViCopyBackModifiedBuffer @ 0x140AC8694 (ViCopyBackModifiedBuffer.c)
 *     PipMigratePnpState @ 0x140B3FB4C (PipMigratePnpState.c)
 *     HalpAuditSlicTables @ 0x140B92538 (HalpAuditSlicTables.c)
 *     VhdiInitializeBootDisk @ 0x140B9AD30 (VhdiInitializeBootDisk.c)
 *     CimfsInitializeBootDisk @ 0x140B9B180 (CimfsInitializeBootDisk.c)
 * Callees:
 *     <none>
 */

SIZE_T __stdcall RtlCompareMemory(const void *Source1, const void *Source2, SIZE_T Length)
{
  _BYTE *v3; // rsi
  _BYTE *v4; // rdi
  __int64 v5; // rcx
  bool v6; // zf
  SIZE_T v7; // rcx
  bool v8; // zf
  bool v9; // zf
  SIZE_T v10; // r8
  SIZE_T v11; // rcx
  bool v13; // zf
  SIZE_T v14; // rcx

  v3 = Source1;
  v4 = Source2;
  if ( (((unsigned __int8)Source1 ^ (unsigned __int8)Source2) & 7) != 0 || Length < 8 )
  {
    v13 = Length == 0;
    if ( Length )
    {
      v14 = Length;
      do
      {
        if ( !v14 )
          break;
        v13 = *v3++ == *v4++;
        --v14;
      }
      while ( v13 );
      if ( !v13 )
        Length -= v14 + 1;
    }
    return Length;
  }
  else
  {
    v5 = -(int)Source1 & 7;
    if ( (_DWORD)v5 )
    {
      Length -= (unsigned int)v5;
      v6 = Length == 0;
      do
      {
        if ( !v5 )
          break;
        v6 = *v3++ == *v4++;
        --v5;
      }
      while ( v6 );
      if ( !v6 )
        goto LABEL_19;
    }
    v7 = Length & 0xFFFFFFFFFFFFFFF8uLL;
    if ( (Length & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
    {
      Length -= v7;
      v7 >>= 3;
      v8 = v7 == 0;
      do
      {
        if ( !v7 )
          break;
        v8 = *(_QWORD *)v3 == *(_QWORD *)v4;
        v3 += 8;
        v4 += 8;
        --v7;
      }
      while ( v8 );
      if ( !v8 )
      {
        v3 -= 8;
        v4 -= 8;
        v7 = 8 * (v7 + 1);
      }
    }
    v9 = v7 + Length == 0;
    v10 = v7 + Length;
    if ( v10 )
    {
      v11 = v10;
      do
      {
        if ( !v11 )
          break;
        v9 = *v3++ == *v4++;
        --v11;
      }
      while ( v9 );
      if ( !v9 )
LABEL_19:
        --v4;
    }
    return v4 - (_BYTE *)Source2;
  }
}
