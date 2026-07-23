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

int __fastcall LdrpDereferenceModule(char *BaseAddress)
{
  __int64 *v1; // rax
  char **v3; // r8
  PVOID *v4; // rdx
  _QWORD *v5; // rdi
  _QWORD *v6; // rsi
  _ACTIVATION_CONTEXT *v7; // rcx

  v1 = (__int64 *)*((_QWORD *)BaseAddress + 19);
  if ( *((_DWORD *)v1 + 6) != -1 )
  {
    v1 = (__int64 *)*v1;
    if ( (*(_BYTE *)(v1 - 7) & 0x20) == 0 )
    {
      LODWORD(v1) = _InterlockedExchangeAdd((volatile signed __int32 *)BaseAddress + 69, 0xFFFFFFFF);
      if ( (_DWORD)v1 == 1 )
      {
        RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
        v3 = (char **)*((_QWORD *)BaseAddress + 20);
        if ( v3[1] != BaseAddress + 160 || (v4 = (PVOID *)*((_QWORD *)BaseAddress + 21), *v4 != BaseAddress + 160) )
          __fastfail(3u);
        *v4 = v3;
        v3[1] = (char *)v4;
        v5 = (_QWORD *)*((_QWORD *)BaseAddress + 19);
        v6 = (_QWORD *)*v5;
        RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
        if ( *((_WORD *)BaseAddress + 55) )
          LdrpReleaseTlsEntry(BaseAddress, 0LL);
        LdrpUnmapModule(BaseAddress);
        v7 = (_ACTIVATION_CONTEXT *)*((_QWORD *)BaseAddress + 17);
        if ( (unsigned __int64)&v7[-1].InlineStorageMapEntries[31] + 7 <= 0xFFFFFFFFFFFFFFFDuLL )
          RtlReleaseActivationContext(v7);
        if ( *((_QWORD *)BaseAddress + 10) )
          LdrpFreeUnicodeString(BaseAddress + 72);
        LODWORD(v1) = RtlFreeHeap(LdrpHeap, 0, BaseAddress);
        if ( v6 == v5 )
          LODWORD(v1) = LdrpDestroyNode(v5);
      }
    }
  }
  return (int)v1;
}
