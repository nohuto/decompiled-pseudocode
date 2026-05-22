/*
 * XREFs of _malloc_base @ 0x18005656A
 * Callers:
 *     __tlregdtor @ 0x180057828 (__tlregdtor.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl malloc_base(size_t Size)
{
  return _malloc_base(Size);
}
