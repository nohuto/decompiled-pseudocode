/*
 * XREFs of ExQueryDepthSList @ 0x140334940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

USHORT __stdcall ExQueryDepthSList(PSLIST_HEADER SListHead)
{
  return SListHead->Alignment;
}
