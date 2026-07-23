/*
 * XREFs of LdrpLogInternal @ 0x180026D80
 * Callers:
 *     LdrpWaitForInitializationComplete @ 0x180002CAC (LdrpWaitForInitializationComplete.c)
 *     LdrpInitializeTls @ 0x180004220 (LdrpInitializeTls.c)
 *     LdrpDoPostSnapWork @ 0x1800044CC (LdrpDoPostSnapWork.c)
 *     LdrpReportError @ 0x18000C29C (LdrpReportError.c)
 *     LdrpProcessWork @ 0x1800114C8 (LdrpProcessWork.c)
 *     LdrpPreprocessDllName @ 0x1800198C0 (LdrpPreprocessDllName.c)
 *     LdrpGetProcedureAddress @ 0x180022DE0 (LdrpGetProcedureAddress.c)
 *     LdrpHandleProtectedDelayload @ 0x180023220 (LdrpHandleProtectedDelayload.c)
 *     LdrpSnapModule @ 0x180023FF0 (LdrpSnapModule.c)
 *     LdrpLoadDependentModuleInternal @ 0x180025330 (LdrpLoadDependentModuleInternal.c)
 *     LdrpLoadDllInternal @ 0x180028E74 (LdrpLoadDllInternal.c)
 *     LdrpAllocateTls @ 0x18002977C (LdrpAllocateTls.c)
 *     LdrpCallTlsInitializers @ 0x1800299A4 (LdrpCallTlsInitializers.c)
 *     LdrGetDllHandleEx @ 0x18002A3F0 (LdrGetDllHandleEx.c)
 *     LdrLoadDll @ 0x18002A8A0 (LdrLoadDll.c)
 *     LdrpResolveDllName @ 0x18002AA44 (LdrpResolveDllName.c)
 *     LdrpFindLoadedDllInternal @ 0x18002B09C (LdrpFindLoadedDllInternal.c)
 *     LdrpInitializeDllPath @ 0x18002B234 (LdrpInitializeDllPath.c)
 *     LdrResolveDelayLoadedAPI @ 0x18002C060 (LdrResolveDelayLoadedAPI.c)
 *     LdrpFindKnownDll @ 0x18002C594 (LdrpFindKnownDll.c)
 *     LdrpMinimalMapModule @ 0x18002C6F4 (LdrpMinimalMapModule.c)
 *     LdrpCompleteMapModule @ 0x18002CF00 (LdrpCompleteMapModule.c)
 *     LdrpPrepareModuleForExecution @ 0x18002DCA8 (LdrpPrepareModuleForExecution.c)
 *     LdrpSearchPath @ 0x18002E074 (LdrpSearchPath.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18002E43C (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpDynamicShimModule @ 0x18002E7F4 (LdrpDynamicShimModule.c)
 *     LdrpSendPostSnapNotifications @ 0x18002EF60 (LdrpSendPostSnapNotifications.c)
 *     LdrShutdownProcess @ 0x180051600 (LdrShutdownProcess.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x18006AC84 (LdrpWriteBackProtectedDelayLoad.c)
 *     LdrpUnloadNode @ 0x18006B540 (LdrpUnloadNode.c)
 *     LdrpProcessDetachNode @ 0x18006B9F8 (LdrpProcessDetachNode.c)
 *     LdrpInitializeNode @ 0x18006D4F4 (LdrpInitializeNode.c)
 *     LdrpMergeNodes @ 0x18006F578 (LdrpMergeNodes.c)
 *     LdrpDetectDetour @ 0x18007145C (LdrpDetectDetour.c)
 *     LdrpFindDllActivationContext @ 0x180071890 (LdrpFindDllActivationContext.c)
 *     _LdrpInitialize @ 0x180073F6C (_LdrpInitialize.c)
 *     LdrpThreadTokenSetImpersonationToken @ 0x1800775D8 (LdrpThreadTokenSetImpersonationToken.c)
 *     LdrpThreadTokenUnsetMainThreadToken @ 0x18007763C (LdrpThreadTokenUnsetMainThreadToken.c)
 *     LdrpThreadTokenSetMainThreadToken @ 0x180077698 (LdrpThreadTokenSetMainThreadToken.c)
 *     LdrpInitShimEngine @ 0x180079158 (LdrpInitShimEngine.c)
 *     LdrpGetShimEngineInterface @ 0x180079438 (LdrpGetShimEngineInterface.c)
 *     LdrpLoadShimEngine @ 0x1800797E8 (LdrpLoadShimEngine.c)
 *     LdrpInitializeShimDllDependencies @ 0x180079A00 (LdrpInitializeShimDllDependencies.c)
 *     LdrpComputeLazyDllPath @ 0x18007A914 (LdrpComputeLazyDllPath.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x18007E7C0 (LdrpInitializeNtdllDataTableEntry.c)
 *     LdrpInitializeImportRedirection @ 0x1800847E4 (LdrpInitializeImportRedirection.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x180085244 (LdrpInitializePerUserWindowsDirectory.c)
 *     LdrpRelocateImage @ 0x180085A68 (LdrpRelocateImage.c)
 *     LdrpLoadWow64 @ 0x180085D20 (LdrpLoadWow64.c)
 *     LdrpRedirectDelayloadFailure @ 0x180086380 (LdrpRedirectDelayloadFailure.c)
 *     LdrGetKnownDllSectionHandle @ 0x180086920 (LdrGetKnownDllSectionHandle.c)
 *     LdrpInitializationFailure @ 0x18008A4F0 (LdrpInitializationFailure.c)
 *     LdrpInitializeProcess @ 0x1800D4658 (LdrpInitializeProcess.c)
 *     LdrpLoadPatchImage @ 0x1800DA410 (LdrpLoadPatchImage.c)
 *     LdrpProtectAndRelocateImage @ 0x1800DCCF4 (LdrpProtectAndRelocateImage.c)
 *     LdrInitShimEngineDynamic @ 0x1800DCF80 (LdrInitShimEngineDynamic.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800DD2D4 (LdrpGetProcApphelpCheckModule.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800DD4F8 (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpInitializeExecutionOptions @ 0x1800DD9FC (LdrpInitializeExecutionOptions.c)
 *     LdrpInitializeProcessHeap @ 0x1800DE81C (LdrpInitializeProcessHeap.c)
 *     LdrpInitializeProcessWrapperFilter @ 0x1800DEA60 (LdrpInitializeProcessWrapperFilter.c)
 *     LdrpIsSubstringFound @ 0x1800DEAF4 (LdrpIsSubstringFound.c)
 *     LdrpIsVerifierActivationFilterMatched @ 0x1800DEBB8 (LdrpIsVerifierActivationFilterMatched.c)
 *     LdrpCheckRedirection @ 0x1800DFA4C (LdrpCheckRedirection.c)
 *     LdrpGenericExceptionFilter @ 0x1800E0678 (LdrpGenericExceptionFilter.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogDbgPrint @ 0x1800D9720 (LdrpLogDbgPrint.c)
 *     LdrpEtwLogLoaderSnaps @ 0x1800DB308 (LdrpEtwLogLoaderSnaps.c)
 */

__int64 LdrpLogInternal(_DWORD a1, int a2, __int64 a3, unsigned int a4, const char *a5, ...)
{
  _DWORD *v7; // rbx
  _DWORD *SharedData; // rcx
  __int64 v9; // rcx
  int v10; // ecx
  __int64 result; // rax
  char *v12; // rcx
  va_list va; // [rsp+98h] [rbp+30h] BYREF

  va_start(va, a5);
  v7 = (_DWORD *)((char *)&LdrpLogLevelStateTable + 16 * (int)a4);
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v9 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v9 = 2147353476LL;
  if ( *(_BYTE *)v9 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v12 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
    if ( *v12 < 0 )
      LdrpEtwLogLoaderSnaps(a3, a4, a5, (__int64 *)va);
  }
  v10 = LdrpDebugFlags;
  result = *v7 | 1u;
  if ( ((unsigned int)result & LdrpDebugFlags) != 0 )
  {
    result = LdrpLogDbgPrint(LdrpDebugFlags, a2, a3, a4, (__int64)a5, (__int64)va);
    v10 = LdrpDebugFlags;
  }
  if ( (v10 & v7[1]) != 0 )
    __debugbreak();
  return result;
}
