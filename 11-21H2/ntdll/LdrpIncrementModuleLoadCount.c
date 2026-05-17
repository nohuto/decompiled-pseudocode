/*
 * XREFs of LdrpIncrementModuleLoadCount @ 0x18003FC24
 * Callers:
 *     LdrAddRefDll @ 0x180035130 (LdrAddRefDll.c)
 *     LdrpFastpthReloadedDll @ 0x18003F710 (LdrpFastpthReloadedDll.c)
 *     LdrGetDllHandleEx @ 0x180042DE0 (LdrGetDllHandleEx.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18004DD44 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrGetDllHandleByMapping @ 0x180050C70 (LdrGetDllHandleByMapping.c)
 *     LdrGetDllHandleByName @ 0x18007ED20 (LdrGetDllHandleByName.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall LdrpIncrementModuleLoadCount(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  unsigned int v5; // edi
  __int64 v6; // rcx
  int v7; // eax

  v5 = 0;
  RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, a2, a3, a4);
  v6 = *(_QWORD *)(a1 + 152);
  v7 = *(_DWORD *)(v6 + 24);
  if ( v7 != -1 )
  {
    if ( v7 )
    {
      *(_DWORD *)(v6 + 24) = v7 + 1;
    }
    else if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      ++*(_DWORD *)(v6 + 28);
    }
    else
    {
      v5 = -1073741515;
    }
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  return v5;
}
