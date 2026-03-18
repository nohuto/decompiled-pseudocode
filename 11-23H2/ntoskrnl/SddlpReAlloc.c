/*
 * XREFs of SddlpReAlloc @ 0x1409D29E0
 * Callers:
 *     GetOperandValue @ 0x1409D35CC (GetOperandValue.c)
 *     GetPrintableOperandValue @ 0x1409D3F6C (GetPrintableOperandValue.c)
 * Callees:
 *     memmove @ 0x140435700 (memmove.c)
 *     memset @ 0x140435A00 (memset.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140AAEC80 (ExAllocatePoolWithTag.c)
 */

void *__fastcall SddlpReAlloc(size_t Size, SIZE_T a2, PVOID P)
{
  PVOID PoolWithTag; // rax
  void *v7; // rbx

  if ( !P || a2 < Size )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, a2, 0x64536553u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, a2);
    memmove(v7, P, Size);
  }
  ExFreePoolWithTag(P, 0);
  return v7;
}
