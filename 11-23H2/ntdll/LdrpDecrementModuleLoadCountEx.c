/*
 * XREFs of LdrpDecrementModuleLoadCountEx @ 0x18002D48C
 * Callers:
 *     LdrpLoadDllInternal @ 0x180028CA4 (LdrpLoadDllInternal.c)
 *     LdrpFastpthReloadedDll @ 0x180029988 (LdrpFastpthReloadedDll.c)
 *     LdrUnloadDll @ 0x18002D3E0 (LdrUnloadDll.c)
 *     LdrpCorInitialize @ 0x18008E254 (LdrpCorInitialize.c)
 * Callees:
 *     LdrpDecrementNodeLoadCountLockHeld @ 0x18002D51C (LdrpDecrementNodeLoadCountLockHeld.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     LdrpReleaseLoaderLock @ 0x180050FC4 (LdrpReleaseLoaderLock.c)
 *     LdrpAcquireLoaderLock @ 0x180051228 (LdrpAcquireLoaderLock.c)
 *     LdrpUnloadNode @ 0x18006B520 (LdrpUnloadNode.c)
 */

__int64 __fastcall LdrpDecrementModuleLoadCountEx(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  unsigned int v5; // edi
  __int64 v7; // rcx
  int v8; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 && *(_DWORD *)(*(_QWORD *)(a1 + 152) + 24LL) == 1 )
    return 3221226029LL;
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v4 = *(_QWORD *)(a1 + 152);
  v5 = LdrpDecrementNodeLoadCountLockHeld(v4, a2, &v8);
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  if ( v8 )
  {
    LdrpAcquireLoaderLock();
    LdrpUnloadNode(v4);
    LdrpReleaseLoaderLock(v7, 8LL);
  }
  return v5;
}
