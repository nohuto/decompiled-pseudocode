/*
 * XREFs of memcpy @ 0x180016A52
 * Callers:
 *     sub_180006AA0 @ 0x180006AA0 (sub_180006AA0.c)
 *     sub_180007760 @ 0x180007760 (sub_180007760.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy(void *a1, const void *Src, size_t Size)
{
  return __imp_memcpy(a1, Src, Size);
}
