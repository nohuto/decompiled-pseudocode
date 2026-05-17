/*
 * XREFs of RtlEqualUnicodeString @ 0x18004A360
 * Callers:
 *     EtwpGetPrivateLoggerContextByName @ 0x180006E08 (EtwpGetPrivateLoggerContextByName.c)
 *     RtlEqualDomainName @ 0x180031980 (RtlEqualDomainName.c)
 *     LdrpFindLoadedDllByNameLockHeld @ 0x1800413B4 (LdrpFindLoadedDllByNameLockHeld.c)
 *     RtlpIsDosDeviceName_Ustr @ 0x180047620 (RtlpIsDosDeviceName_Ustr.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x18004A1A0 (RtlDeriveCapabilitySidsFromName.c)
 *     LdrpMinimalMapModule @ 0x18004CAA8 (LdrpMinimalMapModule.c)
 *     LdrpCheckKnownDllFullPath @ 0x18004F308 (LdrpCheckKnownDllFullPath.c)
 *     RtlpDetermineDosPathNameType4 @ 0x18007B7C0 (RtlpDetermineDosPathNameType4.c)
 *     RtlpCheckForSameCurdir @ 0x1800801A0 (RtlpCheckForSameCurdir.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x1800915D0 (RtlpGetNtProductTypeFromRegistry.c)
 *     LdrpCreatePendingEnclaveModule @ 0x1800D8804 (LdrpCreatePendingEnclaveModule.c)
 *     LdrpFindOrPrepareEnclaveModule @ 0x1800D8D80 (LdrpFindOrPrepareEnclaveModule.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlEqualUnicodeString(unsigned __int16 *a1, __int64 a2, char a3)
{
  __int64 v3; // r9
  _WORD *v4; // rax
  char *v5; // r11
  __int64 v6; // rbx
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // r9
  __int64 v10; // r8

  v3 = *a1;
  if ( (_WORD)v3 == *(_WORD *)a2 )
  {
    v4 = (_WORD *)*((_QWORD *)a1 + 1);
    v5 = (char *)v4 + v3;
    if ( v4 >= (_WORD *)((char *)v4 + v3) )
      return 1;
    if ( a3 )
    {
      v6 = *(_QWORD *)(a2 + 8) - (_QWORD)v4;
      while ( 1 )
      {
        v7 = (unsigned __int16)*v4;
        v8 = *(unsigned __int16 *)((char *)v4 + v6);
        if ( (_WORD)v7 != (_WORD)v8 )
        {
          if ( (unsigned int)v7 >= 0x61 )
          {
            if ( (unsigned int)v7 > 0x7A )
            {
              if ( qword_1801776F8 && (unsigned __int16)v7 >= 0xC0u )
                LOWORD(v7) = *(_WORD *)(qword_1801776F8
                                      + 2
                                      * ((v7 & 0xF)
                                       + *(unsigned __int16 *)(qword_1801776F8
                                                             + 2LL
                                                             * (((unsigned __int8)v7 >> 4)
                                                              + (unsigned int)*(unsigned __int16 *)(qword_1801776F8
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
              if ( qword_1801776F8 )
              {
                if ( (unsigned __int16)v8 >= 0xC0u )
                  LOWORD(v8) = *(_WORD *)(qword_1801776F8
                                        + 2
                                        * ((v8 & 0xF)
                                         + *(unsigned __int16 *)(qword_1801776F8
                                                               + 2LL
                                                               * (((unsigned __int8)v8 >> 4)
                                                                + (unsigned int)*(unsigned __int16 *)(qword_1801776F8 + 2 * (v8 >> 8))))))
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
        if ( ++v4 >= (_WORD *)v5 )
          return 1;
      }
    }
    else
    {
      v10 = *(_QWORD *)(a2 + 8) - (_QWORD)v4;
      while ( *v4 == *(_WORD *)((char *)v4 + v10) )
      {
        if ( ++v4 >= (_WORD *)v5 )
          return 1;
      }
    }
  }
  return 0;
}
