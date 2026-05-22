/*
 * XREFs of _malloc_base @ 0x18004A7FA
 * Callers:
 *     __tlregdtor @ 0x18004B954 (__tlregdtor.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl malloc_base(size_t Size)
{
  return _malloc_base(Size);
}
