/*
 * XREFs of EtwpMdlHashTableDeallocator @ 0x140601974
 * Callers:
 *     EtwpRegisterPartitionPages @ 0x140601990 (EtwpRegisterPartitionPages.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpMdlHashTableDeallocator(void *a1)
{
  ExFreePoolWithTag(a1, 0x42777445u);
}
