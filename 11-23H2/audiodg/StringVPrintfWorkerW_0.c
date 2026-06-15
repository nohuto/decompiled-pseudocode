/*
 * XREFs of StringVPrintfWorkerW_0 @ 0x14006F3E0
 * Callers:
 *     ?ApoLog@CAPOServiceProvider@@UEAAXW4APO_LOG_LEVEL@@PEBGZZ @ 0x14006F0A0 (-ApoLog@CAPOServiceProvider@@UEAAXW4APO_LOG_LEVEL@@PEBGZZ.c)
 * Callees:
 *     _vsnwprintf @ 0x14002924C (_vsnwprintf.c)
 */

HRESULT __stdcall StringVPrintfWorkerW_0(
        STRSAFE_LPWSTR pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        STRSAFE_LPCWSTR pszFormat,
        va_list argList)
{
  size_t v6; // rbx
  HRESULT v8; // ebp
  int v9; // eax

  v6 = 1023LL;
  v8 = 0;
  v9 = vsnwprintf(pszDest, 0x3FFuLL, pszFormat, argList);
  if ( v9 < 0 || (unsigned __int64)v9 > 0x3FF )
  {
    v8 = -2147024774;
  }
  else if ( v9 != 1023LL )
  {
    v6 = v9;
    goto LABEL_7;
  }
  pszDest[1023] = 0;
LABEL_7:
  if ( pcchNewDestLength )
    *pcchNewDestLength = v6;
  return v8;
}
