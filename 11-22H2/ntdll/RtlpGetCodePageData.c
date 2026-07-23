/*
 * XREFs of RtlpGetCodePageData @ 0x180059188
 * Callers:
 *     RtlUnicodeToOemN @ 0x1800590D0 (RtlUnicodeToOemN.c)
 *     RtlOemToUnicodeN @ 0x180059110 (RtlOemToUnicodeN.c)
 *     RtlMultiByteToUnicodeN @ 0x180059150 (RtlMultiByteToUnicodeN.c)
 * Callees:
 *     RtlpIsUtf8Process @ 0x180018FD4 (RtlpIsUtf8Process.c)
 */

_CPTABLEINFO *RtlpGetCodePageData()
{
  signed __int32 v1[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( RtlpIsUtf8Process() )
    return &Utf8TableInfo;
  _InterlockedOr(v1, 0);
  return &GlobalRtlNlsState;
}
