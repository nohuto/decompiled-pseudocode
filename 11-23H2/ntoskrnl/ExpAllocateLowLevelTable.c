/*
 * XREFs of ExpAllocateLowLevelTable @ 0x1407B0B80
 * Callers:
 *     ExpAllocateMidLevelTable @ 0x1407B0258 (ExpAllocateMidLevelTable.c)
 *     ExpAllocateHandleTable @ 0x1407B088C (ExpAllocateHandleTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x1407B0990 (ExpAllocateHandleTableEntrySlow.c)
 * Callees:
 *     ExpAllocateTablePagedPoolNoZero @ 0x1407B0BB4 (ExpAllocateTablePagedPoolNoZero.c)
 */

_QWORD *__fastcall ExpAllocateLowLevelTable(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)ExpAllocateTablePagedPoolNoZero(*(_QWORD *)(a1 + 16), 4096LL);
  if ( result )
  {
    *result = 0LL;
    result[1] = a2;
  }
  return result;
}
