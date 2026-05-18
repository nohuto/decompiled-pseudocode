/*
 * XREFs of _malloc_base @ 0x18000BFA6
 * Callers:
 *     __tlregdtor @ 0x18000C828 (__tlregdtor.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl malloc_base(size_t Size)
{
  return _malloc_base(Size);
}
