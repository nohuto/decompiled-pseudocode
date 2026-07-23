/*
 * XREFs of wcscpy_s @ 0x1403DFF70
 * Callers:
 *     HalGetEnvironmentVariableEx @ 0x14035EAC0 (HalGetEnvironmentVariableEx.c)
 *     HalSetEnvironmentVariableEx @ 0x140504FB0 (HalSetEnvironmentVariableEx.c)
 *     HalpQueryProfileSourceList @ 0x140508224 (HalpQueryProfileSourceList.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x14069CE68 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalGetStringForSid @ 0x14069D410 (LocalGetStringForSid.c)
 *     LocalConvertAclToString @ 0x14069D4D0 (LocalConvertAclToString.c)
 *     LocalGetStringForControl @ 0x14069DF74 (LocalGetStringForControl.c)
 *     RtlConvertSidToUnicodeString @ 0x1407FB010 (RtlConvertSidToUnicodeString.c)
 *     BcdGetSystemStorePath @ 0x14080343C (BcdGetSystemStorePath.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x1408068D8 (BiConvertNtDeviceToBootEnvironment.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140807C68 (BiConvertBootEnvironmentDeviceToNt.c)
 *     NtLockProductActivationKeys @ 0x140838680 (NtLockProductActivationKeys.c)
 *     ExpTranslateEfiPath @ 0x14083E820 (ExpTranslateEfiPath.c)
 *     ExpCreateOutputNT @ 0x14083EAEC (ExpCreateOutputNT.c)
 *     PnprGetPluginDriverImagePath @ 0x140966038 (PnprGetPluginDriverImagePath.c)
 *     ExpWatchLicenseInfoWork @ 0x1409F8830 (ExpWatchLicenseInfoWork.c)
 *     ExpConvertArcName @ 0x1409FBD28 (ExpConvertArcName.c)
 *     ExpCreateOutputARC @ 0x1409FC130 (ExpCreateOutputARC.c)
 *     ExpCreateOutputSIGNATURE @ 0x1409FC3F8 (ExpCreateOutputSIGNATURE.c)
 *     ExpFindArcName @ 0x1409FC5C0 (ExpFindArcName.c)
 *     ExpParseArcPathName @ 0x1409FCFB8 (ExpParseArcPathName.c)
 *     CmDeleteKeyRecursive @ 0x140A10068 (CmDeleteKeyRecursive.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140A10C70 (CmpCreateHwProfileFriendlyName.c)
 *     AslPathToNetworkPathNt @ 0x140A55510 (AslPathToNetworkPathNt.c)
 *     BiCreateFileDeviceElement @ 0x140A5D134 (BiCreateFileDeviceElement.c)
 *     HalpQueryDebuggerInformation @ 0x140AB1F8C (HalpQueryDebuggerInformation.c)
 *     HalpRegisterDeviceInUse @ 0x140AB22D0 (HalpRegisterDeviceInUse.c)
 *     HdlspKernelAddLogEntry @ 0x140AEAA40 (HdlspKernelAddLogEntry.c)
 *     BgpFwLibraryInitialize @ 0x140AEDC78 (BgpFwLibraryInitialize.c)
 *     ExpWatchProductTypeInitialization @ 0x140B67484 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14036E560 (xHalTimerWatchdogStop.c)
 */

errno_t __cdecl wcscpy_s(wchar_t *Dst, rsize_t SizeInWords, const wchar_t *Src)
{
  errno_t v4; // ebx
  signed __int64 v5; // rcx
  wchar_t v6; // ax

  if ( Dst && SizeInWords )
  {
    if ( Src )
    {
      v5 = (char *)Dst - (char *)Src;
      while ( 1 )
      {
        v6 = *Src;
        *(const wchar_t *)((char *)Src + v5) = *Src;
        ++Src;
        if ( !v6 )
          return 0;
        if ( !--SizeInWords )
        {
          v4 = 34;
          goto LABEL_9;
        }
      }
    }
    else
    {
      v4 = 22;
LABEL_9:
      *Dst = 0;
      xHalTimerWatchdogStop();
      return v4;
    }
  }
  else
  {
    xHalTimerWatchdogStop();
    return 22;
  }
}
