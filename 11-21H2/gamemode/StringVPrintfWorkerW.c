/*
 * XREFs of StringVPrintfWorkerW @ 0x100022E9
 * Callers:
 *     ?StringCchPrintfW@@YAJPA_WIPB_WZZ @ 0x1000224F (-StringCchPrintfW@@YAJPA_WIPB_WZZ.c)
 *     ?LogStringPrintf@details@wil@@YAPA_WPA_WPB_W1ZZ @ 0x1000232F (-LogStringPrintf@details@wil@@YAPA_WPA_WPB_W1ZZ.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringVPrintfWorkerW(
        STRSAFE_LPWSTR pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        STRSAFE_LPCWSTR pszFormat,
        va_list argList)
{
  int v5; // edx
  wchar_t *v6; // ecx
  unsigned int v7; // esi
  wchar_t *v8; // edi
  HRESULT v9; // ebx
  int v10; // eax

  v7 = v5 - 1;
  v8 = v6;
  v9 = 0;
  v10 = __vsnwprintf(v6, v5 - 1, (const wchar_t *)cchDest, (va_list)pcchNewDestLength);
  if ( v10 < 0 || v10 > v7 )
  {
    v9 = -2147024774;
LABEL_6:
    v8[v7] = 0;
    return v9;
  }
  if ( v10 == v7 )
    goto LABEL_6;
  return v9;
}
