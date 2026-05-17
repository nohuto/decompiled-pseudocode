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

__int64 LdrEnsureMrdataHeapExists()
{
  __int64 result; // rax
  __int64 Heap; // rax
  _DWORD *v2; // rbx
  _DWORD *v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r9
  char *v18; // [rsp+40h] [rbp+8h] BYREF
  __int64 v19; // [rsp+48h] [rbp+10h] BYREF

  if ( !(unsigned int)LdrControlFlowGuardEnforced() || LdrpMrdataHeap )
    return 0LL;
  v18 = 0LL;
  v19 = LdrpAllocationGranularity;
  result = ZwAllocateVirtualMemory(-1LL, &v18, 0LL, &v19, 0x2000, 4);
  if ( (int)result >= 0 )
  {
    Heap = RtlCreateHeap(2u, v18, 0LL, 0LL, 0LL, 0LL);
    v2 = (_DWORD *)Heap;
    if ( Heap )
    {
      v3 = (_DWORD *)RtlAllocateHeap(Heap, 0, 4LL);
      v4 = (__int64)v3;
      v5 = (__int64)v2;
      if ( v3 )
      {
        *v3 = 0;
        RtlProtectHeap(v2, 1);
        LdrProtectMrdata(0, v6, v7, v8);
        RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v9, v10, v11);
        if ( !LdrpMrdataHeap )
        {
          LdrpMrdataHeapUnprotected = v4;
          LdrpMrdataHeap = (__int64)v2;
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
          LdrProtectMrdata(1, v12, v13, v14);
          return 0LL;
        }
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        LdrProtectMrdata(1, v15, v16, v17);
        RtlProtectHeap(v2, 0);
        RtlFreeHeap((__int64)v2, 0, v4);
        v5 = (__int64)v2;
      }
      RtlDestroyHeap(v5);
    }
    ZwFreeVirtualMemory(-1LL, &v18, &v19, 0x8000LL);
    if ( !LdrpMrdataHeap )
      return 3221225495LL;
    return 0LL;
  }
  return result;
}
