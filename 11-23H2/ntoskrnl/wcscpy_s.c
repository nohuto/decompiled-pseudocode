/*
 * XREFs of wcscpy_s @ 0x1403DFD90
 * Callers:
 *     HalGetEnvironmentVariableEx @ 0x14035E920 (HalGetEnvironmentVariableEx.c)
 *     HalSetEnvironmentVariableEx @ 0x140504A60 (HalSetEnvironmentVariableEx.c)
 *     HalpQueryProfileSourceList @ 0x140507CD4 (HalpQueryProfileSourceList.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x14069CE68 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalGetStringForSid @ 0x14069D410 (LocalGetStringForSid.c)
 *     LocalConvertAclToString @ 0x14069D4D0 (LocalConvertAclToString.c)
 *     LocalGetStringForControl @ 0x14069DF74 (LocalGetStringForControl.c)
 *     RtlConvertSidToUnicodeString @ 0x1407FAD40 (RtlConvertSidToUnicodeString.c)
 *     BcdGetSystemStorePath @ 0x14080316C (BcdGetSystemStorePath.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x140806608 (BiConvertNtDeviceToBootEnvironment.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140807998 (BiConvertBootEnvironmentDeviceToNt.c)
 *     NtLockProductActivationKeys @ 0x140838380 (NtLockProductActivationKeys.c)
 *     ExpTranslateEfiPath @ 0x14083E520 (ExpTranslateEfiPath.c)
 *     ExpCreateOutputNT @ 0x14083E7EC (ExpCreateOutputNT.c)
 *     PnprGetPluginDriverImagePath @ 0x140965E38 (PnprGetPluginDriverImagePath.c)
 *     ExpWatchLicenseInfoWork @ 0x1409F85A0 (ExpWatchLicenseInfoWork.c)
 *     ExpConvertArcName @ 0x1409FBA98 (ExpConvertArcName.c)
 *     ExpCreateOutputARC @ 0x1409FBEA0 (ExpCreateOutputARC.c)
 *     ExpCreateOutputSIGNATURE @ 0x1409FC168 (ExpCreateOutputSIGNATURE.c)
 *     ExpFindArcName @ 0x1409FC330 (ExpFindArcName.c)
 *     ExpParseArcPathName @ 0x1409FCD28 (ExpParseArcPathName.c)
 *     CmDeleteKeyRecursive @ 0x140A0FDB8 (CmDeleteKeyRecursive.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140A109C0 (CmpCreateHwProfileFriendlyName.c)
 *     AslPathToNetworkPathNt @ 0x140A55260 (AslPathToNetworkPathNt.c)
 *     BiCreateFileDeviceElement @ 0x140A5CE84 (BiCreateFileDeviceElement.c)
 *     HalpQueryDebuggerInformation @ 0x140AB1F8C (HalpQueryDebuggerInformation.c)
 *     HalpRegisterDeviceInUse @ 0x140AB22D0 (HalpRegisterDeviceInUse.c)
 *     HdlspKernelAddLogEntry @ 0x140AEAA40 (HdlspKernelAddLogEntry.c)
 *     BgpFwLibraryInitialize @ 0x140AEDC78 (BgpFwLibraryInitialize.c)
 *     ExpWatchProductTypeInitialization @ 0x140B67484 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14036E3C0 (xHalTimerWatchdogStop.c)
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
