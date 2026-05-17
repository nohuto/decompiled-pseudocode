/*
 * XREFs of LdrpFindLoadedDllByAddress @ 0x180008D00
 * Callers:
 *     LdrFindEntryForAddress @ 0x180008CB0 (LdrFindEntryForAddress.c)
 *     LdrpCgLogFailure @ 0x1800DAEB0 (LdrpCgLogFailure.c)
 *     AVrfCallAPILookupCallback @ 0x1800E3C20 (AVrfCallAPILookupCallback.c)
 *     RtlpXfgTlLogFailure @ 0x1801208BC (RtlpXfgTlLogFailure.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall LdrpFindLoadedDllByAddress(unsigned __int64 a1, unsigned __int64 *a2, _DWORD *a3)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rax

  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v6 = LdrpModuleBaseAddressIndex;
  if ( (qword_180185010 & 1) != 0 && LdrpModuleBaseAddressIndex )
    v6 = (unsigned __int64)&LdrpModuleBaseAddressIndex ^ LdrpModuleBaseAddressIndex;
  while ( v6 )
  {
    v7 = *(_QWORD *)(v6 - 152);
    if ( a1 >= v7 )
    {
      if ( a1 < v7 + *(unsigned int *)(v6 - 136) )
        break;
      v8 = *(_QWORD *)(v6 + 8);
    }
    else
    {
      v8 = *(_QWORD *)v6;
    }
    if ( (qword_180185010 & 1) != 0 && v8 )
      v6 ^= v8;
    else
      v6 = v8;
  }
  if ( v6 )
  {
    v9 = v6 - 200;
    v10 = *(_QWORD *)(v6 - 200 + 152);
    if ( *(_DWORD *)(v10 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v10 - 56LL) & 0x20) == 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 276));
    *a2 = v9;
    if ( a3 )
      *a3 = *(_DWORD *)(*(_QWORD *)(v9 + 152) + 56LL);
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  return v6 == 0 ? 0xC0000135 : 0;
}
