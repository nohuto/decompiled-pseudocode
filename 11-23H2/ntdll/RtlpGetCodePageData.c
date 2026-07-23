/*
 * XREFs of RtlpGetCodePageData @ 0x180059054
 * Callers:
 *     RtlUnicodeToOemN @ 0x180058F70 (RtlUnicodeToOemN.c)
 *     RtlOemToUnicodeN @ 0x180058FC0 (RtlOemToUnicodeN.c)
 *     RtlMultiByteToUnicodeN @ 0x180059010 (RtlMultiByteToUnicodeN.c)
 * Callees:
 *     RtlpIsUtf8Process @ 0x180018DC4 (RtlpIsUtf8Process.c)
 */

_CPTABLEINFO *__fastcall RtlpGetCodePageData(unsigned int a1)
{
  _CPTABLEINFO *v2; // rdx
  signed __int32 v3[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( a1 <= 1 && RtlpIsUtf8Process() )
    return &Utf8TableInfo;
  _InterlockedOr(v3, 0);
  if ( !a1 || a1 == GlobalRtlNlsState.CodePage )
    return &GlobalRtlNlsState;
  if ( a1 == 1 )
    return &CodePageTable;
  v2 = &CodePageTable;
  if ( a1 != CodePageTable.CodePage )
    return &Utf8TableInfo;
  return v2;
}
