/*
 * XREFs of sub_1406D94F0 @ 0x1406D94F0
 * Callers:
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 * Callees:
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     ZwAllocateVirtualMemory @ 0x14041BA60 (ZwAllocateVirtualMemory.c)
 */

__int64 __fastcall sub_1406D94F0(ULONG_PTR a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  int v6; // ebx
  NTSTATUS VirtualMemory; // esi
  unsigned __int64 v9; // rbx
  __int64 v10; // rbp
  ULONG_PTR RegionSize; // [rsp+60h] [rbp+18h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp+20h] BYREF

  BaseAddress = 0LL;
  RegionSize = 0LL;
  v6 = *(_DWORD *)(a3[26] + 8LL) & 0x60;
  if ( !v6 && !a3[32] )
    return 0LL;
  VirtualMemory = 0;
  sub_14030D5C0(a1, 0LL, a2, a4);
  if ( !v6 )
    goto LABEL_10;
  BaseAddress = (PVOID)4;
  if ( v6 == 32 )
  {
    RegionSize = 1048320LL;
  }
  else if ( v6 == 64 )
  {
    RegionSize = 16776960LL;
  }
  VirtualMemory = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, 4u);
  if ( VirtualMemory >= 0 )
  {
LABEL_10:
    v9 = 0LL;
    if ( a3[32] )
    {
      v10 = 0LL;
      do
      {
        VirtualMemory = ZwAllocateVirtualMemory(
                          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                          (PVOID *)(v10 + a3[35]),
                          0LL,
                          (PSIZE_T)(v10 + a3[35] + 8),
                          0x2000u,
                          4u);
        if ( VirtualMemory < 0 )
          break;
        ++v9;
        v10 += 16LL;
      }
      while ( v9 < a3[32] );
    }
  }
  sub_1402D0930(a2, 0LL);
  return (unsigned int)VirtualMemory;
}
