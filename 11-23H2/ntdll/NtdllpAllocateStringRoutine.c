/*
 * XREFs of NtdllpAllocateStringRoutine @ 0x180039660
 * Callers:
 *     RtlpQueryRegistryDirect @ 0x1800093C8 (RtlpQueryRegistryDirect.c)
 *     RtlpGetRegistryHandle @ 0x18000AAF8 (RtlpGetRegistryHandle.c)
 *     RtlpGetTokenNamedObjectPath @ 0x18000BBE8 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x18000C574 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlCreateUnicodeString @ 0x18000E9A0 (RtlCreateUnicodeString.c)
 *     AllocateOrValidateUnicodeStringBuffer @ 0x180010048 (AllocateOrValidateUnicodeStringBuffer.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180018890 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpAllocateFileNameBufferIfNeeded @ 0x180018AC4 (LdrpAllocateFileNameBufferIfNeeded.c)
 *     RtlUnicodeStringToAnsiString @ 0x180018B90 (RtlUnicodeStringToAnsiString.c)
 *     RtlGetFullPathName_UstrEx @ 0x180019420 (RtlGetFullPathName_UstrEx.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180019B28 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     RtlDosSearchPath_Ustr @ 0x18001A3D0 (RtlDosSearchPath_Ustr.c)
 *     RtlFormatCurrentUserKeyPath @ 0x18001AB50 (RtlFormatCurrentUserKeyPath.c)
 *     LdrpLoadDependentModuleA @ 0x180024D30 (LdrpLoadDependentModuleA.c)
 *     RtlAnsiStringToUnicodeString @ 0x180024EF0 (RtlAnsiStringToUnicodeString.c)
 *     LdrpLoadDependentModuleInternal @ 0x1800251E0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpAllocateUnicodeString @ 0x18002B200 (LdrpAllocateUnicodeString.c)
 *     LdrpGetFullPath @ 0x18002DDA0 (LdrpGetFullPath.c)
 *     RtlUTF8StringToUnicodeString @ 0x180055750 (RtlUTF8StringToUnicodeString.c)
 *     AllocateOrValidateCharStringBuffer @ 0x180059150 (AllocateOrValidateCharStringBuffer.c)
 *     RtlpEnsureBufferSize @ 0x18006EAF0 (RtlpEnsureBufferSize.c)
 *     RtlStringFromGUIDEx @ 0x18006ECA0 (RtlStringFromGUIDEx.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x1800752A4 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180075864 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180075DB4 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlDuplicateUnicodeString @ 0x18007EA60 (RtlDuplicateUnicodeString.c)
 *     LdrUpdatePackageSearchPath @ 0x180084680 (LdrUpdatePackageSearchPath.c)
 *     RtlpEtcGetDwordFromPersistedState @ 0x18009FFE4 (RtlpEtcGetDwordFromPersistedState.c)
 *     RtlpGetPersistedRegistryLocation @ 0x1800A0204 (RtlpGetPersistedRegistryLocation.c)
 *     RtlComputePrivatizedDllName_U @ 0x1800E1B10 (RtlComputePrivatizedDllName_U.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800EBB44 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlpConstructCrossVmObjectPath @ 0x1801029DC (RtlpConstructCrossVmObjectPath.c)
 *     RtlUnicodeStringToUTF8String @ 0x180110E80 (RtlUnicodeStringToUTF8String.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall NtdllpAllocateStringRoutine(SIZE_T a1)
{
  return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
