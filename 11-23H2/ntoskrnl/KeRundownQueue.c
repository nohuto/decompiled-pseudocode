/*
 * XREFs of KeRundownQueue @ 0x14028C990
 * Callers:
 *     <none>
 * Callees:
 *     KeRundownQueueEx @ 0x14028CA94 (KeRundownQueueEx.c)
 */

PLIST_ENTRY __stdcall KeRundownQueue(PRKQUEUE Queue)
{
  char v1; // dl

  v1 = 1;
  return (PLIST_ENTRY)KeRundownQueueEx(Queue, v1);
}
