/*
 * XREFs of LdrpBuildForwarderLink @ 0x18002A3F8
 * Callers:
 *     LdrpLoadDllInternal @ 0x180028CA4 (LdrpLoadDllInternal.c)
 *     LdrpFastpthReloadedDll @ 0x180029988 (LdrpFastpthReloadedDll.c)
 * Callees:
 *     LdrpRecordModuleDependency @ 0x18002AA88 (LdrpRecordModuleDependency.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall LdrpBuildForwarderLink(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v6 = 0;
  if ( a1 )
  {
    RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 152) + 24LL) || (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      LdrpRecordModuleDependency(a1, a2, 0LL, &v6);
      v2 = v6;
    }
    else
    {
      v2 = -1073741515;
    }
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  }
  return v2;
}
