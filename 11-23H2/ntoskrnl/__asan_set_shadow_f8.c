/*
 * XREFs of __asan_set_shadow_f8 @ 0x140566CC0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

void *__fastcall _asan_set_shadow_f8(void *a1, size_t a2)
{
  return memset(a1, 248, a2);
}
