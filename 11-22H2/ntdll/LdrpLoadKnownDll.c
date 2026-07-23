/*
 * XREFs of LdrpLoadKnownDll @ 0x18002D480
 * Callers:
 *     LdrpLoadDependentModuleInternal @ 0x180025330 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18002E43C (LdrpFindOrPrepareLoadingModule.c)
 * Callees:
 *     LdrpHashUnicodeString @ 0x180014C14 (LdrpHashUnicodeString.c)
 *     LdrpLogDllState @ 0x180019CC4 (LdrpLogDllState.c)
 *     LdrpFindKnownDll @ 0x18002C594 (LdrpFindKnownDll.c)
 *     LdrpMapDllWithSectionHandle @ 0x18002C97C (LdrpMapDllWithSectionHandle.c)
 *     LdrpFindLoadedDllByNameLockHeld @ 0x18002CC54 (LdrpFindLoadedDllByNameLockHeld.c)
 *     LdrpCheckKnownDllFullPath @ 0x18002E3E4 (LdrpCheckKnownDllFullPath.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     LdrpLoadContextReplaceModule @ 0x180072D94 (LdrpLoadContextReplaceModule.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 */

__int64 __fastcall LdrpLoadKnownDll(UNICODE_STRING *p_Source)
{
  int v1; // eax
  __int64 v2; // rbx
  wchar_t *Buffer; // rsi
  int KnownDll; // edi
  char v5; // al
  UNICODE_STRING Source; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+60h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+10h] BYREF

  v1 = *(_DWORD *)&p_Source[2].Length;
  v2 = (__int64)p_Source;
  Buffer = p_Source[3].Buffer;
  KnownDll = -1073741515;
  if ( (v1 & 0x200) != 0 )
  {
    v5 = LdrpCheckKnownDllFullPath(p_Source, &Source);
    p_Source = &Source;
  }
  else
  {
    v5 = (v1 & 0x28) == 32;
  }
  if ( v5 )
  {
    KnownDll = LdrpFindKnownDll(p_Source, (PUNICODE_STRING)(Buffer + 44), (PUNICODE_STRING)(Buffer + 36), &Handle);
    if ( KnownDll >= 0 )
    {
      LdrpLogDllState(*((_QWORD *)Buffer + 6), (__int64)(Buffer + 36), 0x14A5u);
      v8 = 0LL;
      *((_DWORD *)Buffer + 66) = LdrpHashUnicodeString(Buffer + 44);
      RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
      KnownDll = LdrpFindLoadedDllByNameLockHeld(
                   (PUNICODE_STRING)(Buffer + 44),
                   (PUNICODE_STRING)(Buffer + 36),
                   *(_DWORD *)(v2 + 32),
                   &v8,
                   *((_DWORD *)Buffer + 66));
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
      if ( v8 )
      {
        LdrpLoadContextReplaceModule(v2);
      }
      else
      {
        LdrpLogDllState(0, (__int64)(Buffer + 36), 0x14AAu);
        KnownDll = LdrpMapDllWithSectionHandle(v2, Handle);
      }
      NtClose(Handle);
    }
  }
  return (unsigned int)KnownDll;
}
