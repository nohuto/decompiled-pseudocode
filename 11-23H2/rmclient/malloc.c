/*
 * XREFs of malloc @ 0x18000AF71
 * Callers:
 *     sub_18000BAB0 @ 0x18000BAB0 (sub_18000BAB0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl malloc(size_t Size)
{
  return __imp_malloc(Size);
}
