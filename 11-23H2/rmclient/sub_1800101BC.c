/*
 * XREFs of sub_1800101BC @ 0x1800101BC
 * Callers:
 *     ??1TaskStack@details@Concurrency@@QEAA@XZ @ 0x18000A7A8 (--1TaskStack@details@Concurrency@@QEAA@XZ.c)
 * Callees:
 *     sub_18000CCE0 @ 0x18000CCE0 (sub_18000CCE0.c)
 *     sub_18000CF44 @ 0x18000CF44 (sub_18000CF44.c)
 *     sub_18000D8D0 @ 0x18000D8D0 (sub_18000D8D0.c)
 *     sub_18000F66C @ 0x18000F66C (sub_18000F66C.c)
 *     sub_180011834 @ 0x180011834 (sub_180011834.c)
 *     sub_180011B2C @ 0x180011B2C (sub_180011B2C.c)
 */

__int64 __fastcall sub_1800101BC(char *lpMem)
{
  HANDLE ProcessHeap; // rax
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF

  if ( sub_18000F66C() )
  {
    return (unsigned int)--*(_DWORD *)lpMem;
  }
  else
  {
    sub_180011834(lpMem + 8, &v4);
    if ( !--*(_DWORD *)lpMem )
    {
      sub_18000D8D0((__int64)(lpMem + 16));
      sub_180011B2C(&v4, 0LL);
      sub_18000CCE0((__int64)lpMem);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpMem);
    }
    return sub_18000CF44(&v4);
  }
}
