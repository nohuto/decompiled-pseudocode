/*
 * XREFs of RtlGetParentLocaleName @ 0x18004D7D0
 * Callers:
 *     RtlGetNeutralFallback @ 0x18004C4FC (RtlGetNeutralFallback.c)
 *     _RtlpMuiRegAddNeutralLanguage @ 0x18006F570 (_RtlpMuiRegAddNeutralLanguage.c)
 *     LdrpGetParentLangId @ 0x180084FA8 (LdrpGetParentLangId.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x18004B2B4 (RtlStringCchLengthW.c)
 *     RtlpInitUnicodeStringUsingBuffer @ 0x18004BA58 (RtlpInitUnicodeStringUsingBuffer.c)
 *     RtlpNlsGetNameIndex @ 0x18004C138 (RtlpNlsGetNameIndex.c)
 *     RtlpLoadNlsData @ 0x180083D84 (RtlpLoadNlsData.c)
 *     RtlpIsCustomLocale @ 0x18008FA30 (RtlpIsCustomLocale.c)
 *     RtlpGetCustomCultureData @ 0x180109894 (RtlpGetCustomCultureData.c)
 */

__int64 __fastcall RtlGetParentLocaleName(PCWSTR SourceString, __int64 a2, unsigned int a3, char a4)
{
  int v8; // ebp
  int NameIndex; // eax
  int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // rax
  _WORD *v13; // r11
  __int64 result; // rax
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // [rsp+40h] [rbp+8h] BYREF

  if ( !SourceString )
    return 3221225711LL;
  if ( !a2 || !*(_QWORD *)(a2 + 8) )
    return 3221225712LL;
  if ( (a3 & 0xFFFFFFF9) != 0 )
    return 3221225713LL;
  v8 = a3 & 4;
  if ( (a3 & 4) != 0
    || !(unsigned __int8)RtlpIsCustomLocale(SourceString)
    || (v16 = a3 >> 1,
        LOBYTE(v15) = a4,
        LOBYTE(v16) = (a3 & 2) != 0,
        result = RtlpGetCustomCultureData(SourceString, v16, v15, a2),
        (int)result < 0) )
  {
    if ( !pTblPtrs && !(unsigned __int8)RtlpLoadNlsData() )
      return 3221225473LL;
    NameIndex = RtlpNlsGetNameIndex((__int64)SourceString);
    if ( NameIndex < 0 )
    {
      v10 = a3 & 2;
    }
    else
    {
      v10 = a3 & 2;
      if ( !v10 )
      {
        _mm_lfence();
        if ( (*(_BYTE *)(*(unsigned __int16 *)(pTblPtrs + 48)
                       * *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 24) + 8LL * NameIndex + 2)
                       + *(_QWORD *)(pTblPtrs + 8)
                       + 24LL) & 1) == 0 )
          return 3221225711LL;
      }
      _mm_lfence();
      v11 = *(unsigned __int16 *)(pTblPtrs + 48)
          * *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 24) + 8LL * NameIndex + 2);
      v12 = *(_QWORD *)(pTblPtrs + 32) + 2LL;
      if ( v12 + 2LL * *(unsigned int *)(v11 + *(_QWORD *)(pTblPtrs + 8) + 184) )
      {
        if ( (int)RtlStringCchLengthW(
                    (_WORD *)(v12 + 2LL * *(unsigned int *)(v11 + *(_QWORD *)(pTblPtrs + 8) + 184)),
                    0x55uLL,
                    &v19) < 0 )
          return 3221225473LL;
        return RtlpInitUnicodeStringUsingBuffer(a4, v13, v19, a2);
      }
    }
    if ( !v8 || !(unsigned __int8)RtlpIsCustomLocale(SourceString) )
      return 3221225711LL;
    LOBYTE(v18) = a4;
    LOBYTE(v17) = v10 != 0;
    return RtlpGetCustomCultureData(SourceString, v17, v18, a2);
  }
  return result;
}
