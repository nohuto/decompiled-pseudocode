/*
 * XREFs of RtlEqualUnicodeString @ 0x180029C70
 * Callers:
 *     RtlEqualDomainName @ 0x18000D310 (RtlEqualDomainName.c)
 *     RtlpIsDosDeviceName_Ustr @ 0x18001CC20 (RtlpIsDosDeviceName_Ustr.c)
 *     LdrpFindLoadedDllByName @ 0x180029A40 (LdrpFindLoadedDllByName.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x18002ACE0 (RtlDeriveCapabilitySidsFromName.c)
 *     LdrpMinimalMapModule @ 0x18002C524 (LdrpMinimalMapModule.c)
 *     LdrpFindLoadedDllByNameLockHeld @ 0x18002CA84 (LdrpFindLoadedDllByNameLockHeld.c)
 *     LdrpCheckKnownDllFullPath @ 0x18002E214 (LdrpCheckKnownDllFullPath.c)
 *     EtwpGetPrivateLoggerContextByName @ 0x18005C500 (EtwpGetPrivateLoggerContextByName.c)
 *     RtlpDetermineDosPathNameType4 @ 0x180077ED0 (RtlpDetermineDosPathNameType4.c)
 *     RtlpCheckForSameCurdir @ 0x18007BC80 (RtlpCheckForSameCurdir.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x18008B024 (RtlpGetNtProductTypeFromRegistry.c)
 *     LdrpCreatePendingEnclaveModule @ 0x1800D84C4 (LdrpCreatePendingEnclaveModule.c)
 *     LdrpFindOrPrepareEnclaveModule @ 0x1800D8A40 (LdrpFindOrPrepareEnclaveModule.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlEqualUnicodeString(PUNICODE_STRING String1, PUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  __int64 Length; // r9
  wchar_t *Buffer; // rax
  wchar_t *v5; // r11
  char *v6; // rbx
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // r9
  char *v10; // r8

  Length = String1->Length;
  if ( (_WORD)Length == String2->Length )
  {
    Buffer = String1->Buffer;
    v5 = (wchar_t *)((char *)Buffer + Length);
    if ( Buffer >= (wchar_t *)((char *)Buffer + Length) )
      return 1;
    if ( CaseInSensitive )
    {
      v6 = (char *)((char *)String2->Buffer - (char *)Buffer);
      while ( 1 )
      {
        v7 = *Buffer;
        v8 = *(unsigned __int16 *)((char *)Buffer + (_QWORD)v6);
        if ( (_WORD)v7 != (_WORD)v8 )
        {
          if ( (unsigned int)v7 >= 0x61 )
          {
            if ( (unsigned int)v7 > 0x7A )
            {
              if ( qword_180184808 && (unsigned __int16)v7 >= 0xC0u )
                LOWORD(v7) = *(_WORD *)(qword_180184808
                                      + 2
                                      * ((v7 & 0xF)
                                       + *(unsigned __int16 *)(qword_180184808
                                                             + 2LL
                                                             * (((unsigned __int8)v7 >> 4)
                                                              + (unsigned int)*(unsigned __int16 *)(qword_180184808
                                                                                                  + 2 * (v7 >> 8))))))
                           + v7;
            }
            else
            {
              LOWORD(v7) = v7 - 32;
            }
          }
          if ( (unsigned int)v8 >= 0x61 )
          {
            if ( (unsigned int)v8 > 0x7A )
            {
              if ( qword_180184808 )
              {
                if ( (unsigned __int16)v8 >= 0xC0u )
                  LOWORD(v8) = *(_WORD *)(qword_180184808
                                        + 2
                                        * ((v8 & 0xF)
                                         + *(unsigned __int16 *)(qword_180184808
                                                               + 2LL
                                                               * (((unsigned __int8)v8 >> 4)
                                                                + (unsigned int)*(unsigned __int16 *)(qword_180184808 + 2 * (v8 >> 8))))))
                             + v8;
              }
            }
            else
            {
              LOWORD(v8) = v8 - 32;
            }
          }
          if ( (_WORD)v7 != (_WORD)v8 )
            break;
        }
        if ( ++Buffer >= v5 )
          return 1;
      }
    }
    else
    {
      v10 = (char *)((char *)String2->Buffer - (char *)Buffer);
      while ( *Buffer == *(wchar_t *)((char *)Buffer + (_QWORD)v10) )
      {
        if ( ++Buffer >= v5 )
          return 1;
      }
    }
  }
  return 0;
}
