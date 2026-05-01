/*
 * XREFs of ?LogStringPrintf@details@wil@@YAPA_WPA_WPB_W1ZZ @ 0x1000232F
 * Callers:
 *     ?GetFailureLogString@wil@@YGJPA_WIABUFailureInfo@1@@Z @ 0x1000238B (-GetFailureLogString@wil@@YGJPA_WIABUFailureInfo@1@@Z.c)
 * Callees:
 *     StringVPrintfWorkerW @ 0x100022E9 (StringVPrintfWorkerW.c)
 */

wchar_t *wil::details::LogStringPrintf(
        wil::details *this,
        wchar_t *a2,
        const wchar_t *cchDest,
        const wchar_t *pszDest,
        ...)
{
  wil::details *v4; // esi
  int v5; // eax
  const wchar_t *v7; // [esp+0h] [ebp-4h]
  va_list savedregs; // [esp+4h] [ebp+0h]

  v4 = this;
  v5 = ((char *)a2 - (char *)this) >> 1;
  if ( v5 <= 0 )
  {
    if ( v5 )
      *(_WORD *)this = 0;
  }
  else
  {
    StringVPrintfWorkerW((STRSAFE_LPWSTR)&pszDest, (size_t)cchDest, (size_t *)&pszDest, v7, savedregs);
  }
  if ( a2 != (wchar_t *)this )
    return (wchar_t *)((char *)this + 2 * wcslen((const unsigned __int16 *)this));
  return (wchar_t *)v4;
}
