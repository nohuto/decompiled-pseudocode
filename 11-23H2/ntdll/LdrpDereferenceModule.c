/*
 * XREFs of LdrpDereferenceModule @ 0x18002251C
 * Callers:
 *     LdrFindEntryForAddress @ 0x180008A90 (LdrFindEntryForAddress.c)
 *     LdrpFindLoadedDll @ 0x180016164 (LdrpFindLoadedDll.c)
 *     LdrGetProcedureAddressForCaller @ 0x180021FB0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpResolveProcedureAddress @ 0x180022920 (LdrpResolveProcedureAddress.c)
 *     LdrpHandleProtectedDelayload @ 0x180023120 (LdrpHandleProtectedDelayload.c)
 *     LdrpLoadDependentModuleInternal @ 0x1800251E0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpLoadDllInternal @ 0x180028CA4 (LdrpLoadDllInternal.c)
 *     LdrpFastpthReloadedDll @ 0x180029988 (LdrpFastpthReloadedDll.c)
 *     LdrGetDllHandleEx @ 0x18002A220 (LdrGetDllHandleEx.c)
 *     LdrLoadDll @ 0x18002A6D0 (LdrLoadDll.c)
 *     LdrResolveDelayLoadedAPI @ 0x18002BE90 (LdrResolveDelayLoadedAPI.c)
 *     LdrpMapDllWithSectionHandle @ 0x18002C7AC (LdrpMapDllWithSectionHandle.c)
 *     LdrAddRefDll @ 0x18002D240 (LdrAddRefDll.c)
 *     LdrUnloadDll @ 0x18002D3E0 (LdrUnloadDll.c)
 *     LdrGetDllFullName @ 0x18002D5E0 (LdrGetDllFullName.c)
 *     LdrDisableThreadCalloutsForDll @ 0x18002DC90 (LdrDisableThreadCalloutsForDll.c)
 *     LdrGetDllHandleByMapping @ 0x18002DCF0 (LdrGetDllHandleByMapping.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18002E26C (LdrpFindOrPrepareLoadingModule.c)
 *     RtlQueryInformationActivationContext @ 0x180033520 (RtlQueryInformationActivationContext.c)
 *     LdrpFreeReplacedModule @ 0x180067B24 (LdrpFreeReplacedModule.c)
 *     LdrpUnloadNode @ 0x18006B520 (LdrpUnloadNode.c)
 *     LdrpLoadContextReplaceModule @ 0x180073404 (LdrpLoadContextReplaceModule.c)
 *     LdrGetDllHandleByName @ 0x180077840 (LdrGetDllHandleByName.c)
 *     LdrpInitShimEngine @ 0x1800797C8 (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x180079E58 (LdrpLoadShimEngine.c)
 *     LdrpLoadWow64 @ 0x180086520 (LdrpLoadWow64.c)
 *     LdrpCorInitialize @ 0x18008E254 (LdrpCorInitialize.c)
 *     LdrpCleanupEnclaveLoadState @ 0x1800D83F8 (LdrpCleanupEnclaveLoadState.c)
 *     LdrHotPatchNotify @ 0x1800D9440 (LdrHotPatchNotify.c)
 *     LdrIsModuleSxsRedirected @ 0x1800D95B0 (LdrIsModuleSxsRedirected.c)
 *     LdrQueryModuleServiceTags @ 0x1800D96F0 (LdrQueryModuleServiceTags.c)
 *     LdrSetImplicitPathOptions @ 0x1800D9C40 (LdrSetImplicitPathOptions.c)
 *     LdrpLoadPatchImage @ 0x1800D9DC0 (LdrpLoadPatchImage.c)
 *     LdrpHandleUnprotectedDelayLoad @ 0x1800DA610 (LdrpHandleUnprotectedDelayLoad.c)
 *     LdrpApplyPatchImage @ 0x1800E0FB4 (LdrpApplyPatchImage.c)
 *     AVrfCallAPILookupCallback @ 0x1800E4F50 (AVrfCallAPILookupCallback.c)
 *     AVrfInitializeVerifier @ 0x1800E5114 (AVrfInitializeVerifier.c)
 *     RtlpXfgTlLogFailure @ 0x180121D6C (RtlpXfgTlLogFailure.c)
 * Callees:
 *     LdrpFreeUnicodeString @ 0x180011138 (LdrpFreeUnicodeString.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlReleaseActivationContext @ 0x180033D90 (RtlReleaseActivationContext.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     LdrpDestroyNode @ 0x18006F524 (LdrpDestroyNode.c)
 *     LdrpUnmapModule @ 0x180073CDC (LdrpUnmapModule.c)
 *     LdrpReleaseTlsEntry @ 0x1800800CC (LdrpReleaseTlsEntry.c)
 */

__int64 __fastcall LdrpDereferenceModule(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r8
  _QWORD *v4; // rdx
  _QWORD *v5; // rdi
  _QWORD *v6; // rsi
  __int64 v7; // rcx

  result = *(_QWORD *)(a1 + 152);
  if ( *(_DWORD *)(result + 24) != -1 )
  {
    result = *(_QWORD *)result;
    if ( (*(_BYTE *)(result - 56) & 0x20) == 0 )
    {
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 276), 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
      {
        RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
        v3 = *(_QWORD *)(a1 + 160);
        if ( *(_QWORD *)(v3 + 8) != a1 + 160 || (v4 = *(_QWORD **)(a1 + 168), *v4 != a1 + 160) )
          __fastfail(3u);
        *v4 = v3;
        *(_QWORD *)(v3 + 8) = v4;
        v5 = *(_QWORD **)(a1 + 152);
        v6 = (_QWORD *)*v5;
        RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
        if ( *(_WORD *)(a1 + 110) )
          LdrpReleaseTlsEntry(a1, 0LL);
        LdrpUnmapModule(a1);
        v7 = *(_QWORD *)(a1 + 136);
        if ( (unsigned __int64)(v7 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          RtlReleaseActivationContext(v7);
        if ( *(_QWORD *)(a1 + 80) )
          LdrpFreeUnicodeString(a1 + 72);
        result = RtlFreeHeap(LdrpHeap, 0LL, a1);
        if ( v6 == v5 )
          return LdrpDestroyNode(v5);
      }
    }
  }
  return result;
}
