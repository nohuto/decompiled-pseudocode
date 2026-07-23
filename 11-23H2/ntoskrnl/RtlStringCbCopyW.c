/*
 * XREFs of RtlStringCbCopyW @ 0x14022B114
 * Callers:
 *     RtlpGetNameFromLangInfoNode @ 0x1403A1644 (RtlpGetNameFromLangInfoNode.c)
 *     RtlpAllowsLowBoxAccess @ 0x1403ACF00 (RtlpAllowsLowBoxAccess.c)
 *     PopIdleWakeFinalizeWakeSource @ 0x14059DB98 (PopIdleWakeFinalizeWakeSource.c)
 *     SeSetLearningModeObjectInformation @ 0x1405B893C (SeSetLearningModeObjectInformation.c)
 *     WmipInsertStaticNames @ 0x1406C8084 (WmipInsertStaticNames.c)
 *     PnpAllocatePWSTR @ 0x1406CCC6C (PnpAllocatePWSTR.c)
 *     WmipEnumerateMofResources @ 0x1407D6B00 (WmipEnumerateMofResources.c)
 *     PiDcHandleCustomDeviceEvent @ 0x1407DB16C (PiDcHandleCustomDeviceEvent.c)
 *     PopPowerInformationInternal @ 0x1407ED33C (PopPowerInformationInternal.c)
 *     WmipAddMofResource @ 0x14080EF3C (WmipAddMofResource.c)
 *     PiSwIrpStartCreateWorker @ 0x14081931C (PiSwIrpStartCreateWorker.c)
 *     PiSwCompleteCreate @ 0x140819AB4 (PiSwCompleteCreate.c)
 *     PiSwIrpInterfaceRegister @ 0x14081B064 (PiSwIrpInterfaceRegister.c)
 *     PfSnParametersRead @ 0x140846868 (PfSnParametersRead.c)
 *     WmipGenerateBinaryMofNotification @ 0x14085270C (WmipGenerateBinaryMofNotification.c)
 *     PiSwFindSwDevice @ 0x14086A17C (PiSwFindSwDevice.c)
 *     PipMakeGloballyUniqueId @ 0x140870C60 (PipMakeGloballyUniqueId.c)
 *     DbgkSendSystemDllMessages @ 0x140936FD4 (DbgkSendSystemDllMessages.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x14095B430 (PiDcResetChildDeviceContainerCallback.c)
 *     WmipIncludeStaticNames @ 0x1409E0B84 (WmipIncludeStaticNames.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x1409EA918 (EtwTimLogRedirectionTrustPolicy.c)
 *     ExpressionConvertToString @ 0x140A6EC08 (ExpressionConvertToString.c)
 *     MfgInitSystem @ 0x140B75414 (MfgInitSystem.c)
 *     ViMakeVerifierSettings @ 0x140B972C4 (ViMakeVerifierSettings.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCbCopyW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszSrc)
{
  size_t v3; // rdx
  size_t v4; // r9
  signed __int64 v5; // r10
  wchar_t v6; // ax
  NTSTRSAFE_PWSTR v7; // rax
  NTSTATUS result; // eax

  v3 = cbDest >> 1;
  if ( v3 - 1 > 0x7FFFFFFE )
  {
    result = -1073741811;
    if ( v3 )
      *pszDest = 0;
  }
  else
  {
    v4 = 2147483646 - v3;
    v5 = (char *)pszSrc - (char *)pszDest;
    do
    {
      if ( !(v4 + v3) )
        break;
      v6 = *(NTSTRSAFE_PWSTR)((char *)pszDest + v5);
      if ( !v6 )
        break;
      *pszDest++ = v6;
      --v3;
    }
    while ( v3 );
    v7 = pszDest - 1;
    if ( v3 )
      v7 = pszDest;
    *v7 = 0;
    return v3 == 0 ? 0x80000005 : 0;
  }
  return result;
}
