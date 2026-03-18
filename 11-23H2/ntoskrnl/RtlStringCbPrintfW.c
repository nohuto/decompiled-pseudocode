/*
 * XREFs of RtlStringCbPrintfW @ 0x140229604
 * Callers:
 *     RtlQueryImageXfgFilter @ 0x1405A7114 (RtlQueryImageXfgFilter.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1406702CC (AdtpBuildAccessReasonAuditStringInternal.c)
 *     PfSnOpenVolumesForPrefetch @ 0x140686328 (PfSnOpenVolumesForPrefetch.c)
 *     MiDriverLoadSucceeded @ 0x140695BC4 (MiDriverLoadSucceeded.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x1406C0F5C (EtwpGetSecurityDescriptorByGuid.c)
 *     IopGetLegacyVetoListDrivers @ 0x1406C23F4 (IopGetLegacyVetoListDrivers.c)
 *     WmipPrepareWnodeSI @ 0x1406C64E4 (WmipPrepareWnodeSI.c)
 *     WmipInsertStaticNames @ 0x1406C8054 (WmipInsertStaticNames.c)
 *     PfSnGetPrefetchInstructions @ 0x14074D07C (PfSnGetPrefetchInstructions.c)
 *     EtwpRealtimeCreateLogfile @ 0x140772D48 (EtwpRealtimeCreateLogfile.c)
 *     PiBuildDeviceNodeInstancePath @ 0x14078E5E8 (PiBuildDeviceNodeInstancePath.c)
 *     WmipSecurityMethod @ 0x1407BDD80 (WmipSecurityMethod.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x1407C3AE0 (IoWMIDeviceObjectToInstanceName.c)
 *     EtwpGenerateFileName @ 0x1407E92A0 (EtwpGenerateFileName.c)
 *     EtwpCreateNtFileName @ 0x1407F6B7C (EtwpCreateNtFileName.c)
 *     EtwpExpandFileName @ 0x1407F6D80 (EtwpExpandFileName.c)
 *     EtwpEnableAutoLoggerProvider @ 0x1408091D4 (EtwpEnableAutoLoggerProvider.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x140809B30 (EtwpGetAutoLoggerProviderFilter.c)
 *     EtwpEnumerateAutologgerPath @ 0x14083BD48 (EtwpEnumerateAutologgerPath.c)
 *     EtwpGetAutoLoggerEventNameFilter @ 0x14084C8A0 (EtwpGetAutoLoggerEventNameFilter.c)
 *     PpmWmiRegisterInfo @ 0x14084EBE0 (PpmWmiRegisterInfo.c)
 *     EtwpGetAutoLoggerLevelKwFilter @ 0x1408516C4 (EtwpGetAutoLoggerLevelKwFilter.c)
 *     SepSetSystemPaths @ 0x140855CF0 (SepSetSystemPaths.c)
 *     SepReadAndPopulateCapes @ 0x14085D01C (SepReadAndPopulateCapes.c)
 *     CmpCreatePerfKeys @ 0x14085D310 (CmpCreatePerfKeys.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x1408628A8 (EtwpLoadMicroarchitecturalPmcs.c)
 *     PnpUnloadAttachedDriver @ 0x140869734 (PnpUnloadAttachedDriver.c)
 *     ExProcessorCounterSetCallback @ 0x14086DBA0 (ExProcessorCounterSetCallback.c)
 *     PipMakeGloballyUniqueId @ 0x140870A20 (PipMakeGloballyUniqueId.c)
 *     PiNormalizeDeviceText @ 0x140870EB8 (PiNormalizeDeviceText.c)
 *     PipServiceInstanceToDeviceInstance @ 0x140958320 (PipServiceInstanceToDeviceInstance.c)
 *     KiSynchCounterSetCallback @ 0x140973E80 (KiSynchCounterSetCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x140973FA0 (KiSynchNumaCounterSetCallback.c)
 *     PfpSourceGetPrefetchSupport @ 0x14097EE40 (PfpSourceGetPrefetchSupport.c)
 *     PfSnOperationProcess @ 0x14097F840 (PfSnOperationProcess.c)
 *     PopDirectedDripsDiagCreateBlockerEntryBoolean @ 0x14099DED4 (PopDirectedDripsDiagCreateBlockerEntryBoolean.c)
 *     PopDirectedDripsDiagCreateBlockerEntryULong @ 0x14099DF40 (PopDirectedDripsDiagCreateBlockerEntryULong.c)
 *     WmipIncludeStaticNames @ 0x1409E0984 (WmipIncludeStaticNames.c)
 *     EtwpAddMicroarchitecturalPmcToPmcGroup @ 0x1409E2C94 (EtwpAddMicroarchitecturalPmcToPmcGroup.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x1409E2FC4 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpFindMatchingPmcRegistryGroup @ 0x1409E3ED8 (EtwpFindMatchingPmcRegistryGroup.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1409E4318 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1409E4A24 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x140A5AF64 (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     BiGetPhysicalDriveName @ 0x140A5D030 (BiGetPhysicalDriveName.c)
 *     SiGetEfiSystemDevice @ 0x140A5FA40 (SiGetEfiSystemDevice.c)
 *     SiGetEspFromFirmware @ 0x140A5FE34 (SiGetEspFromFirmware.c)
 *     LkmdTelCreateReport @ 0x140A76B24 (LkmdTelCreateReport.c)
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
 *     _vsnwprintf @ 0x1403D89B0 (_vsnwprintf.c)
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
