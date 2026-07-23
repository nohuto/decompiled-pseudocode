/*
 * XREFs of MIDL_user_allocate @ 0x1407E6F80
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

void *__stdcall MIDL_user_allocate(size_t size)
{
  return (void *)ExAllocatePool2(256LL, size, 1668313707LL);
}
