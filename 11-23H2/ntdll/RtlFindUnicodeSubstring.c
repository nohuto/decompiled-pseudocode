/*
 * XREFs of RtlFindUnicodeSubstring @ 0x180086860
 * Callers:
 *     RtlReplaceSystemDirectoryInPath @ 0x180086740 (RtlReplaceSystemDirectoryInPath.c)
 * Callees:
 *     NLS_UPCASE @ 0x1800154D8 (NLS_UPCASE.c)
 *     memcmp @ 0x180093310 (memcmp.c)
 */

PWCHAR __cdecl RtlFindUnicodeSubstring(
        PUNICODE_STRING FullString,
        PUNICODE_STRING SearchString,
        BOOLEAN CaseInSensitive)
{
  __int64 Length; // rax
  size_t v4; // rsi
  wchar_t *Buffer; // rbx
  wchar_t *v6; // rdi
  wchar_t *v7; // r14
  unsigned __int16 *v8; // rbp
  signed __int64 i; // rsi
  wchar_t *j; // r11
  int v11; // edx
  __int64 v12; // r11
  __int16 v13; // ax
  __int16 v14; // r10
  wchar_t *v16; // rbp

  Length = SearchString->Length;
  if ( FullString->Length < (unsigned __int16)Length )
    return 0LL;
  v4 = SearchString->Length;
  Buffer = FullString->Buffer;
  v6 = (wchar_t *)((char *)Buffer + FullString->Length - Length);
  if ( !CaseInSensitive )
  {
    if ( Buffer <= v6 )
    {
      v16 = SearchString->Buffer;
      while ( memcmp(Buffer, v16, v4) )
      {
        if ( ++Buffer > v6 )
          return 0LL;
      }
      return Buffer;
    }
    return 0LL;
  }
  v7 = SearchString->Buffer;
  v8 = (wchar_t *)((char *)v7 + Length);
  if ( Buffer > v6 )
    return 0LL;
  for ( i = (char *)Buffer - (char *)v7; ; i += 2LL )
  {
    for ( j = v7; j < v8; ++j )
    {
      v11 = *j;
      if ( *(wchar_t *)((char *)j + i) != (_WORD)v11 )
      {
        NLS_UPCASE(qword_180184808, v11);
        v13 = NLS_UPCASE(qword_180184808, *(unsigned __int16 *)(i + v12));
        if ( v13 != v14 )
          break;
      }
    }
    if ( j == v8 )
      break;
    if ( ++Buffer > v6 )
      return 0LL;
  }
  return Buffer;
}
