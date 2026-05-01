/*
 * XREFs of sub_180010248 @ 0x180010248
 * Callers:
 *     ??1TaskStack@details@Concurrency@@QEAA@XZ_0 @ 0x18000CCC0 (--1TaskStack@details@Concurrency@@QEAA@XZ_0.c)
 * Callees:
 *     sub_18000CD10 @ 0x18000CD10 (sub_18000CD10.c)
 *     sub_18000CF44 @ 0x18000CF44 (sub_18000CF44.c)
 *     sub_18000D8D0 @ 0x18000D8D0 (sub_18000D8D0.c)
 *     sub_18000F66C @ 0x18000F66C (sub_18000F66C.c)
 *     sub_180011834 @ 0x180011834 (sub_180011834.c)
 *     sub_180011B2C @ 0x180011B2C (sub_180011B2C.c)
 */

__int64 __fastcall sub_180010248(char *lpMem)
{
  __int64 result; // rax
  HANDLE ProcessHeap; // rax
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF

  if ( sub_18000F66C() )
  {
    result = (unsigned int)--*(_DWORD *)lpMem;
    if ( !(_DWORD)result )
      return sub_18000F624((__int64)(lpMem + 32));
  }
  else
  {
    sub_180011834(lpMem + 8, &v4);
    if ( !--*(_DWORD *)lpMem )
    {
      sub_18000D8D0((__int64)(lpMem + 16));
      sub_180011B2C(&v4, 0LL);
      sub_18000CD10((__int64)lpMem);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpMem);
    }
    return sub_18000CF44(&v4);
  }
  return result;
}
