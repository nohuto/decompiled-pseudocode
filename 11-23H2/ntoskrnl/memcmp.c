/*
 * XREFs of memcmp @ 0x1403DA350
 * Callers:
 *     CompareEventEntry @ 0x1402134C4 (CompareEventEntry.c)
 *     AuthzBasepFindSecurityAttributeValue @ 0x140225904 (AuthzBasepFindSecurityAttributeValue.c)
 *     RtlSidDominates @ 0x140226A30 (RtlSidDominates.c)
 *     RtlFindAceBySid @ 0x140227970 (RtlFindAceBySid.c)
 *     SepMaximumAccessCheck @ 0x14022A160 (SepMaximumAccessCheck.c)
 *     RtlEqualSid @ 0x14022A770 (RtlEqualSid.c)
 *     SepPotentialGlobalTableAttribute @ 0x14022CE54 (SepPotentialGlobalTableAttribute.c)
 *     SeAccessCheckWithHint @ 0x1402316C0 (SeAccessCheckWithHint.c)
 *     SepNormalAccessCheck @ 0x140233540 (SepNormalAccessCheck.c)
 *     SepMandatoryIntegrityCheck @ 0x1402B5EA0 (SepMandatoryIntegrityCheck.c)
 *     SepSidInTokenSidHash @ 0x1402B6680 (SepSidInTokenSidHash.c)
 *     RtlpIsNameInExpressionPrivate @ 0x14030C5A0 (RtlpIsNameInExpressionPrivate.c)
 *     RtlAreNamesEqual @ 0x140324840 (RtlAreNamesEqual.c)
 *     HalpAcpiGetRsdt @ 0x140336DC8 (HalpAcpiGetRsdt.c)
 *     HalpAcpiIsCachedTableCompromised @ 0x140337218 (HalpAcpiIsCachedTableCompromised.c)
 *     RtlpOwnerAcesPresent @ 0x140337620 (RtlpOwnerAcesPresent.c)
 *     RtlSidHashLookup @ 0x14034AAE0 (RtlSidHashLookup.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x140362080 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     KeUpdateSoftParkRankList @ 0x140392CEC (KeUpdateSoftParkRankList.c)
 *     HalMatchAcpiOemTableId @ 0x1403A0F80 (HalMatchAcpiOemTableId.c)
 *     IoRaiseInformationalHardError @ 0x140556D60 (IoRaiseInformationalHardError.c)
 *     IopIsKnownGoodLegacyFsFilter @ 0x1405579D4 (IopIsKnownGoodLegacyFsFilter.c)
 *     AsanWrapperMemcmp @ 0x140565160 (AsanWrapperMemcmp.c)
 *     KiDisplayBlueScreen @ 0x14056A134 (KiDisplayBlueScreen.c)
 *     RtlpComparePropertyEntry @ 0x1405AADA0 (RtlpComparePropertyEntry.c)
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x1405C0600 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     MiFindSpecialPurposeMemoryType @ 0x1406601C8 (MiFindSpecialPurposeMemoryType.c)
 *     MiIdealClusterPage @ 0x14066A490 (MiIdealClusterPage.c)
 *     AuthzBasepCompareOctetStringOperands @ 0x14066F610 (AuthzBasepCompareOctetStringOperands.c)
 *     MinCryptCheckCertsAndKeys @ 0x1406774F0 (MinCryptCheckCertsAndKeys.c)
 *     MinCryptIsCertPresent @ 0x14067761C (MinCryptIsCertPresent.c)
 *     MincrypK_ParseCertificateChainWithPolicy2 @ 0x1406810AC (MincrypK_ParseCertificateChainWithPolicy2.c)
 *     ExpWnfInvalidateDataStores @ 0x140682B5C (ExpWnfInvalidateDataStores.c)
 *     EtwpStartLogger @ 0x1406BBFB0 (EtwpStartLogger.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406CA3BC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     PiPnpRtlObjectActionCallback @ 0x1406D64B0 (PiPnpRtlObjectActionCallback.c)
 *     RtlFindUnicodeSubstring @ 0x1406D9330 (RtlFindUnicodeSubstring.c)
 *     sub_1406EF570 @ 0x1406EF570 (sub_1406EF570.c)
 *     CmpFindMatchingDescriptorCell @ 0x14070D8EC (CmpFindMatchingDescriptorCell.c)
 *     ExpWnfFindScopeInstance @ 0x1407147C8 (ExpWnfFindScopeInstance.c)
 *     ObLogSecurityDescriptor @ 0x140728CC0 (ObLogSecurityDescriptor.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x14074D790 (PfSnPrefetchCacheEntryUpdate.c)
 *     PfSnPrefetchCacheEntryGet @ 0x14074E304 (PfSnPrefetchCacheEntryGet.c)
 *     NtSetSystemInformation @ 0x14075EE30 (NtSetSystemInformation.c)
 *     PiPnpRtlCmActionCallback @ 0x140788B20 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectProcessPropertyChange @ 0x14078973C (PiDmObjectProcessPropertyChange.c)
 *     PropertyEval @ 0x140789DE0 (PropertyEval.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x14078D2CC (PiDmObjectUpdateCachedObjectProperty.c)
 *     PnpProcessTargetDeviceEvent @ 0x14079439C (PnpProcessTargetDeviceEvent.c)
 *     RtlpNormalizeAcl @ 0x1407ACE00 (RtlpNormalizeAcl.c)
 *     PopEtAggregateFind @ 0x1407B2848 (PopEtAggregateFind.c)
 *     RtlpInternEntryMatch @ 0x1407B3304 (RtlpInternEntryMatch.c)
 *     TraitsCompare @ 0x1407BCB5C (TraitsCompare.c)
 *     PiDcCompareUpdateProperties @ 0x1407D0B60 (PiDcCompareUpdateProperties.c)
 *     PfSnEndProcessTrace @ 0x1407E5320 (PfSnEndProcessTrace.c)
 *     EtwpGenerateFileName @ 0x1407E92A0 (EtwpGenerateFileName.c)
 *     SepSidInSidAndAttributes @ 0x1407F3A20 (SepSidInSidAndAttributes.c)
 *     ConstraintEval @ 0x1407FB198 (ConstraintEval.c)
 *     SLQueryLicenseValueInternal @ 0x14080F294 (SLQueryLicenseValueInternal.c)
 *     PopApplyPolicy @ 0x1408241DC (PopApplyPolicy.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x14083F318 (RtlpCheckDynamicTimeZoneInformation.c)
 *     RtlpUpdateDynamicTimeZones @ 0x14083F980 (RtlpUpdateDynamicTimeZones.c)
 *     FsRtlNotifyFilterReportChange @ 0x14084B490 (FsRtlNotifyFilterReportChange.c)
 *     ExpKdPullRemoteFileForUser @ 0x14084EE40 (ExpKdPullRemoteFileForUser.c)
 *     SeExamineSacl @ 0x1408A6250 (SeExamineSacl.c)
 *     EtwpCompareGuid @ 0x1408A8450 (EtwpCompareGuid.c)
 *     FsRtlIsDbcsInExpression @ 0x14093F030 (FsRtlIsDbcsInExpression.c)
 *     PiDevCfgResolveVariableExpression @ 0x140960150 (PiDevCfgResolveVariableExpression.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x140967298 (PiSwDoesCreateChangesRequireReEnum.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14097AA10 (AlpcpEnterStateChangeEventMessageLog.c)
 *     PfSnAltProfileTreeCompareByProcess @ 0x14097F66C (PfSnAltProfileTreeCompareByProcess.c)
 *     RtlReplaceSidInSd @ 0x1409BC330 (RtlReplaceSidInSd.c)
 *     SepExamineSaclEx @ 0x1409CE6B4 (SepExamineSaclEx.c)
 *     SepSecureBootManifestCompareElements @ 0x1409D0DD0 (SepSecureBootManifestCompareElements.c)
 *     SepSecureBootValidateBcdDataAgainstBcdRule @ 0x1409D0F74 (SepSecureBootValidateBcdDataAgainstBcdRule.c)
 *     EtwpUpdateDisallowedGuids @ 0x1409EFEE0 (EtwpUpdateDisallowedGuids.c)
 *     SLUpdateLicenseDataInternal @ 0x1409FA694 (SLUpdateLicenseDataInternal.c)
 *     MiComputeBadImageHeaderType @ 0x140A2F2E8 (MiComputeBadImageHeaderType.c)
 *     SdbpCheckMatchingRegistryValue @ 0x140A4FAFC (SdbpCheckMatchingRegistryValue.c)
 *     BiAreBootEntriesEqual @ 0x140A5DA00 (BiAreBootEntriesEqual.c)
 *     BiExportEfiBootManager @ 0x140A5E5CC (BiExportEfiBootManager.c)
 *     I_MinCryptCheckEKU @ 0x140A6F4F8 (I_MinCryptCheckEKU.c)
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x140A6F858 (MinCryptVerifyCertificateWithPolicy2.c)
 *     I_MinCryptHashSearchCompare @ 0x140A702F0 (I_MinCryptHashSearchCompare.c)
 *     MinAsn1ParseSingleExtensionValue @ 0x140A70748 (MinAsn1ParseSingleExtensionValue.c)
 *     I_MinCryptCheckEKURequirements @ 0x140A70910 (I_MinCryptCheckEKURequirements.c)
 *     IovpExamineIrpStackForwarding @ 0x140ACD034 (IovpExamineIrpStackForwarding.c)
 *     ViCtxEqualExtendedState @ 0x140AE4CA8 (ViCtxEqualExtendedState.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140B3C53C (PipCheckSystemFirmwareUpdated.c)
 *     HalpAcpiDetectMachineSpecificActions @ 0x140B65BE8 (HalpAcpiDetectMachineSpecificActions.c)
 *     CmpGetBiosDate @ 0x140B9847C (CmpGetBiosDate.c)
 * Callees:
 *     <none>
 */

