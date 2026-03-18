/*
 * XREFs of KsepPoolAllocateNonPaged @ 0x1403A5E04
 * Callers:
 *     KseSetCompletionHook @ 0x1403A5D70 (KseSetCompletionHook.c)
 *     KseShimDriverIoCallbacks @ 0x140693D74 (KseShimDriverIoCallbacks.c)
 * Callees:
 *     memset @ 0x140435A00 (memset.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

void *__fastcall KsepPoolAllocateNonPaged(size_t Size)
{
  void *Pool2; // rax
  void *v3; // rbx

  Pool2 = (void *)ExAllocatePool2(64LL, Size, 1648710475LL);
  v3 = Pool2;
  if ( Pool2 )
  {
    _InterlockedIncrement(&dword_140C40748);
    memset(Pool2, 0, Size);
  }
  else
  {
    _InterlockedIncrement(&dword_140C40754);
  }
  return v3;
}
