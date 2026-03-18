/*
 * XREFs of RtlStringCchPrintfExW @ 0x14022B720
 * Callers:
 *     PopDiagTraceProcessorThrottleDurationPerfTrack @ 0x14059423C (PopDiagTraceProcessorThrottleDurationPerfTrack.c)
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x14059438C (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     _CmGetDeviceSoftwareKeyPath @ 0x1406C9B20 (_CmGetDeviceSoftwareKeyPath.c)
 *     _CmGetDeviceSoftwareKey @ 0x1406C9C2C (_CmGetDeviceSoftwareKey.c)
 *     _PnpGetGenericStoreProperty @ 0x1406CDA00 (_PnpGetGenericStoreProperty.c)
 *     _PnpOpenPropertiesKey @ 0x1406CDC40 (_PnpOpenPropertiesKey.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x1406CDE64 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _CmGetDeviceInstanceKeyPath @ 0x1406CF36C (_CmGetDeviceInstanceKeyPath.c)
 *     _CmGetCommonClassRegKeyPath @ 0x140787CA4 (_CmGetCommonClassRegKeyPath.c)
 *     _PnpStringFromGuid @ 0x140787E54 (_PnpStringFromGuid.c)
 *     _PnpSetPropertyWorker @ 0x140797C44 (_PnpSetPropertyWorker.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x14079AFB0 (_CmGetDeviceContainerRegKeyPath.c)
 *     PiProcessDriverInstance @ 0x1407C1D20 (PiProcessDriverInstance.c)
 *     PiFindDevInstMatch @ 0x1407C1FB4 (PiFindDevInstMatch.c)
 *     _CmGetDeviceHardwareKeyPath @ 0x1407D071C (_CmGetDeviceHardwareKeyPath.c)
 *     _CmGetDeviceLogConfKeyPath @ 0x1407D5758 (_CmGetDeviceLogConfKeyPath.c)
 *     DrvDbCreateDatabaseNode @ 0x1408132C0 (DrvDbCreateDatabaseNode.c)
 *     IoReportDetectedDevice @ 0x140834DD0 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x140835270 (IoReportRootDevice.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x140839FC4 (_PnpGetGenericStorePropertyLocales.c)
 *     _CmGetDeviceControlKeyPath @ 0x14084CBC0 (_CmGetDeviceControlKeyPath.c)
 *     PnpDriverLoadingFailed @ 0x140862C44 (PnpDriverLoadingFailed.c)
 *     _CmBuildDevicePanelId @ 0x140862D28 (_CmBuildDevicePanelId.c)
 *     _PnpDeletePropertyWorker @ 0x14086F63C (_PnpDeletePropertyWorker.c)
 *     PipMakeGloballyUniqueId @ 0x140870A20 (PipMakeGloballyUniqueId.c)
 *     DrvDbBuildDeviceIdDriverInfMatch @ 0x1408779F4 (DrvDbBuildDeviceIdDriverInfMatch.c)
 *     PiRearrangeDeviceInstances @ 0x140882E38 (PiRearrangeDeviceInstances.c)
 *     PipHardwareConfigClearStartOverrideCallback @ 0x140951D40 (PipHardwareConfigClearStartOverrideCallback.c)
 *     PipHardwareConfigClearStartOverrides @ 0x140951E3C (PipHardwareConfigClearStartOverrides.c)
 *     PiCMGenerateDeviceInstance @ 0x140969BBC (PiCMGenerateDeviceInstance.c)
 *     IopCreateLegacyDeviceIds @ 0x14096C728 (IopCreateLegacyDeviceIds.c)
 *     RtlFormatMessageEx @ 0x1409B9A98 (RtlFormatMessageEx.c)
 *     _CmGetDevicePanelRegKeyPath @ 0x140A66700 (_CmGetDevicePanelRegKeyPath.c)
 *     PipInitComputerIds @ 0x140B3A22C (PipInitComputerIds.c)
 *     IopInitializeBootDrivers @ 0x140B3CEB4 (IopInitializeBootDrivers.c)
 * Callees:
 *     RtlStringExHandleFillBehindNullW @ 0x1403B3590 (RtlStringExHandleFillBehindNullW.c)
 *     _vsnwprintf @ 0x1403D89B0 (_vsnwprintf.c)
 *     StringExHandleOtherFlagsW @ 0x14055F7D8 (StringExHandleOtherFlagsW.c)
 */

