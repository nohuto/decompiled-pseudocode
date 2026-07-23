/*
 * XREFs of LdrpLogInternal @ 0x180026C30
 * Callers:
 *     LdrpWaitForInitializationComplete @ 0x180002CDC (LdrpWaitForInitializationComplete.c)
 *     LdrpInitializeTls @ 0x1800042A0 (LdrpInitializeTls.c)
 *     LdrpDoPostSnapWork @ 0x1800044C0 (LdrpDoPostSnapWork.c)
 *     LdrpReportError @ 0x18000C07C (LdrpReportError.c)
 *     LdrpProcessWork @ 0x1800112B8 (LdrpProcessWork.c)
 *     LdrpPreprocessDllName @ 0x1800196B0 (LdrpPreprocessDllName.c)
 *     LdrpGetProcedureAddress @ 0x180022CD0 (LdrpGetProcedureAddress.c)
 *     LdrpHandleProtectedDelayload @ 0x180023120 (LdrpHandleProtectedDelayload.c)
 *     LdrpSnapModule @ 0x180023EA0 (LdrpSnapModule.c)
 *     LdrpLoadDependentModuleInternal @ 0x1800251E0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpLoadDllInternal @ 0x180028CA4 (LdrpLoadDllInternal.c)
 *     LdrpAllocateTls @ 0x1800295AC (LdrpAllocateTls.c)
 *     LdrpCallTlsInitializers @ 0x1800297D4 (LdrpCallTlsInitializers.c)
 *     LdrGetDllHandleEx @ 0x18002A220 (LdrGetDllHandleEx.c)
 *     LdrLoadDll @ 0x18002A6D0 (LdrLoadDll.c)
 *     LdrpResolveDllName @ 0x18002A874 (LdrpResolveDllName.c)
 *     LdrpFindLoadedDllInternal @ 0x18002AECC (LdrpFindLoadedDllInternal.c)
 *     LdrpInitializeDllPath @ 0x18002B064 (LdrpInitializeDllPath.c)
 *     LdrResolveDelayLoadedAPI @ 0x18002BE90 (LdrResolveDelayLoadedAPI.c)
 *     LdrpFindKnownDll @ 0x18002C3C4 (LdrpFindKnownDll.c)
 *     LdrpMinimalMapModule @ 0x18002C524 (LdrpMinimalMapModule.c)
 *     LdrpCompleteMapModule @ 0x18002CD30 (LdrpCompleteMapModule.c)
 *     LdrpPrepareModuleForExecution @ 0x18002DAD8 (LdrpPrepareModuleForExecution.c)
 *     LdrpSearchPath @ 0x18002DEA4 (LdrpSearchPath.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18002E26C (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpDynamicShimModule @ 0x18002E624 (LdrpDynamicShimModule.c)
 *     LdrpSendPostSnapNotifications @ 0x18002ED90 (LdrpSendPostSnapNotifications.c)
 *     LdrShutdownProcess @ 0x1800514A0 (LdrShutdownProcess.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x18006AC64 (LdrpWriteBackProtectedDelayLoad.c)
 *     LdrpUnloadNode @ 0x18006B520 (LdrpUnloadNode.c)
 *     LdrpProcessDetachNode @ 0x18006B9F4 (LdrpProcessDetachNode.c)
 *     LdrpInitializeNode @ 0x18006D4F4 (LdrpInitializeNode.c)
 *     LdrpMergeNodes @ 0x18006F578 (LdrpMergeNodes.c)
 *     LdrpDetectDetour @ 0x180071780 (LdrpDetectDetour.c)
 *     LdrpFindDllActivationContext @ 0x180071BB0 (LdrpFindDllActivationContext.c)
 *     _LdrpInitialize @ 0x1800745DC (_LdrpInitialize.c)
 *     LdrpThreadTokenSetImpersonationToken @ 0x180077C48 (LdrpThreadTokenSetImpersonationToken.c)
 *     LdrpThreadTokenUnsetMainThreadToken @ 0x180077CAC (LdrpThreadTokenUnsetMainThreadToken.c)
 *     LdrpThreadTokenSetMainThreadToken @ 0x180077D08 (LdrpThreadTokenSetMainThreadToken.c)
 *     LdrpInitShimEngine @ 0x1800797C8 (LdrpInitShimEngine.c)
 *     LdrpGetShimEngineInterface @ 0x180079AA8 (LdrpGetShimEngineInterface.c)
 *     LdrpLoadShimEngine @ 0x180079E58 (LdrpLoadShimEngine.c)
 *     LdrpInitializeShimDllDependencies @ 0x18007A070 (LdrpInitializeShimDllDependencies.c)
 *     LdrpComputeLazyDllPath @ 0x18007AF84 (LdrpComputeLazyDllPath.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x18007EE30 (LdrpInitializeNtdllDataTableEntry.c)
 *     LdrpInitializeImportRedirection @ 0x180084FE4 (LdrpInitializeImportRedirection.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x180085A44 (LdrpInitializePerUserWindowsDirectory.c)
 *     LdrpRelocateImage @ 0x180086268 (LdrpRelocateImage.c)
 *     LdrpLoadWow64 @ 0x180086520 (LdrpLoadWow64.c)
 *     LdrpRedirectDelayloadFailure @ 0x180086B80 (LdrpRedirectDelayloadFailure.c)
 *     LdrGetKnownDllSectionHandle @ 0x180087120 (LdrGetKnownDllSectionHandle.c)
 *     LdrpInitializationFailure @ 0x18008ACF0 (LdrpInitializationFailure.c)
 *     LdrpLoadPatchImage @ 0x1800D9DC0 (LdrpLoadPatchImage.c)
 *     LdrpProtectAndRelocateImage @ 0x1800DC6A4 (LdrpProtectAndRelocateImage.c)
 *     LdrInitShimEngineDynamic @ 0x1800DC930 (LdrInitShimEngineDynamic.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800DCC84 (LdrpGetProcApphelpCheckModule.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800DCEA8 (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpInitializeExecutionOptions @ 0x1800DD3AC (LdrpInitializeExecutionOptions.c)
 *     LdrpInitializeProcess @ 0x1800DDBD0 (LdrpInitializeProcess.c)
 *     LdrpInitializeProcessHeap @ 0x1800DFB48 (LdrpInitializeProcessHeap.c)
 *     LdrpInitializeProcessWrapperFilter @ 0x1800DFD8C (LdrpInitializeProcessWrapperFilter.c)
 *     LdrpIsSubstringFound @ 0x1800DFE20 (LdrpIsSubstringFound.c)
 *     LdrpIsVerifierActivationFilterMatched @ 0x1800DFEE4 (LdrpIsVerifierActivationFilterMatched.c)
 *     LdrpCheckRedirection @ 0x1800E0D7C (LdrpCheckRedirection.c)
 *     LdrpGenericExceptionFilter @ 0x1800E19A8 (LdrpGenericExceptionFilter.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogDbgPrint @ 0x1800D90D0 (LdrpLogDbgPrint.c)
 *     LdrpEtwLogLoaderSnaps @ 0x1800DACB8 (LdrpEtwLogLoaderSnaps.c)
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
