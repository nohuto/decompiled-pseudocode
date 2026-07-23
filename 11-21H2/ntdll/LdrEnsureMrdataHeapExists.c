/*
 * XREFs of LdrEnsureMrdataHeapExists @ 0x180087234
 * Callers:
 *     RtlAddFunctionTable @ 0x180077780 (RtlAddFunctionTable.c)
 *     RtlInstallFunctionTableCallback @ 0x180077F10 (RtlInstallFunctionTableCallback.c)
 *     RtlAddGrowableFunctionTable @ 0x1800781D0 (RtlAddGrowableFunctionTable.c)
 *     RtlSetProtectedPolicy @ 0x180087700 (RtlSetProtectedPolicy.c)
 *     RtlpAddVectoredHandler @ 0x180087D70 (RtlpAddVectoredHandler.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     LdrProtectMrdata @ 0x18001C904 (LdrProtectMrdata.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlCreateHeap @ 0x18002F7E0 (RtlCreateHeap.c)
 *     RtlProtectHeap @ 0x180030B10 (RtlProtectHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x1800342E0 (LdrControlFlowGuardEnforced.c)
 *     RtlDestroyHeap @ 0x1800570A0 (RtlDestroyHeap.c)
 *     ZwAllocateVirtualMemory @ 0x1800A4370 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A4430 (ZwFreeVirtualMemory.c)
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
    if ( !LdrpMrdataHeap )
      return -1073741801;
    return 0;
  }
  return result;
}
