/*
 * XREFs of LdrpLoadKnownDll @ 0x18004D3FC
 * Callers:
 *     LdrpLoadDependentModuleInternal @ 0x18003D8F0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18004DD44 (LdrpFindOrPrepareLoadingModule.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     LdrpFindLoadedDllByNameLockHeld @ 0x1800413B4 (LdrpFindLoadedDllByNameLockHeld.c)
 *     LdrpLogDllState @ 0x180044F74 (LdrpLogDllState.c)
 *     LdrpFindKnownDll @ 0x18004C948 (LdrpFindKnownDll.c)
 *     LdrpMapDllWithSectionHandle @ 0x18004CD54 (LdrpMapDllWithSectionHandle.c)
 *     LdrpCheckKnownDllFullPath @ 0x18004F308 (LdrpCheckKnownDllFullPath.c)
 *     LdrpHashUnicodeString @ 0x18004FB5C (LdrpHashUnicodeString.c)
 *     LdrpLoadContextReplaceModule @ 0x180053F88 (LdrpLoadContextReplaceModule.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 */

__int64 __fastcall LdrpLoadKnownDll(_BYTE *a1)
{
  int v1; // eax
  __int64 v2; // rbx
  __int64 v3; // rsi
  int KnownDll; // edi
  char v5; // al
  _BYTE v7[40]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+60h] [rbp+8h] BYREF
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
    KnownDll = LdrpFindKnownDll((UNICODE_STRING *)a1, (PUNICODE_STRING)(v3 + 88), (PUNICODE_STRING)(v3 + 72), &Handle);
    if ( KnownDll >= 0 )
    {
      LdrpLogDllState(*(_QWORD *)(v3 + 48), v3 + 72, 0x14A5u);
      v8 = 0LL;
      *(_DWORD *)(v3 + 264) = LdrpHashUnicodeString(v3 + 88);
      RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
      KnownDll = LdrpFindLoadedDllByNameLockHeld(
                   (unsigned __int16 *)(v3 + 88),
                   (_UNICODE_STRING *)(v3 + 72),
                   *(_DWORD *)(v2 + 32),
                   &v8,
                   *(_DWORD *)(v3 + 264));
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
      if ( v8 )
      {
        LdrpLoadContextReplaceModule(v2, v8);
      }
      else
      {
        LdrpLogDllState(0, v3 + 72, 0x14AAu);
        KnownDll = LdrpMapDllWithSectionHandle(v2, Handle);
      }
      NtClose(Handle);
    }
  }
  return (unsigned int)KnownDll;
}
