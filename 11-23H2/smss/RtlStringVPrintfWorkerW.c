/*
 * XREFs of RtlStringVPrintfWorkerW @ 0x1400043C4
 * Callers:
 *     RtlStringCbPrintfW @ 0x140004384 (RtlStringCbPrintfW.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringVPrintfWorkerW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        NTSTRSAFE_PCWSTR pszFormat,
        va_list argList)
{
  size_t v5; // rdi
  NTSTATUS v7; // ebx
  int v8; // eax

  v5 = cchDest - 1;
  v7 = 0;
  v8 = _vsnwprintf_s(pszDest, cchDest, cchDest - 1, pszFormat, argList);
  if ( v8 < 0 )
    goto LABEL_6;
  if ( v8 == v5 )
  {
    pszDest[v5] = 0;
    return v7;
  }
  if ( v8 > v5 )
  {
LABEL_6:
    pszDest[v5] = 0;
    return -2147483643;
  }
  return v7;
}
