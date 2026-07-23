/*
 * XREFs of NtdllpAllocateStringRoutine @ 0x180025C10
 * Callers:
 *     RtlComputePrivatizedDllName_U @ 0x180002790 (RtlComputePrivatizedDllName_U.c)
 *     RtlpQueryRegistryDirect @ 0x18000A450 (RtlpQueryRegistryDirect.c)
 *     RtlpGetRegistryHandle @ 0x18000A5F4 (RtlpGetRegistryHandle.c)
 *     LdrpAllocateFileNameBufferIfNeeded @ 0x18000DE78 (LdrpAllocateFileNameBufferIfNeeded.c)
 *     RtlUnicodeStringToAnsiString @ 0x18000DF80 (RtlUnicodeStringToAnsiString.c)
 *     AllocateOrValidateCharStringBuffer @ 0x18000E2C0 (AllocateOrValidateCharStringBuffer.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x18000ED04 (RtlpGetPolicyValueForSystemCapability.c)
 *     AllocateOrValidateUnicodeStringBuffer @ 0x18000F37C (AllocateOrValidateUnicodeStringBuffer.c)
 *     LdrpLoadDependentModuleA @ 0x18003D360 (LdrpLoadDependentModuleA.c)
 *     RtlAnsiStringToUnicodeString @ 0x18003D5E0 (RtlAnsiStringToUnicodeString.c)
 *     LdrpLoadDependentModuleInternal @ 0x18003D8F0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpSnapKernelBaseExtensions @ 0x1800437E8 (LdrpSnapKernelBaseExtensions.c)
 *     RtlGetFullPathName_UstrEx @ 0x180043AB0 (RtlGetFullPathName_UstrEx.c)
 *     RtlDosSearchPath_Ustr @ 0x180043D50 (RtlDosSearchPath_Ustr.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180044FE8 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     RtlFormatCurrentUserKeyPath @ 0x180047DC0 (RtlFormatCurrentUserKeyPath.c)
 *     RtlDuplicateUnicodeString @ 0x18004A560 (RtlDuplicateUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x18004A9D0 (RtlCreateUnicodeString.c)
 *     LdrpAllocateUnicodeString @ 0x18004FAEC (LdrpAllocateUnicodeString.c)
 *     LdrpGetFullPath @ 0x180050F20 (LdrpGetFullPath.c)
 *     RtlUTF8StringToUnicodeString @ 0x18005BE20 (RtlUTF8StringToUnicodeString.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x1800680C0 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x1800684A8 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180068A78 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpEnsureBufferSize @ 0x1800753A0 (RtlpEnsureBufferSize.c)
 *     RtlStringFromGUIDEx @ 0x180075540 (RtlStringFromGUIDEx.c)
 *     RtlpGetTokenNamedObjectPath @ 0x180076B98 (RtlpGetTokenNamedObjectPath.c)
 *     LdrUpdatePackageSearchPath @ 0x18008D5D0 (LdrUpdatePackageSearchPath.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800EB360 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlpConstructCrossVmObjectPath @ 0x1801018CC (RtlpConstructCrossVmObjectPath.c)
 *     RtlUnicodeStringToUTF8String @ 0x18010F860 (RtlUnicodeStringToUTF8String.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall NtdllpAllocateStringRoutine(SIZE_T a1)
{
  return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
