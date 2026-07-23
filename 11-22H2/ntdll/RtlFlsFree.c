/*
 * XREFs of RtlFlsFree @ 0x180071660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlFlsFree(ULONG FlsIndex)
{
  return RtlpFlsFree(FlsIndex, FlsIndex);
}
