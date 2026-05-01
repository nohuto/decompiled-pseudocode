/*
 * XREFs of RtlStringCchPrintfW @ 0x18008FBA8
 * Callers:
 *     SdbpCheckMatchingRegistryEntry @ 0x180094E8C (SdbpCheckMatchingRegistryEntry.c)
 *     AslGuidToString @ 0x180098A18 (AslGuidToString.c)
 *     AslGuidToString_UStr @ 0x180098AF4 (AslGuidToString_UStr.c)
 *     AslpFileQueryVersionString @ 0x18009CC58 (AslpFileQueryVersionString.c)
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
