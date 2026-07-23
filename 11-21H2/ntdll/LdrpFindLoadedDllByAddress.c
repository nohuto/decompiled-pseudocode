/*
 * XREFs of LdrpFindLoadedDllByAddress @ 0x180067FC0
 * Callers:
 *     LdrFindEntryForAddress @ 0x180067F70 (LdrFindEntryForAddress.c)
 *     AVrfCallAPILookupCallback @ 0x1800E4D90 (AVrfCallAPILookupCallback.c)
 *     RtlpXfgTlLogFailure @ 0x18011EFDC (RtlpXfgTlLogFailure.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall LdrpFindLoadedDllByAddress(unsigned __int64 a1, unsigned __int64 *a2, _DWORD *a3)
{
  unsigned __int64 Root; // rbx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // rax

  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  Root = (unsigned __int64)LdrpModuleBaseAddressIndex.Root;
  if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 && LdrpModuleBaseAddressIndex.Root )
    Root = (unsigned __int64)&LdrpModuleBaseAddressIndex ^ (unsigned __int64)LdrpModuleBaseAddressIndex.Root;
  while ( Root )
  {
    v7 = *(_QWORD *)(Root - 152);
    if ( a1 >= v7 )
    {
      if ( a1 < v7 + *(unsigned int *)(Root - 136) )
      {
        v10 = Root - 200;
        v11 = *(_QWORD *)(Root - 200 + 152);
        if ( *(_DWORD *)(v11 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v11 - 56LL) & 0x20) == 0 )
          _InterlockedIncrement((volatile signed __int32 *)(v10 + 276));
        *a2 = v10;
        if ( a3 )
          *a3 = *(_DWORD *)(*(_QWORD *)(v10 + 152) + 56LL);
        break;
      }
      v8 = *(_QWORD *)(Root + 8);
    }
    else
    {
      v8 = *(_QWORD *)Root;
    }
    if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 && v8 )
      Root ^= v8;
    else
      Root = v8;
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  return Root == 0 ? 0xC0000135 : 0;
}
