/*
 * XREFs of LdrpFindExistingModule @ 0x18002DC0C
 * Callers:
 *     LdrpMapDllSearchPath @ 0x180011078 (LdrpMapDllSearchPath.c)
 *     LdrpMapDllFullPath @ 0x180011690 (LdrpMapDllFullPath.c)
 *     LdrpMapDllRetry @ 0x180072C9C (LdrpMapDllRetry.c)
 * Callees:
 *     LdrpFindLoadedDllByNameLockHeld @ 0x18002CC54 (LdrpFindLoadedDllByNameLockHeld.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall LdrpFindExistingModule(PUNICODE_STRING String1, PUNICODE_STRING a2, char a3, int a4, _QWORD *a5)
{
  _UNICODE_STRING *v9; // rdx
  int LoadedDllByNameLockHeld; // ebx

  *a5 = 0LL;
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v9 = 0LL;
  if ( (a3 & 0x20) == 0 )
    v9 = a2;
  LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld(String1, v9, a3, a5, a4);
  if ( LoadedDllByNameLockHeld == -1073741515 && (a3 & 8) != 0 )
  {
    LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld(0LL, a2, 0, a5, a4);
    if ( LoadedDllByNameLockHeld >= 0 )
      *(_DWORD *)(*a5 + 104LL) |= 1u;
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  return (unsigned int)LoadedDllByNameLockHeld;
}
