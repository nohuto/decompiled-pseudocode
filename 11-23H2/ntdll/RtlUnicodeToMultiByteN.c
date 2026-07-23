/*
 * XREFs of RtlUnicodeToMultiByteN @ 0x180018840
 * Callers:
 *     wcstombs @ 0x180095770 (wcstombs.c)
 *     _wctomb_s_l @ 0x1800994B8 (_wctomb_s_l.c)
 *     _safecrt_wctomb_s @ 0x18009BD98 (_safecrt_wctomb_s.c)
 *     EtwpAddDebugInfoEvents @ 0x180126138 (EtwpAddDebugInfoEvents.c)
 * Callees:
 *     RtlUnicodeToCustomCPN @ 0x180018D20 (RtlUnicodeToCustomCPN.c)
 *     RtlpIsUtf8Process @ 0x180018DC4 (RtlpIsUtf8Process.c)
 */

NTSTATUS __cdecl RtlUnicodeToMultiByteN(
        PCHAR MultiByteString,
        ULONG MaxBytesInMultiByteString,
        PULONG BytesInMultiByteString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v5; // edx
  ULONG *v6; // r8
  WCHAR *v7; // r9
  CHAR *v8; // r10
  _CPTABLEINFO *v9; // rcx
  signed __int32 v11[8]; // [rsp+0h] [rbp-38h] BYREF

  if ( (unsigned __int8)RtlpIsUtf8Process(
                          MultiByteString,
                          MaxBytesInMultiByteString,
                          BytesInMultiByteString,
                          UnicodeString) )
  {
    v9 = &Utf8TableInfo;
  }
  else
  {
    _InterlockedOr(v11, 0);
    v9 = &GlobalRtlNlsState;
  }
  RtlUnicodeToCustomCPN(v9, v8, v5, v6, v7, BytesInUnicodeString);
  return 0;
}
