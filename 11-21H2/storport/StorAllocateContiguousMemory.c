/*
 * XREFs of StorAllocateContiguousMemory @ 0x1C008EE6C
 * Callers:
 *     RaidDmaAllocateUncachedExtension @ 0x1C003D17C (RaidDmaAllocateUncachedExtension.c)
 *     StorPortGetAdditionalCrashDumpArea @ 0x1C00567B0 (StorPortGetAdditionalCrashDumpArea.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall StorAllocateContiguousMemory(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        PHYSICAL_ADDRESS *a8)
{
  __int64 v8; // rsi
  unsigned int v11; // r10d
  __int64 v12; // r9
  __int64 v13; // rbx
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  void *ContiguousNodeMemory; // rax
  __int64 result; // rax
  __int64 v17; // rcx
  PHYSICAL_ADDRESS v18; // [rsp+70h] [rbp+8h] BYREF
  __int64 v19; // [rsp+80h] [rbp+18h] BYREF
  __int64 v20; // [rsp+88h] [rbp+20h] BYREF

  v18.QuadPart = 0LL;
  v8 = *a1;
  v20 = a3;
  v19 = a4;
  if ( a6 )
  {
    v11 = -a6 & (a2 + a6 - 1);
    v12 = v11;
  }
  else
  {
    v12 = a5;
    v11 = a2;
  }
  if ( !*((_BYTE *)a1 + 8) || *((_DWORD *)a1 + 7) != 3 )
  {
    ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory(v11, a3, a4, v12, 4, a7);
    v13 = (__int64)ContiguousNodeMemory;
    if ( ContiguousNodeMemory )
    {
      PhysicalAddress = MmGetPhysicalAddress(ContiguousNodeMemory);
      goto LABEL_11;
    }
    return 3221225495LL;
  }
  v13 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *, _QWORD, _DWORD, _QWORD, int, PHYSICAL_ADDRESS *))(*(_QWORD *)(v8 + 8) + 272LL))(
          v8,
          &v20,
          &v19,
          v11,
          0,
          0LL,
          a7,
          &v18);
  if ( !v13 )
    return 3221225495LL;
  PhysicalAddress = v18;
LABEL_11:
  v17 = (__int64)a8;
  a8[1] = PhysicalAddress;
  result = 0LL;
  *(_QWORD *)v17 = v13;
  *(_DWORD *)(v17 + 16) = a2;
  return result;
}
