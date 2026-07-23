/*
 * XREFs of RtlDestroyHeap @ 0x180049550
 * Callers:
 *     RtlDetectHeapLeaks @ 0x180051930 (RtlDetectHeapLeaks.c)
 *     LdrEnsureMrdataHeapExists @ 0x180082074 (LdrEnsureMrdataHeapExists.c)
 *     RtlHeapTrkInitialize @ 0x18010BDD0 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x180046B30 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpMoveHeapBetweenLists @ 0x180048C64 (RtlpMoveHeapBetweenLists.c)
 *     RtlpDestroyHeapSegment @ 0x1800497B4 (RtlpDestroyHeapSegment.c)
 *     RtlpHpStackTraceHeapDestroy @ 0x180049850 (RtlpHpStackTraceHeapDestroy.c)
 *     DbgPrint @ 0x180053910 (DbgPrint.c)
 *     RtlDeleteCriticalSection @ 0x18005ACD0 (RtlDeleteCriticalSection.c)
 *     RtlpHpTagDestroyHeap @ 0x180063A04 (RtlpHpTagDestroyHeap.c)
 *     RtlpHpHeapDestroy @ 0x1800652A8 (RtlpHpHeapDestroy.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A1A60 (NtTraceEvent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpCallInterceptRoutine @ 0x1800B085E (RtlpCallInterceptRoutine.c)
 *     RtlDebugDestroyHeap @ 0x180105FDC (RtlDebugDestroyHeap.c)
 *     RtlpHeapHandleError @ 0x180116718 (RtlpHeapHandleError.c)
 *     RtlpHeapLogRangeDestroy @ 0x1801167D4 (RtlpHeapLogRangeDestroy.c)
 *     RtlpHeapLogRangeRelease @ 0x18011685C (RtlpHeapLogRangeRelease.c)
 */

