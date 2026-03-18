/*
 * XREFs of MiGetInPageAutoBoostLock @ 0x1402BD448
 * Callers:
 *     MiPrefetchVirtualMemory @ 0x1402EE1C8 (MiPrefetchVirtualMemory.c)
 *     MmPrefetchPagesEx @ 0x14073E6D8 (MmPrefetchPagesEx.c)
 *     MiPrefetchControlArea @ 0x1407DC90C (MiPrefetchControlArea.c)
 * Callees:
 *     MiAllocatePool @ 0x1402DF1A0 (MiAllocatePool.c)
 */

_QWORD *MiGetInPageAutoBoostLock()
{
  _QWORD *result; // rax

  result = (_QWORD *)MiAllocatePool(64LL, 8LL, 1095330125LL);
  if ( result )
    *result = 1LL;
  return result;
}
