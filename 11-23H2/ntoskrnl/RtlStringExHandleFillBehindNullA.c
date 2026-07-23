/*
 * XREFs of RtlStringExHandleFillBehindNullA @ 0x1404FE4D4
 * Callers:
 *     RtlStringCbPrintfExA @ 0x1404FE33C (RtlStringCbPrintfExA.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

NTSTATUS __stdcall RtlStringExHandleFillBehindNullA(NTSTRSAFE_PSTR pszDestEnd, size_t cbRemaining, ULONG dwFlags)
{
  if ( cbRemaining > 1 )
    memset(pszDestEnd + 1, (unsigned __int8)dwFlags, cbRemaining - 1);
  return 0;
}
