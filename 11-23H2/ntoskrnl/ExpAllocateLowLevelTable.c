/*
 * XREFs of ExpAllocateLowLevelTable @ 0x1407B0990
 * Callers:
 *     ExpAllocateMidLevelTable @ 0x1407B0068 (ExpAllocateMidLevelTable.c)
 *     ExpAllocateHandleTable @ 0x1407B069C (ExpAllocateHandleTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x1407B07A0 (ExpAllocateHandleTableEntrySlow.c)
 * Callees:
 *     ExpAllocateTablePagedPoolNoZero @ 0x1407B09C4 (ExpAllocateTablePagedPoolNoZero.c)
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
