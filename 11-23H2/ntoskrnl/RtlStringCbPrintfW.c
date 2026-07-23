/*
 * XREFs of RtlStringCbPrintfW @ 0x140229714
 * Callers:
 *     RtlQueryImageXfgFilter @ 0x1405A7684 (RtlQueryImageXfgFilter.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14067081C (AdtpBuildAccessReasonAuditStringInternal.c)
 *     PfSnOpenVolumesForPrefetch @ 0x140686328 (PfSnOpenVolumesForPrefetch.c)
 *     MiDriverLoadSucceeded @ 0x140695BC4 (MiDriverLoadSucceeded.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x1406C0F8C (EtwpGetSecurityDescriptorByGuid.c)
 *     IopGetLegacyVetoListDrivers @ 0x1406C2424 (IopGetLegacyVetoListDrivers.c)
 *     WmipPrepareWnodeSI @ 0x1406C6514 (WmipPrepareWnodeSI.c)
 *     WmipInsertStaticNames @ 0x1406C8084 (WmipInsertStaticNames.c)
 *     PfSnGetPrefetchInstructions @ 0x14074D26C (PfSnGetPrefetchInstructions.c)
 *     EtwpRealtimeCreateLogfile @ 0x140772F38 (EtwpRealtimeCreateLogfile.c)
 *     PiBuildDeviceNodeInstancePath @ 0x14078E7D8 (PiBuildDeviceNodeInstancePath.c)
 *     WmipSecurityMethod @ 0x1407BE050 (WmipSecurityMethod.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x1407C3DB0 (IoWMIDeviceObjectToInstanceName.c)
 *     EtwpGenerateFileName @ 0x1407E9570 (EtwpGenerateFileName.c)
 *     EtwpCreateNtFileName @ 0x1407F6E4C (EtwpCreateNtFileName.c)
 *     EtwpExpandFileName @ 0x1407F7050 (EtwpExpandFileName.c)
 *     EtwpEnableAutoLoggerProvider @ 0x1408094A4 (EtwpEnableAutoLoggerProvider.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x140809E00 (EtwpGetAutoLoggerProviderFilter.c)
 *     EtwpEnumerateAutologgerPath @ 0x14083C048 (EtwpEnumerateAutologgerPath.c)
 *     EtwpGetAutoLoggerEventNameFilter @ 0x14084CBA0 (EtwpGetAutoLoggerEventNameFilter.c)
 *     PpmWmiRegisterInfo @ 0x14084EEE0 (PpmWmiRegisterInfo.c)
 *     EtwpGetAutoLoggerLevelKwFilter @ 0x1408519C4 (EtwpGetAutoLoggerLevelKwFilter.c)
 *     SepSetSystemPaths @ 0x140855FF0 (SepSetSystemPaths.c)
 *     SepReadAndPopulateCapes @ 0x14085D25C (SepReadAndPopulateCapes.c)
 *     CmpCreatePerfKeys @ 0x14085D550 (CmpCreatePerfKeys.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x140862AE8 (EtwpLoadMicroarchitecturalPmcs.c)
 *     PnpUnloadAttachedDriver @ 0x140869974 (PnpUnloadAttachedDriver.c)
 *     ExProcessorCounterSetCallback @ 0x14086DDE0 (ExProcessorCounterSetCallback.c)
 *     PipMakeGloballyUniqueId @ 0x140870C60 (PipMakeGloballyUniqueId.c)
 *     PiNormalizeDeviceText @ 0x1408710F8 (PiNormalizeDeviceText.c)
 *     PipServiceInstanceToDeviceInstance @ 0x140958520 (PipServiceInstanceToDeviceInstance.c)
 *     KiSynchCounterSetCallback @ 0x140974080 (KiSynchCounterSetCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x1409741A0 (KiSynchNumaCounterSetCallback.c)
 *     PfpSourceGetPrefetchSupport @ 0x14097F040 (PfpSourceGetPrefetchSupport.c)
 *     PfSnOperationProcess @ 0x14097FA40 (PfSnOperationProcess.c)
 *     PopDirectedDripsDiagCreateBlockerEntryBoolean @ 0x14099E0D4 (PopDirectedDripsDiagCreateBlockerEntryBoolean.c)
 *     PopDirectedDripsDiagCreateBlockerEntryULong @ 0x14099E140 (PopDirectedDripsDiagCreateBlockerEntryULong.c)
 *     WmipIncludeStaticNames @ 0x1409E0B84 (WmipIncludeStaticNames.c)
 *     EtwpAddMicroarchitecturalPmcToPmcGroup @ 0x1409E2F24 (EtwpAddMicroarchitecturalPmcToPmcGroup.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x1409E3254 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpFindMatchingPmcRegistryGroup @ 0x1409E4168 (EtwpFindMatchingPmcRegistryGroup.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1409E45A8 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1409E4CB4 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x140A5B214 (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     BiGetPhysicalDriveName @ 0x140A5D2E0 (BiGetPhysicalDriveName.c)
 *     SiGetEfiSystemDevice @ 0x140A5FCF0 (SiGetEfiSystemDevice.c)
 *     SiGetEspFromFirmware @ 0x140A600E4 (SiGetEspFromFirmware.c)
 *     LkmdTelCreateReport @ 0x140A76DD4 (LkmdTelCreateReport.c)
 *     VhdInitialize @ 0x140B3BDDC (VhdInitialize.c)
 *     PoFxRegisterDebugger @ 0x140B5DC20 (PoFxRegisterDebugger.c)
 *     CreateSystemRootLink @ 0x140B6E898 (CreateSystemRootLink.c)
 *     CimfsInitialize @ 0x140B74594 (CimfsInitialize.c)
 *     MfgInitSystem @ 0x140B75414 (MfgInitSystem.c)
 *     EtwpEnableBootLoggerRegistryProviders @ 0x140B975B4 (EtwpEnableBootLoggerRegistryProviders.c)
 *     VhdiGetVolumeNumber @ 0x140B9ABAC (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x140B9AD30 (VhdiInitializeBootDisk.c)
 *     CimfsInitializeBootDisk @ 0x140B9B180 (CimfsInitializeBootDisk.c)
 *     RamdiskStart @ 0x140B9B590 (RamdiskStart.c)
 * Callees:
 *     _vsnwprintf @ 0x1403D8B90 (_vsnwprintf.c)
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
