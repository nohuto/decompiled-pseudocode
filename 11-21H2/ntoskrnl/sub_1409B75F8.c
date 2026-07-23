/*
 * XREFs of sub_1409B75F8 @ 0x1409B75F8
 * Callers:
 *     sub_1405E47C4 @ 0x1405E47C4 (sub_1405E47C4.c)
 * Callees:
 *     NtFreeVirtualMemory @ 0x1407B98F0 (NtFreeVirtualMemory.c)
 *     sub_1409B74BC @ 0x1409B74BC (sub_1409B74BC.c)
 */

__int64 __fastcall sub_1409B75F8(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  int v4; // edx
  PVOID BaseAddress; // [rsp+20h] [rbp-18h] BYREF
  ULONG_PTR RegionSize; // [rsp+58h] [rbp+20h] BYREF

  RegionSize = 0LL;
  if ( qword_140C1BC48 )
    return 3221225994LL;
  v4 = sub_1409B74BC(a1, a2, a3, &RegionSize);
  if ( v4 >= 0 && _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C1BC48, RegionSize, 0LL) )
  {
    BaseAddress = (PVOID)RegionSize;
    RegionSize = *(_QWORD *)(RegionSize + 184) - RegionSize;
    NtFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    return 3221225994LL;
  }
  return (unsigned int)v4;
}
