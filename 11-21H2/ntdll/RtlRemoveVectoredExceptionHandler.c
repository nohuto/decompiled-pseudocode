/*
 * XREFs of RtlRemoveVectoredExceptionHandler @ 0x180088BB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlRemoveVectoredExceptionHandler(PVOID Handle)
{
  return RtlpRemoveVectoredHandler(Handle, 0LL);
}
