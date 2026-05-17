/*
 * XREFs of LdrpPinModule @ 0x180079308
 * Callers:
 *     LdrpLoadDllInternal @ 0x180028E74 (LdrpLoadDllInternal.c)
 *     LdrGetDllHandleEx @ 0x18002A3F0 (LdrGetDllHandleEx.c)
 *     LdrAddRefDll @ 0x18002D410 (LdrAddRefDll.c)
 *     LdrpInitShimEngine @ 0x180079158 (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x1800797E8 (LdrpLoadShimEngine.c)
 *     LdrInitShimEngineDynamic @ 0x1800DCF80 (LdrInitShimEngineDynamic.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     LdrpPinNodeRecurse @ 0x18007936C (LdrpPinNodeRecurse.c)
 */

__int64 __fastcall LdrpPinModule(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rcx

  v2 = 0;
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v3 = *(_QWORD *)(a1 + 152);
  if ( *(_DWORD *)(v3 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v3 - 56LL) & 0x20) == 0 )
  {
    if ( *(_DWORD *)(v3 + 24) )
      LdrpPinNodeRecurse();
    else
      v2 = -1073741823;
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  return v2;
}
