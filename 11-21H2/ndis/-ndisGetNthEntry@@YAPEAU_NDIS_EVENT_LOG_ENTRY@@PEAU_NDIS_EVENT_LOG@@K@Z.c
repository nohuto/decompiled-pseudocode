/*
 * XREFs of ?ndisGetNthEntry@@YAPEAU_NDIS_EVENT_LOG_ENTRY@@PEAU_NDIS_EVENT_LOG@@K@Z @ 0x1C00C004C
 * Callers:
 *     ?ndisFreeEventLog@@YAXPEAUNDIS_EVENT_LOG_HANDLE__@@@Z @ 0x1C0134950 (-ndisFreeEventLog@@YAXPEAUNDIS_EVENT_LOG_HANDLE__@@@Z.c)
 * Callees:
 *     <none>
 */

struct _NDIS_EVENT_LOG_ENTRY *__fastcall ndisGetNthEntry(struct _NDIS_EVENT_LOG *a1, int a2)
{
  return (struct _NDIS_EVENT_LOG_ENTRY *)((char *)&a1[1] + a2 * (unsigned int)a1->EntrySize);
}