int __cdecl memcmp(const void *Buf1, const void *Buf2, size_t Size)
{
  signed __int64 v3; // rdx
  bool v4; // cf
  size_t v6; // r9
  unsigned __int64 v7; // rax
  size_t v8; // r9

  v3 = (_BYTE *)Buf2 - (_BYTE *)Buf1;
  if ( Size < 8 )
    goto LABEL_6;
  for ( ; ((unsigned __int8)Buf1 & 7) != 0; --Size )
  {
    v4 = *(_BYTE *)Buf1 < *((_BYTE *)Buf1 + v3);
    if ( *(_BYTE *)Buf1 != *((_BYTE *)Buf1 + v3) )
      return -v4 - (v4 - 1);
    Buf1 = (char *)Buf1 + 1;
  }
  if ( !(Size >> 3) )
  {
LABEL_6:
    if ( !Size )
      return 0;
    while ( 1 )
    {
      v4 = *(_BYTE *)Buf1 < *((_BYTE *)Buf1 + v3);
      if ( *(_BYTE *)Buf1 != *((_BYTE *)Buf1 + v3) )
        break;
      Buf1 = (char *)Buf1 + 1;
      if ( !--Size )
        return 0;
    }
    return -v4 - (v4 - 1);
  }
  v6 = Size >> 5;
  if ( Size >> 5 )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)Buf1;
      if ( *(_QWORD *)Buf1 != *(_QWORD *)((char *)Buf1 + v3) )
        break;
      v7 = *((_QWORD *)Buf1 + 1);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 8) )
        goto LABEL_24;
      v7 = *((_QWORD *)Buf1 + 2);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 16) )
        goto LABEL_23;
      v7 = *((_QWORD *)Buf1 + 3);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 24) )
      {
        Buf1 = (char *)Buf1 + 8;
LABEL_23:
        Buf1 = (char *)Buf1 + 8;
LABEL_24:
        Buf1 = (char *)Buf1 + 8;
        break;
      }
      Buf1 = (char *)Buf1 + 32;
      if ( !--v6 )
      {
        Size &= 0x1Fu;
        goto LABEL_18;
      }
    }
  }
  else
  {
LABEL_18:
    v8 = Size >> 3;
    if ( !(Size >> 3) )
      goto LABEL_6;
    while ( 1 )
    {
      v7 = *(_QWORD *)Buf1;
      if ( *(_QWORD *)Buf1 != *(_QWORD *)((char *)Buf1 + v3) )
        break;
      Buf1 = (char *)Buf1 + 8;
      if ( !--v8 )
      {
        Size &= 7u;
        goto LABEL_6;
      }
    }
  }
  v4 = _byteswap_uint64(v7) < _byteswap_uint64(*(_QWORD *)((char *)Buf1 + v3));
  return -v4 - (v4 - 1);
}
