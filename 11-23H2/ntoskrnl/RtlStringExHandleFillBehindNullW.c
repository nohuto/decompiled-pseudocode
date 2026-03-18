/*
 * XREFs of RtlStringExHandleFillBehindNullW @ 0x1403B3590
 * Callers:
 *     RtlStringCbPrintfExW @ 0x140226350 (RtlStringCbPrintfExW.c)
 *     RtlStringCchPrintfExW @ 0x14022B720 (RtlStringCchPrintfExW.c)
 * Callees:
 *     memset @ 0x140435A00 (memset.c)
 */

NTSTATUS __stdcall RtlStringExHandleFillBehindNullW(NTSTRSAFE_PWSTR pszDestEnd, size_t cbRemaining, ULONG dwFlags)
{
  if ( cbRemaining > 2 )
    memset(pszDestEnd + 1, (unsigned __int8)dwFlags, cbRemaining - 2);
  return 0;
}
