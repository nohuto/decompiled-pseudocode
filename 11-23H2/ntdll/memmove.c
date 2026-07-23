/*
 * XREFs of memmove @ 0x1800A7A40
 * Callers:
 *     LdrpProtectedCopyMemory @ 0x1800012B0 (LdrpProtectedCopyMemory.c)
 *     EtwpTrackBinaryForSession @ 0x180002278 (EtwpTrackBinaryForSession.c)
 *     RtlpMergeSecurityAttributeInformation @ 0x1800028B0 (RtlpMergeSecurityAttributeInformation.c)
 *     EtwpAddBinaryInfoEvents @ 0x180002A80 (EtwpAddBinaryInfoEvents.c)
 *     EtwpAddEventToBuffer @ 0x180002BE0 (EtwpAddEventToBuffer.c)
 *     RtlQueryAtomInAtomTable @ 0x180003390 (RtlQueryAtomInAtomTable.c)
 *     RtlAddAtomToAtomTableEx @ 0x18000375C (RtlAddAtomToAtomTableEx.c)
 *     LdrpHandleTlsData @ 0x180004568 (LdrpHandleTlsData.c)
 *     LdrpAcquireTlsIndex @ 0x180004BCC (LdrpAcquireTlsIndex.c)
 *     LdrResSearchResource @ 0x180005220 (LdrResSearchResource.c)
 *     LdrpResSearchResourceMappedFile @ 0x180005938 (LdrpResSearchResourceMappedFile.c)
 *     LdrpGetDataModulePath @ 0x180008850 (LdrpGetDataModulePath.c)
 *     RtlpCallQueryRegistryRoutine @ 0x180009040 (RtlpCallQueryRegistryRoutine.c)
 *     RtlpQueryRegistryDirect @ 0x1800093C8 (RtlpQueryRegistryDirect.c)
 *     RtlGetFileMUIPath @ 0x180009560 (RtlGetFileMUIPath.c)
 *     RtlpGetMUIRedirectedFilePathInternal @ 0x18000ADC8 (RtlpGetMUIRedirectedFilePathInternal.c)
 *     RtlAppendUnicodeToString @ 0x18000B3D0 (RtlAppendUnicodeToString.c)
 *     RtlGetPersistedStateLocation @ 0x18000B480 (RtlGetPersistedStateLocation.c)
 *     LdrpQueryValueKey @ 0x18000BAC0 (LdrpQueryValueKey.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x18000C574 (RtlpGetPolicyValueForSystemCapability.c)
 *     SHA256Update @ 0x18000C760 (SHA256Update.c)
 *     RtlpNameprepAsciiRealWorker @ 0x18000D648 (RtlpNameprepAsciiRealWorker.c)
 *     RtlIpv6StringToAddressW @ 0x18000DF70 (RtlIpv6StringToAddressW.c)
 *     RtlpIdnToUnicodeWorker @ 0x18000E460 (RtlpIdnToUnicodeWorker.c)
 *     RtlCreateUnicodeString @ 0x18000E9A0 (RtlCreateUnicodeString.c)
 *     A_SHAUpdate @ 0x18000ECD0 (A_SHAUpdate.c)
 *     RtlpMuiRegDupLanguageList @ 0x180011AA8 (RtlpMuiRegDupLanguageList.c)
 *     RtlpMuiRegTryToAppendLangId @ 0x180012620 (RtlpMuiRegTryToAppendLangId.c)
 *     RtlpMuiRegTryToAppendLanguageName @ 0x180012740 (RtlpMuiRegTryToAppendLanguageName.c)
 *     RtlpCombineAcls @ 0x180012E6C (RtlpCombineAcls.c)
 *     RtlSetEnvironmentVar @ 0x180014C10 (RtlSetEnvironmentVar.c)
 *     RtlpInitUnicodeStringUsingBuffer @ 0x180015F30 (RtlpInitUnicodeStringUsingBuffer.c)
 *     RtlCultureNameToLCID @ 0x180016540 (RtlCultureNameToLCID.c)
 *     RtlpMuiRegGetOrAddStringToPool @ 0x180016694 (RtlpMuiRegGetOrAddStringToPool.c)
 *     RtlpCopyEffectiveAce @ 0x1800167DC (RtlpCopyEffectiveAce.c)
 *     RtlpNewSecurityObject @ 0x180016C00 (RtlpNewSecurityObject.c)
 *     RtlpInheritAcl2 @ 0x180018114 (RtlpInheritAcl2.c)
 *     LdrpAllocateFileNameBufferIfNeeded @ 0x180018AC4 (LdrpAllocateFileNameBufferIfNeeded.c)
 *     RtlAppendUnicodeStringToString @ 0x1800192F0 (RtlAppendUnicodeStringToString.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180019B28 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     RtlpGenerateInheritedAce @ 0x18001A100 (RtlpGenerateInheritedAce.c)
 *     RtlDosSearchPath_Ustr @ 0x18001A3D0 (RtlDosSearchPath_Ustr.c)
 *     RtlpAddKnownAce @ 0x18001AA04 (RtlpAddKnownAce.c)
 *     RtlFormatCurrentUserKeyPath @ 0x18001AB50 (RtlFormatCurrentUserKeyPath.c)
 *     RtlConvertSidToUnicodeString @ 0x18001AD70 (RtlConvertSidToUnicodeString.c)
 *     RtlIntegerToUnicode @ 0x18001AF90 (RtlIntegerToUnicode.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18001BBE0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     sxsisol_SearchActCtxForDllName @ 0x18001CFF8 (sxsisol_SearchActCtxForDllName.c)
 *     RtlQueryEnvironmentVariable @ 0x18001EB90 (RtlQueryEnvironmentVariable.c)
 *     LdrGetProcedureAddressForCaller @ 0x180021FB0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpLoadDependentModuleA @ 0x180024D30 (LdrpLoadDependentModuleA.c)
 *     LdrpLoadDependentModuleInternal @ 0x1800251E0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpAllocateTls @ 0x1800295AC (LdrpAllocateTls.c)
 *     LdrpResolveDllName @ 0x18002A874 (LdrpResolveDllName.c)
 *     RtlpInsertInvertedFunctionTableEntry @ 0x18002C284 (RtlpInsertInvertedFunctionTableEntry.c)
 *     RtlCopyUnicodeString @ 0x18002D690 (RtlCopyUnicodeString.c)
 *     LdrpAllocatePlaceHolder @ 0x18002E360 (LdrpAllocatePlaceHolder.c)
 *     LdrpSendPostSnapNotifications @ 0x18002ED90 (LdrpSendPostSnapNotifications.c)
 *     EtwpEventApiCallback @ 0x180030844 (EtwpEventApiCallback.c)
 *     TppPrepareDirectParams @ 0x1800366DC (TppPrepareDirectParams.c)
 *     RtlpReAllocateHeap @ 0x180042490 (RtlpReAllocateHeap.c)
 *     RtlpHpSegReAlloc @ 0x180043810 (RtlpHpSegReAlloc.c)
 *     RtlpAddHeapToUnprotectedList @ 0x180048D7C (RtlpAddHeapToUnprotectedList.c)
 *     RtlpAddHeapToProtectedList @ 0x18004988C (RtlpAddHeapToProtectedList.c)
 *     RtlpExtendFrontEndUsageArray @ 0x18004A488 (RtlpExtendFrontEndUsageArray.c)
 *     RtlpHpVaMgrRangeCreate @ 0x18004AF3C (RtlpHpVaMgrRangeCreate.c)
 *     CsrpConnectToServer @ 0x18004B0BC (CsrpConnectToServer.c)
 *     RtlIpv6AddressToStringExW @ 0x180052DC0 (RtlIpv6AddressToStringExW.c)
 *     vDbgPrintExWithPrefixInternal @ 0x180053958 (vDbgPrintExWithPrefixInternal.c)
 *     RtlFormatMessageEx @ 0x180053BC0 (RtlFormatMessageEx.c)
 *     RtlpCopyXStateChunk @ 0x180054FA0 (RtlpCopyXStateChunk.c)
 *     RtlCreateProcessParametersInternal @ 0x180057E10 (RtlCreateProcessParametersInternal.c)
 *     RtlpCopyProcString @ 0x180058320 (RtlpCopyProcString.c)
 *     RtlCreateEnvironmentEx @ 0x180058420 (RtlCreateEnvironmentEx.c)
 *     RtlpInitEnvironmentBlock @ 0x18005860C (RtlpInitEnvironmentBlock.c)
 *     RtlpScanEnvironment @ 0x180058770 (RtlpScanEnvironment.c)
 *     EtwpWriteToPrivateBuffers @ 0x18005A0D4 (EtwpWriteToPrivateBuffers.c)
 *     EtwpAddReloggedHeaderExtensionEvents @ 0x18005B9AC (EtwpAddReloggedHeaderExtensionEvents.c)
 *     RtlInitializeResource @ 0x18005C9D0 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x18005CB50 (RtlpAddDebugInfoToCriticalSection.c)
 *     EtwpAddLogHeaderToLogFile @ 0x18005D0A4 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpQueryRegString @ 0x18005DA34 (EtwpQueryRegString.c)
 *     MD5Update @ 0x180061DE0 (MD5Update.c)
 *     RtlInsertElementGenericTableFull @ 0x180062C00 (RtlInsertElementGenericTableFull.c)
 *     RtlCopySid @ 0x1800691F0 (RtlCopySid.c)
 *     RtlpComputePath @ 0x18006A470 (RtlpComputePath.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x18006AE20 (RtlInsertElementGenericTableFullAvl.c)
 *     TpCallbackSendAlpcMessageOnCompletion @ 0x18006B3B0 (TpCallbackSendAlpcMessageOnCompletion.c)
 *     LdrpRecordUnloadEvent @ 0x18006BB6C (LdrpRecordUnloadEvent.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x18006C380 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x18006C714 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlCopySecurityDescriptor @ 0x18006CBA0 (RtlCopySecurityDescriptor.c)
 *     RtlSelfRelativeToAbsoluteSD @ 0x18006CC60 (RtlSelfRelativeToAbsoluteSD.c)
 *     RtlMakeSelfRelativeSD @ 0x18006CE40 (RtlMakeSelfRelativeSD.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18006E06C (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlMultiAppendUnicodeStringBuffer @ 0x18006E9E0 (RtlMultiAppendUnicodeStringBuffer.c)
 *     RtlpEnsureBufferSize @ 0x18006EAF0 (RtlpEnsureBufferSize.c)
 *     RtlpCopyAces @ 0x18006EEF4 (RtlpCopyAces.c)
 *     RtlIntegerToChar @ 0x18006F990 (RtlIntegerToChar.c)
 *     LdrAddLoadAsDataTable @ 0x180070A50 (LdrAddLoadAsDataTable.c)
 *     SaferpIsDllAllowed @ 0x180073B64 (SaferpIsDllAllowed.c)
 *     RtlxRemoveInvertedFunctionTable @ 0x180073D54 (RtlxRemoveInvertedFunctionTable.c)
 *     CsrCaptureMessageBuffer @ 0x180074A40 (CsrCaptureMessageBuffer.c)
 *     CsrpClientConnectToServer @ 0x180074A9C (CsrpClientConnectToServer.c)
 *     CsrCaptureMessageString @ 0x180074C60 (CsrCaptureMessageString.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x1800752A4 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180075864 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpInsertAssemblyStorageMapEntry @ 0x180075C94 (RtlpInsertAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180075DB4 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlConvertDeviceFamilyInfoToString @ 0x180078610 (RtlConvertDeviceFamilyInfoToString.c)
 *     LdrAddDllDirectory @ 0x180078AB0 (LdrAddDllDirectory.c)
 *     RtlDosSearchPath_U @ 0x1800790A0 (RtlDosSearchPath_U.c)
 *     RtlpSetSecurityObject @ 0x18007A4E8 (RtlpSetSecurityObject.c)
 *     RtlpQueryInformationActivationContextCompatibilityInformation @ 0x18007B198 (RtlpQueryInformationActivationContextCompatibilityInformation.c)
 *     RtlIpv4AddressToStringExW @ 0x18007B490 (RtlIpv4AddressToStringExW.c)
 *     RtlGetCurrentDirectory_U @ 0x18007BD30 (RtlGetCurrentDirectory_U.c)
 *     RtlpCreateNewDirectoryReference @ 0x18007BF90 (RtlpCreateNewDirectoryReference.c)
 *     GetImageTuple @ 0x18007CD88 (GetImageTuple.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x18007D8E0 (RtlQueryActivationContextApplicationSettings.c)
 *     RtlQueryImageFileKeyOption @ 0x18007DF70 (RtlQueryImageFileKeyOption.c)
 *     RtlDuplicateUnicodeString @ 0x18007EA60 (RtlDuplicateUnicodeString.c)
 *     RtlpInitParameterBlock @ 0x1800805C0 (RtlpInitParameterBlock.c)
 *     RtlpNtQueryValueKey @ 0x180080710 (RtlpNtQueryValueKey.c)
 *     RtlAddAttributeActionToRXact @ 0x180080D70 (RtlAddAttributeActionToRXact.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x180081474 (LdrpLogDeprecatedDllEtwEvent.c)
 *     RtlSetProtectedPolicy @ 0x180082ED0 (RtlSetProtectedPolicy.c)
 *     RtlIpv4AddressToStringExA @ 0x1800832D0 (RtlIpv4AddressToStringExA.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180083BA0 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlAddSIDToBoundaryDescriptorEx @ 0x180084160 (RtlAddSIDToBoundaryDescriptorEx.c)
 *     RtlIpv6StringToAddressA @ 0x180084310 (RtlIpv6StringToAddressA.c)
 *     LdrUpdatePackageSearchPath @ 0x180084680 (LdrUpdatePackageSearchPath.c)
 *     RtlpNtEnumerateSubKey @ 0x180084EE0 (RtlpNtEnumerateSubKey.c)
 *     RtlCreateBoundaryDescriptor @ 0x180085E70 (RtlCreateBoundaryDescriptor.c)
 *     RtlReplaceSystemDirectoryInPath @ 0x180086740 (RtlReplaceSystemDirectoryInPath.c)
 *     RtlpCopyMappedMemoryEx @ 0x180086950 (RtlpCopyMappedMemoryEx.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x180088618 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     RtlCopyString @ 0x180088B30 (RtlCopyString.c)
 *     RtlConnectToSm @ 0x180088F60 (RtlConnectToSm.c)
 *     RtlSelfRelativeToAbsoluteSD2 @ 0x18008A1A0 (RtlSelfRelativeToAbsoluteSD2.c)
 *     RtlIpv6AddressToStringExA @ 0x18008AAB0 (RtlIpv6AddressToStringExA.c)
 *     LdrpLogFatalLdrEtwEvent @ 0x18008AD5C (LdrpLogFatalLdrEtwEvent.c)
 *     RtlpCheckDeviceName @ 0x18008C1FC (RtlpCheckDeviceName.c)
 *     RtlpQueryInformationActivationContextDetailedInformation @ 0x18008D2F4 (RtlpQueryInformationActivationContextDetailedInformation.c)
 *     RtlQueryRegistryValueWithFallback @ 0x18008DF90 (RtlQueryRegistryValueWithFallback.c)
 *     RtlpHpLargeReAlloc @ 0x18008E80C (RtlpHpLargeReAlloc.c)
 *     RtlpHpReallocMove @ 0x18008E8AC (RtlpHpReallocMove.c)
 *     LdrpSpecialCacheTypeHandle @ 0x18008E9FC (LdrpSpecialCacheTypeHandle.c)
 *     EtwpTraceUmMessage @ 0x18008EA64 (EtwpTraceUmMessage.c)
 *     RtlInitializeNtUserPfn @ 0x18008ECE0 (RtlInitializeNtUserPfn.c)
 *     RaiseException @ 0x180097C10 (RaiseException.c)
 *     memcpy_s @ 0x18009A920 (memcpy_s.c)
 *     memmove_s @ 0x18009A9C0 (memmove_s.c)
 *     ReadString_1 @ 0x18009D818 (ReadString_1.c)
 *     __ft_array_insert @ 0x18009FA9C (__ft_array_insert.c)
 *     RtlpFcQueryAllInternalFeatureConfigurationsFromBuffers @ 0x1800A065C (RtlpFcQueryAllInternalFeatureConfigurationsFromBuffers.c)
 *     LdrpLogNewDllLoadInternal @ 0x1800AF46E (LdrpLogNewDllLoadInternal.c)
 *     RtlpSaveX87State @ 0x1800B0D1C (RtlpSaveX87State.c)
 *     QueryRegistryValue @ 0x1800B2300 (QueryRegistryValue.c)
 *     RtlNtPathNameToDosPathName @ 0x1800D6DC0 (RtlNtPathNameToDosPathName.c)
 *     LdrpLoadEnclaveModule @ 0x1800D8B60 (LdrpLoadEnclaveModule.c)
 *     RtlSetEnvironmentStrings @ 0x1800D8D40 (RtlSetEnvironmentStrings.c)
 *     RtlpQueryEnvironmentHashTable @ 0x1800D8FB4 (RtlpQueryEnvironmentHashTable.c)
 *     LdrpQueryCurrentPatch @ 0x1800D9F80 (LdrpQueryCurrentPatch.c)
 *     LdrpCorFixupImage @ 0x1800DA178 (LdrpCorFixupImage.c)
 *     LdrpLogDllRelocationEtwEvent @ 0x1800DAFCC (LdrpLogDllRelocationEtwEvent.c)
 *     LdrpAddRedirectedFunction @ 0x1800E09C4 (LdrpAddRedirectedFunction.c)
 *     RtlComputePrivatizedDllName_U @ 0x1800E1B10 (RtlComputePrivatizedDllName_U.c)
 *     RtlQuerySecurityObject @ 0x1800E3220 (RtlQuerySecurityObject.c)
 *     RtlQueryProcessBackTraceInformation @ 0x1800E3510 (RtlQueryProcessBackTraceInformation.c)
 *     RtlQueryProcessHeapInformation @ 0x1800E36A0 (RtlQueryProcessHeapInformation.c)
 *     RtlSetProcessDebugInformation @ 0x1800E3ED0 (RtlSetProcessDebugInformation.c)
 *     RtlpCopyRemoteDebugInformation @ 0x1800E40C0 (RtlpCopyRemoteDebugInformation.c)
 *     AVrfInitializeVerifier @ 0x1800E5114 (AVrfInitializeVerifier.c)
 *     ReportExceptionInternal @ 0x1800E7F08 (ReportExceptionInternal.c)
 *     RtlpAddSystemPath @ 0x1800EA9A0 (RtlpAddSystemPath.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x1800EAEEC (sxsisol_ExpandEnvironmentStrings_UEx.c)
 *     sxsisol_RespectDotLocal @ 0x1800EB0B0 (sxsisol_RespectDotLocal.c)
 *     RtlpQueryAssemblyInformationActivationContextDetailedInformation @ 0x1800EB568 (RtlpQueryAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation @ 0x1800EB7F8 (RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800EBB44 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800ECC7C (LdrpCnvrtShortToLongFileName.c)
 *     LdrpTraceLoadMUIDll @ 0x1800ED41C (LdrpTraceLoadMUIDll.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800ED7A0 (RtlQueryImageMitigationPolicy.c)
 *     RtlSetImageMitigationPolicy @ 0x1800EE2C0 (RtlSetImageMitigationPolicy.c)
 *     RtlpQueryEafPlusModuleList @ 0x1800EF7F0 (RtlpQueryEafPlusModuleList.c)
 *     LdrpResSearchResourceHandle @ 0x1800F0924 (LdrpResSearchResourceHandle.c)
 *     RtlNormalizeSecurityDescriptor @ 0x1800F27D0 (RtlNormalizeSecurityDescriptor.c)
 *     RtlReplaceSidInSd @ 0x1800F2AB0 (RtlReplaceSidInSd.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800F3290 (RtlpConvertAclToAutoInherit.c)
 *     RtlpConvertToAutoInheritSecurityObject @ 0x1800F3B14 (RtlpConvertToAutoInheritSecurityObject.c)
 *     RtlpCreateServerAcl @ 0x1800F4038 (RtlpCreateServerAcl.c)
 *     RtlpFilterSacl @ 0x1800F42C8 (RtlpFilterSacl.c)
 *     RtlpNormalizeAcl @ 0x1800F45D0 (RtlpNormalizeAcl.c)
 *     RtlAddAccessFilterAce @ 0x1800F5200 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800F55F0 (RtlAddResourceAttributeAce.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1800F5DB0 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpConvertRelativeToAbsoluteSecurityAttribute @ 0x1800F6120 (RtlpConvertRelativeToAbsoluteSecurityAttribute.c)
 *     RtlAppendAsciizToString @ 0x1800F7530 (RtlAppendAsciizToString.c)
 *     RtlAppendStringToString @ 0x1800F75A0 (RtlAppendStringToString.c)
 *     RtlCopyBitMap @ 0x1800F7940 (RtlCopyBitMap.c)
 *     RtlExtractBitMap @ 0x1800F7B50 (RtlExtractBitMap.c)
 *     RtlpCopyBitMapTailToHead @ 0x1800F9E24 (RtlpCopyBitMapTailToHead.c)
 *     RtlLargeIntegerToChar @ 0x1800FA3C0 (RtlLargeIntegerToChar.c)
 *     RtlLargeIntegerToUnicode @ 0x1800FA520 (RtlLargeIntegerToUnicode.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x1800FAD90 (RtlpGetBootStatusPathFromRegistry.c)
 *     RtlpQueryTimeZoneKeyNameRoutine @ 0x1800FB1B0 (RtlpQueryTimeZoneKeyNameRoutine.c)
 *     RtlpAddLanguagesToMultiSZ @ 0x1800FB8C8 (RtlpAddLanguagesToMultiSZ.c)
 *     RtlpCleanupRegistryKeys @ 0x1800FBD00 (RtlpCleanupRegistryKeys.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1800FC400 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpMUIEnumerateFolder @ 0x1800FCA58 (RtlpMUIEnumerateFolder.c)
 *     RtlpSetPreferredUILanguages @ 0x1800FD570 (RtlpSetPreferredUILanguages.c)
 *     RtlpExtendedHeapInformationGenerator @ 0x1800FFDB0 (RtlpExtendedHeapInformationGenerator.c)
 *     RtlpExtendedHeapInformationWorkerCallback @ 0x1801000E0 (RtlpExtendedHeapInformationWorkerCallback.c)
 *     RtlpHpRemoteStackSerializeWriter @ 0x180100DC0 (RtlpHpRemoteStackSerializeWriter.c)
 *     RtlCompareExchangePropertyStore @ 0x180102220 (RtlCompareExchangePropertyStore.c)
 *     RtlRemovePropertyStore @ 0x180102680 (RtlRemovePropertyStore.c)
 *     RtlpPushPageDescriptor @ 0x180104B68 (RtlpPushPageDescriptor.c)
 *     RtlpValidateHeapHeaders @ 0x180108404 (RtlpValidateHeapHeaders.c)
 *     RtlWriteNonVolatileMemory @ 0x18010A0E0 (RtlWriteNonVolatileMemory.c)
 *     RtlGenerate8dot3Name @ 0x18010A2F0 (RtlGenerate8dot3Name.c)
 *     RtlpGetUserLocaleName @ 0x18010B154 (RtlpGetUserLocaleName.c)
 *     RtlpHeapTrkReportResult @ 0x18010CA40 (RtlpHeapTrkReportResult.c)
 *     RtlpHeapTrkTrackStack @ 0x18010CEAC (RtlpHeapTrkTrackStack.c)
 *     RtlRemoteCall @ 0x18010D2F0 (RtlRemoteCall.c)
 *     RtlpStdLogCapturedStackTrace @ 0x18010FBB4 (RtlpStdLogCapturedStackTrace.c)
 *     RtlSetFeatureConfigurations @ 0x18010FDA0 (RtlSetFeatureConfigurations.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x180110C0C (RtlpTraceDatabaseInternalAdd.c)
 *     RtlpMuiRegDupLanguageConfigList @ 0x180112A78 (RtlpMuiRegDupLanguageConfigList.c)
 *     RtlpMuiRegLoadLicInformation @ 0x18011385C (RtlpMuiRegLoadLicInformation.c)
 *     RtlpMuiRegResizeStringPool @ 0x1801141D4 (RtlpMuiRegResizeStringPool.c)
 *     RtlpHpStackTraceEventWriter @ 0x1801176C0 (RtlpHpStackTraceEventWriter.c)
 *     RtlpRegisterStackTrace @ 0x180119350 (RtlpRegisterStackTrace.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x180119954 (RtlpHpTagQueryHeapsRemote.c)
 *     LZNT1CompressChunk @ 0x18011B17C (LZNT1CompressChunk.c)
 *     RtlDecompressBufferLZNT1 @ 0x18011B760 (RtlDecompressBufferLZNT1.c)
 *     RtlDecompressFragmentLZNT1 @ 0x18011B900 (RtlDecompressFragmentLZNT1.c)
 *     Xp10BitCopy @ 0x18011BEA4 (Xp10BitCopy.c)
 *     Xp10ScatteredCopy @ 0x18011FE9C (Xp10ScatteredCopy.c)
 *     Xp10ScatteredReadBytes @ 0x1801201FC (Xp10ScatteredReadBytes.c)
 *     MD4Update @ 0x180124C30 (MD4Update.c)
 *     EtwTraceEventInstance @ 0x1801251E0 (EtwTraceEventInstance.c)
 *     EtwpRelogEvent @ 0x1801259C4 (EtwpRelogEvent.c)
 *     EtwpTraceUmEvent @ 0x180125BB4 (EtwpTraceUmEvent.c)
 *     EtwpTrackDebugIdForSession @ 0x1801264F4 (EtwpTrackDebugIdForSession.c)
 *     EtwpWriteBufferCompressed @ 0x1801266CC (EtwpWriteBufferCompressed.c)
 *     TpSetDefaultPoolCpuSets @ 0x180126AE8 (TpSetDefaultPoolCpuSets.c)
 *     PsspCaptureAuxiliaryPages @ 0x180129B98 (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureVaSpaceInformation2 @ 0x18012A024 (PsspCaptureVaSpaceInformation2.c)
 *     PsspHandleDumper @ 0x18012ABD0 (PsspHandleDumper.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x18012E188 (RtlpStackDbSegmentFindOrCreate.c)
 *     RtlpFcQueryAllFeatureUsageSubscriptionNotificationsFromBufferSet @ 0x180130008 (RtlpFcQueryAllFeatureUsageSubscriptionNotificationsFromBufferSet.c)
 * Callees:
 *     <none>
 */

