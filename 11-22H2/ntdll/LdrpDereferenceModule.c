/*
 * XREFs of LdrpDereferenceModule @ 0x1800226FC
 * Callers:
 *     LdrFindEntryForAddress @ 0x180008CB0 (LdrFindEntryForAddress.c)
 *     LdrpFindLoadedDll @ 0x180016374 (LdrpFindLoadedDll.c)
 *     LdrGetProcedureAddressForCaller @ 0x180022190 (LdrGetProcedureAddressForCaller.c)
 *     LdrpResolveProcedureAddress @ 0x180022A3C (LdrpResolveProcedureAddress.c)
 *     LdrpHandleProtectedDelayload @ 0x180023220 (LdrpHandleProtectedDelayload.c)
 *     LdrpLoadDependentModuleInternal @ 0x180025330 (LdrpLoadDependentModuleInternal.c)
 *     LdrpLoadDllInternal @ 0x180028E74 (LdrpLoadDllInternal.c)
 *     LdrpFastpthReloadedDll @ 0x180029B58 (LdrpFastpthReloadedDll.c)
 *     LdrGetDllHandleEx @ 0x18002A3F0 (LdrGetDllHandleEx.c)
 *     LdrLoadDll @ 0x18002A8A0 (LdrLoadDll.c)
 *     LdrResolveDelayLoadedAPI @ 0x18002C060 (LdrResolveDelayLoadedAPI.c)
 *     LdrpMapDllWithSectionHandle @ 0x18002C97C (LdrpMapDllWithSectionHandle.c)
 *     LdrAddRefDll @ 0x18002D410 (LdrAddRefDll.c)
 *     LdrUnloadDll @ 0x18002D5B0 (LdrUnloadDll.c)
 *     LdrGetDllFullName @ 0x18002D7B0 (LdrGetDllFullName.c)
 *     LdrDisableThreadCalloutsForDll @ 0x18002DE60 (LdrDisableThreadCalloutsForDll.c)
 *     LdrGetDllHandleByMapping @ 0x18002DEC0 (LdrGetDllHandleByMapping.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18002E43C (LdrpFindOrPrepareLoadingModule.c)
 *     RtlQueryInformationActivationContext @ 0x180033680 (RtlQueryInformationActivationContext.c)
 *     LdrpFreeReplacedModule @ 0x180067B44 (LdrpFreeReplacedModule.c)
 *     LdrpUnloadNode @ 0x18006B540 (LdrpUnloadNode.c)
 *     LdrpLoadContextReplaceModule @ 0x180072D94 (LdrpLoadContextReplaceModule.c)
 *     LdrGetDllHandleByName @ 0x1800771D0 (LdrGetDllHandleByName.c)
 *     LdrpInitShimEngine @ 0x180079158 (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x1800797E8 (LdrpLoadShimEngine.c)
 *     LdrpLoadWow64 @ 0x180085D20 (LdrpLoadWow64.c)
 *     LdrpCorInitialize @ 0x18008DA54 (LdrpCorInitialize.c)
 *     LdrpCleanupEnclaveLoadState @ 0x1800D8A48 (LdrpCleanupEnclaveLoadState.c)
 *     LdrHotPatchNotify @ 0x1800D9A90 (LdrHotPatchNotify.c)
 *     LdrIsModuleSxsRedirected @ 0x1800D9C00 (LdrIsModuleSxsRedirected.c)
 *     LdrQueryModuleServiceTags @ 0x1800D9D40 (LdrQueryModuleServiceTags.c)
 *     LdrSetImplicitPathOptions @ 0x1800DA290 (LdrSetImplicitPathOptions.c)
 *     LdrpLoadPatchImage @ 0x1800DA410 (LdrpLoadPatchImage.c)
 *     LdrpHandleUnprotectedDelayLoad @ 0x1800DAC60 (LdrpHandleUnprotectedDelayLoad.c)
 *     LdrpApplyPatchImage @ 0x1800DFC84 (LdrpApplyPatchImage.c)
 *     AVrfCallAPILookupCallback @ 0x1800E3C20 (AVrfCallAPILookupCallback.c)
 *     AVrfInitializeVerifier @ 0x1800E3DE4 (AVrfInitializeVerifier.c)
 *     RtlpXfgTlLogFailure @ 0x1801208BC (RtlpXfgTlLogFailure.c)
 * Callees:
 *     LdrpFreeUnicodeString @ 0x180011348 (LdrpFreeUnicodeString.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlReleaseActivationContext @ 0x180033EF0 (RtlReleaseActivationContext.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     LdrpDestroyNode @ 0x18006F524 (LdrpDestroyNode.c)
 *     LdrpUnmapModule @ 0x18007366C (LdrpUnmapModule.c)
 *     LdrpReleaseTlsEntry @ 0x18007FA5C (LdrpReleaseTlsEntry.c)
 */

__int64 __fastcall LdrpDereferenceModule(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r8
  _QWORD *v4; // rdx
  _QWORD *v5; // rdi
  _QWORD *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx

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
        v10 = *(_QWORD *)(a1 + 136);
        if ( (unsigned __int64)(v10 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          RtlReleaseActivationContext(v10, v7, v8, v9);
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
