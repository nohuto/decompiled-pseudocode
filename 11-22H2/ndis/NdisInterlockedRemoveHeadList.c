/*
 * XREFs of NdisInterlockedRemoveHeadList @ 0x1C00C4300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PLIST_ENTRY __fastcall NdisInterlockedRemoveHeadList(_LIST_ENTRY *a1, KSPIN_LOCK *a2)
{
  return ExInterlockedRemoveHeadList(a1, a2);
}