void *__cdecl memmove(void *a1, const void *Src, size_t Size)
{
  void *result; // rax
  __int64 v4; // r11
  __int64 v5; // rdx
  __int128 v6; // xmm1
  bool v7; // cf
  signed __int64 v8; // rdx
  char v9; // r11
  _BYTE *v10; // rcx
  char v11; // r11
  char *v12; // r11
  signed __int64 v13; // rdx
  __m128 v14; // xmm0
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  __m128 v17; // xmm1
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r9
  __int128 v20; // xmm1
  __int128 v21; // xmm2
  __int128 v22; // xmm3
  __m128 v23; // xmm4
  unsigned __int64 j; // r9
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // r9
  __m128 v27; // xmm1
  __m128 v28; // xmm2
  __m128 v29; // xmm3
  __m128 v30; // xmm4
  char *v31; // rcx
  __int128 v32; // xmm0
  unsigned __int64 v33; // rcx
  size_t v34; // r8
  _OWORD *v35; // r11
  __int128 v36; // xmm1
  size_t v37; // r9
  __int128 v38; // xmm1
  __int128 v39; // xmm2
  __int128 v40; // xmm3
  __int128 v41; // xmm4
  size_t i; // r9
  size_t v43; // r8

  result = a1;
  if ( Size < 8 )
  {
    if ( Size )
    {
      v7 = Src < a1;
      v8 = (_BYTE *)Src - (_BYTE *)a1;
      if ( v7 )
      {
        v10 = (char *)a1 + Size;
        do
        {
          v11 = v10[v8 - 1];
          --v10;
          --Size;
          *v10 = v11;
        }
        while ( Size );
      }
      else
      {
        do
        {
          v9 = *((_BYTE *)a1 + v8);
          a1 = (char *)a1 + 1;
          --Size;
          *((char *)a1 - 1) = v9;
        }
        while ( Size );
      }
    }
  }
  else if ( Size > 0x10 )
  {
    if ( Size > 0x20 )
    {
      v12 = (char *)Src + Size;
      v7 = Src < a1;
      v13 = (_BYTE *)Src - (_BYTE *)a1;
      if ( v7 && v12 > a1 )
      {
        v31 = (char *)a1 + Size;
        v32 = *(_OWORD *)&v31[v13 - 16];
        v33 = (unsigned __int64)(v31 - 16);
        v34 = Size - 16;
        if ( (v33 & 0xF) != 0 )
        {
          v35 = (_OWORD *)v33;
          v33 &= 0xFFFFFFFFFFFFFFF0uLL;
          v36 = *(_OWORD *)(v33 + v13);
          *v35 = v32;
          v32 = v36;
          v34 = v33 - (_QWORD)result;
        }
        v37 = v34 >> 6;
        if ( v34 >> 6 )
        {
          v34 &= 0x3Fu;
          do
          {
            v38 = *(_OWORD *)(v33 + v13 - 16);
            v39 = *(_OWORD *)(v33 + v13 - 32);
            v40 = *(_OWORD *)(v33 + v13 - 48);
            v41 = *(_OWORD *)(v33 + v13 - 64);
            *(_OWORD *)v33 = v32;
            v33 -= 64LL;
            --v37;
            *(_OWORD *)(v33 + 48) = v38;
            *(_OWORD *)(v33 + 32) = v39;
            *(_OWORD *)(v33 + 16) = v40;
            v32 = v41;
          }
          while ( v37 );
        }
        for ( i = v34 >> 4; i; --i )
        {
          *(_OWORD *)v33 = v32;
          v32 = *(_OWORD *)(v33 + v13 - 16);
          v33 -= 16LL;
        }
        v43 = v34 & 0xF;
        if ( v43 )
          *(_OWORD *)(v33 - v43) = *(_OWORD *)(v33 - v43 + v13);
        *(_OWORD *)v33 = v32;
      }
      else
      {
        v14 = *(__m128 *)((char *)a1 + v13);
        v15 = (unsigned __int64)a1 + 16;
        if ( (v15 & 0xF) != 0 )
        {
          v16 = v15 & 0xFFFFFFFFFFFFFFF0uLL;
          v17 = *(__m128 *)(v16 + v13);
          *(__m128 *)result = v14;
          v14 = v17;
          v15 = v16 + 16;
        }
        v18 = (unsigned __int64)result + Size - v15;
        v19 = v18 >> 6;
        if ( v18 >> 6 )
        {
          if ( v19 > 0x1000 )
          {
            v26 = v18 >> 6;
            v18 &= 0x3Fu;
            _mm_prefetch((const char *)(v15 + v13 + 64), 0);
            do
            {
              v27 = *(__m128 *)(v15 + v13);
              v28 = *(__m128 *)(v15 + v13 + 16);
              v29 = *(__m128 *)(v15 + v13 + 32);
              v30 = *(__m128 *)(v15 + v13 + 48);
              _mm_stream_ps((float *)(v15 - 16), v14);
              v15 += 64LL;
              _mm_prefetch((const char *)(v15 + v13 + 64), 0);
              --v26;
              _mm_stream_ps((float *)(v15 - 64), v27);
              _mm_stream_ps((float *)(v15 - 48), v28);
              _mm_stream_ps((float *)(v15 - 32), v29);
              v14 = v30;
            }
            while ( v26 );
            _mm_sfence();
          }
          else
          {
            v18 &= 0x3Fu;
            do
            {
              v20 = *(_OWORD *)(v15 + v13);
              v21 = *(_OWORD *)(v15 + v13 + 16);
              v22 = *(_OWORD *)(v15 + v13 + 32);
              v23 = *(__m128 *)(v15 + v13 + 48);
              *(__m128 *)(v15 - 16) = v14;
              v15 += 64LL;
              --v19;
              *(_OWORD *)(v15 - 64) = v20;
              *(_OWORD *)(v15 - 48) = v21;
              *(_OWORD *)(v15 - 32) = v22;
              v14 = v23;
            }
            while ( v19 );
          }
        }
        for ( j = v18 >> 4; j; --j )
        {
          *(__m128 *)(v15 - 16) = v14;
          v14 = *(__m128 *)(v15 + v13);
          v15 += 16LL;
        }
        v25 = v18 & 0xF;
        if ( v25 )
          *(_OWORD *)(v15 + v25 - 16) = *(_OWORD *)(v15 + v25 - 16 + v13);
        *(__m128 *)(v15 - 16) = v14;
      }
    }
    else
    {
      v6 = *(_OWORD *)((char *)Src + Size - 16);
      *(_OWORD *)a1 = *(_OWORD *)Src;
      *(_OWORD *)((char *)a1 + Size - 16) = v6;
    }
  }
  else
  {
    v4 = *(_QWORD *)Src;
    v5 = *(_QWORD *)((char *)Src + Size - 8);
    *(_QWORD *)a1 = v4;
    *(_QWORD *)((char *)a1 + Size - 8) = v5;
  }
  return result;
}
