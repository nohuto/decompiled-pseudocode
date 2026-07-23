/*
 * XREFs of RtlUnicodeToMultiByteN @ 0x18000DD90
 * Callers:
 *     wcstombs @ 0x180099E90 (wcstombs.c)
 *     _wctomb_s_l @ 0x18009DB78 (_wctomb_s_l.c)
 *     _safecrt_wctomb_s @ 0x1800A0408 (_safecrt_wctomb_s.c)
 *     EtwpAddDebugInfoEvents @ 0x180122EE0 (EtwpAddDebugInfoEvents.c)
 * Callees:
 *     RtlpIsUtf8Process @ 0x18000E12C (RtlpIsUtf8Process.c)
 *     RtlUnicodeToCustomCPN @ 0x18000E160 (RtlUnicodeToCustomCPN.c)
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

  if ( (unsigned __int8)RtlpIsUtf8Process(MultiByteString) )
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
