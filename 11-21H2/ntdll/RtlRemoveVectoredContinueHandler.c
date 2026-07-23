/*
 * XREFs of RtlRemoveVectoredContinueHandler @ 0x1800E4D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlRemoveVectoredContinueHandler(PVOID Handle)
{
  return RtlpRemoveVectoredHandler((void **)Handle, 1u);
}
