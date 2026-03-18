/*
 * XREFs of RtlStringCbPrintfW @ 0x140229624
 * Callers:
 *     RtlQueryImageXfgFilter @ 0x1405A71A4 (RtlQueryImageXfgFilter.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14067033C (AdtpBuildAccessReasonAuditStringInternal.c)
 *     PfSnOpenVolumesForPrefetch @ 0x140686328 (PfSnOpenVolumesForPrefetch.c)
 *     MiDriverLoadSucceeded @ 0x140695BC4 (MiDriverLoadSucceeded.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x1406C0FAC (EtwpGetSecurityDescriptorByGuid.c)
 *     IopGetLegacyVetoListDrivers @ 0x1406C2444 (IopGetLegacyVetoListDrivers.c)
 *     WmipPrepareWnodeSI @ 0x1406C6594 (WmipPrepareWnodeSI.c)
 *     WmipInsertStaticNames @ 0x1406C8104 (WmipInsertStaticNames.c)
 *     PfSnGetPrefetchInstructions @ 0x14074D58C (PfSnGetPrefetchInstructions.c)
 *     EtwpRealtimeCreateLogfile @ 0x140773258 (EtwpRealtimeCreateLogfile.c)
 *     PiBuildDeviceNodeInstancePath @ 0x14078EAF8 (PiBuildDeviceNodeInstancePath.c)
 *     WmipSecurityMethod @ 0x1407BE310 (WmipSecurityMethod.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x1407C4070 (IoWMIDeviceObjectToInstanceName.c)
 *     EtwpGenerateFileName @ 0x1407E9820 (EtwpGenerateFileName.c)
 *     EtwpCreateNtFileName @ 0x1407F71EC (EtwpCreateNtFileName.c)
 *     EtwpExpandFileName @ 0x1407F73F0 (EtwpExpandFileName.c)
 *     EtwpEnableAutoLoggerProvider @ 0x14080B754 (EtwpEnableAutoLoggerProvider.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x14080C0B0 (EtwpGetAutoLoggerProviderFilter.c)
 *     EtwpEnumerateAutologgerPath @ 0x14083DAD8 (EtwpEnumerateAutologgerPath.c)
 *     EtwpGetAutoLoggerEventNameFilter @ 0x14084DB00 (EtwpGetAutoLoggerEventNameFilter.c)
 *     PpmWmiRegisterInfo @ 0x14084FA60 (PpmWmiRegisterInfo.c)
 *     EtwpGetAutoLoggerLevelKwFilter @ 0x1408525D4 (EtwpGetAutoLoggerLevelKwFilter.c)
 *     SepSetSystemPaths @ 0x140856C00 (SepSetSystemPaths.c)
 *     SepReadAndPopulateCapes @ 0x14085D47C (SepReadAndPopulateCapes.c)
 *     CmpCreatePerfKeys @ 0x14085D770 (CmpCreatePerfKeys.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x140862AC8 (EtwpLoadMicroarchitecturalPmcs.c)
 *     PnpUnloadAttachedDriver @ 0x140869C04 (PnpUnloadAttachedDriver.c)
 *     ExProcessorCounterSetCallback @ 0x14086E070 (ExProcessorCounterSetCallback.c)
 *     PipMakeGloballyUniqueId @ 0x140870EF0 (PipMakeGloballyUniqueId.c)
 *     PiNormalizeDeviceText @ 0x140871388 (PiNormalizeDeviceText.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1409583D0 (PipServiceInstanceToDeviceInstance.c)
 *     KiSynchCounterSetCallback @ 0x140973F30 (KiSynchCounterSetCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x140974050 (KiSynchNumaCounterSetCallback.c)
 *     PfpSourceGetPrefetchSupport @ 0x14097EEF0 (PfpSourceGetPrefetchSupport.c)
 *     PfSnOperationProcess @ 0x14097F8F0 (PfSnOperationProcess.c)
 *     PopDirectedDripsDiagCreateBlockerEntryBoolean @ 0x14099DF84 (PopDirectedDripsDiagCreateBlockerEntryBoolean.c)
 *     PopDirectedDripsDiagCreateBlockerEntryULong @ 0x14099DFF0 (PopDirectedDripsDiagCreateBlockerEntryULong.c)
 *     WmipIncludeStaticNames @ 0x1409E0A34 (WmipIncludeStaticNames.c)
 *     EtwpAddMicroarchitecturalPmcToPmcGroup @ 0x1409E2D44 (EtwpAddMicroarchitecturalPmcToPmcGroup.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x1409E3074 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpFindMatchingPmcRegistryGroup @ 0x1409E3F88 (EtwpFindMatchingPmcRegistryGroup.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1409E43C8 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1409E4AD4 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x140A5AFD4 (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     BiGetPhysicalDriveName @ 0x140A5D0A0 (BiGetPhysicalDriveName.c)
 *     SiGetEfiSystemDevice @ 0x140A5FAB0 (SiGetEfiSystemDevice.c)
 *     SiGetEspFromFirmware @ 0x140A5FEA4 (SiGetEspFromFirmware.c)
 *     LkmdTelCreateReport @ 0x140A76B94 (LkmdTelCreateReport.c)
 *     VhdInitialize @ 0x140B3F4DC (VhdInitialize.c)
 *     PoFxRegisterDebugger @ 0x140B60C60 (PoFxRegisterDebugger.c)
 *     CreateSystemRootLink @ 0x140B6F884 (CreateSystemRootLink.c)
 *     CimfsInitialize @ 0x140B75330 (CimfsInitialize.c)
 *     MfgInitSystem @ 0x140B76340 (MfgInitSystem.c)
 *     EtwpEnableBootLoggerRegistryProviders @ 0x140B985B4 (EtwpEnableBootLoggerRegistryProviders.c)
 *     VhdiGetVolumeNumber @ 0x140B9BBAC (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x140B9BD30 (VhdiInitializeBootDisk.c)
 *     CimfsInitializeBootDisk @ 0x140B9C180 (CimfsInitializeBootDisk.c)
 *     RamdiskStart @ 0x140B9C590 (RamdiskStart.c)
 * Callees:
 *     _vsnwprintf @ 0x1403D8350 (_vsnwprintf.c)
 */

NTSTATUS RtlStringCbPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  size_t v3; // rdx
  unsigned __int64 v5; // rsi
  NTSTATUS v6; // edi
  int v7; // eax
  va_list Args; // [rsp+78h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  v3 = cbDest >> 1;
  if ( v3 - 1 <= 0x7FFFFFFE )
  {
    v5 = v3 - 1;
    v6 = 0;
    v7 = vsnwprintf(pszDest, v3 - 1, pszFormat, Args);
    if ( v7 >= 0 )
    {
      if ( v7 == v5 )
      {
LABEL_6:
        pszDest[v5] = 0;
        return v6;
      }
      if ( v7 <= v5 )
        return v6;
    }
    v6 = -2147483643;
    goto LABEL_6;
  }
  v6 = -1073741811;
  if ( v3 )
    *pszDest = 0;
  return v6;
}
