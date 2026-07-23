/*
 * XREFs of RtlpGetCodePageData @ 0x18000DD08
 * Callers:
 *     RtlUnicodeToOemN @ 0x18000DB70 (RtlUnicodeToOemN.c)
 *     RtlOemToUnicodeN @ 0x18000DCD0 (RtlOemToUnicodeN.c)
 * Callees:
 *     RtlpIsUtf8Process @ 0x18000E12C (RtlpIsUtf8Process.c)
 */

_CPTABLEINFO *__fastcall RtlpGetCodePageData(__int64 a1)
{
  signed __int32 v2[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( (unsigned __int8)RtlpIsUtf8Process(a1) )
    return &Utf8TableInfo;
  _InterlockedOr(v2, 0);
  return &GlobalRtlNlsState;
}
