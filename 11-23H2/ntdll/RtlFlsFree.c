/*
 * XREFs of RtlFlsFree @ 0x180071980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlFlsFree(ULONG FlsIndex)
{
  return RtlpFlsFree(FlsIndex, FlsIndex);
}
