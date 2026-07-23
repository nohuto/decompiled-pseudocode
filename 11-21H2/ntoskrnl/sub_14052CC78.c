/*
 * XREFs of sub_14052CC78 @ 0x14052CC78
 * Callers:
 *     sub_140521F54 @ 0x140521F54 (sub_140521F54.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14052CB50 @ 0x14052CB50 (sub_14052CB50.c)
 */

void *__fastcall sub_14052CC78(void *a1)
{
  sub_14052CB50((__int64)a1 + 8);
  return memset(a1, 0, 0x40uLL);
}
