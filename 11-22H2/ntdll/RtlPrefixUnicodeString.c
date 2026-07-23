/*
 * XREFs of RtlPrefixUnicodeString @ 0x180014AC0
 * Callers:
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18001BDC0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x18002AEB0 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlpProcessIFEOKeyFilter @ 0x180076A60 (RtlpProcessIFEOKeyFilter.c)
 *     RtlpDetermineDosPathNameType4 @ 0x180077860 (RtlpDetermineDosPathNameType4.c)
 *     RtlNtPathNameToDosPathName @ 0x1800D7460 (RtlNtPathNameToDosPathName.c)
 *     LdrpFindOrPrepareEnclaveModule @ 0x1800D9090 (LdrpFindOrPrepareEnclaveModule.c)
 * Callees:
 *     NLS_UPCASE @ 0x1800156E8 (NLS_UPCASE.c)
 */

BOOLEAN __cdecl RtlPrefixUnicodeString(PUNICODE_STRING String1, PUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  __int64 Length; // rax
  wchar_t *Buffer; // r11
  wchar_t *v5; // rbx
  char *v6; // rdi
  __int64 v7; // rdx
  unsigned __int16 *v9; // r11
  __int16 v10; // ax
  __int16 v11; // r10
  char *v12; // rcx

  Length = String1->Length;
  Buffer = String1->Buffer;
  if ( String2->Length >= (unsigned __int16)Length )
  {
    v5 = (wchar_t *)((char *)Buffer + Length);
    if ( Buffer >= (wchar_t *)((char *)Buffer + Length) )
      return 1;
    if ( CaseInSensitive )
    {
      v6 = (char *)((char *)String2->Buffer - (char *)Buffer);
      while ( 1 )
      {
        v7 = *(unsigned __int16 *)((char *)Buffer + (_QWORD)v6);
        if ( *Buffer != (_WORD)v7 )
        {
          NLS_UPCASE(qword_1801817B8, v7);
          v10 = NLS_UPCASE(qword_1801817B8, *v9);
          if ( v10 != v11 )
            break;
        }
        if ( ++Buffer >= v5 )
          return 1;
      }
    }
    else
    {
      v12 = (char *)((char *)String2->Buffer - (char *)Buffer);
      while ( *Buffer == *(wchar_t *)((char *)Buffer + (_QWORD)v12) )
      {
        if ( ++Buffer >= v5 )
          return 1;
      }
    }
  }
  return 0;
}
