/*
 * XREFs of LdrpLoadKnownDll @ 0x18002D2B0
 * Callers:
 *     LdrpLoadDependentModuleInternal @ 0x1800251E0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18002E26C (LdrpFindOrPrepareLoadingModule.c)
 * Callees:
 *     LdrpHashUnicodeString @ 0x180014A04 (LdrpHashUnicodeString.c)
 *     LdrpLogDllState @ 0x180019AB4 (LdrpLogDllState.c)
 *     LdrpFindKnownDll @ 0x18002C3C4 (LdrpFindKnownDll.c)
 *     LdrpMapDllWithSectionHandle @ 0x18002C7AC (LdrpMapDllWithSectionHandle.c)
 *     LdrpFindLoadedDllByNameLockHeld @ 0x18002CA84 (LdrpFindLoadedDllByNameLockHeld.c)
 *     LdrpCheckKnownDllFullPath @ 0x18002E214 (LdrpCheckKnownDllFullPath.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     LdrpLoadContextReplaceModule @ 0x180073404 (LdrpLoadContextReplaceModule.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 */

__int64 __fastcall LdrpLoadKnownDll(_BYTE *a1)
{
  int v1; // eax
  __int64 v2; // rbx
  __int64 v3; // rsi
  int KnownDll; // edi
  char v5; // al
  _BYTE v7[40]; // [rsp+30h] [rbp-28h] BYREF
  volatile signed __int32 *v8; // [rsp+60h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+10h] BYREF

  v1 = *((_DWORD *)a1 + 8);
  v2 = (__int64)a1;
  v3 = *((_QWORD *)a1 + 7);
  KnownDll = -1073741515;
  if ( (v1 & 0x200) != 0 )
  {
    v5 = LdrpCheckKnownDllFullPath(a1, v7);
    a1 = v7;
  }
  else
  {
    v5 = (v1 & 0x28) == 32;
  }
  if ( v5 )
  {
    KnownDll = LdrpFindKnownDll((const void **)a1, v3 + 88, (unsigned __int16 *)(v3 + 72), &Handle);
    if ( KnownDll >= 0 )
    {
      LdrpLogDllState(*(_QWORD *)(v3 + 48), v3 + 72, 0x14A5u);
      v8 = 0LL;
      *(_DWORD *)(v3 + 264) = LdrpHashUnicodeString((unsigned __int16 *)(v3 + 88));
      RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
      KnownDll = LdrpFindLoadedDllByNameLockHeld(
                   (unsigned __int16 *)(v3 + 88),
                   (unsigned __int16 *)(v3 + 72),
                   *(_DWORD *)(v2 + 32),
                   &v8,
                   *(_DWORD *)(v3 + 264));
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
      if ( v8 )
      {
        LdrpLoadContextReplaceModule(v2);
      }
      else
      {
        LdrpLogDllState(0LL, v3 + 72, 0x14AAu);
        KnownDll = LdrpMapDllWithSectionHandle(v2, (__int64)Handle);
      }
      NtClose(Handle);
    }
  }
  return (unsigned int)KnownDll;
}
