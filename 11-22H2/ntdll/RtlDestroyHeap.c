/*
 * XREFs of RtlDestroyHeap @ 0x1800496B0
 * Callers:
 *     RtlDetectHeapLeaks @ 0x180051A90 (RtlDetectHeapLeaks.c)
 *     LdrEnsureMrdataHeapExists @ 0x180081A04 (LdrEnsureMrdataHeapExists.c)
 *     RtlHeapTrkInitialize @ 0x18010A960 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x180046C90 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpMoveHeapBetweenLists @ 0x180048DC4 (RtlpMoveHeapBetweenLists.c)
 *     RtlpDestroyHeapSegment @ 0x180049914 (RtlpDestroyHeapSegment.c)
 *     RtlpHpStackTraceHeapDestroy @ 0x1800499B0 (RtlpHpStackTraceHeapDestroy.c)
 *     DbgPrint @ 0x180053A70 (DbgPrint.c)
 *     RtlDeleteCriticalSection @ 0x18005DCD0 (RtlDeleteCriticalSection.c)
 *     RtlpHpTagDestroyHeap @ 0x180063B34 (RtlpHpTagDestroyHeap.c)
 *     RtlpHpHeapDestroy @ 0x1800653D8 (RtlpHpHeapDestroy.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009F9A0 (NtTraceEvent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpCallInterceptRoutine @ 0x1800AE78E (RtlpCallInterceptRoutine.c)
 *     RtlDebugDestroyHeap @ 0x180104BCC (RtlDebugDestroyHeap.c)
 *     RtlpHeapHandleError @ 0x180115298 (RtlpHeapHandleError.c)
 *     RtlpHeapLogRangeDestroy @ 0x180115354 (RtlpHeapLogRangeDestroy.c)
 *     RtlpHeapLogRangeRelease @ 0x1801153DC (RtlpHeapLogRangeRelease.c)
 */

__int64 __fastcall RtlDestroyHeap(__int64 a1)
{
  int v2; // ecx
  __int64 v3; // rcx
  __int64 v4; // rsi
  _QWORD *v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rcx
  int v12; // ecx
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // [rsp+38h] [rbp-39h] BYREF
  __int64 v17; // [rsp+40h] [rbp-31h] BYREF
  unsigned __int64 v18; // [rsp+48h] [rbp-29h] BYREF
  __int64 v19; // [rsp+50h] [rbp-21h] BYREF
  char v20[6]; // [rsp+58h] [rbp-19h] BYREF
  __int16 v21; // [rsp+5Eh] [rbp-13h]
  __int64 v22; // [rsp+78h] [rbp+7h]
  char v23[6]; // [rsp+80h] [rbp+Fh] BYREF
  __int16 v24; // [rsp+86h] [rbp+15h]
  __int64 v25; // [rsp+A0h] [rbp+2Fh]

  if ( !a1 )
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
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    if ( (void *)a1 != NtCurrentPeb()->ProcessHeap )
    {
      v12 = *(_DWORD *)(a1 + 24);
      if ( v12 )
        RtlpCallInterceptRoutine(v12, a1, 0, 8, 0LL);
      RtlpHpStackTraceHeapDestroy(a1);
      RtlpHpTagDestroyHeap(a1);
      RtlpMoveHeapBetweenLists(a1, 1, 0, 0);
      RtlpHpHeapDestroy(a1);
      return 0LL;
    }
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
      return ((__int64 (*)(void))qword_18017E860)();
    v2 = *(_DWORD *)(a1 + 144);
    if ( v2 )
      RtlpCallInterceptRoutine(v2, a1, 0, 8, 0LL);
    RtlpHpStackTraceHeapDestroy(a1);
    if ( ((*(_DWORD *)(a1 + 112) & 0x61000000) == 0
       || (*(_DWORD *)(a1 + 112) & 0x10000000) != 0
       || (unsigned __int8)RtlDebugDestroyHeap(a1))
      && (void *)a1 != NtCurrentPeb()->ProcessHeap )
    {
      RtlpMoveHeapBetweenLists(a1, 1, 0, 0);
      v4 = 2147353480LL;
      v5 = *(_QWORD **)(a1 + 272);
      while ( (_QWORD *)(a1 + 272) != v5 )
      {
        v13 = (unsigned __int64)v5;
        v5 = (_QWORD *)*v5;
        v17 = 0LL;
        v18 = v13 & 0xFFFFFFFFFFFF0000uLL;
        RtlpSecMemFreeVirtualMemory(v3, &v18, &v17, 0x8000LL);
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v3 = (__int64)NtCurrentPeb()->SharedData + 558;
        else
          v3 = 2147353480LL;
        if ( *(_BYTE *)v3 )
          RtlpHeapLogRangeRelease(a1, v18, v17);
      }
      if ( *(_BYTE *)(a1 + 418) == 2 && *(_QWORD *)(a1 + 408) )
      {
        v16 = *(_QWORD *)(a1 + 408);
        v19 = 0LL;
        RtlpSecMemFreeVirtualMemory(v3, &v16, &v19, 0x8000LL);
      }
      if ( *(_QWORD *)(a1 + 232) )
      {
        v16 = 0LL;
        RtlpSecMemFreeVirtualMemory(v3, (_QWORD *)(a1 + 232), &v16, 0x8000LL);
        *(_QWORD *)(a1 + 232) = 0LL;
      }
      if ( (*(_BYTE *)(a1 + 112) & 1) == 0 )
      {
        if ( *(int *)(a1 + 112) >= 0 )
          RtlDeleteCriticalSection(*(_QWORD *)(a1 + 352));
        *(_QWORD *)(a1 + 352) = 0LL;
      }
      do
      {
        v6 = *(_QWORD *)(a1 + 296) - 24LL;
        RtlpDestroyHeapSegment(v6);
      }
      while ( v6 != a1 );
      v7 = 2147353472LL;
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v8 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v8 = 2147353472LL;
      if ( *(_BYTE *)v8 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v7 = (__int64)NtCurrentPeb()->SharedData + 550;
        v14 = *(unsigned __int8 *)v7;
        v22 = a1;
        v21 = 4131;
        NtTraceEvent(v14, 1026LL, 8LL, v20);
      }
      v9 = 2147353482LL;
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v10 = (__int64)NtCurrentPeb()->SharedData + 560;
      else
        v10 = 2147353482LL;
      if ( *(_BYTE *)v10 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v9 = (__int64)NtCurrentPeb()->SharedData + 560;
        v15 = *(unsigned __int8 *)v9;
        v25 = a1;
        v24 = 4131;
        NtTraceEvent(v15, 1026LL, 8LL, v23);
      }
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v4 = (__int64)NtCurrentPeb()->SharedData + 558;
      if ( *(_BYTE *)v4 )
        RtlpHeapLogRangeDestroy(a1);
      return 0LL;
    }
  }
  return a1;
}
