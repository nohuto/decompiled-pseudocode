/*
 * XREFs of RtlInterlockedFlushSList @ 0x180072C90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PSLIST_ENTRY __stdcall RtlInterlockedFlushSList(PSLIST_HEADER ListHead)
{
  return (PSLIST_ENTRY)RtlpInterlockedFlushSList(ListHead);
}
