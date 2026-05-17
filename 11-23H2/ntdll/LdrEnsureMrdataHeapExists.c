/*
 * XREFs of LdrEnsureMrdataHeapExists @ 0x180082074
 * Callers:
 *     RtlAddGrowableFunctionTable @ 0x180072880 (RtlAddGrowableFunctionTable.c)
 *     RtlSetProtectedPolicy @ 0x180082ED0 (RtlSetProtectedPolicy.c)
 *     RtlpAddVectoredHandler @ 0x180084C10 (RtlpAddVectoredHandler.c)
 *     RtlInstallFunctionTableCallback @ 0x18008D040 (RtlInstallFunctionTableCallback.c)
 *     RtlAddFunctionTable @ 0x1800EC510 (RtlAddFunctionTable.c)
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18002C3A0 (LdrControlFlowGuardEnforced.c)
 *     LdrProtectMrdata @ 0x180032E40 (LdrProtectMrdata.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     RtlCreateHeap @ 0x180047FD0 (RtlCreateHeap.c)
 *     RtlProtectHeap @ 0x180049120 (RtlProtectHeap.c)
 *     RtlDestroyHeap @ 0x180049550 (RtlDestroyHeap.c)
 *     ZwAllocateVirtualMemory @ 0x1800A11B0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A1270 (ZwFreeVirtualMemory.c)
 */

__int64 LdrEnsureMrdataHeapExists()
{
  __int64 result; // rax
  __int64 Heap; // rax
  __m128i *v2; // rbx
  _DWORD *v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rcx
  char *v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  if ( !LdrControlFlowGuardEnforced() || LdrpMrdataHeap )
    return 0LL;
  v6 = 0LL;
  v7 = LdrpAllocationGranularity;
  result = ZwAllocateVirtualMemory(-1LL, &v6, 0LL, &v7, 0x2000, 4);
  if ( (int)result >= 0 )
  {
    Heap = RtlCreateHeap(2u, v6, 0LL, 0LL, 0LL, 0LL);
    v2 = (__m128i *)Heap;
    if ( Heap )
    {
      v3 = (_DWORD *)RtlAllocateHeap(Heap, 0, 4LL);
      v4 = (__int64)v3;
      v5 = (__int64)v2;
      if ( v3 )
      {
        *v3 = 0;
        RtlProtectHeap(v2, 1);
        LdrProtectMrdata(0);
        RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
        if ( !LdrpMrdataHeap )
        {
          LdrpMrdataHeapUnprotected = v4;
          LdrpMrdataHeap = (__int64)v2;
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
          LdrProtectMrdata(1);
          return 0LL;
        }
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        LdrProtectMrdata(1);
        RtlProtectHeap(v2, 0);
        RtlFreeHeap((__int64)v2, 0, v4);
        v5 = (__int64)v2;
      }
      RtlDestroyHeap(v5);
    }
    ZwFreeVirtualMemory(-1LL, &v6, &v7, 0x8000LL);
    return LdrpMrdataHeap == 0 ? 0xC0000017 : 0;
  }
  return result;
}
