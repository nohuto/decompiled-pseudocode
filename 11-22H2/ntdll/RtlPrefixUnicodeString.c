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

char __fastcall RtlPrefixUnicodeString(unsigned __int16 *a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  _WORD *v4; // r11
  char *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rdx
  unsigned __int16 *v9; // r11
  __int16 v10; // ax
  __int16 v11; // r10
  __int64 v12; // rcx

  v3 = *a1;
  v4 = (_WORD *)*((_QWORD *)a1 + 1);
  if ( *(_WORD *)a2 >= (unsigned __int16)v3 )
  {
    v5 = (char *)v4 + v3;
    if ( v4 >= (_WORD *)((char *)v4 + v3) )
      return 1;
    if ( a3 )
    {
      v6 = *(_QWORD *)(a2 + 8) - (_QWORD)v4;
      while ( 1 )
      {
        v7 = *(unsigned __int16 *)((char *)v4 + v6);
        if ( *v4 != (_WORD)v7 )
        {
          NLS_UPCASE(qword_1801817B8, v7);
          v10 = NLS_UPCASE(qword_1801817B8, *v9);
          if ( v10 != v11 )
            break;
        }
        if ( ++v4 >= (_WORD *)v5 )
          return 1;
      }
    }
    else
    {
      v12 = *(_QWORD *)(a2 + 8) - (_QWORD)v4;
      while ( *v4 == *(_WORD *)((char *)v4 + v12) )
      {
        if ( ++v4 >= (_WORD *)v5 )
          return 1;
      }
    }
  }
  return 0;
}
