/*
 * XREFs of ExpAllocateMidLevelTable @ 0x1407B0258
 * Callers:
 *     ExpAllocateHandleTableEntrySlow @ 0x1407B0990 (ExpAllocateHandleTableEntrySlow.c)
 * Callees:
 *     ExpFreeTablePagedPool @ 0x14068AD30 (ExpFreeTablePagedPool.c)
 *     ExpAllocateLowLevelTable @ 0x1407B0B80 (ExpAllocateLowLevelTable.c)
 *     ExpAllocateTablePagedPool @ 0x1407B0C58 (ExpAllocateTablePagedPool.c)
 */

__int64 *__fastcall ExpAllocateMidLevelTable(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 *TablePagedPool; // rdi
  __int64 LowLevelTable; // rax

  TablePagedPool = (__int64 *)ExpAllocateTablePagedPool(*(_QWORD *)(a1 + 16), 4096LL);
  if ( TablePagedPool )
  {
    LowLevelTable = ExpAllocateLowLevelTable(a1, a3);
    *a2 = LowLevelTable;
    if ( LowLevelTable )
    {
      *TablePagedPool = LowLevelTable;
      return TablePagedPool;
    }
    ExpFreeTablePagedPool(*(struct _KPROCESS **)(a1 + 16), TablePagedPool, 4096LL);
  }
  return 0LL;
}
