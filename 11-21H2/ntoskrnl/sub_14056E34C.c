/*
 * XREFs of sub_14056E34C @ 0x14056E34C
 * Callers:
 *     sub_140298378 @ 0x140298378 (sub_140298378.c)
 *     sub_14057C724 @ 0x14057C724 (sub_14057C724.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x14041BBC0 (ZwQueryVirtualMemory.c)
 */

__int64 __fastcall sub_14056E34C(_QWORD *a1, void *a2)
{
  bool v2; // zf
  unsigned __int64 v4; // rax
  __int128 MemoryInformation; // [rsp+30h] [rbp-38h] BYREF
  __int128 v7; // [rsp+40h] [rbp-28h]
  __int128 v8; // [rsp+50h] [rbp-18h]

  v2 = *a1 == 1LL;
  MemoryInformation = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( !v2 )
    return 3221227018LL;
  v4 = a1[1];
  if ( (v4 & 7) != 0 )
    return 3221227018LL;
  if ( v4 < (unsigned __int64)a2 )
    return 3221227018LL;
  ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a2, MemoryRegionInformation, &MemoryInformation, 0x30uLL, 0LL);
  if ( a1[1] > (unsigned __int64)(MemoryInformation + v7 - 4096) )
    return 3221227018LL;
  else
    return 0LL;
}
