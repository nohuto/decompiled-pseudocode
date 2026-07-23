/*
 * XREFs of RtlFlsFree @ 0x18007ABE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlFlsFree(ULONG FlsIndex)
{
  return RtlpFlsFree(FlsIndex, FlsIndex);
}
