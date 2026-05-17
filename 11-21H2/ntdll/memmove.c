/*
 * XREFs of memmove @ 0x1800AAB40
 * Callers:
 *     LdrpProtectedCopyMemory @ 0x1800012C0 (LdrpProtectedCopyMemory.c)
 *     RtlComputePrivatizedDllName_U @ 0x180002790 (RtlComputePrivatizedDllName_U.c)
 *     sxsisol_RespectDotLocal @ 0x180002A90 (sxsisol_RespectDotLocal.c)
 *     RtlIpv6AddressToStringExA @ 0x180002B60 (RtlIpv6AddressToStringExA.c)
 *     RtlIpv6AddressToStringExW @ 0x1800034D0 (RtlIpv6AddressToStringExW.c)
 *     RtlFormatMessageEx @ 0x180003870 (RtlFormatMessageEx.c)
 *     EtwpWriteToPrivateBuffers @ 0x1800051BC (EtwpWriteToPrivateBuffers.c)
 *     vDbgPrintExWithPrefixInternal @ 0x180006A08 (vDbgPrintExWithPrefixInternal.c)
 *     EtwpAddLogHeaderToLogFile @ 0x18000851C (EtwpAddLogHeaderToLogFile.c)
 *     EtwpQueryRegString @ 0x18000913C (EtwpQueryRegString.c)
 *     RtlpCallQueryRegistryRoutine @ 0x18000A110 (RtlpCallQueryRegistryRoutine.c)
 *     RtlpQueryRegistryDirect @ 0x18000A450 (RtlpQueryRegistryDirect.c)
 *     GetImageTuple @ 0x18000B0FC (GetImageTuple.c)
 *     RtlCreateProcessParametersInternal @ 0x18000C6F0 (RtlCreateProcessParametersInternal.c)
 *     RtlpCopyProcString @ 0x18000CBF0 (RtlpCopyProcString.c)
 *     RtlpInitEnvironmentBlock @ 0x18000CCDC (RtlpInitEnvironmentBlock.c)
 *     RtlCreateEnvironmentEx @ 0x18000CED0 (RtlCreateEnvironmentEx.c)
 *     RtlSetEnvironmentVar @ 0x18000D0F0 (RtlSetEnvironmentVar.c)
 *     LdrpAllocateFileNameBufferIfNeeded @ 0x18000DE78 (LdrpAllocateFileNameBufferIfNeeded.c)
 *     RtlpSetSecurityObject @ 0x18000E648 (RtlpSetSecurityObject.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x18000ED04 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlCopySid @ 0x18000F120 (RtlCopySid.c)
 *     RtlpNewSecurityObject @ 0x18000F5FC (RtlpNewSecurityObject.c)
 *     RtlpInheritAcl2 @ 0x180010ACC (RtlpInheritAcl2.c)
 *     RtlpCombineAcls @ 0x180010F38 (RtlpCombineAcls.c)
 *     RtlpCopyAces @ 0x1800118FC (RtlpCopyAces.c)
 *     RtlpCopyEffectiveAce @ 0x180011D88 (RtlpCopyEffectiveAce.c)
 *     A_SHAUpdate @ 0x180012D10 (A_SHAUpdate.c)
 *     SHA256Update @ 0x180013F84 (SHA256Update.c)
 *     EtwpEventApiCallback @ 0x180015800 (EtwpEventApiCallback.c)
 *     TppPrepareDirectParams @ 0x180017B5C (TppPrepareDirectParams.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x18001D180 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlInitializeResource @ 0x18001D900 (RtlInitializeResource.c)
 *     RtlpReAllocateHeap @ 0x180024890 (RtlpReAllocateHeap.c)
 *     RtlpHpSegReAlloc @ 0x18002E070 (RtlpHpSegReAlloc.c)
 *     RtlpAddHeapToUnprotectedList @ 0x18002F674 (RtlpAddHeapToUnprotectedList.c)
 *     LdrpAcquireTlsIndex @ 0x18003132C (LdrpAcquireTlsIndex.c)
 *     RtlpIdnToUnicodeWorker @ 0x180031550 (RtlpIdnToUnicodeWorker.c)
 *     RtlpNameprepAsciiRealWorker @ 0x180031CBC (RtlpNameprepAsciiRealWorker.c)
 *     RtlIpv6StringToAddressW @ 0x180032610 (RtlIpv6StringToAddressW.c)
 *     RtlpComputePath @ 0x180033140 (RtlpComputePath.c)
 *     RtlpScanEnvironment @ 0x180033880 (RtlpScanEnvironment.c)
 *     LdrpHandleTlsData @ 0x180033A94 (LdrpHandleTlsData.c)
 *     RtlpInsertInvertedFunctionTableEntry @ 0x18003450C (RtlpInsertInvertedFunctionTableEntry.c)
 *     RtlCopyUnicodeString @ 0x180034770 (RtlCopyUnicodeString.c)
 *     RtlQueryEnvironmentVariable @ 0x180036CE0 (RtlQueryEnvironmentVariable.c)
 *     LdrGetProcedureAddressForCaller @ 0x18003AFD0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpLoadDependentModuleA @ 0x18003D360 (LdrpLoadDependentModuleA.c)
 *     LdrpLoadDependentModuleInternal @ 0x18003D8F0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpAllocateTls @ 0x180042A74 (LdrpAllocateTls.c)
 *     RtlDosSearchPath_Ustr @ 0x180043D50 (RtlDosSearchPath_Ustr.c)
 *     RtlpGenerateInheritedAce @ 0x180044620 (RtlpGenerateInheritedAce.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180044FE8 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     sxsisol_SearchActCtxForDllName @ 0x1800458B4 (sxsisol_SearchActCtxForDllName.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x1800466F0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlFormatCurrentUserKeyPath @ 0x180047DC0 (RtlFormatCurrentUserKeyPath.c)
 *     RtlpAddKnownAce @ 0x180047FD8 (RtlpAddKnownAce.c)
 *     RtlConvertSidToUnicodeString @ 0x180048370 (RtlConvertSidToUnicodeString.c)
 *     RtlIntegerToUnicode @ 0x180048590 (RtlIntegerToUnicode.c)
 *     RtlpMuiRegTryToAppendLangId @ 0x180048B84 (RtlpMuiRegTryToAppendLangId.c)
 *     RtlAppendUnicodeStringToString @ 0x180049410 (RtlAppendUnicodeStringToString.c)
 *     RtlDuplicateUnicodeString @ 0x18004A560 (RtlDuplicateUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x18004A9D0 (RtlCreateUnicodeString.c)
 *     RtlpInitUnicodeStringUsingBuffer @ 0x18004BA58 (RtlpInitUnicodeStringUsingBuffer.c)
 *     RtlpMuiRegGetOrAddStringToPool @ 0x18004BD84 (RtlpMuiRegGetOrAddStringToPool.c)
 *     RtlCultureNameToLCID @ 0x18004BE40 (RtlCultureNameToLCID.c)
 *     RtlpMuiRegDupLanguageList @ 0x18004C61C (RtlpMuiRegDupLanguageList.c)
 *     LdrpAllocatePlaceHolder @ 0x18004DE38 (LdrpAllocatePlaceHolder.c)
 *     LdrpSendPostSnapNotifications @ 0x18004E44C (LdrpSendPostSnapNotifications.c)
 *     RtlAppendUnicodeToString @ 0x18004F4E0 (RtlAppendUnicodeToString.c)
 *     LdrpResolveDllName @ 0x18004F58C (LdrpResolveDllName.c)
 *     RtlpMuiRegTryToAppendLanguageName @ 0x18004FC5C (RtlpMuiRegTryToAppendLanguageName.c)
 *     RtlGetPersistedStateLocation @ 0x180050B20 (RtlGetPersistedStateLocation.c)
 *     LdrpRecordUnloadEvent @ 0x180052D88 (LdrpRecordUnloadEvent.c)
 *     RtlpExtendFrontEndUsageArray @ 0x180053B0C (RtlpExtendFrontEndUsageArray.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x180053E9C (LdrpLogDeprecatedDllEtwEvent.c)
 *     RtlpHpVaMgrRangeCreate @ 0x180056224 (RtlpHpVaMgrRangeCreate.c)
 *     MD5Update @ 0x18005EC30 (MD5Update.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x18005FD00 (RtlInsertElementGenericTableFullAvl.c)
 *     LdrAddDllDirectory @ 0x180060070 (LdrAddDllDirectory.c)
 *     RtlDosSearchPath_U @ 0x1800606F0 (RtlDosSearchPath_U.c)
 *     PsspCaptureAuxiliaryPages @ 0x180061BDC (PsspCaptureAuxiliaryPages.c)
 *     RtlQueryAtomInAtomTable @ 0x180062260 (RtlQueryAtomInAtomTable.c)
 *     RtlAddAtomToAtomTableEx @ 0x18006267C (RtlAddAtomToAtomTableEx.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180062EC0 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlGetFileMUIPath @ 0x1800634A0 (RtlGetFileMUIPath.c)
 *     RtlpGetMUIRedirectedFilePathInternal @ 0x180063C14 (RtlpGetMUIRedirectedFilePathInternal.c)
 *     PsspCaptureVaSpaceInformation2 @ 0x18006413C (PsspCaptureVaSpaceInformation2.c)
 *     LdrResSearchResource @ 0x180064700 (LdrResSearchResource.c)
 *     LdrpResSearchResourceMappedFile @ 0x180064E1C (LdrpResSearchResourceMappedFile.c)
 *     LdrpGetDataModulePath @ 0x1800676F0 (LdrpGetDataModulePath.c)
 *     LdrAddLoadAsDataTable @ 0x180067BB0 (LdrAddLoadAsDataTable.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x1800680C0 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x1800684A8 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180068A78 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpInsertAssemblyStorageMapEntry @ 0x180068E94 (RtlpInsertAssemblyStorageMapEntry.c)
 *     RtlInsertElementGenericTableFull @ 0x18006A330 (RtlInsertElementGenericTableFull.c)
 *     RtlpCopyXStateChunk @ 0x18006C1C4 (RtlpCopyXStateChunk.c)
 *     TpCallbackSendAlpcMessageOnCompletion @ 0x18006D2B0 (TpCallbackSendAlpcMessageOnCompletion.c)
 *     LdrpQueryValueKey @ 0x18006F0A8 (LdrpQueryValueKey.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x180071520 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1800718B4 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlCopySecurityDescriptor @ 0x180071D40 (RtlCopySecurityDescriptor.c)
 *     RtlSelfRelativeToAbsoluteSD @ 0x180071E00 (RtlSelfRelativeToAbsoluteSD.c)
 *     RtlMakeSelfRelativeSD @ 0x180071FE0 (RtlMakeSelfRelativeSD.c)
 *     RtlConvertDeviceFamilyInfoToString @ 0x180072280 (RtlConvertDeviceFamilyInfoToString.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x180073684 (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlIntegerToChar @ 0x180074090 (RtlIntegerToChar.c)
 *     RtlMultiAppendUnicodeStringBuffer @ 0x180075290 (RtlMultiAppendUnicodeStringBuffer.c)
 *     RtlpEnsureBufferSize @ 0x1800753A0 (RtlpEnsureBufferSize.c)
 *     CsrCaptureMessageBuffer @ 0x180079440 (CsrCaptureMessageBuffer.c)
 *     CsrpConnectToServer @ 0x180079664 (CsrpConnectToServer.c)
 *     CsrpClientConnectToServer @ 0x180079A28 (CsrpClientConnectToServer.c)
 *     CsrCaptureMessageString @ 0x180079DD0 (CsrCaptureMessageString.c)
 *     RtlxRemoveInvertedFunctionTable @ 0x18007A58C (RtlxRemoveInvertedFunctionTable.c)
 *     RtlpQueryInformationActivationContextDetailedInformation @ 0x18007F2C4 (RtlpQueryInformationActivationContextDetailedInformation.c)
 *     RtlpQueryInformationActivationContextCompatibilityInformation @ 0x18007F524 (RtlpQueryInformationActivationContextCompatibilityInformation.c)
 *     RtlGetCurrentDirectory_U @ 0x180080260 (RtlGetCurrentDirectory_U.c)
 *     RtlpCreateNewDirectoryReference @ 0x1800804B8 (RtlpCreateNewDirectoryReference.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x1800818E0 (RtlQueryActivationContextApplicationSettings.c)
 *     RtlQueryImageFileKeyOption @ 0x180081F20 (RtlQueryImageFileKeyOption.c)
 *     RtlIpv4AddressToStringExW @ 0x180082570 (RtlIpv4AddressToStringExW.c)
 *     RtlpNtQueryValueKey @ 0x180083C70 (RtlpNtQueryValueKey.c)
 *     RtlpInitParameterBlock @ 0x180084354 (RtlpInitParameterBlock.c)
 *     RtlIpv4AddressToStringExA @ 0x1800849F0 (RtlIpv4AddressToStringExA.c)
 *     RtlpAddHeapToProtectedList @ 0x180085118 (RtlpAddHeapToProtectedList.c)
 *     RtlIpv6StringToAddressA @ 0x180085ED0 (RtlIpv6StringToAddressA.c)
 *     RtlAddAttributeActionToRXact @ 0x180086A10 (RtlAddAttributeActionToRXact.c)
 *     RtlSetProtectedPolicy @ 0x180087700 (RtlSetProtectedPolicy.c)
 *     RtlAddSIDToBoundaryDescriptorEx @ 0x1800881D0 (RtlAddSIDToBoundaryDescriptorEx.c)
 *     LdrpLogDllRelocationEtwEvent @ 0x1800890C4 (LdrpLogDllRelocationEtwEvent.c)
 *     RtlpNtEnumerateSubKey @ 0x180089180 (RtlpNtEnumerateSubKey.c)
 *     RtlCreateBoundaryDescriptor @ 0x180089970 (RtlCreateBoundaryDescriptor.c)
 *     RtlSetEnvironmentStrings @ 0x18008A170 (RtlSetEnvironmentStrings.c)
 *     PsspHandleDumper @ 0x18008A540 (PsspHandleDumper.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x18008B128 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     RtlpCopyMappedMemoryEx @ 0x18008B4F0 (RtlpCopyMappedMemoryEx.c)
 *     RtlpMergeSecurityAttributeInformation @ 0x18008BA40 (RtlpMergeSecurityAttributeInformation.c)
 *     RtlCopyString @ 0x18008D030 (RtlCopyString.c)
 *     LdrUpdatePackageSearchPath @ 0x18008D5D0 (LdrUpdatePackageSearchPath.c)
 *     RtlConnectToSm @ 0x18008DBB0 (RtlConnectToSm.c)
 *     RtlpSaveX87State @ 0x18008E64C (RtlpSaveX87State.c)
 *     EtwpTraceUmEvent @ 0x18008EA94 (EtwpTraceUmEvent.c)
 *     EtwpRelogEvent @ 0x18008EDC4 (EtwpRelogEvent.c)
 *     RtlpMUIEnumerateFolder @ 0x18008F6D4 (RtlpMUIEnumerateFolder.c)
 *     RtlSelfRelativeToAbsoluteSD2 @ 0x18008FF50 (RtlSelfRelativeToAbsoluteSD2.c)
 *     EtwpAddReloggedHeaderExtensionEvents @ 0x180090DF8 (EtwpAddReloggedHeaderExtensionEvents.c)
 *     RtlpCheckDeviceName @ 0x18009184C (RtlpCheckDeviceName.c)
 *     LdrpLogFatalLdrEtwEvent @ 0x180091FAC (LdrpLogFatalLdrEtwEvent.c)
 *     LdrpSpecialCacheTypeHandle @ 0x1800933AC (LdrpSpecialCacheTypeHandle.c)
 *     RtlInitializeNtUserPfn @ 0x180093590 (RtlInitializeNtUserPfn.c)
 *     RaiseException @ 0x18009C320 (RaiseException.c)
 *     memcpy_s @ 0x18009EF80 (memcpy_s.c)
 *     memmove_s @ 0x18009F020 (memmove_s.c)
 *     ReadString_1 @ 0x1800A1E98 (ReadString_1.c)
 *     LdrpLogNewDllLoadInternal @ 0x1800B05A0 (LdrpLogNewDllLoadInternal.c)
 *     RtlNtPathNameToDosPathName @ 0x1800D7410 (RtlNtPathNameToDosPathName.c)
 *     LdrpLoadEnclaveModule @ 0x1800D8F64 (LdrpLoadEnclaveModule.c)
 *     RtlpQueryEnvironmentHashTable @ 0x1800D9600 (RtlpQueryEnvironmentHashTable.c)
 *     LdrpQueryCurrentPatch @ 0x1800DA4E0 (LdrpQueryCurrentPatch.c)
 *     LdrpCorFixupImage @ 0x1800DA6D8 (LdrpCorFixupImage.c)
 *     LdrpAddRedirectedFunction @ 0x1800E0E90 (LdrpAddRedirectedFunction.c)
 *     RtlQuerySecurityObject @ 0x1800E3200 (RtlQuerySecurityObject.c)
 *     RtlQueryProcessBackTraceInformation @ 0x1800E3530 (RtlQueryProcessBackTraceInformation.c)
 *     RtlQueryProcessHeapInformation @ 0x1800E36C0 (RtlQueryProcessHeapInformation.c)
 *     RtlSetProcessDebugInformation @ 0x1800E3ED0 (RtlSetProcessDebugInformation.c)
 *     RtlpCopyRemoteDebugInformation @ 0x1800E40F8 (RtlpCopyRemoteDebugInformation.c)
 *     AVrfInitializeVerifier @ 0x1800E4F54 (AVrfInitializeVerifier.c)
 *     ReportExceptionInternal @ 0x1800E7D68 (ReportExceptionInternal.c)
 *     RtlpAddSystemPath @ 0x1800EA310 (RtlpAddSystemPath.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x1800EA85C (sxsisol_ExpandEnvironmentStrings_UEx.c)
 *     RtlpQueryAssemblyInformationActivationContextDetailedInformation @ 0x1800EAD88 (RtlpQueryAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation @ 0x1800EB018 (RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800EB360 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800EC19C (LdrpCnvrtShortToLongFileName.c)
 *     LdrpTraceLoadMUIDll @ 0x1800EC820 (LdrpTraceLoadMUIDll.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800ECBA0 (RtlQueryImageMitigationPolicy.c)
 *     RtlSetImageMitigationPolicy @ 0x1800ED690 (RtlSetImageMitigationPolicy.c)
 *     RtlpQueryEafPlusModuleList @ 0x1800EEB28 (RtlpQueryEafPlusModuleList.c)
 *     LdrpResSearchResourceHandle @ 0x1800EF7DC (LdrpResSearchResourceHandle.c)
 *     RtlNormalizeSecurityDescriptor @ 0x1800F17C0 (RtlNormalizeSecurityDescriptor.c)
 *     RtlReplaceSidInSd @ 0x1800F1C40 (RtlReplaceSidInSd.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800F2438 (RtlpConvertAclToAutoInherit.c)
 *     RtlpConvertToAutoInheritSecurityObject @ 0x1800F2C98 (RtlpConvertToAutoInheritSecurityObject.c)
 *     RtlpCreateServerAcl @ 0x1800F31B4 (RtlpCreateServerAcl.c)
 *     RtlpFilterSacl @ 0x1800F3448 (RtlpFilterSacl.c)
 *     RtlAddAccessFilterAce @ 0x1800F40B0 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800F44A0 (RtlAddResourceAttributeAce.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1800F4C50 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpConvertRelativeToAbsoluteSecurityAttribute @ 0x1800F4FC0 (RtlpConvertRelativeToAbsoluteSecurityAttribute.c)
 *     RtlReplaceSystemDirectoryInPath @ 0x1800F5FE0 (RtlReplaceSystemDirectoryInPath.c)
 *     RtlAppendAsciizToString @ 0x1800F64D0 (RtlAppendAsciizToString.c)
 *     RtlAppendStringToString @ 0x1800F6540 (RtlAppendStringToString.c)
 *     RtlCopyBitMap @ 0x1800F68B0 (RtlCopyBitMap.c)
 *     RtlExtractBitMap @ 0x1800F6AC0 (RtlExtractBitMap.c)
 *     RtlpCopyBitMapTailToHead @ 0x1800F87C4 (RtlpCopyBitMapTailToHead.c)
 *     RtlLargeIntegerToChar @ 0x1800F8D70 (RtlLargeIntegerToChar.c)
 *     RtlLargeIntegerToUnicode @ 0x1800F8EBC (RtlLargeIntegerToUnicode.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x1800F9720 (RtlpGetBootStatusPathFromRegistry.c)
 *     RtlQueryRegistryValueWithFallback @ 0x1800F9AC0 (RtlQueryRegistryValueWithFallback.c)
 *     RtlpQueryTimeZoneKeyNameRoutine @ 0x1800F9CA0 (RtlpQueryTimeZoneKeyNameRoutine.c)
 *     RtlpAddLanguagesToMultiSZ @ 0x1800FAAB4 (RtlpAddLanguagesToMultiSZ.c)
 *     RtlpCleanupRegistryKeys @ 0x1800FAF00 (RtlpCleanupRegistryKeys.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1800FB600 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpSetPreferredUILanguages @ 0x1800FC470 (RtlpSetPreferredUILanguages.c)
 *     RtlpExtendedHeapInformationGenerator @ 0x1800FECA0 (RtlpExtendedHeapInformationGenerator.c)
 *     RtlpExtendedHeapInformationWorkerCallback @ 0x1800FEFD0 (RtlpExtendedHeapInformationWorkerCallback.c)
 *     RtlpHpRemoteStackSerializeWriter @ 0x1800FFD80 (RtlpHpRemoteStackSerializeWriter.c)
 *     RtlCompareExchangePropertyStore @ 0x180101130 (RtlCompareExchangePropertyStore.c)
 *     RtlRemovePropertyStore @ 0x180101590 (RtlRemovePropertyStore.c)
 *     RtlpPushPageDescriptor @ 0x180103A68 (RtlpPushPageDescriptor.c)
 *     RtlpValidateHeapHeaders @ 0x18010728C (RtlpValidateHeapHeaders.c)
 *     RtlWriteNonVolatileMemory @ 0x180108C50 (RtlWriteNonVolatileMemory.c)
 *     RtlGenerate8dot3Name @ 0x180108E60 (RtlGenerate8dot3Name.c)
 *     RtlpGetUserLocaleName @ 0x180109C14 (RtlpGetUserLocaleName.c)
 *     RtlpHeapTrkReportResult @ 0x18010B400 (RtlpHeapTrkReportResult.c)
 *     RtlpHeapTrkTrackStack @ 0x18010B870 (RtlpHeapTrkTrackStack.c)
 *     RtlRemoteCall @ 0x18010BCB0 (RtlRemoteCall.c)
 *     RtlpStdLogCapturedStackTrace @ 0x18010E5A8 (RtlpStdLogCapturedStackTrace.c)
 *     RtlSetFeatureConfigurations @ 0x18010E700 (RtlSetFeatureConfigurations.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x18010F5E4 (RtlpTraceDatabaseInternalAdd.c)
 *     RtlpMuiRegDupLanguageConfigList @ 0x180111178 (RtlpMuiRegDupLanguageConfigList.c)
 *     RtlpMuiRegLoadLicInformation @ 0x180111F70 (RtlpMuiRegLoadLicInformation.c)
 *     RtlpMuiRegResizeStringPool @ 0x1801128F8 (RtlpMuiRegResizeStringPool.c)
 *     RtlpHpStackTraceEventWriter @ 0x180115E60 (RtlpHpStackTraceEventWriter.c)
 *     RtlpRegisterStackTrace @ 0x180117A64 (RtlpRegisterStackTrace.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x180118054 (RtlpHpTagQueryHeapsRemote.c)
 *     LZNT1CompressChunk @ 0x180118B30 (LZNT1CompressChunk.c)
 *     RtlDecompressBufferLZNT1 @ 0x1801190C0 (RtlDecompressBufferLZNT1.c)
 *     RtlDecompressFragmentLZNT1 @ 0x180119260 (RtlDecompressFragmentLZNT1.c)
 *     RtlpHpReallocMove @ 0x18011FA24 (RtlpHpReallocMove.c)
 *     RtlpHpLargeReAlloc @ 0x18011FE14 (RtlpHpLargeReAlloc.c)
 *     MD4Update @ 0x180121AD0 (MD4Update.c)
 *     EtwTraceEventInstance @ 0x180122090 (EtwTraceEventInstance.c)
 *     EtwpTraceUmMessage @ 0x18012280C (EtwpTraceUmMessage.c)
 *     EtwpAddBinaryInfoEvents @ 0x180122D84 (EtwpAddBinaryInfoEvents.c)
 *     EtwpAddEventToBuffer @ 0x18012302C (EtwpAddEventToBuffer.c)
 *     EtwpTrackBinaryForSession @ 0x180123458 (EtwpTrackBinaryForSession.c)
 *     EtwpTrackDebugIdForSession @ 0x180123634 (EtwpTrackDebugIdForSession.c)
 *     EtwpWriteBufferCompressed @ 0x18012380C (EtwpWriteBufferCompressed.c)
 *     TpSetDefaultPoolCpuSets @ 0x180123C28 (TpSetDefaultPoolCpuSets.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x180128020 (RtlpStackDbSegmentFindOrCreate.c)
 *     QueryRegistryValue @ 0x1801290E0 (QueryRegistryValue.c)
 *     RtlpFcQueryAllFeatureUsageSubscriptionNotificationsFromBufferSet @ 0x18012A0B4 (RtlpFcQueryAllFeatureUsageSubscriptionNotificationsFromBufferSet.c)
 *     RtlpFcQueryAllFeatureConfigurationsFromBuffers @ 0x18012A14C (RtlpFcQueryAllFeatureConfigurationsFromBuffers.c)
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
