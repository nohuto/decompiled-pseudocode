/*
 * XREFs of LdrpFindExistingModule @ 0x180051548
 * Callers:
 *     LdrpMapDllFullPath @ 0x18005133C (LdrpMapDllFullPath.c)
 *     LdrpMapDllSearchPath @ 0x180051844 (LdrpMapDllSearchPath.c)
 *     LdrpMapDllRetry @ 0x1800569C0 (LdrpMapDllRetry.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     LdrpFindLoadedDllByNameLockHeld @ 0x1800413B4 (LdrpFindLoadedDllByNameLockHeld.c)
 */

__int64 __fastcall LdrpFindExistingModule(
        unsigned __int16 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        _QWORD *a5)
{
  int v6; // ebp
  unsigned int v7; // esi
  __int64 v9; // rdx
  int LoadedDllByNameLockHeld; // ebx

  v6 = a4;
  v7 = a3;
  *a5 = 0LL;
  RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, a2, a3, a4);
  v9 = 0LL;
  if ( (v7 & 0x20) == 0 )
    v9 = a2;
  LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld(a1, v9, v7, a5, v6);
  if ( LoadedDllByNameLockHeld == -1073741515 && (v7 & 8) != 0 )
  {
    LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld(0LL, a2, 0LL, a5, v6);
    if ( LoadedDllByNameLockHeld >= 0 )
      *(_DWORD *)(*a5 + 104LL) |= 1u;
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  return (unsigned int)LoadedDllByNameLockHeld;
}
