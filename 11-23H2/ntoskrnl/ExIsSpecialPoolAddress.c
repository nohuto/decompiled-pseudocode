/*
 * XREFs of ExIsSpecialPoolAddress @ 0x14060F088
 * Callers:
 *     VfHandlePoolAlloc @ 0x140AD0FE0 (VfHandlePoolAlloc.c)
 *     DifpExAllocatePoolWithQuota_LwSP_Exit @ 0x140AE7B90 (DifpExAllocatePoolWithQuota_LwSP_Exit.c)
 *     DifpExFreePoolWithTag_LwSP_Enter @ 0x140AE7BC0 (DifpExFreePoolWithTag_LwSP_Enter.c)
 *     DifpExFreePool_LwSP_Enter @ 0x140AE7BF0 (DifpExFreePool_LwSP_Enter.c)
 *     ExFreePoolSanityChecks @ 0x140AE7E2C (ExFreePoolSanityChecks.c)
 * Callees:
 *     ExGetHeapFromVA @ 0x1402AC3F0 (ExGetHeapFromVA.c)
 *     ExpHpIsSpecialPoolHeap @ 0x14046B7DA (ExpHpIsSpecialPoolHeap.c)
 */

__int64 __fastcall ExIsSpecialPoolAddress(ULONG_PTR a1)
{
  ULONG_PTR HeapFromVA; // rax

  HeapFromVA = ExGetHeapFromVA(a1);
  return ExpHpIsSpecialPoolHeap(HeapFromVA);
}
