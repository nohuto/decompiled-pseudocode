/*
 * XREFs of LdrpBuildForwarderLink @ 0x18003FB90
 * Callers:
 *     LdrpLoadDllInternal @ 0x18003B940 (LdrpLoadDllInternal.c)
 *     LdrpFastpthReloadedDll @ 0x18003F710 (LdrpFastpthReloadedDll.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     LdrpRecordModuleDependency @ 0x1800540E4 (LdrpRecordModuleDependency.c)
 */

__int64 __fastcall LdrpBuildForwarderLink(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned int v4; // ebx
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  v8 = 0;
  if ( a1 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, a2, a3, a4);
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 152) + 24LL) || (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      LdrpRecordModuleDependency(a1, a2, 0LL, &v8);
      v4 = v8;
    }
    else
    {
      v4 = -1073741515;
    }
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  }
  return v4;
}
