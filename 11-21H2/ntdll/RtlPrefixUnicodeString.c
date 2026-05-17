/*
 * XREFs of RtlPrefixUnicodeString @ 0x180041530
 * Callers:
 *     RtlpDosPathNameToRelativeNtPathName @ 0x1800466F0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlpDetermineDosPathNameType4 @ 0x18007B7C0 (RtlpDetermineDosPathNameType4.c)
 *     RtlpProcessIFEOKeyFilter @ 0x18007C5D8 (RtlpProcessIFEOKeyFilter.c)
 *     RtlNtPathNameToDosPathName @ 0x1800D7410 (RtlNtPathNameToDosPathName.c)
 *     LdrpFindOrPrepareEnclaveModule @ 0x1800D8D80 (LdrpFindOrPrepareEnclaveModule.c)
 * Callees:
 *     NLS_UPCASE @ 0x180041758 (NLS_UPCASE.c)
 */

char __fastcall RtlPrefixUnicodeString(unsigned __int16 *a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  _WORD *v4; // r10
  char *v5; // r11
  __int64 v6; // rbx
  __int64 v7; // rdx
  unsigned __int16 *v9; // r10
  __int16 v10; // ax
  __int16 v11; // r9
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
          NLS_UPCASE(qword_1801776F8, v7);
          v10 = NLS_UPCASE(qword_1801776F8, *v9);
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
