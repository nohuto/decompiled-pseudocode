/*
 * XREFs of ExIsSpecialPoolAddress @ 0x14060F5D8
 * Callers:
 *     VfHandlePoolAlloc @ 0x140AD0FD0 (VfHandlePoolAlloc.c)
 *     DifpExAllocatePoolWithQuota_LwSP_Exit @ 0x140AE7B80 (DifpExAllocatePoolWithQuota_LwSP_Exit.c)
 *     DifpExFreePoolWithTag_LwSP_Enter @ 0x140AE7BB0 (DifpExFreePoolWithTag_LwSP_Enter.c)
 *     DifpExFreePool_LwSP_Enter @ 0x140AE7BE0 (DifpExFreePool_LwSP_Enter.c)
 *     ExFreePoolSanityChecks @ 0x140AE7E1C (ExFreePoolSanityChecks.c)
 * Callees:
 *     ExGetHeapFromVA @ 0x1402AC680 (ExGetHeapFromVA.c)
 *     ExpHpIsSpecialPoolHeap @ 0x14046BBDA (ExpHpIsSpecialPoolHeap.c)
 */

__int64 __fastcall ExIsSpecialPoolAddress(ULONG_PTR a1)
{
  ULONG_PTR HeapFromVA; // rax

  HeapFromVA = ExGetHeapFromVA(a1);
  return ExpHpIsSpecialPoolHeap(HeapFromVA);
}
