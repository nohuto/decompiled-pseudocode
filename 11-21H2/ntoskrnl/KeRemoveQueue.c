/*
 * XREFs of KeRemoveQueue @ 0x14023FFE0
 * Callers:
 *     sub_1403C6970 @ 0x1403C6970 (sub_1403C6970.c)
 *     sub_1403DD920 @ 0x1403DD920 (sub_1403DD920.c)
 *     sub_1403DE2B0 @ 0x1403DE2B0 (sub_1403DE2B0.c)
 *     sub_1406B9918 @ 0x1406B9918 (sub_1406B9918.c)
 * Callees:
 *     KeRemoveQueueEx @ 0x1402B7FA0 (KeRemoveQueueEx.c)
 */

PLIST_ENTRY __stdcall KeRemoveQueue(PRKQUEUE Queue, KPROCESSOR_MODE WaitMode, PLARGE_INTEGER Timeout)
{
  PLIST_ENTRY EntryArray; // [rsp+58h] [rbp+20h] BYREF

  EntryArray = 0LL;
  KeRemoveQueueEx(Queue, WaitMode, 0, Timeout, &EntryArray, 1u);
  return EntryArray;
}
