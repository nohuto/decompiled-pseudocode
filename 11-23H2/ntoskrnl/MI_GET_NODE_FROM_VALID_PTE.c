/*
 * XREFs of MI_GET_NODE_FROM_VALID_PTE @ 0x1403616E4
 * Callers:
 *     MmGrowKernelStackEx @ 0x1403614F0 (MmGrowKernelStackEx.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x14026ED60 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MI_GET_NODE_FROM_VALID_PTE(unsigned __int64 a1)
{
  unsigned __int64 v1; // rax

  v1 = MI_READ_PTE_LOCK_FREE(a1);
  return *((unsigned int *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((__int64)(48 * ((v1 >> 12) & 0xFFFFFFFFFFLL)) >> 4))
         + 2);
}
