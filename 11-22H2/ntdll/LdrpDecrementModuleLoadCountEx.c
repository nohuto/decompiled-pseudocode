/*
 * XREFs of LdrpDecrementModuleLoadCountEx @ 0x18002D65C
 * Callers:
 *     LdrpLoadDllInternal @ 0x180028E74 (LdrpLoadDllInternal.c)
 *     LdrpFastpthReloadedDll @ 0x180029B58 (LdrpFastpthReloadedDll.c)
 *     LdrUnloadDll @ 0x18002D5B0 (LdrUnloadDll.c)
 *     LdrpCorInitialize @ 0x18008DA54 (LdrpCorInitialize.c)
 * Callees:
 *     LdrpDecrementNodeLoadCountLockHeld @ 0x18002D6EC (LdrpDecrementNodeLoadCountLockHeld.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     LdrpReleaseLoaderLock @ 0x180051124 (LdrpReleaseLoaderLock.c)
 *     LdrpAcquireLoaderLock @ 0x180051388 (LdrpAcquireLoaderLock.c)
 *     LdrpUnloadNode @ 0x18006B540 (LdrpUnloadNode.c)
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
