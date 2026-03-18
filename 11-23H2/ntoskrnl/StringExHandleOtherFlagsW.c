/*
 * XREFs of StringExHandleOtherFlagsW @ 0x14055F7D8
 * Callers:
 *     RtlStringCbPrintfExW @ 0x140226350 (RtlStringCbPrintfExW.c)
 *     RtlStringCchCopyExW @ 0x14022B238 (RtlStringCchCopyExW.c)
 *     RtlStringCchPrintfExW @ 0x14022B720 (RtlStringCchPrintfExW.c)
 *     RtlStringCchCopyNExW @ 0x14022B860 (RtlStringCchCopyNExW.c)
 *     RtlStringCbCopyExW @ 0x14034E7C0 (RtlStringCbCopyExW.c)
 *     StringCchPrintfExW @ 0x140671220 (StringCchPrintfExW.c)
 * Callees:
 *     memset @ 0x140435A00 (memset.c)
 */

HRESULT __stdcall StringExHandleOtherFlagsW(
        STRSAFE_LPWSTR pszDest,
        size_t cbDest,
        size_t cchOriginalDestLength,
        STRSAFE_LPWSTR *ppszDestEnd,
        size_t *pcchRemaining,
        DWORD dwFlags)
{
  size_t v7; // rdi
  wchar_t *v10; // rax

  v7 = cbDest >> 1;
  if ( cbDest >> 1 && (dwFlags & 0x1000) != 0 )
  {
    *ppszDestEnd = pszDest;
    *pcchRemaining = v7;
    *pszDest = 0;
  }
  if ( (dwFlags & 0x400) == 0 )
  {
LABEL_7:
    if ( !v7 )
      return 0;
    goto LABEL_8;
  }
  memset(pszDest, (unsigned __int8)dwFlags, cbDest);
  if ( !(_BYTE)dwFlags )
  {
    *ppszDestEnd = pszDest;
    *pcchRemaining = v7;
    goto LABEL_7;
  }
  if ( !v7 )
    return 0;
  *pcchRemaining = 1LL;
  v10 = &pszDest[v7 - 1];
  *ppszDestEnd = v10;
  *v10 = 0;
LABEL_8:
  if ( (dwFlags & 0x800) != 0 )
  {
    *ppszDestEnd = pszDest;
    *pcchRemaining = v7;
    *pszDest = 0;
  }
  return 0;
}
