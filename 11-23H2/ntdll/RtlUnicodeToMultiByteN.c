/*
 * XREFs of RtlUnicodeToMultiByteN @ 0x180018840
 * Callers:
 *     wcstombs @ 0x180095770 (wcstombs.c)
 *     _wctomb_s_l @ 0x1800994B8 (_wctomb_s_l.c)
 *     _safecrt_wctomb_s @ 0x18009BD98 (_safecrt_wctomb_s.c)
 *     EtwpAddDebugInfoEvents @ 0x180126168 (EtwpAddDebugInfoEvents.c)
 * Callees:
 *     RtlUnicodeToCustomCPN @ 0x180018D20 (RtlUnicodeToCustomCPN.c)
 *     RtlpIsUtf8Process @ 0x180018DC4 (RtlpIsUtf8Process.c)
 */

__int64 __fastcall RtlUnicodeToMultiByteN(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int v5; // edx
  int v6; // r8d
  __int64 v7; // r9
  int v8; // r10d
  __int16 *v9; // rcx
  signed __int32 v11[8]; // [rsp+0h] [rbp-38h] BYREF

  if ( (unsigned __int8)RtlpIsUtf8Process() )
  {
    v9 = (__int16 *)&Utf8TableInfo;
  }
  else
  {
    _InterlockedOr(v11, 0);
    v9 = &GlobalRtlNlsState;
  }
  RtlUnicodeToCustomCPN((_DWORD)v9, v8, v5, v6, v7, a5);
  return 0LL;
}
