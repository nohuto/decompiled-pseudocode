/*
 * XREFs of memmove @ 0x1800A5980
 * Callers:
 *     LdrpProtectedCopyMemory @ 0x1800012B0 (LdrpProtectedCopyMemory.c)
 *     EtwpTrackBinaryForSession @ 0x180002248 (EtwpTrackBinaryForSession.c)
 *     RtlpMergeSecurityAttributeInformation @ 0x180002880 (RtlpMergeSecurityAttributeInformation.c)
 *     EtwpAddBinaryInfoEvents @ 0x180002A50 (EtwpAddBinaryInfoEvents.c)
 *     EtwpAddEventToBuffer @ 0x180002BB0 (EtwpAddEventToBuffer.c)
 *     RtlQueryAtomInAtomTable @ 0x180003270 (RtlQueryAtomInAtomTable.c)
 *     RtlAddAtomToAtomTableEx @ 0x1800035FC (RtlAddAtomToAtomTableEx.c)
 *     LdrpHandleTlsData @ 0x180004574 (LdrpHandleTlsData.c)
 *     LdrpAcquireTlsIndex @ 0x180004BD8 (LdrpAcquireTlsIndex.c)
 *     LdrResSearchResource @ 0x180005220 (LdrResSearchResource.c)
 *     LdrpResSearchResourceMappedFile @ 0x18000555C (LdrpResSearchResourceMappedFile.c)
 *     LdrpGetDataModulePath @ 0x1800083E0 (LdrpGetDataModulePath.c)
 *     LdrAddLoadAsDataTable @ 0x1800088C0 (LdrAddLoadAsDataTable.c)
 *     RtlpCallQueryRegistryRoutine @ 0x180009260 (RtlpCallQueryRegistryRoutine.c)
 *     RtlpQueryRegistryDirect @ 0x1800095E8 (RtlpQueryRegistryDirect.c)
 *     RtlGetFileMUIPath @ 0x180009780 (RtlGetFileMUIPath.c)
 *     RtlpGetMUIRedirectedFilePathInternal @ 0x18000AFE8 (RtlpGetMUIRedirectedFilePathInternal.c)
 *     RtlAppendUnicodeToString @ 0x18000B5F0 (RtlAppendUnicodeToString.c)
 *     RtlGetPersistedStateLocation @ 0x18000B6A0 (RtlGetPersistedStateLocation.c)
 *     LdrpQueryValueKey @ 0x18000BCE0 (LdrpQueryValueKey.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x18000C778 (RtlpGetPolicyValueForSystemCapability.c)
 *     SHA256Update @ 0x18000C970 (SHA256Update.c)
 *     RtlpNameprepAsciiRealWorker @ 0x18000D858 (RtlpNameprepAsciiRealWorker.c)
 *     RtlIpv6StringToAddressW @ 0x18000E180 (RtlIpv6StringToAddressW.c)
 *     RtlpIdnToUnicodeWorker @ 0x18000E670 (RtlpIdnToUnicodeWorker.c)
 *     RtlCreateUnicodeString @ 0x18000EBB0 (RtlCreateUnicodeString.c)
 *     A_SHAUpdate @ 0x18000EEE0 (A_SHAUpdate.c)
 *     RtlpMuiRegDupLanguageList @ 0x180011CB8 (RtlpMuiRegDupLanguageList.c)
 *     RtlpMuiRegTryToAppendLangId @ 0x180012830 (RtlpMuiRegTryToAppendLangId.c)
 *     RtlpMuiRegTryToAppendLanguageName @ 0x180012950 (RtlpMuiRegTryToAppendLanguageName.c)
 *     RtlpCombineAcls @ 0x18001307C (RtlpCombineAcls.c)
 *     RtlSetEnvironmentVar @ 0x180014E20 (RtlSetEnvironmentVar.c)
 *     RtlpInitUnicodeStringUsingBuffer @ 0x180016140 (RtlpInitUnicodeStringUsingBuffer.c)
 *     RtlCultureNameToLCID @ 0x180016750 (RtlCultureNameToLCID.c)
 *     RtlpMuiRegGetOrAddStringToPool @ 0x1800168A4 (RtlpMuiRegGetOrAddStringToPool.c)
 *     RtlpCopyEffectiveAce @ 0x1800169EC (RtlpCopyEffectiveAce.c)
 *     RtlpNewSecurityObject @ 0x180016E10 (RtlpNewSecurityObject.c)
 *     RtlpInheritAcl2 @ 0x180018324 (RtlpInheritAcl2.c)
 *     LdrpAllocateFileNameBufferIfNeeded @ 0x180018CD4 (LdrpAllocateFileNameBufferIfNeeded.c)
 *     RtlAppendUnicodeStringToString @ 0x180019500 (RtlAppendUnicodeStringToString.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180019D38 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     RtlpGenerateInheritedAce @ 0x18001A2E0 (RtlpGenerateInheritedAce.c)
 *     RtlDosSearchPath_Ustr @ 0x18001A5B0 (RtlDosSearchPath_Ustr.c)
 *     RtlpAddKnownAce @ 0x18001ABE4 (RtlpAddKnownAce.c)
 *     RtlFormatCurrentUserKeyPath @ 0x18001AD30 (RtlFormatCurrentUserKeyPath.c)
 *     RtlConvertSidToUnicodeString @ 0x18001AF50 (RtlConvertSidToUnicodeString.c)
 *     RtlIntegerToUnicode @ 0x18001B170 (RtlIntegerToUnicode.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18001BDC0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     sxsisol_SearchActCtxForDllName @ 0x18001D1D8 (sxsisol_SearchActCtxForDllName.c)
 *     RtlQueryEnvironmentVariable @ 0x18001ED70 (RtlQueryEnvironmentVariable.c)
 *     LdrGetProcedureAddressForCaller @ 0x180022190 (LdrGetProcedureAddressForCaller.c)
 *     LdrpLoadDependentModuleA @ 0x180024E80 (LdrpLoadDependentModuleA.c)
 *     LdrpLoadDependentModuleInternal @ 0x180025330 (LdrpLoadDependentModuleInternal.c)
 *     LdrpAllocateTls @ 0x18002977C (LdrpAllocateTls.c)
 *     LdrpResolveDllName @ 0x18002AA44 (LdrpResolveDllName.c)
 *     RtlpInsertInvertedFunctionTableEntry @ 0x18002C454 (RtlpInsertInvertedFunctionTableEntry.c)
 *     RtlCopyUnicodeString @ 0x18002D860 (RtlCopyUnicodeString.c)
 *     LdrpAllocatePlaceHolder @ 0x18002E530 (LdrpAllocatePlaceHolder.c)
 *     LdrpSendPostSnapNotifications @ 0x18002EF60 (LdrpSendPostSnapNotifications.c)
 *     EtwpEventApiCallback @ 0x180030A14 (EtwpEventApiCallback.c)
 *     TppPrepareDirectParams @ 0x18003683C (TppPrepareDirectParams.c)
 *     RtlpReAllocateHeap @ 0x1800425F0 (RtlpReAllocateHeap.c)
 *     RtlpHpSegReAlloc @ 0x180043970 (RtlpHpSegReAlloc.c)
 *     RtlpAddHeapToUnprotectedList @ 0x180048EDC (RtlpAddHeapToUnprotectedList.c)
 *     RtlpAddHeapToProtectedList @ 0x1800499EC (RtlpAddHeapToProtectedList.c)
 *     RtlpExtendFrontEndUsageArray @ 0x18004A5E8 (RtlpExtendFrontEndUsageArray.c)
 *     RtlpHpVaMgrRangeCreate @ 0x18004B09C (RtlpHpVaMgrRangeCreate.c)
 *     CsrpConnectToServer @ 0x18004B21C (CsrpConnectToServer.c)
 *     RtlIpv6AddressToStringExW @ 0x180052F20 (RtlIpv6AddressToStringExW.c)
 *     vDbgPrintExWithPrefixInternal @ 0x180053AB8 (vDbgPrintExWithPrefixInternal.c)
 *     RtlFormatMessageEx @ 0x180053D20 (RtlFormatMessageEx.c)
 *     RtlpCopyXStateChunk @ 0x180055100 (RtlpCopyXStateChunk.c)
 *     RtlCreateProcessParametersInternal @ 0x180057F70 (RtlCreateProcessParametersInternal.c)
 *     RtlpCopyProcString @ 0x180058480 (RtlpCopyProcString.c)
 *     RtlCreateEnvironmentEx @ 0x180058580 (RtlCreateEnvironmentEx.c)
 *     RtlpInitEnvironmentBlock @ 0x18005876C (RtlpInitEnvironmentBlock.c)
 *     RtlpScanEnvironment @ 0x1800588D0 (RtlpScanEnvironment.c)
 *     MD5Update @ 0x18005C610 (MD5Update.c)
 *     EtwpWriteToPrivateBuffers @ 0x18005D0CC (EtwpWriteToPrivateBuffers.c)
 *     EtwpAddReloggedHeaderExtensionEvents @ 0x18005E9AC (EtwpAddReloggedHeaderExtensionEvents.c)
 *     RtlInitializeResource @ 0x18005F860 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x18005F9E0 (RtlpAddDebugInfoToCriticalSection.c)
 *     EtwpAddLogHeaderToLogFile @ 0x18005FF34 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpQueryRegString @ 0x1800608C4 (EtwpQueryRegString.c)
 *     RtlInsertElementGenericTableFull @ 0x180062C70 (RtlInsertElementGenericTableFull.c)
 *     RtlCopySid @ 0x180069210 (RtlCopySid.c)
 *     RtlpComputePath @ 0x18006A490 (RtlpComputePath.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x18006AE40 (RtlInsertElementGenericTableFullAvl.c)
 *     TpCallbackSendAlpcMessageOnCompletion @ 0x18006B3D0 (TpCallbackSendAlpcMessageOnCompletion.c)
 *     LdrpRecordUnloadEvent @ 0x18006BB70 (LdrpRecordUnloadEvent.c)
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
 *     SaferpIsDllAllowed @ 0x1800734F4 (SaferpIsDllAllowed.c)
 *     RtlxRemoveInvertedFunctionTable @ 0x1800736E4 (RtlxRemoveInvertedFunctionTable.c)
 *     CsrCaptureMessageBuffer @ 0x1800743D0 (CsrCaptureMessageBuffer.c)
 *     CsrpClientConnectToServer @ 0x18007442C (CsrpClientConnectToServer.c)
 *     CsrCaptureMessageString @ 0x1800745F0 (CsrCaptureMessageString.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x180074C34 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x1800751F4 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpInsertAssemblyStorageMapEntry @ 0x180075624 (RtlpInsertAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180075744 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlConvertDeviceFamilyInfoToString @ 0x180077FA0 (RtlConvertDeviceFamilyInfoToString.c)
 *     LdrAddDllDirectory @ 0x180078440 (LdrAddDllDirectory.c)
 *     RtlDosSearchPath_U @ 0x180078A30 (RtlDosSearchPath_U.c)
 *     RtlpSetSecurityObject @ 0x180079E78 (RtlpSetSecurityObject.c)
 *     RtlpQueryInformationActivationContextCompatibilityInformation @ 0x18007AB28 (RtlpQueryInformationActivationContextCompatibilityInformation.c)
 *     RtlIpv4AddressToStringExW @ 0x18007AE20 (RtlIpv4AddressToStringExW.c)
 *     RtlGetCurrentDirectory_U @ 0x18007B6C0 (RtlGetCurrentDirectory_U.c)
 *     RtlpCreateNewDirectoryReference @ 0x18007B920 (RtlpCreateNewDirectoryReference.c)
 *     GetImageTuple @ 0x18007C718 (GetImageTuple.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x18007D270 (RtlQueryActivationContextApplicationSettings.c)
 *     RtlQueryImageFileKeyOption @ 0x18007D900 (RtlQueryImageFileKeyOption.c)
 *     RtlDuplicateUnicodeString @ 0x18007E3F0 (RtlDuplicateUnicodeString.c)
 *     RtlpInitParameterBlock @ 0x18007FF50 (RtlpInitParameterBlock.c)
 *     RtlpNtQueryValueKey @ 0x1800800A0 (RtlpNtQueryValueKey.c)
 *     RtlAddAttributeActionToRXact @ 0x180080700 (RtlAddAttributeActionToRXact.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x180080E04 (LdrpLogDeprecatedDllEtwEvent.c)
 *     RtlSetProtectedPolicy @ 0x180082860 (RtlSetProtectedPolicy.c)
 *     RtlIpv4AddressToStringExA @ 0x180082C60 (RtlIpv4AddressToStringExA.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180083530 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlAddSIDToBoundaryDescriptorEx @ 0x180083960 (RtlAddSIDToBoundaryDescriptorEx.c)
 *     RtlIpv6StringToAddressA @ 0x180083B10 (RtlIpv6StringToAddressA.c)
 *     LdrUpdatePackageSearchPath @ 0x180083E80 (LdrUpdatePackageSearchPath.c)
 *     RtlpNtEnumerateSubKey @ 0x1800846E0 (RtlpNtEnumerateSubKey.c)
 *     RtlCreateBoundaryDescriptor @ 0x180085670 (RtlCreateBoundaryDescriptor.c)
 *     RtlReplaceSystemDirectoryInPath @ 0x180085F40 (RtlReplaceSystemDirectoryInPath.c)
 *     RtlpCopyMappedMemoryEx @ 0x180086150 (RtlpCopyMappedMemoryEx.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x180087E1C (LdrpGetModuleInfoFromVirtualMemory.c)
 *     RtlCopyString @ 0x180088330 (RtlCopyString.c)
 *     RtlConnectToSm @ 0x180088760 (RtlConnectToSm.c)
 *     RtlSelfRelativeToAbsoluteSD2 @ 0x1800899A0 (RtlSelfRelativeToAbsoluteSD2.c)
 *     RtlIpv6AddressToStringExA @ 0x18008A2B0 (RtlIpv6AddressToStringExA.c)
 *     LdrpLogFatalLdrEtwEvent @ 0x18008A55C (LdrpLogFatalLdrEtwEvent.c)
 *     RtlpCheckDeviceName @ 0x18008B9FC (RtlpCheckDeviceName.c)
 *     RtlpQueryInformationActivationContextDetailedInformation @ 0x18008CAF4 (RtlpQueryInformationActivationContextDetailedInformation.c)
 *     RtlQueryRegistryValueWithFallback @ 0x18008D790 (RtlQueryRegistryValueWithFallback.c)
 *     RtlpHpLargeReAlloc @ 0x18008E00C (RtlpHpLargeReAlloc.c)
 *     RtlpHpReallocMove @ 0x18008E0AC (RtlpHpReallocMove.c)
 *     LdrpSpecialCacheTypeHandle @ 0x18008E1FC (LdrpSpecialCacheTypeHandle.c)
 *     EtwpTraceUmMessage @ 0x18008E264 (EtwpTraceUmMessage.c)
 *     RtlInitializeNtUserPfn @ 0x18008E4E0 (RtlInitializeNtUserPfn.c)
 *     RaiseException @ 0x180097410 (RaiseException.c)
 *     memcpy_s @ 0x18009A120 (memcpy_s.c)
 *     memmove_s @ 0x18009A1C0 (memmove_s.c)
 *     ReadString_1 @ 0x18009D018 (ReadString_1.c)
 *     LdrpLogNewDllLoadInternal @ 0x1800AD39E (LdrpLogNewDllLoadInternal.c)
 *     RtlpSaveX87State @ 0x1800AEC4C (RtlpSaveX87State.c)
 *     QueryRegistryValue @ 0x1800B0230 (QueryRegistryValue.c)
 *     RtlNtPathNameToDosPathName @ 0x1800D7460 (RtlNtPathNameToDosPathName.c)
 *     LdrpLoadEnclaveModule @ 0x1800D91B0 (LdrpLoadEnclaveModule.c)
 *     RtlSetEnvironmentStrings @ 0x1800D9390 (RtlSetEnvironmentStrings.c)
 *     RtlpQueryEnvironmentHashTable @ 0x1800D9604 (RtlpQueryEnvironmentHashTable.c)
 *     LdrpQueryCurrentPatch @ 0x1800DA5D0 (LdrpQueryCurrentPatch.c)
 *     LdrpCorFixupImage @ 0x1800DA7C8 (LdrpCorFixupImage.c)
 *     LdrpLogDllRelocationEtwEvent @ 0x1800DB61C (LdrpLogDllRelocationEtwEvent.c)
 *     LdrpAddRedirectedFunction @ 0x1800DF694 (LdrpAddRedirectedFunction.c)
 *     RtlComputePrivatizedDllName_U @ 0x1800E07E0 (RtlComputePrivatizedDllName_U.c)
 *     RtlQuerySecurityObject @ 0x1800E1EF0 (RtlQuerySecurityObject.c)
 *     RtlQueryProcessBackTraceInformation @ 0x1800E21E0 (RtlQueryProcessBackTraceInformation.c)
 *     RtlQueryProcessHeapInformation @ 0x1800E2370 (RtlQueryProcessHeapInformation.c)
 *     RtlSetProcessDebugInformation @ 0x1800E2BA0 (RtlSetProcessDebugInformation.c)
 *     RtlpCopyRemoteDebugInformation @ 0x1800E2D90 (RtlpCopyRemoteDebugInformation.c)
 *     AVrfInitializeVerifier @ 0x1800E3DE4 (AVrfInitializeVerifier.c)
 *     ReportExceptionInternal @ 0x1800E6BD8 (ReportExceptionInternal.c)
 *     RtlpAddSystemPath @ 0x1800E9670 (RtlpAddSystemPath.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x1800E9BBC (sxsisol_ExpandEnvironmentStrings_UEx.c)
 *     sxsisol_RespectDotLocal @ 0x1800E9D80 (sxsisol_RespectDotLocal.c)
 *     RtlpQueryAssemblyInformationActivationContextDetailedInformation @ 0x1800EA238 (RtlpQueryAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation @ 0x1800EA4C8 (RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800EA814 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800EB94C (LdrpCnvrtShortToLongFileName.c)
 *     LdrpTraceLoadMUIDll @ 0x1800EC0E8 (LdrpTraceLoadMUIDll.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800EC470 (RtlQueryImageMitigationPolicy.c)
 *     RtlSetImageMitigationPolicy @ 0x1800ECF20 (RtlSetImageMitigationPolicy.c)
 *     RtlpQueryEafPlusModuleList @ 0x1800EE3E0 (RtlpQueryEafPlusModuleList.c)
 *     LdrpResSearchResourceHandle @ 0x1800EF514 (LdrpResSearchResourceHandle.c)
 *     RtlNormalizeSecurityDescriptor @ 0x1800F13C0 (RtlNormalizeSecurityDescriptor.c)
 *     RtlReplaceSidInSd @ 0x1800F16A0 (RtlReplaceSidInSd.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800F1E80 (RtlpConvertAclToAutoInherit.c)
 *     RtlpConvertToAutoInheritSecurityObject @ 0x1800F2704 (RtlpConvertToAutoInheritSecurityObject.c)
 *     RtlpCreateServerAcl @ 0x1800F2C28 (RtlpCreateServerAcl.c)
 *     RtlpFilterSacl @ 0x1800F2EB8 (RtlpFilterSacl.c)
 *     RtlpNormalizeAcl @ 0x1800F31C0 (RtlpNormalizeAcl.c)
 *     RtlAddAccessFilterAce @ 0x1800F3DF0 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800F41E0 (RtlAddResourceAttributeAce.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1800F49A0 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpConvertRelativeToAbsoluteSecurityAttribute @ 0x1800F4D10 (RtlpConvertRelativeToAbsoluteSecurityAttribute.c)
 *     RtlAppendAsciizToString @ 0x1800F6120 (RtlAppendAsciizToString.c)
 *     RtlAppendStringToString @ 0x1800F6190 (RtlAppendStringToString.c)
 *     RtlCopyBitMap @ 0x1800F6530 (RtlCopyBitMap.c)
 *     RtlExtractBitMap @ 0x1800F6740 (RtlExtractBitMap.c)
 *     RtlpCopyBitMapTailToHead @ 0x1800F8A14 (RtlpCopyBitMapTailToHead.c)
 *     RtlLargeIntegerToChar @ 0x1800F8FB0 (RtlLargeIntegerToChar.c)
 *     RtlLargeIntegerToUnicode @ 0x1800F9110 (RtlLargeIntegerToUnicode.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x1800F9980 (RtlpGetBootStatusPathFromRegistry.c)
 *     RtlpQueryTimeZoneKeyNameRoutine @ 0x1800F9DA0 (RtlpQueryTimeZoneKeyNameRoutine.c)
 *     RtlpAddLanguagesToMultiSZ @ 0x1800FA4B8 (RtlpAddLanguagesToMultiSZ.c)
 *     RtlpCleanupRegistryKeys @ 0x1800FA8F0 (RtlpCleanupRegistryKeys.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1800FAFF0 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpMUIEnumerateFolder @ 0x1800FB648 (RtlpMUIEnumerateFolder.c)
 *     RtlpSetPreferredUILanguages @ 0x1800FC160 (RtlpSetPreferredUILanguages.c)
 *     RtlpExtendedHeapInformationGenerator @ 0x1800FE9A0 (RtlpExtendedHeapInformationGenerator.c)
 *     RtlpExtendedHeapInformationWorkerCallback @ 0x1800FECD0 (RtlpExtendedHeapInformationWorkerCallback.c)
 *     RtlpHpRemoteStackSerializeWriter @ 0x1800FF9B0 (RtlpHpRemoteStackSerializeWriter.c)
 *     RtlCompareExchangePropertyStore @ 0x180100E10 (RtlCompareExchangePropertyStore.c)
 *     RtlRemovePropertyStore @ 0x180101270 (RtlRemovePropertyStore.c)
 *     RtlpPushPageDescriptor @ 0x180103758 (RtlpPushPageDescriptor.c)
 *     RtlpValidateHeapHeaders @ 0x180106FF4 (RtlpValidateHeapHeaders.c)
 *     RtlWriteNonVolatileMemory @ 0x180108C70 (RtlWriteNonVolatileMemory.c)
 *     RtlGenerate8dot3Name @ 0x180108E80 (RtlGenerate8dot3Name.c)
 *     RtlpGetUserLocaleName @ 0x180109CE4 (RtlpGetUserLocaleName.c)
 *     RtlpHeapTrkReportResult @ 0x18010B5D0 (RtlpHeapTrkReportResult.c)
 *     RtlpHeapTrkTrackStack @ 0x18010BA3C (RtlpHeapTrkTrackStack.c)
 *     RtlRemoteCall @ 0x18010BE80 (RtlRemoteCall.c)
 *     RtlpStdLogCapturedStackTrace @ 0x18010E734 (RtlpStdLogCapturedStackTrace.c)
 *     RtlSetFeatureConfigurations @ 0x18010E920 (RtlSetFeatureConfigurations.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x18010F78C (RtlpTraceDatabaseInternalAdd.c)
 *     RtlpMuiRegDupLanguageConfigList @ 0x1801115F8 (RtlpMuiRegDupLanguageConfigList.c)
 *     RtlpMuiRegLoadLicInformation @ 0x1801123DC (RtlpMuiRegLoadLicInformation.c)
 *     RtlpMuiRegResizeStringPool @ 0x180112D54 (RtlpMuiRegResizeStringPool.c)
 *     RtlpHpStackTraceEventWriter @ 0x180116240 (RtlpHpStackTraceEventWriter.c)
 *     RtlpRegisterStackTrace @ 0x180117ED0 (RtlpRegisterStackTrace.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x1801184D4 (RtlpHpTagQueryHeapsRemote.c)
 *     LZNT1CompressChunk @ 0x180119CFC (LZNT1CompressChunk.c)
 *     RtlDecompressBufferLZNT1 @ 0x18011A2E0 (RtlDecompressBufferLZNT1.c)
 *     RtlDecompressFragmentLZNT1 @ 0x18011A480 (RtlDecompressFragmentLZNT1.c)
 *     Xp10BitCopy @ 0x18011AA24 (Xp10BitCopy.c)
 *     Xp10ScatteredCopy @ 0x18011EA1C (Xp10ScatteredCopy.c)
 *     Xp10ScatteredReadBytes @ 0x18011ED7C (Xp10ScatteredReadBytes.c)
 *     MD4Update @ 0x1801237B0 (MD4Update.c)
 *     EtwTraceEventInstance @ 0x180123D60 (EtwTraceEventInstance.c)
 *     EtwpRelogEvent @ 0x180124544 (EtwpRelogEvent.c)
 *     EtwpTraceUmEvent @ 0x180124734 (EtwpTraceUmEvent.c)
 *     EtwpTrackDebugIdForSession @ 0x180125074 (EtwpTrackDebugIdForSession.c)
 *     EtwpWriteBufferCompressed @ 0x18012524C (EtwpWriteBufferCompressed.c)
 *     TpSetDefaultPoolCpuSets @ 0x180125668 (TpSetDefaultPoolCpuSets.c)
 *     PsspCaptureAuxiliaryPages @ 0x180128718 (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureVaSpaceInformation2 @ 0x180128BA4 (PsspCaptureVaSpaceInformation2.c)
 *     PsspHandleDumper @ 0x180129750 (PsspHandleDumper.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x18012CC68 (RtlpStackDbSegmentFindOrCreate.c)
 *     RtlpFcQueryAllFeatureUsageSubscriptionNotificationsFromBufferSet @ 0x18012E008 (RtlpFcQueryAllFeatureUsageSubscriptionNotificationsFromBufferSet.c)
 *     RtlpFcQueryAllFeatureConfigurationsFromBuffers @ 0x18012E334 (RtlpFcQueryAllFeatureConfigurationsFromBuffers.c)
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
