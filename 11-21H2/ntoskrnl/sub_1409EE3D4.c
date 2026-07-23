/*
 * XREFs of sub_1409EE3D4 @ 0x1409EE3D4
 * Callers:
 *     sub_1409EE454 @ 0x1409EE454 (sub_1409EE454.c)
 * Callees:
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 sub_1409EE3D4()
{
  __int64 v0; // rdi
  int v1; // ebx
  __int64 result; // rax

  v0 = (unsigned int)(24 * dword_140D06BE0 + 16);
  v1 = 2 * dword_140D06884 * _InterlockedIncrement(&dword_140C5A6A0);
  do
  {
    result = ExAllocatePool2(64LL, v0, 2021094469LL);
    if ( !result )
      break;
    ExpInterlockedPushEntrySList(&stru_140C5A690, (PSLIST_ENTRY)result);
    result = (unsigned int)_InterlockedIncrement(&dword_140C5A6A4);
  }
  while ( (int)result < v1 );
  return result;
}
