/*
 * XREFs of _malloc_base @ 0x180188E8E
 * Callers:
 *     __tlregdtor @ 0x18018EDF4 (__tlregdtor.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl malloc_base(size_t Size)
{
  return _malloc_base(Size);
}
