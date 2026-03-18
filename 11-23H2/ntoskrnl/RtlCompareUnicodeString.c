/*
 * XREFs of RtlCompareUnicodeString @ 0x1406DA140
 * Callers:
 *     AuthzBasepCompareUnicodeStringOperands @ 0x14030C158 (AuthzBasepCompareUnicodeStringOperands.c)
 *     FsRtlCompareNodeAndKey @ 0x140326E28 (FsRtlCompareNodeAndKey.c)
 *     ApiSetQuerySchemaInfo @ 0x14035F1D4 (ApiSetQuerySchemaInfo.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x14036ED08 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x140397170 (PopFxFindAcpiDeviceByUniqueId.c)
 *     KsepCacheHwIdEqual @ 0x1403C6BF0 (KsepCacheHwIdEqual.c)
 *     ApiSetQuerySchemaInfo_V7 @ 0x140416A50 (ApiSetQuerySchemaInfo_V7.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x140696D48 (ExCovReadjustUnloadedModuleEntry.c)
 *     MiResolveImageReferences @ 0x1406AE044 (MiResolveImageReferences.c)
 *     PnpCompareInstancePath @ 0x1406D7DB0 (PnpCompareInstancePath.c)
 *     CmpDoCompareKeyName @ 0x1406DA8B0 (CmpDoCompareKeyName.c)
 *     CmpWalkOneLevel @ 0x1406DD820 (CmpWalkOneLevel.c)
 *     CmpFindNameInListCellWithStatus @ 0x1406DF830 (CmpFindNameInListCellWithStatus.c)
 *     CmpCheckLexicographicalOrder @ 0x1407AA3D0 (CmpCheckLexicographicalOrder.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1407CE250 (RtlpProcessIFEOKeyFilter.c)
 *     PiCompareDDBCacheEntries @ 0x1407D4D40 (PiCompareDDBCacheEntries.c)
 *     PiSwBusRelationsCompareInstancePath @ 0x1407DFCD0 (PiSwBusRelationsCompareInstancePath.c)
 *     PopPowerRequestStatsDatabaseCompare @ 0x1407E6800 (PopPowerRequestStatsDatabaseCompare.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x1407EEF20 (RtlpCapabilityCheckSystemCapability.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x1407F0AA0 (SepCaptureTokenSecurityAttributesInformation.c)
 *     CmpLoadSystemVersionData @ 0x14080D0B0 (CmpLoadSystemVersionData.c)
 *     PopConnectToPolicyDevice @ 0x14084CD50 (PopConnectToPolicyDevice.c)
 *     KsepCacheDeviceEqual @ 0x140861AA0 (KsepCacheDeviceEqual.c)
 *     PiGetServiceNameInfo @ 0x140872060 (PiGetServiceNameInfo.c)
 *     PiDevCfgConfigureDevice @ 0x14087A734 (PiDevCfgConfigureDevice.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x1408A6138 (SepAdtClassifyObjectIntoSubCategory.c)
 *     SepRmGlobalSaclFind @ 0x1408A65B2 (SepRmGlobalSaclFind.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14095DA8C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgResolveVariableExpression @ 0x140960150 (PiDevCfgResolveVariableExpression.c)
 *     IopExecuteHardwareProfileChange @ 0x1409715A4 (IopExecuteHardwareProfileChange.c)
 *     SepAdtStagingEvent @ 0x1409CCEEC (SepAdtStagingEvent.c)
 *     WmipCheckSMBiosSysInfoString @ 0x1409DF668 (WmipCheckSMBiosSysInfoString.c)
 *     ExpCovIsModulePresent @ 0x140A0646C (ExpCovIsModulePresent.c)
 *     ExpCovQueryHypervisorInformation @ 0x140A06548 (ExpCovQueryHypervisorInformation.c)
 *     CmpSortedValueEnumStackValueCompareFunction @ 0x140A25490 (CmpSortedValueEnumStackValueCompareFunction.c)
 *     IopInitializeBootDrivers @ 0x140B3CEB4 (IopInitializeBootDrivers.c)
 *     KiHwPolicyFindDriverImage @ 0x140B60438 (KiHwPolicyFindDriverImage.c)
 *     CmpSetSystemBiosInformation @ 0x140B9886C (CmpSetSystemBiosInformation.c)
 * Callees:
 *     NLS_UPCASE @ 0x14022D310 (NLS_UPCASE.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14022D370 (PsGetCurrentServerSiloGlobals.c)
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