PVOID __cdecl RtlDestroyHeap(PVOID HeapHandle)
{
  int v2; // ecx
  __int64 v3; // rcx
  __int64 v4; // rsi
  _QWORD *v5; // rbx
  PVOID v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rcx
  int v12; // ecx
  unsigned __int64 v13; // rax
  void *v14; // rcx
  void *v15; // rcx
  PVOID v16; // [rsp+38h] [rbp-39h] BYREF
  ULONG_PTR v17; // [rsp+40h] [rbp-31h] BYREF
  unsigned __int64 v18; // [rsp+48h] [rbp-29h] BYREF
  ULONG_PTR v19; // [rsp+50h] [rbp-21h] BYREF
  char Fields[6]; // [rsp+58h] [rbp-19h] BYREF
  __int16 v21; // [rsp+5Eh] [rbp-13h]
  PVOID v22; // [rsp+78h] [rbp+7h]
  char v23[6]; // [rsp+80h] [rbp+Fh] BYREF
  __int16 v24; // [rsp+86h] [rbp+15h]
  PVOID v25; // [rsp+A0h] [rbp+2Fh]

  if ( !HeapHandle )
  {
    if ( RtlpHeapErrorHandlerThreshold >= 2 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("(HeapHandle != NULL)");
      RtlpHeapHandleError(2LL);
    }
    return 0LL;
  }
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    if ( HeapHandle != NtCurrentPeb()->ProcessHeap )
    {
      v12 = *((_DWORD *)HeapHandle + 6);
      if ( v12 )
        RtlpCallInterceptRoutine(v12, (_DWORD)HeapHandle, 0, 8, 0LL);
      RtlpHpStackTraceHeapDestroy(HeapHandle);
      RtlpHpTagDestroyHeap(HeapHandle);
      RtlpMoveHeapBetweenLists((__int64)HeapHandle, 1, 0, 0);
      RtlpHpHeapDestroy(HeapHandle);
      return 0LL;
    }
  }
  else
  {
    if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0 )
      return (PVOID)((__int64 (*)(void))qword_180181270)();
    v2 = *((_DWORD *)HeapHandle + 36);
    if ( v2 )
      RtlpCallInterceptRoutine(v2, (_DWORD)HeapHandle, 0, 8, 0LL);
    RtlpHpStackTraceHeapDestroy(HeapHandle);
    if ( ((*((_DWORD *)HeapHandle + 28) & 0x61000000) == 0
       || (*((_DWORD *)HeapHandle + 28) & 0x10000000) != 0
       || (unsigned __int8)RtlDebugDestroyHeap(HeapHandle))
      && HeapHandle != NtCurrentPeb()->ProcessHeap )
    {
      RtlpMoveHeapBetweenLists((__int64)HeapHandle, 1, 0, 0);
      v4 = 2147353480LL;
      v5 = (_QWORD *)*((_QWORD *)HeapHandle + 34);
      while ( (char *)HeapHandle + 272 != (char *)v5 )
      {
        v13 = (unsigned __int64)v5;
        v5 = (_QWORD *)*v5;
        v17 = 0LL;
        v18 = v13 & 0xFFFFFFFFFFFF0000uLL;
        RtlpSecMemFreeVirtualMemory(v3, (PVOID *)&v18, &v17, 0x8000u);
        if ( RtlGetCurrentServiceSessionId() )
          v3 = (__int64)NtCurrentPeb()->SharedData + 558;
        else
          v3 = 2147353480LL;
        if ( *(_BYTE *)v3 )
          RtlpHeapLogRangeRelease(HeapHandle, v18, v17);
      }
      if ( *((_BYTE *)HeapHandle + 418) == 2 && *((_QWORD *)HeapHandle + 51) )
      {
        v16 = (PVOID)*((_QWORD *)HeapHandle + 51);
        v19 = 0LL;
        RtlpSecMemFreeVirtualMemory(v3, &v16, &v19, 0x8000u);
      }
      if ( *((_QWORD *)HeapHandle + 29) )
      {
        v16 = 0LL;
        RtlpSecMemFreeVirtualMemory(v3, (PVOID *)HeapHandle + 29, (ULONG_PTR *)&v16, 0x8000u);
        *((_QWORD *)HeapHandle + 29) = 0LL;
      }
      if ( (*((_BYTE *)HeapHandle + 112) & 1) == 0 )
      {
        if ( *((int *)HeapHandle + 28) >= 0 )
          RtlDeleteCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
        *((_QWORD *)HeapHandle + 44) = 0LL;
      }
      do
      {
        v6 = (PVOID)(*((_QWORD *)HeapHandle + 37) - 24LL);
        RtlpDestroyHeapSegment(v6);
      }
      while ( v6 != HeapHandle );
      v7 = 2147353472LL;
      if ( RtlGetCurrentServiceSessionId() )
        v8 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v8 = 2147353472LL;
      if ( *(_BYTE *)v8 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v7 = (__int64)NtCurrentPeb()->SharedData + 550;
        v14 = (void *)*(unsigned __int8 *)v7;
        v22 = HeapHandle;
        v21 = 4131;
        NtTraceEvent(v14, 0x402u, 8u, Fields);
      }
      v9 = 2147353482LL;
      if ( RtlGetCurrentServiceSessionId() )
        v10 = (__int64)NtCurrentPeb()->SharedData + 560;
      else
        v10 = 2147353482LL;
      if ( *(_BYTE *)v10 )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v9 = (__int64)NtCurrentPeb()->SharedData + 560;
        v15 = (void *)*(unsigned __int8 *)v9;
        v25 = HeapHandle;
        v24 = 4131;
        NtTraceEvent(v15, 0x402u, 8u, v23);
      }
      if ( RtlGetCurrentServiceSessionId() )
        v4 = (__int64)NtCurrentPeb()->SharedData + 558;
      if ( *(_BYTE *)v4 )
        RtlpHeapLogRangeDestroy(HeapHandle);
      return 0LL;
    }
  }
  return HeapHandle;
}
