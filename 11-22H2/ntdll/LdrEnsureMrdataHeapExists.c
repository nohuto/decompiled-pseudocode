/*
 * XREFs of LdrEnsureMrdataHeapExists @ 0x180081A04
 * Callers:
 *     RtlAddGrowableFunctionTable @ 0x180072210 (RtlAddGrowableFunctionTable.c)
 *     RtlSetProtectedPolicy @ 0x180082860 (RtlSetProtectedPolicy.c)
 *     RtlpAddVectoredHandler @ 0x180084410 (RtlpAddVectoredHandler.c)
 *     RtlInstallFunctionTableCallback @ 0x18008C840 (RtlInstallFunctionTableCallback.c)
 *     RtlAddFunctionTable @ 0x1800EB1E0 (RtlAddFunctionTable.c)
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18002C570 (LdrControlFlowGuardEnforced.c)
 *     LdrProtectMrdata @ 0x180032FA0 (LdrProtectMrdata.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     RtlCreateHeap @ 0x180048130 (RtlCreateHeap.c)
 *     RtlProtectHeap @ 0x180049280 (RtlProtectHeap.c)
 *     RtlDestroyHeap @ 0x1800496B0 (RtlDestroyHeap.c)
 *     ZwAllocateVirtualMemory @ 0x18009F0F0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18009F1B0 (ZwFreeVirtualMemory.c)
 */

NTSTATUS LdrEnsureMrdataHeapExists()
{
  int v0; // eax
  NTSTATUS result; // eax
  PVOID Heap; // rax
  void *v3; // rbx
  _DWORD *v4; // rax
  void *v5; // rdi
  void *v6; // rcx
  PVOID BaseAddress; // [rsp+40h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+48h] [rbp+10h] BYREF

  LOBYTE(v0) = LdrControlFlowGuardEnforced();
  if ( !v0 || LdrpMrdataHeap )
    return 0;
  BaseAddress = 0LL;
  RegionSize = LdrpAllocationGranularity;
  result = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, 4u);
  if ( result >= 0 )
  {
    Heap = RtlCreateHeap(2u, BaseAddress, 0LL, 0LL, 0LL, 0LL);
    v3 = Heap;
    if ( Heap )
    {
      v4 = RtlAllocateHeap(Heap, 0, 4uLL);
      v5 = v4;
      v6 = v3;
      if ( v4 )
      {
        *v4 = 0;
        RtlProtectHeap(v3, 1u);
        LdrProtectMrdata(0);
        RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
        if ( !LdrpMrdataHeap )
        {
          LdrpMrdataHeapUnprotected = (__int64)v5;
          LdrpMrdataHeap = v3;
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
          LdrProtectMrdata(1);
          return 0;
        }
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        LdrProtectMrdata(1);
        RtlProtectHeap(v3, 0);
        RtlFreeHeap(v3, 0, v5);
        v6 = v3;
      }
      RtlDestroyHeap(v6);
    }
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    return LdrpMrdataHeap == 0LL ? 0xC0000017 : 0;
  }
  return result;
}
