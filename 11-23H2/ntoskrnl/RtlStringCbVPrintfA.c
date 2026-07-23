/*
 * XREFs of RtlStringCbVPrintfA @ 0x14020A6B8
 * Callers:
 *     KsepLogEtwMessage @ 0x14020A5DC (KsepLogEtwMessage.c)
 *     vDbgPrintExWithPrefixInternal @ 0x14032AA40 (vDbgPrintExWithPrefixInternal.c)
 * Callees:
 *     _vsnprintf @ 0x1403D8CB0 (_vsnprintf.c)
 */

NTSTATUS __stdcall RtlStringCbVPrintfA(
        NTSTRSAFE_PSTR pszDest,
        size_t cbDest,
        NTSTRSAFE_PCSTR pszFormat,
        va_list argList)
{
  size_t v5; // rdi
  NTSTATUS v6; // ebx
  int v7; // eax

  if ( cbDest - 1 > 0x7FFFFFFE )
  {
    v6 = -1073741811;
    if ( cbDest )
      *pszDest = 0;
  }
  else
  {
    v5 = cbDest - 1;
    v6 = 0;
    v7 = vsnprintf(pszDest, cbDest - 1, pszFormat, argList);
    if ( v7 < 0 || v7 > v5 )
    {
      pszDest[v5] = 0;
      return -2147483643;
    }
    else if ( v7 == v5 )
    {
      pszDest[v5] = 0;
    }
  }
  return v6;
}
