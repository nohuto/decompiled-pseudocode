/*
 * XREFs of LdrpPinModule @ 0x180032A78
 * Callers:
 *     LdrAddRefDll @ 0x180035130 (LdrAddRefDll.c)
 *     LdrpLoadDllInternal @ 0x18003B940 (LdrpLoadDllInternal.c)
 *     LdrGetDllHandleEx @ 0x180042DE0 (LdrGetDllHandleEx.c)
 *     LdrpInitShimEngine @ 0x1800726D8 (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x180072888 (LdrpLoadShimEngine.c)
 *     LdrInitShimEngineDynamic @ 0x1800DC800 (LdrInitShimEngineDynamic.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     LdrpPinNodeRecurse @ 0x1800829B0 (LdrpPinNodeRecurse.c)
 */

__int64 __fastcall LdrpPinModule(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned int v5; // edi
  __int64 v6; // rcx

  v5 = 0;
  RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, a2, a3, a4);
  v6 = *(_QWORD *)(a1 + 152);
  if ( *(_DWORD *)(v6 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v6 - 56LL) & 0x20) == 0 )
  {
    if ( *(_DWORD *)(v6 + 24) )
      LdrpPinNodeRecurse();
    else
      v5 = -1073741823;
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  return v5;
}
