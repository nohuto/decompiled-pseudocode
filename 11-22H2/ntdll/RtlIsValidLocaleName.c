/*
 * XREFs of RtlIsValidLocaleName @ 0x180109810
 * Callers:
 *     RtlGetUserPreferredUILanguages @ 0x180080A70 (RtlGetUserPreferredUILanguages.c)
 *     RtlGetSystemPreferredUILanguages @ 0x180081BE0 (RtlGetSystemPreferredUILanguages.c)
 *     RtlUnicodeStringToLcid @ 0x1800FA3AC (RtlUnicodeStringToLcid.c)
 * Callees:
 *     RtlpNlsGetNameIndex @ 0x180015820 (RtlpNlsGetNameIndex.c)
 *     RtlpLoadNlsData @ 0x18007F7B8 (RtlpLoadNlsData.c)
 *     RtlpGetCustomCultureData @ 0x180109964 (RtlpGetCustomCultureData.c)
 *     RtlpIsCustomLocale @ 0x180109DC4 (RtlpIsCustomLocale.c)
 */

// local variable allocation has failed, the output may be wrong!
BOOLEAN __cdecl RtlIsValidLocaleName(PCWSTR LocaleName, ULONG Flags)
{
  __int64 v2; // r8
  ULONG *v3; // r9
  char v4; // di
  int NameIndex; // eax

  v4 = Flags;
  if ( !LocaleName
    || (Flags & 0xFFFFFFFD) != 0
    || !pTblPtrs && !RtlpLoadNlsData((__int64)LocaleName, *(__int64 *)&Flags, v2, v3) )
  {
    return 0;
  }
  NameIndex = RtlpNlsGetNameIndex((__int64)LocaleName);
  if ( NameIndex < 0 )
  {
    if ( !(unsigned __int8)RtlpIsCustomLocale(LocaleName)
      || (v4 & 2) == 0 && (int)RtlpGetCustomCultureData(LocaleName, 0LL, 0LL, 0LL) < 0 )
    {
      return 0;
    }
  }
  else if ( (v4 & 2) == 0 )
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
