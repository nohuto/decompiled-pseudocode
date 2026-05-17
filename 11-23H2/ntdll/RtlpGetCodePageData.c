/*
 * XREFs of RtlpGetCodePageData @ 0x180059054
 * Callers:
 *     RtlUnicodeToOemN @ 0x180058F70 (RtlUnicodeToOemN.c)
 *     RtlOemToUnicodeN @ 0x180058FC0 (RtlOemToUnicodeN.c)
 *     RtlMultiByteToUnicodeN @ 0x180059010 (RtlMultiByteToUnicodeN.c)
 * Callees:
 *     RtlpIsUtf8Process @ 0x180018DC4 (RtlpIsUtf8Process.c)
 */

__int16 *__fastcall RtlpGetCodePageData(unsigned int a1)
{
  __int16 *v2; // rdx
  signed __int32 v3[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( a1 <= 1 && RtlpIsUtf8Process() )
    return (__int16 *)&Utf8TableInfo;
  _InterlockedOr(v3, 0);
  if ( !a1 || a1 == (unsigned __int16)GlobalRtlNlsState )
    return &GlobalRtlNlsState;
  if ( a1 == 1 )
    return &word_1801847A0;
  v2 = &word_1801847A0;
  if ( a1 != (unsigned __int16)word_1801847A0 )
    return (__int16 *)&Utf8TableInfo;
  return v2;
}
