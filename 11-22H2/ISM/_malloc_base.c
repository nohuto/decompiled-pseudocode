/*
 * XREFs of _malloc_base @ 0x1800572FA
 * Callers:
 *     __tlregdtor @ 0x180058658 (__tlregdtor.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl malloc_base(size_t Size)
{
  return _malloc_base(Size);
}
