/*
 * XREFs of memcmp @ 0x1403DA530
 * Callers:
 *     CompareEventEntry @ 0x1402134C4 (CompareEventEntry.c)
 *     AuthzBasepFindSecurityAttributeValue @ 0x140225A14 (AuthzBasepFindSecurityAttributeValue.c)
 *     RtlSidDominates @ 0x140226B40 (RtlSidDominates.c)
 *     RtlFindAceBySid @ 0x140227A80 (RtlFindAceBySid.c)
 *     SepMaximumAccessCheck @ 0x14022A270 (SepMaximumAccessCheck.c)
 *     RtlEqualSid @ 0x14022A880 (RtlEqualSid.c)
 *     SepPotentialGlobalTableAttribute @ 0x14022CF64 (SepPotentialGlobalTableAttribute.c)
 *     SeAccessCheckWithHint @ 0x140231790 (SeAccessCheckWithHint.c)
 *     SepNormalAccessCheck @ 0x140233610 (SepNormalAccessCheck.c)
 *     SepMandatoryIntegrityCheck @ 0x1402B6130 (SepMandatoryIntegrityCheck.c)
 *     SepSidInTokenSidHash @ 0x1402B6910 (SepSidInTokenSidHash.c)
 *     RtlpIsNameInExpressionPrivate @ 0x14030C830 (RtlpIsNameInExpressionPrivate.c)
 *     RtlAreNamesEqual @ 0x140324AD0 (RtlAreNamesEqual.c)
 *     HalpAcpiGetRsdt @ 0x140337058 (HalpAcpiGetRsdt.c)
 *     HalpAcpiIsCachedTableCompromised @ 0x1403374A8 (HalpAcpiIsCachedTableCompromised.c)
 *     RtlpOwnerAcesPresent @ 0x1403378B0 (RtlpOwnerAcesPresent.c)
 *     RtlSidHashLookup @ 0x14034AC80 (RtlSidHashLookup.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x140362220 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     KeUpdateSoftParkRankList @ 0x140392ECC (KeUpdateSoftParkRankList.c)
 *     HalMatchAcpiOemTableId @ 0x1403A1160 (HalMatchAcpiOemTableId.c)
 *     IoRaiseInformationalHardError @ 0x140557420 (IoRaiseInformationalHardError.c)
 *     IopIsKnownGoodLegacyFsFilter @ 0x140558094 (IopIsKnownGoodLegacyFsFilter.c)
 *     AsanWrapperMemcmp @ 0x140565820 (AsanWrapperMemcmp.c)
 *     KiDisplayBlueScreen @ 0x14056A7F4 (KiDisplayBlueScreen.c)
 *     RtlpComparePropertyEntry @ 0x1405AB310 (RtlpComparePropertyEntry.c)
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x1405C0B70 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     MiFindSpecialPurposeMemoryType @ 0x140660718 (MiFindSpecialPurposeMemoryType.c)
 *     MiIdealClusterPage @ 0x14066A9E0 (MiIdealClusterPage.c)
 *     AuthzBasepCompareOctetStringOperands @ 0x14066FB60 (AuthzBasepCompareOctetStringOperands.c)
 *     MinCryptCheckCertsAndKeys @ 0x140677A40 (MinCryptCheckCertsAndKeys.c)
 *     MinCryptIsCertPresent @ 0x140677B6C (MinCryptIsCertPresent.c)
 *     MincrypK_ParseCertificateChainWithPolicy2 @ 0x1406810AC (MincrypK_ParseCertificateChainWithPolicy2.c)
 *     ExpWnfInvalidateDataStores @ 0x140682B5C (ExpWnfInvalidateDataStores.c)
 *     EtwpStartLogger @ 0x1406BBFE0 (EtwpStartLogger.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406CA3EC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     PiPnpRtlObjectActionCallback @ 0x1406D64E0 (PiPnpRtlObjectActionCallback.c)
 *     RtlFindUnicodeSubstring @ 0x1406D9360 (RtlFindUnicodeSubstring.c)
 *     sub_1406EF5A0 @ 0x1406EF5A0 (sub_1406EF5A0.c)
 *     CmpFindMatchingDescriptorCell @ 0x14070DAFC (CmpFindMatchingDescriptorCell.c)
 *     ExpWnfFindScopeInstance @ 0x1407149D8 (ExpWnfFindScopeInstance.c)
 *     ObLogSecurityDescriptor @ 0x140728EC0 (ObLogSecurityDescriptor.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x14074D980 (PfSnPrefetchCacheEntryUpdate.c)
 *     PfSnPrefetchCacheEntryGet @ 0x14074E4F4 (PfSnPrefetchCacheEntryGet.c)
 *     NtSetSystemInformation @ 0x14075F020 (NtSetSystemInformation.c)
 *     PiPnpRtlCmActionCallback @ 0x140788D10 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectProcessPropertyChange @ 0x14078992C (PiDmObjectProcessPropertyChange.c)
 *     PropertyEval @ 0x140789FD0 (PropertyEval.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x14078D4BC (PiDmObjectUpdateCachedObjectProperty.c)
 *     PnpProcessTargetDeviceEvent @ 0x14079458C (PnpProcessTargetDeviceEvent.c)
 *     RtlpNormalizeAcl @ 0x1407ACFF0 (RtlpNormalizeAcl.c)
 *     PopEtAggregateFind @ 0x1407B2A38 (PopEtAggregateFind.c)
 *     RtlpInternEntryMatch @ 0x1407B34F4 (RtlpInternEntryMatch.c)
 *     TraitsCompare @ 0x1407BCE2C (TraitsCompare.c)
 *     PiDcCompareUpdateProperties @ 0x1407D0E30 (PiDcCompareUpdateProperties.c)
 *     PfSnEndProcessTrace @ 0x1407E55F0 (PfSnEndProcessTrace.c)
 *     EtwpGenerateFileName @ 0x1407E9570 (EtwpGenerateFileName.c)
 *     SepSidInSidAndAttributes @ 0x1407F3CF0 (SepSidInSidAndAttributes.c)
 *     ConstraintEval @ 0x1407FB468 (ConstraintEval.c)
 *     SLQueryLicenseValueInternal @ 0x14080F564 (SLQueryLicenseValueInternal.c)
 *     PopApplyPolicy @ 0x1408244DC (PopApplyPolicy.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x14083F618 (RtlpCheckDynamicTimeZoneInformation.c)
 *     RtlpUpdateDynamicTimeZones @ 0x14083FC80 (RtlpUpdateDynamicTimeZones.c)
 *     FsRtlNotifyFilterReportChange @ 0x14084B790 (FsRtlNotifyFilterReportChange.c)
 *     ExpKdPullRemoteFileForUser @ 0x14084F140 (ExpKdPullRemoteFileForUser.c)
 *     SeExamineSacl @ 0x1408A64A0 (SeExamineSacl.c)
 *     EtwpCompareGuid @ 0x1408A86A0 (EtwpCompareGuid.c)
 *     FsRtlIsDbcsInExpression @ 0x14093F230 (FsRtlIsDbcsInExpression.c)
 *     PiDevCfgResolveVariableExpression @ 0x140960350 (PiDevCfgResolveVariableExpression.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x140967498 (PiSwDoesCreateChangesRequireReEnum.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14097AC10 (AlpcpEnterStateChangeEventMessageLog.c)
 *     PfSnAltProfileTreeCompareByProcess @ 0x14097F86C (PfSnAltProfileTreeCompareByProcess.c)
 *     RtlReplaceSidInSd @ 0x1409BC530 (RtlReplaceSidInSd.c)
 *     SepExamineSaclEx @ 0x1409CE8B4 (SepExamineSaclEx.c)
 *     SepSecureBootManifestCompareElements @ 0x1409D0FD0 (SepSecureBootManifestCompareElements.c)
 *     SepSecureBootValidateBcdDataAgainstBcdRule @ 0x1409D1174 (SepSecureBootValidateBcdDataAgainstBcdRule.c)
 *     EtwpUpdateDisallowedGuids @ 0x1409F0170 (EtwpUpdateDisallowedGuids.c)
 *     SLUpdateLicenseDataInternal @ 0x1409FA924 (SLUpdateLicenseDataInternal.c)
 *     MiComputeBadImageHeaderType @ 0x140A2F598 (MiComputeBadImageHeaderType.c)
 *     SdbpCheckMatchingRegistryValue @ 0x140A4FDAC (SdbpCheckMatchingRegistryValue.c)
 *     BiAreBootEntriesEqual @ 0x140A5DCB0 (BiAreBootEntriesEqual.c)
 *     BiExportEfiBootManager @ 0x140A5E87C (BiExportEfiBootManager.c)
 *     I_MinCryptCheckEKU @ 0x140A6F7A8 (I_MinCryptCheckEKU.c)
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x140A6FB08 (MinCryptVerifyCertificateWithPolicy2.c)
 *     I_MinCryptHashSearchCompare @ 0x140A705A0 (I_MinCryptHashSearchCompare.c)
 *     MinAsn1ParseSingleExtensionValue @ 0x140A709F8 (MinAsn1ParseSingleExtensionValue.c)
 *     I_MinCryptCheckEKURequirements @ 0x140A70BC0 (I_MinCryptCheckEKURequirements.c)
 *     IovpExamineIrpStackForwarding @ 0x140ACD024 (IovpExamineIrpStackForwarding.c)
 *     ViCtxEqualExtendedState @ 0x140AE4C98 (ViCtxEqualExtendedState.c)
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
