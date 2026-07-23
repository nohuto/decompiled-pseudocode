/*
 * XREFs of KeRundownQueue @ 0x140234660
 * Callers:
 *     <none>
 * Callees:
 *     sub_140234764 @ 0x140234764 (sub_140234764.c)
 */

PLIST_ENTRY __stdcall KeRundownQueue(PRKQUEUE Queue)
{
  return (PLIST_ENTRY)sub_140234764(Queue);
}
