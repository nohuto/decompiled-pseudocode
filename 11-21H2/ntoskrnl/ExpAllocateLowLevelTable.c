/*
 * XREFs of ExpAllocateLowLevelTable @ 0x1406A6ECC
 * Callers:
 *     ExpAllocateMidLevelTable @ 0x1406A62C8 (ExpAllocateMidLevelTable.c)
 *     ExpAllocateHandleTable @ 0x1406A6AF8 (ExpAllocateHandleTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x1406A6C04 (ExpAllocateHandleTableEntrySlow.c)
 * Callees:
 *     ExpAllocateTablePagedPoolNoZero @ 0x1406A6F00 (ExpAllocateTablePagedPoolNoZero.c)
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
