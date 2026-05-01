/*
 * XREFs of _malloc_base @ 0x1801C73F6
 * Callers:
 *     __tlregdtor @ 0x1801CE428 (__tlregdtor.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl malloc_base(size_t Size)
{
  return _malloc_base(Size);
}
