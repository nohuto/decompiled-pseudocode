/*
 * XREFs of RtlUnicodeToMultiByteN @ 0x180018A50
 * Callers:
 *     wcstombs @ 0x180094F70 (wcstombs.c)
 *     _wctomb_s_l @ 0x180098CB8 (_wctomb_s_l.c)
 *     _safecrt_wctomb_s @ 0x18009B598 (_safecrt_wctomb_s.c)
 *     EtwpAddDebugInfoEvents @ 0x180124CB8 (EtwpAddDebugInfoEvents.c)
 * Callees:
 *     RtlUnicodeToCustomCPN @ 0x180018F30 (RtlUnicodeToCustomCPN.c)
 *     RtlpIsUtf8Process @ 0x180018FD4 (RtlpIsUtf8Process.c)
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
