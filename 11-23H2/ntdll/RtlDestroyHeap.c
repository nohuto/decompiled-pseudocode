/*
 * XREFs of RtlDestroyHeap @ 0x180049550
 * Callers:
 *     RtlDetectHeapLeaks @ 0x180051930 (RtlDetectHeapLeaks.c)
 *     LdrEnsureMrdataHeapExists @ 0x180082074 (LdrEnsureMrdataHeapExists.c)
 *     RtlHeapTrkInitialize @ 0x18010BE00 (RtlHeapTrkInitialize.c)
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
 *     RtlpHeapHandleError @ 0x180116748 (RtlpHeapHandleError.c)
 *     RtlpHeapLogRangeDestroy @ 0x180116804 (RtlpHeapLogRangeDestroy.c)
 *     RtlpHeapLogRangeRelease @ 0x18011688C (RtlpHeapLogRangeRelease.c)
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
      return ((__int64 (*)(void))qword_180181270)();
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
