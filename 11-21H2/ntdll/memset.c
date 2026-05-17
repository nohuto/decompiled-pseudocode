/*
 * XREFs of memset @ 0x1800AAE00
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x1800013C0 (RtlQueryProcessDebugInformation.c)
 *     RtlQueryProcessModuleInformation @ 0x180001558 (RtlQueryProcessModuleInformation.c)
 *     EtwpFlushBuffer @ 0x180004614 (EtwpFlushBuffer.c)
 *     TpCheckTerminateWorker @ 0x180004900 (TpCheckTerminateWorker.c)
 *     EtwpWriteToPrivateBuffers @ 0x1800051BC (EtwpWriteToPrivateBuffers.c)
 *     EtwpFreeRegistration @ 0x180006708 (EtwpFreeRegistration.c)
 *     EtwProcessPrivateLoggerRequest @ 0x180006C90 (EtwProcessPrivateLoggerRequest.c)
 *     EtwpAllocateUmGuidEntry @ 0x180007BF8 (EtwpAllocateUmGuidEntry.c)
 *     EtwpAllocateFreeBuffers @ 0x1800083A0 (EtwpAllocateFreeBuffers.c)
 *     EtwpAddLogHeaderToLogFile @ 0x18000851C (EtwpAddLogHeaderToLogFile.c)
 *     EtwpQueryPartitionRegistryInformationUm @ 0x180008FB4 (EtwpQueryPartitionRegistryInformationUm.c)
 *     EtwpGetTimeZoneInformation @ 0x1800092D8 (EtwpGetTimeZoneInformation.c)
 *     RtlpQueryTimeZoneInformationWorker @ 0x180009444 (RtlpQueryTimeZoneInformationWorker.c)
 *     RtlpFindRegTziForCurrentYear @ 0x180009B34 (RtlpFindRegTziForCurrentYear.c)
 *     RtlCheckPortableOperatingSystem @ 0x18000AE10 (RtlCheckPortableOperatingSystem.c)
 *     RtlCreateProcessParametersInternal @ 0x18000C6F0 (RtlCreateProcessParametersInternal.c)
 *     RtlpCopyProcString @ 0x18000CBF0 (RtlpCopyProcString.c)
 *     RtlpSetSecurityObject @ 0x18000E648 (RtlpSetSecurityObject.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x18000ED04 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlpNewSecurityObject @ 0x18000F5FC (RtlpNewSecurityObject.c)
 *     SHA256Final @ 0x180012A6C (SHA256Final.c)
 *     A_SHAFinal @ 0x180012BA0 (A_SHAFinal.c)
 *     EtwpCreateRegGuidsContext @ 0x180015308 (EtwpCreateRegGuidsContext.c)
 *     EtwpSetProviderTraits @ 0x180015628 (EtwpSetProviderTraits.c)
 *     EtwpCheckForPrivatePreEnable @ 0x180016194 (EtwpCheckForPrivatePreEnable.c)
 *     EtwpRegisterProvider @ 0x1800165B8 (EtwpRegisterProvider.c)
 *     TppWorkerThread @ 0x180016A00 (TppWorkerThread.c)
 *     TppCallbackEpilog @ 0x180017620 (TppCallbackEpilog.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x180017958 (TppCallbackCheckThreadAfterCallback.c)
 *     RtlpHpVsContextAllocateInternal @ 0x180019520 (RtlpHpVsContextAllocateInternal.c)
 *     TppCleanupGroupMemberDestroy @ 0x18001C480 (TppCleanupGroupMemberDestroy.c)
 *     RtlDeleteResource @ 0x18001E420 (RtlDeleteResource.c)
 *     RtlpHpSegMgrCommit @ 0x180023B70 (RtlpHpSegMgrCommit.c)
 *     RtlpReAllocateHeap @ 0x180024890 (RtlpReAllocateHeap.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x180029530 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpAllocateHeap @ 0x18002B160 (RtlpAllocateHeap.c)
 *     RtlpSubSegmentInitialize @ 0x18002D530 (RtlpSubSegmentInitialize.c)
 *     RtlpHpLfhSubsegmentInitialize @ 0x18002D8DC (RtlpHpLfhSubsegmentInitialize.c)
 *     RtlpHpReAllocateHeap @ 0x18002DBE0 (RtlpHpReAllocateHeap.c)
 *     RtlCreateHeap @ 0x18002F7E0 (RtlCreateHeap.c)
 *     RtlpHpLfhBucketActivate @ 0x1800307CC (RtlpHpLfhBucketActivate.c)
 *     LdrpGetNewTlsVector @ 0x180030D50 (LdrpGetNewTlsVector.c)
 *     RtlSetBits @ 0x180031140 (RtlSetBits.c)
 *     RtlIpv6StringToAddressW @ 0x180032610 (RtlIpv6StringToAddressW.c)
 *     LdrpCfgProcessLoadConfig @ 0x1800354CC (LdrpCfgProcessLoadConfig.c)
 *     RtlInitializeExtendedContext2 @ 0x180036510 (RtlInitializeExtendedContext2.c)
 *     LdrpInitializeDllPath @ 0x180038594 (LdrpInitializeDllPath.c)
 *     LdrpResolveProcedureAddress @ 0x18003B748 (LdrpResolveProcedureAddress.c)
 *     LdrpHandleProtectedDelayload @ 0x18003BF80 (LdrpHandleProtectedDelayload.c)
 *     LdrpSnapModule @ 0x18003C8C0 (LdrpSnapModule.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x180043148 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     RtlpComputeLangListCheckSum @ 0x180043308 (RtlpComputeLangListCheckSum.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x1800452F0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     sxsisol_SearchActCtxForDllName @ 0x1800458B4 (sxsisol_SearchActCtxForDllName.c)
 *     RtlGetFullPathName_Ustr @ 0x180046BD0 (RtlGetFullPathName_Ustr.c)
 *     RtlpFilterandReplaceConsoleLanguages @ 0x18004D524 (RtlpFilterandReplaceConsoleLanguages.c)
 *     SbSelectProcedure @ 0x18004E920 (SbSelectProcedure.c)
 *     SbpUpdateCacheWithCurrentImpl @ 0x18004EB00 (SbpUpdateCacheWithCurrentImpl.c)
 *     RtlSwitchedVVI @ 0x180051EB0 (RtlSwitchedVVI.c)
 *     RtlReportSilentProcessExit @ 0x1800548C0 (RtlReportSilentProcessExit.c)
 *     RtlpHpLfhContextInitialize @ 0x180054B7C (RtlpHpLfhContextInitialize.c)
 *     RtlpHpSegContextInitialize @ 0x180054F9C (RtlpHpSegContextInitialize.c)
 *     RtlpHpVsContextInitialize @ 0x1800551A8 (RtlpHpVsContextInitialize.c)
 *     RtlpHpHeapAllocate @ 0x180055288 (RtlpHpHeapAllocate.c)
 *     RtlpCreateWnfNameSubscription @ 0x180059EFC (RtlpCreateWnfNameSubscription.c)
 *     RtlpCreateWnfUserSubscription @ 0x18005A194 (RtlpCreateWnfUserSubscription.c)
 *     ?ChunkAllocate@?$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SAPEAURTL_BINARY_ARRAY_CHUNK@1@PEAU1@K@Z @ 0x18005B76C (-ChunkAllocate@-$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SAPEAURTL_BINARY_ARRAY_CHUNK@1@PEAU1@K.c)
 *     RtlCompressBufferXpressHuffStandard @ 0x18005C580 (RtlCompressBufferXpressHuffStandard.c)
 *     XpressBuildHuffmanEncodings @ 0x18005D060 (XpressBuildHuffmanEncodings.c)
 *     MD5Final @ 0x18005EB60 (MD5Final.c)
 *     PsspCaptureHandleTrace @ 0x180060AC4 (PsspCaptureHandleTrace.c)
 *     PssNtCaptureSnapshot @ 0x180060B70 (PssNtCaptureSnapshot.c)
 *     PsspCaptureIptTrace @ 0x180061040 (PsspCaptureIptTrace.c)
 *     PsspDumpThread @ 0x180061500 (PsspDumpThread.c)
 *     PsspWalkHandleTable @ 0x180061930 (PsspWalkHandleTable.c)
 *     PsspCaptureAuxiliaryPages @ 0x180061BDC (PsspCaptureAuxiliaryPages.c)
 *     RtlCreateAtomTableEx @ 0x180062170 (RtlCreateAtomTableEx.c)
 *     RtlpFreeHandleForAtom @ 0x1800624D8 (RtlpFreeHandleForAtom.c)
 *     RtlFreeHandle @ 0x180062530 (RtlFreeHandle.c)
 *     RtlpInsertStringAtom @ 0x180062C20 (RtlpInsertStringAtom.c)
 *     RtlpGetMUIRedirectedFilePath @ 0x180063B0C (RtlpGetMUIRedirectedFilePath.c)
 *     PsspCaptureVaSpaceInformation2 @ 0x18006413C (PsspCaptureVaSpaceInformation2.c)
 *     RtlActivateActivationContextEx @ 0x1800687C0 (RtlActivateActivationContextEx.c)
 *     RtlCreateActivationContext @ 0x180068FC0 (RtlCreateActivationContext.c)
 *     RtlpInitializeAssemblyStorageMap @ 0x180069114 (RtlpInitializeAssemblyStorageMap.c)
 *     RtlpCopyXStateChunk @ 0x18006C1C4 (RtlpCopyXStateChunk.c)
 *     _RtlpMuiRegAddNeutralToInstalled @ 0x18006F480 (_RtlpMuiRegAddNeutralToInstalled.c)
 *     RtlpTpImpersonate @ 0x1800714A0 (RtlpTpImpersonate.c)
 *     RtlMakeSelfRelativeSD @ 0x180071FE0 (RtlMakeSelfRelativeSD.c)
 *     LdrpInitializeShimDllDependencies @ 0x180072B40 (LdrpInitializeShimDllDependencies.c)
 *     RtlStringCbPrintfExW @ 0x180073E68 (RtlStringCbPrintfExW.c)
 *     RtlIntegerToChar @ 0x180074090 (RtlIntegerToChar.c)
 *     TppPoolUpdateNodeRelation @ 0x180074CE4 (TppPoolUpdateNodeRelation.c)
 *     RtlpFcUpdateLocalConfiguration @ 0x1800763A8 (RtlpFcUpdateLocalConfiguration.c)
 *     RtlpFcBufferManagerUpdateBuffers @ 0x180076670 (RtlpFcBufferManagerUpdateBuffers.c)
 *     RtlpGetTokenNamedObjectPath @ 0x180076B98 (RtlpGetTokenNamedObjectPath.c)
 *     CsrpConnectToServer @ 0x180079664 (CsrpConnectToServer.c)
 *     CsrAllocateCaptureBuffer @ 0x180079ED0 (CsrAllocateCaptureBuffer.c)
 *     RtlClearBits @ 0x18007A830 (RtlClearBits.c)
 *     CompatCachepLookupCdb @ 0x18007AEC0 (CompatCachepLookupCdb.c)
 *     LdrpInitializeInternal @ 0x18007B218 (LdrpInitializeInternal.c)
 *     RtlpZeroBlockFromOffset @ 0x18007B9F4 (RtlpZeroBlockFromOffset.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x18007D2CC (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhBucketAllocateSlot @ 0x18007D46C (RtlpHpLfhBucketAllocateSlot.c)
 *     RtlpQueryExtendedHeapInformation @ 0x18007D9C8 (RtlpQueryExtendedHeapInformation.c)
 *     RtlpQueryExtendedInformationAllHeaps @ 0x18007DB40 (RtlpQueryExtendedInformationAllHeaps.c)
 *     LdrpQuerySxSMUIFile @ 0x18007E478 (LdrpQuerySxSMUIFile.c)
 *     RtlpCreateHashTable @ 0x18007EB28 (RtlpCreateHashTable.c)
 *     RtlpLocateActivationContextSectionForQuery @ 0x18007F5E8 (RtlpLocateActivationContextSectionForQuery.c)
 *     RtlClearAllBits @ 0x18007FCF0 (RtlClearAllBits.c)
 *     RtlpDeleteData @ 0x18007FDA0 (RtlpDeleteData.c)
 *     RtlCreateMemoryBlockLookaside @ 0x180080BB0 (RtlCreateMemoryBlockLookaside.c)
 *     RtlSidHashInitialize @ 0x180081820 (RtlSidHashInitialize.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x1800818E0 (RtlQueryActivationContextApplicationSettings.c)
 *     LdrLoadAlternateResourceModule @ 0x180081AE0 (LdrLoadAlternateResourceModule.c)
 *     RtlZeroMemory @ 0x180082CA0 (RtlZeroMemory.c)
 *     RtlpQueryExtendedInformationHeap @ 0x1800833B0 (RtlpQueryExtendedInformationHeap.c)
 *     RtlpInitializeWnf @ 0x180083980 (RtlpInitializeWnf.c)
 *     TpAllocJobNotification @ 0x180085B30 (TpAllocJobNotification.c)
 *     EtwpShutdownPrivateLoggers @ 0x180085D68 (EtwpShutdownPrivateLoggers.c)
 *     RtlIpv6StringToAddressA @ 0x180085ED0 (RtlIpv6StringToAddressA.c)
 *     sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success @ 0x1800879F8 (sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success.c)
 *     RtlInitializeGenericTableAvl @ 0x180088630 (RtlInitializeGenericTableAvl.c)
 *     RtlVerifyVersionInfo @ 0x180089A50 (RtlVerifyVersionInfo.c)
 *     LdrpRemoveAlternateModuleCacheItem @ 0x18008A728 (LdrpRemoveAlternateModuleCacheItem.c)
 *     WerpGlobalFlagsForProcess @ 0x18008A834 (WerpGlobalFlagsForProcess.c)
 *     LdrpRedirectDelayloadFailure @ 0x18008AB6C (LdrpRedirectDelayloadFailure.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x18008BD0C (PsspDuplicateSnapshotLocalToRemote.c)
 *     PssNtValidateDescriptor @ 0x18008C290 (PssNtValidateDescriptor.c)
 *     RtlpCreateUserProcess @ 0x18008C900 (RtlpCreateUserProcess.c)
 *     RtlInitializeCorrelationVector @ 0x18008D1B0 (RtlInitializeCorrelationVector.c)
 *     RtlConnectToSm @ 0x18008DBB0 (RtlConnectToSm.c)
 *     RtlEraseUnicodeString @ 0x18008E2D0 (RtlEraseUnicodeString.c)
 *     EtwpTraceUmEvent @ 0x18008EA94 (EtwpTraceUmEvent.c)
 *     RtlpMUIEnumerateFolder @ 0x18008F6D4 (RtlpMUIEnumerateFolder.c)
 *     RtlExpandHashTable @ 0x180090200 (RtlExpandHashTable.c)
 *     EtwpDisableTraceProviders @ 0x180090A24 (EtwpDisableTraceProviders.c)
 *     RtlDestroyAtomTable @ 0x180091C70 (RtlDestroyAtomTable.c)
 *     Normalization__LoadTables @ 0x180092A2C (Normalization__LoadTables.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x180092EB0 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlpLoadInstallLanguageFallback @ 0x180093130 (RtlpLoadInstallLanguageFallback.c)
 *     memcpy_s @ 0x18009EF80 (memcpy_s.c)
 *     _output_s @ 0x18009FB74 (_output_s.c)
 *     _safecrt_wctomb_s @ 0x1800A0408 (_safecrt_wctomb_s.c)
 *     _woutput_s @ 0x1800A1520 (_woutput_s.c)
 *     ReadStringDelimited_1 @ 0x1800A20D0 (ReadStringDelimited_1.c)
 *     RtlGetImageFileMachines @ 0x1800A30A0 (RtlGetImageFileMachines.c)
 *     RtlInitializeHeapManager @ 0x1800B0C34 (RtlInitializeHeapManager.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800D6600 (LdrAppxHandleIntegrityFailure.c)
 *     RtlEnableThreadProfiling @ 0x1800D6ED0 (RtlEnableThreadProfiling.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1800D9208 (RtlStringExHandleOtherFlagsW.c)
 *     LdrpEtwLogLoaderSnaps @ 0x1800DAF24 (LdrpEtwLogLoaderSnaps.c)
 *     LdrpLogEtwEvent @ 0x1800DB4E4 (LdrpLogEtwEvent.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x1800DBB80 (LdrpLogIntegrityContinuityTelemetry.c)
 *     RtlStringExHandleFillBehindNullW @ 0x1800DC654 (RtlStringExHandleFillBehindNullW.c)
 *     LdrpConstructModernAppKeyName @ 0x1800DCA30 (LdrpConstructModernAppKeyName.c)
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 *     LdrpInitializeProcessHeap @ 0x1800DFF28 (LdrpInitializeProcessHeap.c)
 *     RtlQueryProcessHeapInformation @ 0x1800E36C0 (RtlQueryProcessHeapInformation.c)
 *     RtlpQueryProcessEnumHeapsRoutine @ 0x1800E44D0 (RtlpQueryProcessEnumHeapsRoutine.c)
 *     AVrfpParseVerifierDllsString @ 0x1800E6638 (AVrfpParseVerifierDllsString.c)
 *     AVrfpSnapDllImports @ 0x1800E6998 (AVrfpSnapDllImports.c)
 *     AvrfMiniLoadDll @ 0x1800E6C5C (AvrfMiniLoadDll.c)
 *     ReportExceptionInternal @ 0x1800E7D68 (ReportExceptionInternal.c)
 *     RtlReportExceptionEx @ 0x1800E7F70 (RtlReportExceptionEx.c)
 *     SendMessageToWERService @ 0x1800E88CC (SendMessageToWERService.c)
 *     WerpAllocateAndInitializeSid @ 0x1800E8CEC (WerpAllocateAndInitializeSid.c)
 *     WerpCreateCrashDataSection @ 0x1800E8E94 (WerpCreateCrashDataSection.c)
 *     LdrpMUIEtwOutput @ 0x1800EC634 (LdrpMUIEtwOutput.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800ECBA0 (RtlQueryImageMitigationPolicy.c)
 *     RtlpQueryEafPlusModuleList @ 0x1800EEB28 (RtlpQueryEafPlusModuleList.c)
 *     LdrpResSearchResourceHandle @ 0x1800EF7DC (LdrpResSearchResourceHandle.c)
 *     RtlNormalizeSecurityDescriptor @ 0x1800F17C0 (RtlNormalizeSecurityDescriptor.c)
 *     RtlAddResourceAttributeAce @ 0x1800F44A0 (RtlAddResourceAttributeAce.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1800F4C50 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpConvertRelativeToAbsoluteSecurityAttribute @ 0x1800F4FC0 (RtlpConvertRelativeToAbsoluteSecurityAttribute.c)
 *     RtlClearAllBitsEx @ 0x1800F67A0 (RtlClearAllBitsEx.c)
 *     RtlClearBitsEx @ 0x1800F67F0 (RtlClearBitsEx.c)
 *     RtlSetBitsEx @ 0x1800F8710 (RtlSetBitsEx.c)
 *     RtlLargeIntegerToChar @ 0x1800F8D70 (RtlLargeIntegerToChar.c)
 *     RtlCreateBootStatusDataFile @ 0x1800F91B0 (RtlCreateBootStatusDataFile.c)
 *     RtlRestoreBootStatusDefaults @ 0x1800F94F0 (RtlRestoreBootStatusDefaults.c)
 *     RtlConvertLCIDToString @ 0x1800FA2A0 (RtlConvertLCIDToString.c)
 *     RtlUnicodeStringToLcid @ 0x1800FA9A8 (RtlUnicodeStringToLcid.c)
 *     RtlpSetInstallLanguage @ 0x1800FBDB0 (RtlpSetInstallLanguage.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x1800FF0F0 (RtlpExtendedHeapInformationWorkerThread.c)
 *     RtlpHpOverrideGCInterval @ 0x1800FFC1C (RtlpHpOverrideGCInterval.c)
 *     RtlpInitializeMap @ 0x1801038A0 (RtlpInitializeMap.c)
 *     RtlFillMemory @ 0x180108A50 (RtlFillMemory.c)
 *     RtlFillNonVolatileMemory @ 0x180108A70 (RtlFillNonVolatileMemory.c)
 *     RtlInitializeContext @ 0x18010BB80 (RtlInitializeContext.c)
 *     RtlInitializeExceptionLog @ 0x18010D4B8 (RtlInitializeExceptionLog.c)
 *     RtlStdInitializeStackDatabase @ 0x18010DD90 (RtlStdInitializeStackDatabase.c)
 *     RtlTraceDatabaseCreate @ 0x18010F1A0 (RtlTraceDatabaseCreate.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x1801135A0 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x180113B9C (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateInstalled @ 0x18011406C (_RtlpMuiRegValidateInstalled.c)
 *     RtlpHpHeapHandleError @ 0x180115130 (RtlpHpHeapHandleError.c)
 *     RtlpHpRaiseFatalLimitError @ 0x1801153DC (RtlpHpRaiseFatalLimitError.c)
 *     RtlpHpStackTraceConfig @ 0x180115C20 (RtlpHpStackTraceConfig.c)
 *     RtlpHpStackTraceEnable @ 0x180115CE8 (RtlpHpStackTraceEnable.c)
 *     RtlpHpStackTraceEtwCallback @ 0x180115D90 (RtlpHpStackTraceEtwCallback.c)
 *     RtlpHpStackTraceEventWriter @ 0x180115E60 (RtlpHpStackTraceEventWriter.c)
 *     RtlpHpStackTraceSerializeRemote @ 0x1801163A8 (RtlpHpStackTraceSerializeRemote.c)
 *     RtlpInitializeStackTraceLog @ 0x180116598 (RtlpInitializeStackTraceLog.c)
 *     RtlpLogHeapCommit @ 0x180116BD4 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapDecommit @ 0x180116DB8 (RtlpLogHeapDecommit.c)
 *     RtlpLogHeapSubSegmentAlloc @ 0x1801171EC (RtlpLogHeapSubSegmentAlloc.c)
 *     RtlpLogHeapSubSegmentAllocCached @ 0x18011729C (RtlpLogHeapSubSegmentAllocCached.c)
 *     RtlpLogHeapSubSegmentFree @ 0x18011734C (RtlpLogHeapSubSegmentFree.c)
 *     RtlpLogHeapSubSegmentFreeCached @ 0x1801173FC (RtlpLogHeapSubSegmentFreeCached.c)
 *     RtlpLogHeapSubSegmentInitialize @ 0x1801174AC (RtlpLogHeapSubSegmentInitialize.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x180118054 (RtlpHpTagQueryHeapsRemote.c)
 *     RtlDecompressBufferLZNT1 @ 0x1801190C0 (RtlDecompressBufferLZNT1.c)
 *     Xp10BuildAndWriteHuffmanEncodings @ 0x1801197E8 (Xp10BuildAndWriteHuffmanEncodings.c)
 *     Xp10BuildAndWriteHuffmanTables @ 0x180119BB4 (Xp10BuildAndWriteHuffmanTables.c)
 *     Xp10BuildHuffmanEncodings @ 0x18011A84C (Xp10BuildHuffmanEncodings.c)
 *     Xp10CompressBuffer @ 0x18011AC98 (Xp10CompressBuffer.c)
 *     Xp10ReadAndDecodeHuffmanTables @ 0x18011CB08 (Xp10ReadAndDecodeHuffmanTables.c)
 *     RtlCompressBufferXpressHuffMax @ 0x18011DA9C (RtlCompressBufferXpressHuffMax.c)
 *     RtlCompressBufferXpressLzMax @ 0x18011E270 (RtlCompressBufferXpressLzMax.c)
 *     RtlHpHeapManagerInitialize @ 0x18011F400 (RtlHpHeapManagerInitialize.c)
 *     RtlpInitializeLfhBitmapData @ 0x18011FBB4 (RtlpInitializeLfhBitmapData.c)
 *     MD4Final @ 0x180121440 (MD4Final.c)
 *     TppRaiseInvalidParameter @ 0x180124388 (TppRaiseInvalidParameter.c)
 *     SbpTraceContextUpdate @ 0x180125524 (SbpTraceContextUpdate.c)
 *     PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES @ 0x180125F14 (PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES.c)
 *     PsspWalkInfoClass_PSS_WALK_HANDLES @ 0x180126040 (PsspWalkInfoClass_PSS_WALK_HANDLES.c)
 *     PsspWalkInfoClass_PSS_WALK_THREADS @ 0x1801261C0 (PsspWalkInfoClass_PSS_WALK_THREADS.c)
 *     PsspWalkInfoClass_PSS_WALK_VA_SPACE @ 0x180126348 (PsspWalkInfoClass_PSS_WALK_VA_SPACE.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x1801264F8 (PsspDuplicateSnapshotRemoteToRemote.c)
 *     RtlpStackDbEntryCreate @ 0x180127DBC (RtlpStackDbEntryCreate.c)
 *     _BuildCumulativeOverlayFilePath @ 0x180128E24 (_BuildCumulativeOverlayFilePath.c)
 * Callees:
 *     <none>
 */

