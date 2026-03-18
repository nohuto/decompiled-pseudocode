/*
 * XREFs of RtlPrefixUnicodeString @ 0x1406D9E20
 * Callers:
 *     SepPotentialGlobalTableAttribute @ 0x14022CE54 (SepPotentialGlobalTableAttribute.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x14031D070 (RtlDeriveCapabilitySidsFromName.c)
 *     IoConfigureCrashDump @ 0x14054F964 (IoConfigureCrashDump.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x140588CF4 (PopFxBuildDripsBlockingDeviceList.c)
 *     IopBuildFullDriverPath @ 0x14068DB7C (IopBuildFullDriverPath.c)
 *     IopQueryRegistryKeySystemPath @ 0x14068ECA0 (IopQueryRegistryKeySystemPath.c)
 *     ExWnfHiveUnloaded @ 0x140699814 (ExWnfHiveUnloaded.c)
 *     SepIsMinTCB @ 0x1406B9B9C (SepIsMinTCB.c)
 *     ObCheckRefTraceProcess @ 0x1406BA268 (ObCheckRefTraceProcess.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x1406C3288 (SepAdtAuditObjectAccessWithContext.c)
 *     _CmIsRootEnumeratedDevice @ 0x1406CC080 (_CmIsRootEnumeratedDevice.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1406CC310 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1406CE1F4 (_CmOpenDeviceRegKeyWorker.c)
 *     _CmValidateDeviceInterfaceName @ 0x1406CE9C0 (_CmValidateDeviceInterfaceName.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x140787A34 (_CmOpenCommonClassRegKeyWorker.c)
 *     PiPnpRtlEnumeratorFilterCallback @ 0x14079A680 (PiPnpRtlEnumeratorFilterCallback.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x14079AD80 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmGetDeviceInterfacePathFormat @ 0x1407C5834 (_CmGetDeviceInterfacePathFormat.c)
 *     AuthzBasepIsCompareRelevantAttribute @ 0x1407C752C (AuthzBasepIsCompareRelevantAttribute.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1407CE250 (RtlpProcessIFEOKeyFilter.c)
 *     ObpIsUnsecureName @ 0x1407E0B34 (ObpIsUnsecureName.c)
 *     SepValidateReferencedCachedHandles @ 0x1407F4B60 (SepValidateReferencedCachedHandles.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x140813120 (PiDrvDbQuerySystemPathWin32.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14081A5F0 (PiCreateDriverSwDeviceCallback.c)
 *     PiNormalizeDeviceText @ 0x140870EB8 (PiNormalizeDeviceText.c)
 *     IopValidateJunctionTarget @ 0x1409465E4 (IopValidateJunctionTarget.c)
 *     PiCreateRegistryPath @ 0x1409559A4 (PiCreateRegistryPath.c)
 *     PiOpenDirectoryWithRoot @ 0x1409561A4 (PiOpenDirectoryWithRoot.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14095E9BC (PiDevCfgMakeServiceBootStart.c)
 *     PiDrvDbResolveKeyFilePaths @ 0x140970F5C (PiDrvDbResolveKeyFilePaths.c)
 *     PopBatteryDeviceState @ 0x1409950CC (PopBatteryDeviceState.c)
 *     PopDirectedDripsDiagSanitizeHardwareId @ 0x14099F014 (PopDirectedDripsDiagSanitizeHardwareId.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x140A61138 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x140A61830 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140A61EF4 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x140A6389C (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x140A65FCC (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x140A66920 (_CmOpenDevicePanelRegKeyWorker.c)
 * Callees:
 *     NLS_UPCASE @ 0x14022D310 (NLS_UPCASE.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14022D370 (PsGetCurrentServerSiloGlobals.c)
 */

BOOLEAN __stdcall RtlPrefixUnicodeString(PCUNICODE_STRING String1, PCUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  _QWORD *CurrentServerSiloGlobals; // rax
  __int64 v4; // rdx
  char v5; // r8
  unsigned __int16 *v6; // r10
  _WORD *v7; // r9
  __int64 v8; // rsi
  __int64 v9; // rax
  char *v10; // rbx
  __int64 v11; // rdi
  unsigned __int16 v12; // dx
  unsigned __int16 v14; // r11
  unsigned __int16 v15; // ax
  __int16 v16; // r10
  __int64 v17; // rcx

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v7 = (_WORD *)*((_QWORD *)v6 + 1);
  v8 = CurrentServerSiloGlobals[154];
  v9 = *v6;
  if ( *(_WORD *)v4 >= (unsigned __int16)v9 )
  {
    v10 = (char *)v7 + v9;
    if ( v7 >= (_WORD *)((char *)v7 + v9) )
      return 1;
    if ( v5 )
    {
      v11 = *(_QWORD *)(v4 + 8) - (_QWORD)v7;
      while ( 1 )
      {
        v12 = *(_WORD *)((char *)v7 + v11);
        if ( *v7 != v12 )
        {
          NLS_UPCASE(v8, v12);
          v15 = NLS_UPCASE(v8, v14);
          if ( v15 != v16 )
            break;
        }
        if ( ++v7 >= (_WORD *)v10 )
          return 1;
      }
    }
    else
    {
      v17 = *(_QWORD *)(v4 + 8) - (_QWORD)v7;
      while ( *v7 == *(_WORD *)((char *)v7 + v17) )
      {
        if ( ++v7 >= (_WORD *)v10 )
          return 1;
      }
    }
  }
  return 0;
}
