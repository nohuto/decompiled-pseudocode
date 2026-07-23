/*
 * XREFs of NtdllpAllocateStringRoutine @ 0x1800397C0
 * Callers:
 *     RtlpQueryRegistryDirect @ 0x1800095E8 (RtlpQueryRegistryDirect.c)
 *     RtlpGetRegistryHandle @ 0x18000AD18 (RtlpGetRegistryHandle.c)
 *     RtlpGetTokenNamedObjectPath @ 0x18000BE08 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x18000C778 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlCreateUnicodeString @ 0x18000EBB0 (RtlCreateUnicodeString.c)
 *     AllocateOrValidateUnicodeStringBuffer @ 0x180010258 (AllocateOrValidateUnicodeStringBuffer.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180018AA0 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpAllocateFileNameBufferIfNeeded @ 0x180018CD4 (LdrpAllocateFileNameBufferIfNeeded.c)
 *     RtlUnicodeStringToAnsiString @ 0x180018DA0 (RtlUnicodeStringToAnsiString.c)
 *     RtlGetFullPathName_UstrEx @ 0x180019630 (RtlGetFullPathName_UstrEx.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180019D38 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     RtlDosSearchPath_Ustr @ 0x18001A5B0 (RtlDosSearchPath_Ustr.c)
 *     RtlFormatCurrentUserKeyPath @ 0x18001AD30 (RtlFormatCurrentUserKeyPath.c)
 *     LdrpLoadDependentModuleA @ 0x180024E80 (LdrpLoadDependentModuleA.c)
 *     RtlAnsiStringToUnicodeString @ 0x180025040 (RtlAnsiStringToUnicodeString.c)
 *     LdrpLoadDependentModuleInternal @ 0x180025330 (LdrpLoadDependentModuleInternal.c)
 *     LdrpAllocateUnicodeString @ 0x18002B3D0 (LdrpAllocateUnicodeString.c)
 *     LdrpGetFullPath @ 0x18002DF70 (LdrpGetFullPath.c)
 *     RtlUTF8StringToUnicodeString @ 0x1800558B0 (RtlUTF8StringToUnicodeString.c)
 *     AllocateOrValidateCharStringBuffer @ 0x180059270 (AllocateOrValidateCharStringBuffer.c)
 *     RtlpEnsureBufferSize @ 0x18006EAF0 (RtlpEnsureBufferSize.c)
 *     RtlStringFromGUIDEx @ 0x18006ECA0 (RtlStringFromGUIDEx.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x180074C34 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x1800751F4 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180075744 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlDuplicateUnicodeString @ 0x18007E3F0 (RtlDuplicateUnicodeString.c)
 *     LdrUpdatePackageSearchPath @ 0x180083E80 (LdrUpdatePackageSearchPath.c)
 *     RtlComputePrivatizedDllName_U @ 0x1800E07E0 (RtlComputePrivatizedDllName_U.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800EA814 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlpConstructCrossVmObjectPath @ 0x1801015CC (RtlpConstructCrossVmObjectPath.c)
 *     RtlUnicodeStringToUTF8String @ 0x18010FA00 (RtlUnicodeStringToUTF8String.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall NtdllpAllocateStringRoutine(SIZE_T a1)
{
  return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
