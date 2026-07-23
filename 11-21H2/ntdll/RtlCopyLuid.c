/*
 * XREFs of RtlCopyLuid @ 0x18007FCE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlCopyLuid(PLUID DestinationLuid, PLUID SourceLuid)
{
  *DestinationLuid = *SourceLuid;
}
