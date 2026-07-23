/*
 * XREFs of RtlpMuiRegDupLanguageConfigList @ 0x180111178
 * Callers:
 *     RtlpDupTebLanguageList @ 0x1800920B0 (RtlpDupTebLanguageList.c)
 * Callees:
 *     RtlpMuiRegCreateLanguageConfigList @ 0x18006F324 (RtlpMuiRegCreateLanguageConfigList.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 */

_QWORD *__fastcall RtlpMuiRegDupLanguageConfigList(__int64 a1)
{
  __int64 v2; // rsi
  _QWORD *LanguageConfigList; // rax
  _QWORD *v4; // rbx

  if ( !a1 )
    return 0LL;
  v2 = *(unsigned __int16 *)(a1 + 4);
  LanguageConfigList = RtlpMuiRegCreateLanguageConfigList(*(unsigned __int16 *)(a1 + 4));
  v4 = LanguageConfigList;
  if ( !LanguageConfigList )
    return 0LL;
  if ( (_DWORD)v2 )
  {
    memmove((void *)LanguageConfigList[1], *(const void **)(a1 + 8), 12 * v2);
    *((_WORD *)v4 + 2) = v2;
  }
  return v4;
}
