/*
 * XREFs of LdrpIncrementModuleLoadCount @ 0x18002A550
 * Callers:
 *     LdrpFastpthReloadedDll @ 0x180029B58 (LdrpFastpthReloadedDll.c)
 *     LdrGetDllHandleEx @ 0x18002A3F0 (LdrGetDllHandleEx.c)
 *     LdrAddRefDll @ 0x18002D410 (LdrAddRefDll.c)
 *     LdrGetDllHandleByMapping @ 0x18002DEC0 (LdrGetDllHandleByMapping.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18002E43C (LdrpFindOrPrepareLoadingModule.c)
 *     LdrGetDllHandleByName @ 0x1800771D0 (LdrGetDllHandleByName.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall LdrpIncrementModuleLoadCount(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  int v4; // eax

  v2 = 0;
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v3 = *(_QWORD *)(a1 + 152);
  v4 = *(_DWORD *)(v3 + 24);
  if ( v4 != -1 )
  {
    if ( v4 )
    {
      *(_DWORD *)(v3 + 24) = v4 + 1;
    }
    else if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      ++*(_DWORD *)(v3 + 28);
    }
    else
    {
      v2 = -1073741515;
    }
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  return v2;
}
