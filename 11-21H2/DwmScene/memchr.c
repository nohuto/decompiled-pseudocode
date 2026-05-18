/*
 * XREFs of memchr @ 0x1800FEEA3
 * Callers:
 *     sub_180020BF8 @ 0x180020BF8 (sub_180020BF8.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memchr(const void *Buf, int Val, size_t MaxCount)
{
  return __imp_memchr(Buf, Val, MaxCount);
}
