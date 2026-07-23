/*
 * XREFs of LdrUnloadDll @ 0x180038270
 * Callers:
 *     TppCallbackEpilog @ 0x180017620 (TppCallbackEpilog.c)
 *     RtlQueueWorkItem @ 0x180070160 (RtlQueueWorkItem.c)
 *     RtlpTpWorkCallback @ 0x180070EB0 (RtlpTpWorkCallback.c)
 *     RtlpTpWorkUnposted @ 0x180071130 (RtlpTpWorkUnposted.c)
 *     LdrpGetShimEngineInterface @ 0x180072C90 (LdrpGetShimEngineInterface.c)
 *     LdrpCodeAuthzInitialize @ 0x180082D6C (LdrpCodeAuthzInitialize.c)
 *     RtlWnfDllUnloadCallback @ 0x18008E120 (RtlWnfDllUnloadCallback.c)
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 *     RtlWow64LogMessageInEventLogger @ 0x1800E2D70 (RtlWow64LogMessageInEventLogger.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     LdrpDecrementNodeLoadCountLockHeld @ 0x1800381E0 (LdrpDecrementNodeLoadCountLockHeld.c)
 *     LdrpFindLoadedDllByHandle @ 0x180038350 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x180038484 (LdrpDereferenceModule.c)
 *     LdrpReleaseLoaderLock @ 0x18004F1D0 (LdrpReleaseLoaderLock.c)
 *     LdrpAcquireLoaderLock @ 0x18004F230 (LdrpAcquireLoaderLock.c)
 *     LdrpDrainWorkQueue @ 0x180051600 (LdrpDrainWorkQueue.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x180052674 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpUnloadNode @ 0x1800526F0 (LdrpUnloadNode.c)
 *     LdrpDropLastInProgressCount @ 0x18007D1B4 (LdrpDropLastInProgressCount.c)
 */

NTSTATUS __cdecl LdrUnloadDll(PVOID DllHandle)
{
  NTSTATUS LoadedDllByHandle; // ebx
  _QWORD *v2; // rdi
  char v3; // si
  __int64 v4; // rbp
  __int64 v6; // rcx
  int v7; // [rsp+48h] [rbp+10h] BYREF
  PVOID BaseAddress; // [rsp+50h] [rbp+18h] BYREF

  LoadedDllByHandle = 0;
  if ( !byte_18017A188 )
  {
    LoadedDllByHandle = LdrpFindLoadedDllByHandle(DllHandle, &BaseAddress, &v7);
    if ( LoadedDllByHandle >= 0 )
    {
      v2 = BaseAddress;
      v3 = 1;
      if ( *(_DWORD *)(*((_QWORD *)BaseAddress + 19) + 24LL) == 1 )
        goto LABEL_9;
      RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
      v4 = v2[19];
      LoadedDllByHandle = LdrpDecrementNodeLoadCountLockHeld(v4, 1, &v7);
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
      if ( v7 )
      {
        LdrpAcquireLoaderLock();
        LdrpUnloadNode(v4);
        LdrpReleaseLoaderLock(v6, 8LL);
      }
      if ( LoadedDllByHandle == -1073741267 )
      {
LABEL_9:
        if ( (NtCurrentTeb()->SameTebFlags & 0x1000) == 0 )
        {
          v3 = 0;
          LdrpDrainWorkQueue(0LL);
        }
        v2 = BaseAddress;
        LdrpDecrementModuleLoadCountEx(BaseAddress, 0LL);
        if ( !v3 )
          LdrpDropLastInProgressCount();
        LoadedDllByHandle = 0;
      }
      LdrpDereferenceModule(v2);
    }
  }
  return LoadedDllByHandle;
}
