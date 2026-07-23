/*
 * XREFs of RtlCompareUnicodeString @ 0x1406DA170
 * Callers:
 *     AuthzBasepCompareUnicodeStringOperands @ 0x14030C3E8 (AuthzBasepCompareUnicodeStringOperands.c)
 *     FsRtlCompareNodeAndKey @ 0x1403270B8 (FsRtlCompareNodeAndKey.c)
 *     ApiSetQuerySchemaInfo @ 0x14035F374 (ApiSetQuerySchemaInfo.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x14036EEA8 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x140397350 (PopFxFindAcpiDeviceByUniqueId.c)
 *     KsepCacheHwIdEqual @ 0x1403C6DD0 (KsepCacheHwIdEqual.c)
 *     ApiSetQuerySchemaInfo_V7 @ 0x140416DE0 (ApiSetQuerySchemaInfo_V7.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x140696D48 (ExCovReadjustUnloadedModuleEntry.c)
 *     MiResolveImageReferences @ 0x1406AE074 (MiResolveImageReferences.c)
 *     PnpCompareInstancePath @ 0x1406D7DE0 (PnpCompareInstancePath.c)
 *     CmpDoCompareKeyName @ 0x1406DA8E0 (CmpDoCompareKeyName.c)
 *     CmpWalkOneLevel @ 0x1406DD850 (CmpWalkOneLevel.c)
 *     CmpFindNameInListCellWithStatus @ 0x1406DF860 (CmpFindNameInListCellWithStatus.c)
 *     CmpCheckLexicographicalOrder @ 0x1407AA5C0 (CmpCheckLexicographicalOrder.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1407CE520 (RtlpProcessIFEOKeyFilter.c)
 *     PiCompareDDBCacheEntries @ 0x1407D5010 (PiCompareDDBCacheEntries.c)
 *     PiSwBusRelationsCompareInstancePath @ 0x1407DFFA0 (PiSwBusRelationsCompareInstancePath.c)
 *     PopPowerRequestStatsDatabaseCompare @ 0x1407E6AD0 (PopPowerRequestStatsDatabaseCompare.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x1407EF1F0 (RtlpCapabilityCheckSystemCapability.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x1407F0D70 (SepCaptureTokenSecurityAttributesInformation.c)
 *     CmpLoadSystemVersionData @ 0x14080D380 (CmpLoadSystemVersionData.c)
 *     PopConnectToPolicyDevice @ 0x14084D050 (PopConnectToPolicyDevice.c)
 *     KsepCacheDeviceEqual @ 0x140861CE0 (KsepCacheDeviceEqual.c)
 *     PiGetServiceNameInfo @ 0x1408722A0 (PiGetServiceNameInfo.c)
 *     PiDevCfgConfigureDevice @ 0x14087A974 (PiDevCfgConfigureDevice.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x1408A6388 (SepAdtClassifyObjectIntoSubCategory.c)
 *     SepRmGlobalSaclFind @ 0x1408A6802 (SepRmGlobalSaclFind.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14095DC8C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgResolveVariableExpression @ 0x140960350 (PiDevCfgResolveVariableExpression.c)
 *     IopExecuteHardwareProfileChange @ 0x1409717A4 (IopExecuteHardwareProfileChange.c)
 *     SepAdtStagingEvent @ 0x1409CD0EC (SepAdtStagingEvent.c)
 *     WmipCheckSMBiosSysInfoString @ 0x1409DF868 (WmipCheckSMBiosSysInfoString.c)
 *     ExpCovIsModulePresent @ 0x140A066FC (ExpCovIsModulePresent.c)
 *     ExpCovQueryHypervisorInformation @ 0x140A067D8 (ExpCovQueryHypervisorInformation.c)
 *     CmpSortedValueEnumStackValueCompareFunction @ 0x140A25740 (CmpSortedValueEnumStackValueCompareFunction.c)
 *     IopInitializeBootDrivers @ 0x140B3CEB4 (IopInitializeBootDrivers.c)
 *     KiHwPolicyFindDriverImage @ 0x140B60438 (KiHwPolicyFindDriverImage.c)
 *     CmpSetSystemBiosInformation @ 0x140B9886C (CmpSetSystemBiosInformation.c)
 * Callees:
 *     NLS_UPCASE @ 0x14022D420 (NLS_UPCASE.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 */

LONG __stdcall RtlCompareUnicodeString(PCUNICODE_STRING String1, PCUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // rdi
  __int64 v5; // rsi
  char v6; // r8
  unsigned __int16 *v7; // r9
  __int64 v8; // r11
  unsigned __int64 v9; // rax
  unsigned __int16 *v10; // rbx
  __int64 v11; // r11
  int v13; // r8d
  unsigned __int64 v14; // r10
  int v15; // ecx
  int v16; // eax

  v3 = (unsigned __int64)String2->Length >> 1;
  v4 = (unsigned __int64)String1->Length >> 1;
  v5 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 154);
  v9 = v4;
  if ( v4 > v3 )
    v9 = v3;
  v10 = &v7[v9];
  if ( v7 >= v10 )
    return v4 - v3;
  v11 = v8 - (_QWORD)v7;
  if ( v6 )
  {
    while ( 1 )
    {
      if ( *v7 != *(unsigned __int16 *)((char *)v7 + v11) )
      {
        v13 = NLS_UPCASE(v5, *v7);
        if ( (unsigned int)v14 >= 0x61 )
        {
          if ( (unsigned int)v14 > 0x7A )
          {
            if ( v5 )
            {
              if ( (unsigned __int16)v14 >= 0xC0u )
                LOWORD(v14) = *(_WORD *)(v5
                                       + 2
                                       * ((v14 & 0xF)
                                        + *(unsigned __int16 *)(v5
                                                              + 2LL
                                                              * (((unsigned __int8)v14 >> 4)
                                                               + (unsigned int)*(unsigned __int16 *)(v5 + 2 * (v14 >> 8))))))
                            + v14;
            }
          }
          else
          {
            LOWORD(v14) = v14 - 32;
          }
        }
        if ( (_WORD)v13 != (_WORD)v14 )
          break;
      }
      if ( ++v7 >= v10 )
        return v4 - v3;
    }
    v15 = (unsigned __int16)v14;
    v16 = v13;
  }
  else
  {
    while ( 1 )
    {
      v16 = *v7;
      v15 = *(unsigned __int16 *)((char *)v7 + v11);
      if ( (_WORD)v16 != (_WORD)v15 )
        break;
      if ( ++v7 >= v10 )
        return v4 - v3;
    }
  }
  return v16 - v15;
}
