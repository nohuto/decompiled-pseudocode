/*
 * XREFs of memcpy_0 @ 0x18000F990
 * Callers:
 *     memcpy_s @ 0x180009F38 (memcpy_s.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy_0(void *a1, const void *Src, size_t Size)
{
  return memcpy(a1, Src, Size);
}
