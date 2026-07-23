/*
 * XREFs of LdrpFindLoadedDllByNameLockHeld @ 0x18002CA84
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x18002C7AC (LdrpMapDllWithSectionHandle.c)
 *     LdrpLoadKnownDll @ 0x18002D2B0 (LdrpLoadKnownDll.c)
 *     LdrpFindExistingModule @ 0x18002DA3C (LdrpFindExistingModule.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x180029C70 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall LdrpFindLoadedDllByNameLockHeld(
        PUNICODE_STRING String1,
        PUNICODE_STRING a2,
        char a3,
        _QWORD *a4,
        int a5)
{
  _QWORD **v8; // rsi
  BOOLEAN v10; // r9
  _QWORD *i; // rdi
  _QWORD *v13; // rbx
  __int64 v14; // rax

  v8 = (_QWORD **)((char *)&LdrpHashTable + 16 * (a5 & 0x1F));
  v10 = 0;
  for ( i = *v8; i != v8; i = (_QWORD *)*i )
  {
    v13 = i - 14;
    if ( a5 == *((_DWORD *)i + 38) && ((a3 & 8) == 0 || (v13[13] & 1) != 0) )
    {
      if ( a2 )
      {
        v10 = RtlEqualUnicodeString(a2, (PUNICODE_STRING)(v13 + 9), 1u);
        if ( v10 )
          goto LABEL_9;
      }
      else
      {
        if ( (v13[13] & 0x10000000) == 0 && RtlEqualUnicodeString(String1, (PUNICODE_STRING)(v13 + 11), 1u) )
        {
          v10 = 1;
LABEL_9:
          v14 = v13[19];
          if ( *(_DWORD *)(v14 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v14 - 56LL) & 0x20) == 0 )
            _InterlockedIncrement((volatile signed __int32 *)v13 + 69);
          *a4 = v13;
          return v10 == 0 ? 0xC0000135 : 0;
        }
        v10 = 0;
      }
    }
  }
  return v10 == 0 ? 0xC0000135 : 0;
}
