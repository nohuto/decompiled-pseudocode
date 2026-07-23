/*
 * XREFs of sub_1409E591C @ 0x1409E591C
 * Callers:
 *     sub_14079028C @ 0x14079028C (sub_14079028C.c)
 *     sub_1409E581C @ 0x1409E581C (sub_1409E581C.c)
 * Callees:
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 sub_1409E591C()
{
  int v0; // ebx
  __int64 result; // rax

  v0 = 2 * dword_140D06884 * _InterlockedIncrement(&dword_140C5A6C0);
  do
  {
    result = ExAllocatePool2(64LL, 2080LL, 1819767877LL);
    if ( !result )
      break;
    ExpInterlockedPushEntrySList(&stru_140C5A6B0, (PSLIST_ENTRY)result);
    result = (unsigned int)_InterlockedIncrement(&dword_140C5A6C4);
  }
  while ( (int)result < v0 );
  return result;
}
