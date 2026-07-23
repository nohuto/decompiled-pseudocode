/*
 * XREFs of RtlCompareMemory @ 0x140429BB0
 * Callers:
 *     SepIsPackageSid @ 0x14022A8BC (SepIsPackageSid.c)
 *     SepIsCapabilitySid @ 0x14022A914 (SepIsCapabilitySid.c)
 *     SepNormalAccessCheck @ 0x140233610 (SepNormalAccessCheck.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x14031D9C0 (IoReportTargetDeviceChangeAsynchronous.c)
 *     PpmPerfCalculateQosClassPolicies @ 0x14032ABF8 (PpmPerfCalculateQosClassPolicies.c)
 *     PopWriteBsdPoInfo @ 0x14032B570 (PopWriteBsdPoInfo.c)
 *     HalpHpetDiscover @ 0x140377980 (HalpHpetDiscover.c)
 *     EtwpTraceStackKey @ 0x140469970 (EtwpTraceStackKey.c)
 *     WheaGetErrPacketFromErrRecord @ 0x140519A30 (WheaGetErrPacketFromErrRecord.c)
 *     HalpGenericErrorSourceRecovery @ 0x140519BF0 (HalpGenericErrorSourceRecovery.c)
 *     SecureDump_ValidateAmeCertChain @ 0x14055EE90 (SecureDump_ValidateAmeCertChain.c)
 *     RtlpStdLogCapturedStackTrace @ 0x1405AA0D4 (RtlpStdLogCapturedStackTrace.c)
 *     RtlpHpSizeHeap @ 0x1405B6D28 (RtlpHpSizeHeap.c)
 *     EtwpGetCrimsonStackKey @ 0x14060215C (EtwpGetCrimsonStackKey.c)
 *     MmReportParkedProcessors @ 0x140656398 (MmReportParkedProcessors.c)
 *     MinCryptIsKeyPresent @ 0x140677BEC (MinCryptIsKeyPresent.c)
 *     PipGenerateContainerID @ 0x1406850A8 (PipGenerateContainerID.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x140696D48 (ExCovReadjustUnloadedModuleEntry.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1406BFE70 (EtwpClearSessionAndUnreferenceEntry.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x1406D286C (CmpCompareNewValueDataAgainstKCBCache.c)
 *     AlpcpExposeWorkOnBehalfAttribute @ 0x14073C5B0 (AlpcpExposeWorkOnBehalfAttribute.c)
 *     sub_140761F18 @ 0x140761F18 (sub_140761F18.c)
 *     EtwpTrackDebugIdForSession @ 0x14077E340 (EtwpTrackDebugIdForSession.c)
 *     EtwpCalculateUpdateNotification @ 0x140781690 (EtwpCalculateUpdateNotification.c)
 *     PopArePowerSettingsEqual @ 0x140783040 (PopArePowerSettingsEqual.c)
 *     PnpNotifyTargetDeviceChange @ 0x14078354C (PnpNotifyTargetDeviceChange.c)
 *     PnpIsNullGuid @ 0x140786A24 (PnpIsNullGuid.c)
 *     PnpCompareInterruptInformation @ 0x14078F2FC (PnpCompareInterruptInformation.c)
 *     PnpNotifyDeviceClassChange @ 0x14078F470 (PnpNotifyDeviceClassChange.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x1407975BC (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1407BC4F0 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     WbInitializeEncryptionSegment @ 0x1407D2BC8 (WbInitializeEncryptionSegment.c)
 *     PnpBusTypeGuidGetIndex @ 0x1407DBCBC (PnpBusTypeGuidGetIndex.c)
 *     ObpCompareEntryLevel2 @ 0x1407DCD80 (ObpCompareEntryLevel2.c)
 *     IopPnPDispatch @ 0x1407EB2F0 (IopPnPDispatch.c)
 *     RtlIsCapabilitySid @ 0x1407F2E78 (RtlIsCapabilitySid.c)
 *     RtlIsPackageSid @ 0x1407F30F4 (RtlIsPackageSid.c)
 *     RtlGetAppContainerSidType @ 0x1407F4670 (RtlGetAppContainerSidType.c)
 *     SPCallServerHandleFileIntegrityQuery @ 0x1407FF328 (SPCallServerHandleFileIntegrityQuery.c)
 *     BiUpdateBcdObject @ 0x1408045D4 (BiUpdateBcdObject.c)
 *     PopInitializeHeteroProcessors @ 0x14082D190 (PopInitializeHeteroProcessors.c)
 *     CmpFilterAcpiDockingState @ 0x14084ADF4 (CmpFilterAcpiDockingState.c)
 *     IoReportTargetDeviceChange @ 0x140881F50 (IoReportTargetDeviceChange.c)
 *     EtwpTrackBinaryForSession @ 0x1408AB4A0 (EtwpTrackBinaryForSession.c)
 *     PipMatchPersistentMemory @ 0x140953C08 (PipMatchPersistentMemory.c)
 *     PnpNotifyHwProfileChange @ 0x14095689C (PnpNotifyHwProfileChange.c)
 *     PnpRequestHwProfileChangeNotification @ 0x140956C18 (PnpRequestHwProfileChangeNotification.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x140970EE0 (PiDrvDbQuerySyncNodesUpdated.c)
 *     ObpGetTraceIndex @ 0x14097CF90 (ObpGetTraceIndex.c)
 *     PpmCompareAndApplyPolicySettings @ 0x14099304C (PpmCompareAndApplyPolicySettings.c)
 *     CompareNamesCaseSensitive @ 0x1409BA8D8 (CompareNamesCaseSensitive.c)
 *     SepCheckCapabilities @ 0x1409CF45C (SepCheckCapabilities.c)
 *     SepIsAclEqual @ 0x1409D13D8 (SepIsAclEqual.c)
 *     WmipParseSysIdTable @ 0x1409E0090 (WmipParseSysIdTable.c)
 *     SLUpdateLicenseDataInternal @ 0x1409FA924 (SLUpdateLicenseDataInternal.c)
 *     ExpCovIsModulePresent @ 0x140A066FC (ExpCovIsModulePresent.c)
 *     CmpTransUowIsEqual @ 0x140A1C580 (CmpTransUowIsEqual.c)
 *     MiCompareUserSidHotPatchNodes @ 0x140A368E4 (MiCompareUserSidHotPatchNodes.c)
 *     SdbpMergeAreTagValuesEqual @ 0x140A53D74 (SdbpMergeAreTagValuesEqual.c)
 *     MinCryptDecodeHashAlgorithmIdentifier @ 0x140A6F428 (MinCryptDecodeHashAlgorithmIdentifier.c)
 *     MinCryptDecodeSignatureAlgorithmIdentifier @ 0x140A6F4D0 (MinCryptDecodeSignatureAlgorithmIdentifier.c)
 *     I_MinCryptFindIssuerCertificateByName @ 0x140A6F820 (I_MinCryptFindIssuerCertificateByName.c)
 *     I_MinCryptFindRootByName @ 0x140A6F938 (I_MinCryptFindRootByName.c)
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x140A6FB08 (MinCryptVerifyCertificateWithPolicy2.c)
 *     VfUtilEqualUnicodeString @ 0x140AC268C (VfUtilEqualUnicodeString.c)
 *     ViDdiDispatchWmiQueryAllData @ 0x140AC3C24 (ViDdiDispatchWmiQueryAllData.c)
 *     ViCheckTag @ 0x140AC8534 (ViCheckTag.c)
 *     ViCopyBackModifiedBuffer @ 0x140AC8684 (ViCopyBackModifiedBuffer.c)
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