NTSTATUS RtlStringCchPrintfExW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        NTSTRSAFE_PWSTR *ppszDestEnd,
        size_t *pcchRemaining,
        ULONG dwFlags,
        NTSTRSAFE_PCWSTR pszFormat,
        ...)
{
  NTSTATUS v9; // edx
  size_t v10; // rbx
  NTSTRSAFE_PWSTR v11; // rbp
  const wchar_t *v12; // r8
  NTSTATUS v13; // r14d
  size_t v14; // rsi
  int v15; // eax
  NTSTATUS result; // eax
  STRSAFE_LPWSTR ppszDestEnda; // [rsp+30h] [rbp-58h] BYREF
  size_t v18[2]; // [rsp+38h] [rbp-50h] BYREF
  va_list Args; // [rsp+C0h] [rbp+38h] BYREF

  va_start(Args, pszFormat);
  v9 = 0;
  if ( (dwFlags & 0x100) == 0 )
  {
    if ( cchDest - 1 <= 0x7FFFFFFE )
      goto LABEL_3;
    goto LABEL_22;
  }
  if ( !pszDest && cchDest || cchDest > 0x7FFFFFFF )
LABEL_22:
    v9 = -1073741811;
LABEL_3:
  if ( v9 >= 0 )
  {
    v10 = cchDest;
    v11 = pszDest;
    v18[0] = cchDest;
    ppszDestEnda = pszDest;
    if ( (dwFlags & 0x100) != 0 )
    {
      v12 = (const wchar_t *)&cchOriginalDestLength;
      if ( pszFormat )
        v12 = pszFormat;
    }
    else
    {
      v12 = pszFormat;
    }
    v13 = 0;
    if ( (dwFlags & 0xFFFFE000) != 0 )
    {
      v13 = -1073741811;
      if ( cchDest )
        *pszDest = 0;
    }
    else if ( cchDest )
    {
      v18[0] = 0LL;
      v14 = cchDest - 1;
      v15 = vsnwprintf(pszDest, cchDest - 1, v12, Args);
      if ( v15 >= 0 )
      {
        if ( v15 == v14 )
        {
          v11 = &pszDest[v14];
          *v11 = 0;
          v10 = 1LL;
          goto LABEL_12;
        }
        if ( v15 <= v14 )
        {
          v10 = cchDest - v15;
          v11 = &pszDest[v15];
LABEL_12:
          if ( (dwFlags & 0x200) != 0 && v10 > 1 )
            RtlStringExHandleFillBehindNullW(v11, 2 * v10, dwFlags);
          goto LABEL_13;
        }
      }
      v11 = &pszDest[v14];
      v10 = 1LL;
      *v11 = 0;
      v18[0] = 1LL;
      v13 = -2147483643;
      ppszDestEnda = v11;
    }
    else
    {
      if ( !*v12 )
      {
LABEL_13:
        if ( ppszDestEnd )
          *ppszDestEnd = v11;
        result = v13;
        if ( pcchRemaining )
          *pcchRemaining = v10;
        return result;
      }
      v13 = -2147483643;
      if ( !pszDest )
        v13 = -1073741811;
    }
    if ( (dwFlags & 0x1C00) != 0 && cchDest )
    {
      StringExHandleOtherFlagsW(pszDest, 2 * cchDest, (size_t)v12, &ppszDestEnda, v18, dwFlags);
      v11 = ppszDestEnda;
      v10 = v18[0];
    }
    if ( (int)(v13 + 0x80000000) >= 0 && v13 != -2147483643 )
      return v13;
    goto LABEL_13;
  }
  result = v9;
  if ( cchDest )
    *pszDest = 0;
  return result;
}
