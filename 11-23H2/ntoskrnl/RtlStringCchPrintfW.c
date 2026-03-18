/*
 * XREFs of RtlStringCchPrintfW @ 0x14022A90C
 * Callers:
 *     RtlpEtcGetDwordFromPersistedState @ 0x140411928 (RtlpEtcGetDwordFromPersistedState.c)
 *     RtlpEtcIsValidFeatureId @ 0x140411A60 (RtlpEtcIsValidFeatureId.c)
 *     CarLiveDumpCallBack @ 0x1405D5BA0 (CarLiveDumpCallBack.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x140673EC0 (DrvDbGetConfigurationSubKeyCallback.c)
 *     IoWMIOpenBlock @ 0x1406C6A20 (IoWMIOpenBlock.c)
 *     AslpFileQueryVersionString @ 0x1406D4564 (AslpFileQueryVersionString.c)
 *     EtwpPsProvTraceProcess @ 0x1407523D0 (EtwpPsProvTraceProcess.c)
 *     IoCreateDevice @ 0x14076AFD0 (IoCreateDevice.c)
 *     RtlpInitNlsSectionName @ 0x1407A227C (RtlpInitNlsSectionName.c)
 *     RtlpInitNlsFileName @ 0x1407A5288 (RtlpInitNlsFileName.c)
 *     MiSessionObjectCreate @ 0x1407A9CEC (MiSessionObjectCreate.c)
 *     IopBootLog @ 0x1407E34CC (IopBootLog.c)
 *     SepValidateReferencedCachedHandles @ 0x1407F4B60 (SepValidateReferencedCachedHandles.c)
 *     IoCreateDriver @ 0x140810200 (IoCreateDriver.c)
 *     PiDrvDbRegisterNode @ 0x14081173C (PiDrvDbRegisterNode.c)
 *     AslGuidToString @ 0x14084E5E4 (AslGuidToString.c)
 *     _SysCtxOpenControlSet @ 0x140855228 (_SysCtxOpenControlSet.c)
 *     PiDrvDbRegisterNodeCallback @ 0x140864F7C (PiDrvDbRegisterNodeCallback.c)
 *     IopCopyBootLogRegistryToFile @ 0x1408655B8 (IopCopyBootLogRegistryToFile.c)
 *     IopCreateArcName @ 0x14086F828 (IopCreateArcName.c)
 *     PipMakeGloballyUniqueId @ 0x140870A20 (PipMakeGloballyUniqueId.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140879C70 (PiDevCfgLogDeviceConfigured.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x14087BC00 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     PiDevCfgResolveVariableExpression @ 0x140960150 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x1409613E0 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x140962460 (PiDevCfgResolveVariableSwitchCase.c)
 *     IopCreateLegacyDeviceIds @ 0x14096C728 (IopCreateLegacyDeviceIds.c)
 *     PspShutdownCsrProcess @ 0x1409AD2A8 (PspShutdownCsrProcess.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1409BCBCC (RtlpGetTokenNamedObjectPath.c)
 *     SepReadAndInsertCaps @ 0x1409D1D0C (SepReadAndInsertCaps.c)
 *     EncloseSubCondition @ 0x1409D2ECC (EncloseSubCondition.c)
 *     GetPrintableOperandValue @ 0x1409D3F6C (GetPrintableOperandValue.c)
 *     LocalpGetStringForCondition @ 0x1409D6474 (LocalpGetStringForCondition.c)
 *     CMFFlushHitsFile @ 0x140A0217C (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x140A02AC0 (CMFSystemThreadRoutine.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x140A4F91C (SdbpCheckMatchingRegistryEntry.c)
 *     AslGuidToString_UStr @ 0x140A53C58 (AslGuidToString_UStr.c)
 *     IopCreateArcNamesDisk @ 0x140B39A64 (IopCreateArcNamesDisk.c)
 *     PipInitComputerIds @ 0x140B3A22C (PipInitComputerIds.c)
 *     IopReassignSystemRoot @ 0x140B6FE8C (IopReassignSystemRoot.c)
 * Callees:
 *     _vsnwprintf @ 0x1403D89B0 (_vsnwprintf.c)
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
