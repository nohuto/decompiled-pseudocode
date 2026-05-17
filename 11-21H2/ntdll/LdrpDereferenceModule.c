/*
 * XREFs of LdrpDereferenceModule @ 0x180038484
 * Callers:
 *     RtlQueryInformationActivationContext @ 0x18001BC10 (RtlQueryInformationActivationContext.c)
 *     LdrGetDllFullName @ 0x1800346C0 (LdrGetDllFullName.c)
 *     LdrAddRefDll @ 0x180035130 (LdrAddRefDll.c)
 *     LdrResolveDelayLoadedAPI @ 0x180035FF0 (LdrResolveDelayLoadedAPI.c)
 *     LdrUnloadDll @ 0x180038270 (LdrUnloadDll.c)
 *     LdrLoadDll @ 0x18003AE00 (LdrLoadDll.c)
 *     LdrGetProcedureAddressForCaller @ 0x18003AFD0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpResolveProcedureAddress @ 0x18003B748 (LdrpResolveProcedureAddress.c)
 *     LdrpLoadDllInternal @ 0x18003B940 (LdrpLoadDllInternal.c)
 *     LdrpHandleProtectedDelayload @ 0x18003BF80 (LdrpHandleProtectedDelayload.c)
 *     LdrpLoadDependentModuleInternal @ 0x18003D8F0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFastpthReloadedDll @ 0x18003F710 (LdrpFastpthReloadedDll.c)
 *     LdrGetDllHandleEx @ 0x180042DE0 (LdrGetDllHandleEx.c)
 *     LdrpMapDllWithSectionHandle @ 0x18004CD54 (LdrpMapDllWithSectionHandle.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18004DD44 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpFindLoadedDll @ 0x18004F750 (LdrpFindLoadedDll.c)
 *     LdrGetDllHandleByMapping @ 0x180050C70 (LdrGetDllHandleByMapping.c)
 *     LdrpUnloadNode @ 0x1800526F0 (LdrpUnloadNode.c)
 *     LdrpLoadContextReplaceModule @ 0x180053F88 (LdrpLoadContextReplaceModule.c)
 *     LdrFindEntryForAddress @ 0x180067F70 (LdrFindEntryForAddress.c)
 *     LdrpFreeReplacedModule @ 0x18006B238 (LdrpFreeReplacedModule.c)
 *     LdrpInitShimEngine @ 0x1800726D8 (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x180072888 (LdrpLoadShimEngine.c)
 *     LdrpCorInitialize @ 0x180072FF8 (LdrpCorInitialize.c)
 *     LdrGetDllHandleByName @ 0x18007ED20 (LdrGetDllHandleByName.c)
 *     LdrDisableThreadCalloutsForDll @ 0x18007F7B0 (LdrDisableThreadCalloutsForDll.c)
 *     LdrpLoadWow64 @ 0x180089F1C (LdrpLoadWow64.c)
 *     LdrpCleanupEnclaveLoadState @ 0x1800D8738 (LdrpCleanupEnclaveLoadState.c)
 *     LdrHotPatchNotify @ 0x1800D9A20 (LdrHotPatchNotify.c)
 *     LdrIsModuleSxsRedirected @ 0x1800D9B90 (LdrIsModuleSxsRedirected.c)
 *     LdrQueryModuleServiceTags @ 0x1800D9CD0 (LdrQueryModuleServiceTags.c)
 *     LdrSetImplicitPathOptions @ 0x1800DA1A0 (LdrSetImplicitPathOptions.c)
 *     LdrpLoadPatchImage @ 0x1800DA320 (LdrpLoadPatchImage.c)
 *     LdrpHandleUnprotectedDelayLoad @ 0x1800DAB70 (LdrpHandleUnprotectedDelayLoad.c)
 *     LdrpApplyPatchImage @ 0x1800E1480 (LdrpApplyPatchImage.c)
 *     AVrfCallAPILookupCallback @ 0x1800E4D90 (AVrfCallAPILookupCallback.c)
 *     AVrfInitializeVerifier @ 0x1800E4F54 (AVrfInitializeVerifier.c)
 *     RtlpXfgTlLogFailure @ 0x18011EFDC (RtlpXfgTlLogFailure.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlReleaseActivationContext @ 0x18001C640 (RtlReleaseActivationContext.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     LdrpFreeUnicodeString @ 0x180051B14 (LdrpFreeUnicodeString.c)
 *     LdrpDestroyNode @ 0x180075920 (LdrpDestroyNode.c)
 *     LdrpUnmapModule @ 0x18007A514 (LdrpUnmapModule.c)
 *     LdrpReleaseTlsEntry @ 0x180084CD8 (LdrpReleaseTlsEntry.c)
 */

__int64 __fastcall LdrpDereferenceModule(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // r8
  _QWORD *v7; // rdx
  _QWORD *v8; // rdi
  _QWORD *v9; // rsi
  volatile signed __int32 *v10; // rcx

  result = *(_QWORD *)(a1 + 152);
  if ( *(_DWORD *)(result + 24) != -1 )
  {
    result = *(_QWORD *)result;
    if ( (*(_BYTE *)(result - 56) & 0x20) == 0 )
    {
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 276), 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
      {
        RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, a2, a3, a4);
        v6 = *(_QWORD *)(a1 + 160);
        if ( *(_QWORD *)(v6 + 8) != a1 + 160 || (v7 = *(_QWORD **)(a1 + 168), *v7 != a1 + 160) )
          __fastfail(3u);
        *v7 = v6;
        *(_QWORD *)(v6 + 8) = v7;
        v8 = *(_QWORD **)(a1 + 152);
        v9 = (_QWORD *)*v8;
        RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
        if ( *(_WORD *)(a1 + 110) )
          LdrpReleaseTlsEntry(a1, 0LL);
        LdrpUnmapModule(a1);
        v10 = *(volatile signed __int32 **)(a1 + 136);
        if ( (unsigned __int64)v10 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
          RtlReleaseActivationContext(v10);
        if ( *(_QWORD *)(a1 + 80) )
          LdrpFreeUnicodeString(a1 + 72);
        result = RtlFreeHeap(LdrpHeap, 0, a1);
        if ( v9 == v8 )
          return LdrpDestroyNode(v8);
      }
    }
  }
  return result;
}