void *__cdecl memset(void *_RCX, int Val, size_t Size)
{
  void *result; // rax
  __int64 v5; // rdx
  __m128 v6; // xmm0
  char *v7; // r8
  char *v10; // r9
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r8
  __int64 *v19; // r9
  size_t v20; // r8
  _WORD *v21; // r9
  size_t v22; // r8
  char *v23; // r8
  __m128 *v24; // rdx
  _OWORD *v25; // r9
  size_t v26; // r8
  __m128 *v27; // r9

  result = _RCX;
  v5 = 0x101010101010101LL * (unsigned __int8)Val;
  if ( Size >= 0x20 )
  {
    v6 = _mm_movelh_ps((__m128)(unsigned __int64)v5, (__m128)(unsigned __int64)v5);
    if ( (_isa_info & 4) != 0 )
    {
      if ( Size < 0x80 )
      {
        __asm { vinsertf128 ymm0, ymm0, xmm0, 1 }
        _R9 = (char *)_RCX + Size - 32;
        __asm { vmovups ymmword ptr [rcx], ymm0 }
        _R8 = (Size & 0x40) >> 1;
        __asm
        {
          vmovups ymmword ptr [r9], ymm0
          vmovups ymmword ptr [rcx+r8], ymm0
        }
        _R8 = -(__int64)_R8;
        __asm
        {
          vmovups ymmword ptr [r9+r8], ymm0
          vzeroupper
        }
        return result;
      }
      if ( (_isa_info & 2) == 0 || Size < 0x7D0 )
      {
        v7 = (char *)_RCX + Size;
        __asm { vinsertf128 ymm0, ymm0, xmm0, 1 }
        _RDX = v7 - 32;
        __asm { vmovups ymmword ptr [rcx], ymm0 }
        v10 = v7 - 96;
        _RCX = ((unsigned __int64)_RCX + 32) & 0xFFFFFFFFFFFFFFE0uLL;
        v12 = (unsigned __int64)&v7[-_RCX];
        if ( v12 >= 0x80 )
        {
          v13 = v12 >> 7;
          do
          {
            __asm
            {
              vmovaps ymmword ptr [rcx], ymm0
              vmovaps ymmword ptr [rcx+20h], ymm0
            }
            _RCX += 128LL;
            --v13;
            __asm
            {
              vmovaps ymmword ptr [rcx-40h], ymm0
              vmovaps ymmword ptr [rcx-20h], ymm0
            }
          }
          while ( v13 );
        }
        _R9 = (unsigned __int64)v10 & 0xFFFFFFFFFFFFFFE0uLL;
        __asm
        {
          vmovups ymmword ptr [rdx], ymm0
          vmovaps ymmword ptr [r9], ymm0
          vmovaps ymmword ptr [r9+20h], ymm0
          vmovaps ymmword ptr [r9+40h], ymm0
          vzeroupper
        }
        return result;
      }
      return (void *)_memset_repmovs();
    }
    if ( Size >= 0x40 )
    {
      if ( (_isa_info & 2) != 0 && Size >= 0x320 )
        return (void *)_memset_repmovs();
      *(__m128 *)_RCX = v6;
      v23 = (char *)_RCX + Size;
      _RCX = (void *)(((unsigned __int64)_RCX + 16) & 0xFFFFFFFFFFFFFFF0uLL);
      Size = v23 - (_BYTE *)_RCX;
      if ( Size >= 0x40 )
      {
        v24 = (__m128 *)((char *)_RCX + Size - 16);
        v25 = (_OWORD *)(((unsigned __int64)_RCX + Size - 48) & 0xFFFFFFFFFFFFFFF0uLL);
        v26 = Size >> 6;
        do
        {
          *(__m128 *)_RCX = v6;
          *((__m128 *)_RCX + 1) = v6;
          _RCX = (char *)_RCX + 64;
          --v26;
          *((__m128 *)_RCX - 2) = v6;
          *((__m128 *)_RCX - 1) = v6;
        }
        while ( v26 );
        *v25 = v6;
        v25[1] = v6;
        v25[2] = v6;
        *v24 = v6;
        return result;
      }
    }
    v27 = (__m128 *)((char *)_RCX + Size - 32);
    *(__m128 *)_RCX = v6;
    *((__m128 *)_RCX + 1) = v6;
    *v27 = v6;
    v27[1] = v6;
    return result;
  }
  if ( Size < 8 )
  {
    if ( Size < 2 )
    {
      if ( Size )
        *(_BYTE *)_RCX = v5;
    }
    else
    {
      v21 = (char *)_RCX + Size - 2;
      *(_WORD *)_RCX = v5;
      v22 = (Size & 4) >> 1;
      *v21 = v5;
      *(_WORD *)((char *)_RCX + v22) = v5;
      *(_WORD *)((char *)v21 - v22) = v5;
    }
  }
  else
  {
    v19 = (__int64 *)((char *)_RCX + Size - 8);
    *(_QWORD *)_RCX = v5;
    v20 = (Size & 0x10) >> 1;
    *v19 = v5;
    *(_QWORD *)((char *)_RCX + v20) = v5;
    *(__int64 *)((char *)v19 - v20) = v5;
  }
  return result;
}
