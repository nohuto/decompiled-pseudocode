/*
 * XREFs of RtlIsValidLocaleName @ 0x180109740
 * Callers:
 *     RtlGetSystemPreferredUILanguages @ 0x18007E780 (RtlGetSystemPreferredUILanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x180083ED0 (RtlGetUserPreferredUILanguages.c)
 *     RtlUnicodeStringToLcid @ 0x1800FA9A8 (RtlUnicodeStringToLcid.c)
 * Callees:
 *     RtlpNlsGetNameIndex @ 0x18004C138 (RtlpNlsGetNameIndex.c)
 *     RtlpLoadNlsData @ 0x180083D84 (RtlpLoadNlsData.c)
 *     RtlpIsCustomLocale @ 0x18008FA30 (RtlpIsCustomLocale.c)
 *     RtlpGetCustomCultureData @ 0x180109894 (RtlpGetCustomCultureData.c)
 */

char __fastcall RtlIsValidLocaleName(PCWSTR SourceString, int a2)
{
  char v2; // di
  int NameIndex; // eax

  v2 = a2;
  if ( !SourceString || (a2 & 0xFFFFFFFD) != 0 || !pTblPtrs && !RtlpLoadNlsData() )
    return 0;
  NameIndex = RtlpNlsGetNameIndex((__int64)SourceString);
  if ( NameIndex < 0 )
  {
    if ( !RtlpIsCustomLocale(SourceString)
      || (v2 & 2) == 0 && (int)RtlpGetCustomCultureData(SourceString, 0LL, 0LL, 0LL) < 0 )
    {
      return 0;
    }
  }
  else if ( (v2 & 2) == 0 )
  {
    _mm_lfence();
    if ( (*(_BYTE *)(*(unsigned __int16 *)(pTblPtrs + 48)
                   * *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 24) + 8LL * NameIndex + 2)
                   + *(_QWORD *)(pTblPtrs + 8)
                   + 24LL) & 1) == 0 )
      return 0;
  }
  return 1;
}
