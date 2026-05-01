/*
 * XREFs of RtlStringCchPrintfW @ 0x18008FF08
 * Callers:
 *     SdbpCheckMatchingRegistryEntry @ 0x1800951EC (SdbpCheckMatchingRegistryEntry.c)
 *     AslGuidToString @ 0x180098D78 (AslGuidToString.c)
 *     AslGuidToString_UStr @ 0x180098E54 (AslGuidToString_UStr.c)
 *     AslpFileQueryVersionString @ 0x18009CFB8 (AslpFileQueryVersionString.c)
 * Callees:
 *     <none>
 */

__int64 RtlStringCchPrintfW(wchar_t *a1, __int64 a2, const wchar_t *a3, ...)
{
  unsigned int v4; // edi
  unsigned __int64 v5; // rsi
  int v6; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, a3);
  if ( (unsigned __int64)(a2 - 1) <= 0x7FFFFFFE )
  {
    v5 = a2 - 1;
    v4 = 0;
    v6 = _vsnwprintf(a1, a2 - 1, a3, Args);
    if ( v6 < 0 || v6 > v5 )
    {
      v4 = -2147483643;
    }
    else if ( v6 != v5 )
    {
      return v4;
    }
    a1[v5] = 0;
    return v4;
  }
  v4 = -1073741811;
  if ( a2 )
    *a1 = 0;
  return v4;
}
