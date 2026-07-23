/*
 * XREFs of IoRemoveLinkShareAccess @ 0x140947620
 * Callers:
 *     <none>
 * Callees:
 *     IoRemoveLinkShareAccessEx @ 0x140791EF0 (IoRemoveLinkShareAccessEx.c)
 */

unsigned int *__fastcall IoRemoveLinkShareAccess(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  return IoRemoveLinkShareAccessEx(a1, a2, a3, 0);
}
