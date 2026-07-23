/*
 * XREFs of DbgPrintEx @ 0x180053A30
 * Callers:
 *     RtlFindActivationContextSectionGuid @ 0x18001B5A0 (RtlFindActivationContextSectionGuid.c)
 *     sxsisol_SearchActCtxForDllName @ 0x18001D1D8 (sxsisol_SearchActCtxForDllName.c)
 *     RtlFindActivationContextSectionString @ 0x18001D600 (RtlFindActivationContextSectionString.c)
 *     RtlpFindUnicodeStringInSection @ 0x18001D930 (RtlpFindUnicodeStringInSection.c)
 *     RtlpLocateActivationContextSection @ 0x18001DE20 (RtlpLocateActivationContextSection.c)
 *     RtlpFindActivationContextSection_CheckParameters @ 0x18001DFD0 (RtlpFindActivationContextSection_CheckParameters.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18001F3F8 (LdrpLoadResourceFromAlternativeModule.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180026C30 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlQueryInformationActivationContext @ 0x180033680 (RtlQueryInformationActivationContext.c)
 *     RtlpWaitOnCriticalSection @ 0x1800340F0 (RtlpWaitOnCriticalSection.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x18003668C (TppCallbackCheckThreadAfterCallback.c)
 *     RtlAcquireResourceShared @ 0x18005A9D0 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x18005AAF0 (RtlAcquireResourceExclusive.c)
 *     TpCheckTerminateWorker @ 0x18005E050 (TpCheckTerminateWorker.c)
 *     RtlDeactivateActivationContext @ 0x1800739F0 (RtlDeactivateActivationContext.c)
 *     RtlGetAssemblyStorageRoot @ 0x180074B10 (RtlGetAssemblyStorageRoot.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x180074C34 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x1800751F4 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpInsertAssemblyStorageMapEntry @ 0x180075624 (RtlpInsertAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180075744 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlCreateActivationContext @ 0x180075A10 (RtlCreateActivationContext.c)
 *     RtlpInitializeAssemblyStorageMap @ 0x180075B64 (RtlpInitializeAssemblyStorageMap.c)
 *     RtlpValidateActivationContextData @ 0x180075BE8 (RtlpValidateActivationContextData.c)
 *     RtlpQueryRunLevel @ 0x18007AA38 (RtlpQueryRunLevel.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x18007D270 (RtlQueryActivationContextApplicationSettings.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180083530 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlpQueryInformationActivationContextDetailedInformation @ 0x18008CAF4 (RtlpQueryInformationActivationContextDetailedInformation.c)
 *     RtlpCrackActivationContextStringSectionHeader @ 0x18008CD4C (RtlpCrackActivationContextStringSectionHeader.c)
 *     UninitUser32Proc @ 0x18008E4A0 (UninitUser32Proc.c)
 *     AVrfInitializeVerifier @ 0x1800E3DE4 (AVrfInitializeVerifier.c)
 *     AvrfMiniLoadDll @ 0x1800E5AB8 (AvrfMiniLoadDll.c)
 *     RtlpQueryAssemblyInformationActivationContextDetailedInformation @ 0x1800EA238 (RtlpQueryAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation @ 0x1800EA4C8 (RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800EA814 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3940 (RtlpNotOwnerCriticalSection.c)
 *     RtlAssert @ 0x1800F8BD0 (RtlAssert.c)
 *     RtlReportCriticalFailure @ 0x18010C17C (RtlReportCriticalFailure.c)
 *     RtlUnhandledExceptionFilter2 @ 0x18010D6B0 (RtlUnhandledExceptionFilter2.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x180053AB8 (vDbgPrintExWithPrefixInternal.c)
 */

ULONG DbgPrintEx(ULONG ComponentId, ULONG Level, PCSTR Format, ...)
{
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, Format);
  return vDbgPrintExWithPrefixInternal(&Flags, ComponentId, Level, Format, (__int64 *)va, 1);
}
