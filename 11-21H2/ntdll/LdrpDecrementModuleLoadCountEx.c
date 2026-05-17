/*
 * XREFs of LdrpDecrementModuleLoadCountEx @ 0x180052674
 * Callers:
 *     LdrUnloadDll @ 0x180038270 (LdrUnloadDll.c)
 *     LdrpLoadDllInternal @ 0x18003B940 (LdrpLoadDllInternal.c)
 *     LdrpFastpthReloadedDll @ 0x18003F710 (LdrpFastpthReloadedDll.c)
 *     LdrpCorInitialize @ 0x180072FF8 (LdrpCorInitialize.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     LdrpDecrementNodeLoadCountLockHeld @ 0x1800381E0 (LdrpDecrementNodeLoadCountLockHeld.c)
 *     LdrpReleaseLoaderLock @ 0x18004F1D0 (LdrpReleaseLoaderLock.c)
 *     LdrpAcquireLoaderLock @ 0x18004F230 (LdrpAcquireLoaderLock.c)
 *     LdrpUnloadNode @ 0x1800526F0 (LdrpUnloadNode.c)
 */

__int64 __fastcall LdrpDecrementModuleLoadCountEx(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  int v4; // edi
  __int64 v6; // rbx
  unsigned int v7; // edi
  __int64 v8; // rcx
  int v10; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  if ( (_DWORD)a2 && *(_DWORD *)(*(_QWORD *)(a1 + 152) + 24LL) == 1 )
    return 3221226029LL;
  RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, a2, a3, a4);
  v6 = *(_QWORD *)(a1 + 152);
  v7 = LdrpDecrementNodeLoadCountLockHeld(v6, v4, &v10);
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  if ( v10 )
  {
    LdrpAcquireLoaderLock();
    LdrpUnloadNode(v6);
    LdrpReleaseLoaderLock(v8, 8, 0);
  }
  return v7;
}
