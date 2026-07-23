/*
 * XREFs of MiGetInPageAutoBoostLock @ 0x1402BD6D8
 * Callers:
 *     MiPrefetchVirtualMemory @ 0x1402EE458 (MiPrefetchVirtualMemory.c)
 *     MmPrefetchPagesEx @ 0x14073E8C8 (MmPrefetchPagesEx.c)
 *     MiPrefetchControlArea @ 0x1407DCBDC (MiPrefetchControlArea.c)
 * Callees:
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 */

_QWORD *MiGetInPageAutoBoostLock()
{
  _QWORD *result; // rax

  result = (_QWORD *)MiAllocatePool(64LL, 8LL, 1095330125LL);
  if ( result )
    *result = 1LL;
  return result;
}
