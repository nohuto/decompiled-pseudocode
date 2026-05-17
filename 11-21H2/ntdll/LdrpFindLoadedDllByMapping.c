/*
 * XREFs of LdrpFindLoadedDllByMapping @ 0x180050578
 * Callers:
 *     LdrGetDllHandleByMapping @ 0x180050C70 (LdrGetDllHandleByMapping.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x180053C60 (LdrpFindLoadedDllByMappingFile.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x18004D268 (LdrpFindLoadedDllByMappingLockHeld.c)
 */

__int64 __fastcall LdrpFindLoadedDllByMapping(__int64 a1, _DWORD *a2, volatile signed __int32 **a3, _DWORD *a4)
{
  int LoadedDllByMappingLockHeld; // ebx
  unsigned int v10; // [rsp+38h] [rbp+10h] BYREF
  int v11; // [rsp+3Ch] [rbp+14h]

  v10 = a2[2];
  v11 = a2[20];
  RtlAcquireSRWLockExclusive(
    (unsigned __int64)&LdrpModuleDatatableLock,
    (unsigned __int64)a2,
    (unsigned __int64)a3,
    (unsigned __int64)a4);
  LoadedDllByMappingLockHeld = LdrpFindLoadedDllByMappingLockHeld(a1, a2, &v10, a3);
  if ( LoadedDllByMappingLockHeld >= 0 && a4 )
    *a4 = *(_DWORD *)(*((_QWORD *)*a3 + 19) + 56LL);
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  return (unsigned int)LoadedDllByMappingLockHeld;
}
