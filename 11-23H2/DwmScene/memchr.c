/*
 * XREFs of memchr @ 0x1800E396C
 * Callers:
 *     sub_18001EE50 @ 0x18001EE50 (sub_18001EE50.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memchr(const void *Buf, int Val, size_t MaxCount)
{
  return __imp_memchr(Buf, Val, MaxCount);
}
