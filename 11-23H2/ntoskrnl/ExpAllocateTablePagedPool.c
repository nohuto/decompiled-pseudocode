/*
 * XREFs of ExpAllocateTablePagedPool @ 0x1407B0A68
 * Callers:
 *     ExpAllocateMidLevelTable @ 0x1407B0068 (ExpAllocateMidLevelTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x1407B07A0 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpSetHandleExtraInfo @ 0x1409F91A0 (ExpSetHandleExtraInfo.c)
 * Callees:
 *     memset @ 0x140435A00 (memset.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x1407B09C4 (ExpAllocateTablePagedPoolNoZero.c)
 */

void *__fastcall ExpAllocateTablePagedPool(__int64 a1, size_t a2)
{
  void *TablePagedPoolNoZero; // rax
  void *v4; // rbx

  TablePagedPoolNoZero = ExpAllocateTablePagedPoolNoZero(a1, a2);
  v4 = TablePagedPoolNoZero;
  if ( TablePagedPoolNoZero )
    memset(TablePagedPoolNoZero, 0, a2);
  return v4;
}
