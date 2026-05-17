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

__int64 __fastcall LdrUnloadDll(__int64 a1)
{
  int LoadedDllByHandle; // ebx
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9
  __int64 v5; // rdi
  char v6; // si
  __int64 v7; // rbp
  __int64 v9; // rcx
  int v10; // [rsp+48h] [rbp+10h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  LoadedDllByHandle = 0;
  if ( !byte_18017A188 )
  {
    LoadedDllByHandle = LdrpFindLoadedDllByHandle(a1, &v11, &v10);
    if ( LoadedDllByHandle >= 0 )
    {
      v5 = v11;
      v6 = 1;
      if ( *(_DWORD *)(*(_QWORD *)(v11 + 152) + 24LL) == 1 )
        goto LABEL_9;
      RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, v2, v3, v4);
      v7 = *(_QWORD *)(v5 + 152);
      LoadedDllByHandle = LdrpDecrementNodeLoadCountLockHeld(v7, 1, &v10);
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
      if ( v10 )
      {
        LdrpAcquireLoaderLock();
        LdrpUnloadNode(v7);
        LdrpReleaseLoaderLock(v9, 8LL);
      }
      if ( LoadedDllByHandle == -1073741267 )
      {
LABEL_9:
        if ( (NtCurrentTeb()->SameTebFlags & 0x1000) == 0 )
        {
          v6 = 0;
          LdrpDrainWorkQueue(0LL);
        }
        v5 = v11;
        LdrpDecrementModuleLoadCountEx(v11, 0LL);
        if ( !v6 )
          LdrpDropLastInProgressCount();
        LoadedDllByHandle = 0;
      }
      LdrpDereferenceModule(v5);
    }
  }
  return (unsigned int)LoadedDllByHandle;
}
