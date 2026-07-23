/*
 * XREFs of RtlStringCchPrintfW @ 0x14022AA1C
 * Callers:
 *     RtlpEtcGetDwordFromPersistedState @ 0x140411B68 (RtlpEtcGetDwordFromPersistedState.c)
 *     RtlpEtcIsValidFeatureId @ 0x140411CA0 (RtlpEtcIsValidFeatureId.c)
 *     CarLiveDumpCallBack @ 0x1405D6110 (CarLiveDumpCallBack.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x140674410 (DrvDbGetConfigurationSubKeyCallback.c)
 *     IoWMIOpenBlock @ 0x1406C6A50 (IoWMIOpenBlock.c)
 *     AslpFileQueryVersionString @ 0x1406D4594 (AslpFileQueryVersionString.c)
 *     EtwpPsProvTraceProcess @ 0x1407525C0 (EtwpPsProvTraceProcess.c)
 *     IoCreateDevice @ 0x14076B1C0 (IoCreateDevice.c)
 *     RtlpInitNlsSectionName @ 0x1407A246C (RtlpInitNlsSectionName.c)
 *     RtlpInitNlsFileName @ 0x1407A5478 (RtlpInitNlsFileName.c)
 *     MiSessionObjectCreate @ 0x1407A9EDC (MiSessionObjectCreate.c)
 *     IopBootLog @ 0x1407E379C (IopBootLog.c)
 *     SepValidateReferencedCachedHandles @ 0x1407F4E30 (SepValidateReferencedCachedHandles.c)
 *     IoCreateDriver @ 0x1408104D0 (IoCreateDriver.c)
 *     PiDrvDbRegisterNode @ 0x140811A0C (PiDrvDbRegisterNode.c)
 *     AslGuidToString @ 0x14084E8E4 (AslGuidToString.c)
 *     _SysCtxOpenControlSet @ 0x140855528 (_SysCtxOpenControlSet.c)
 *     PiDrvDbRegisterNodeCallback @ 0x1408651BC (PiDrvDbRegisterNodeCallback.c)
 *     IopCopyBootLogRegistryToFile @ 0x1408657F8 (IopCopyBootLogRegistryToFile.c)
 *     IopCreateArcName @ 0x14086FA68 (IopCreateArcName.c)
 *     PipMakeGloballyUniqueId @ 0x140870C60 (PipMakeGloballyUniqueId.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140879EB0 (PiDevCfgLogDeviceConfigured.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x14087BE40 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     PiDevCfgResolveVariableExpression @ 0x140960350 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x1409615E0 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x140962660 (PiDevCfgResolveVariableSwitchCase.c)
 *     IopCreateLegacyDeviceIds @ 0x14096C928 (IopCreateLegacyDeviceIds.c)
 *     PspShutdownCsrProcess @ 0x1409AD4A8 (PspShutdownCsrProcess.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1409BCDCC (RtlpGetTokenNamedObjectPath.c)
 *     SepReadAndInsertCaps @ 0x1409D1F0C (SepReadAndInsertCaps.c)
 *     EncloseSubCondition @ 0x1409D30CC (EncloseSubCondition.c)
 *     GetPrintableOperandValue @ 0x1409D416C (GetPrintableOperandValue.c)
 *     LocalpGetStringForCondition @ 0x1409D6674 (LocalpGetStringForCondition.c)
 *     CMFFlushHitsFile @ 0x140A0240C (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x140A02D50 (CMFSystemThreadRoutine.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x140A4FBCC (SdbpCheckMatchingRegistryEntry.c)
 *     AslGuidToString_UStr @ 0x140A53F08 (AslGuidToString_UStr.c)
 *     IopCreateArcNamesDisk @ 0x140B39A64 (IopCreateArcNamesDisk.c)
 *     PipInitComputerIds @ 0x140B3A22C (PipInitComputerIds.c)
 *     IopReassignSystemRoot @ 0x140B6FE8C (IopReassignSystemRoot.c)
 * Callees:
 *     _vsnwprintf @ 0x1403D8B90 (_vsnwprintf.c)
 */

NTSTATUS RtlStringCchPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  size_t v4; // rsi
  NTSTATUS v5; // edi
  int v6; // eax
  va_list Args; // [rsp+78h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  if ( cchDest - 1 > 0x7FFFFFFE )
  {
    v5 = -1073741811;
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    v4 = cchDest - 1;
    v5 = 0;
    v6 = vsnwprintf(pszDest, cchDest - 1, pszFormat, Args);
    if ( v6 < 0 || v6 > v4 )
    {
      v5 = -2147483643;
      goto LABEL_5;
    }
    if ( v6 == v4 )
LABEL_5:
      pszDest[v4] = 0;
  }
  return v5;
}
