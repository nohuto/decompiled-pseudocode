/*
 * XREFs of RtlDestroyHeap @ 0x1800570A0
 * Callers:
 *     RtlDetectHeapLeaks @ 0x180054B20 (RtlDetectHeapLeaks.c)
 *     LdrEnsureMrdataHeapExists @ 0x180087234 (LdrEnsureMrdataHeapExists.c)
 *     RtlHeapTrkInitialize @ 0x18010A7A0 (RtlHeapTrkInitialize.c)
 * Callees:
 *     DbgPrint @ 0x1800069C0 (DbgPrint.c)
 *     RtlDeleteCriticalSection @ 0x18001E130 (RtlDeleteCriticalSection.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x1800206D4 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     RtlpMoveHeapBetweenLists @ 0x18002F448 (RtlpMoveHeapBetweenLists.c)
 *     RtlpHpHeapDestroy @ 0x180056C28 (RtlpHpHeapDestroy.c)
 *     RtlpHpStackTraceHeapDestroy @ 0x180057304 (RtlpHpStackTraceHeapDestroy.c)
 *     RtlpDestroyHeapSegment @ 0x180057340 (RtlpDestroyHeapSegment.c)
 *     RtlpHpTagDestroyHeap @ 0x1800573DC (RtlpHpTagDestroyHeap.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A4C20 (NtTraceEvent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpCallInterceptRoutine @ 0x1800FEA3C (RtlpCallInterceptRoutine.c)
 *     RtlDebugDestroyHeap @ 0x180104EE8 (RtlDebugDestroyHeap.c)
 *     RtlpHeapHandleError @ 0x180114EB0 (RtlpHeapHandleError.c)
 *     RtlpHeapLogRangeDestroy @ 0x180114F6C (RtlpHeapLogRangeDestroy.c)
 *     RtlpHeapLogRangeRelease @ 0x180114FF4 (RtlpHeapLogRangeRelease.c)
 */

__int64 __fastcall RtlDestroyHeap(__int64 a1)
{
  int v2; // ecx
  unsigned __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r9
  __int64 v7; // rsi
  _QWORD *v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rcx
  int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // [rsp+38h] [rbp-39h] BYREF
  __int64 v23; // [rsp+40h] [rbp-31h] BYREF
  unsigned __int64 v24; // [rsp+48h] [rbp-29h] BYREF
  __int64 v25; // [rsp+50h] [rbp-21h] BYREF
  char v26[6]; // [rsp+58h] [rbp-19h] BYREF
  __int16 v27; // [rsp+5Eh] [rbp-13h]
  __int64 v28; // [rsp+78h] [rbp+7h]
  char v29[6]; // [rsp+80h] [rbp+Fh] BYREF
  __int16 v30; // [rsp+86h] [rbp+15h]
  __int64 v31; // [rsp+A0h] [rbp+2Fh]

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
      v15 = *(_DWORD *)(a1 + 24);
      if ( v15 )
        RtlpCallInterceptRoutine(v15, a1, 0, 8, 0LL);
      RtlpHpStackTraceHeapDestroy(a1);
      RtlpHpTagDestroyHeap(a1);
      RtlpMoveHeapBetweenLists(a1, 1, 0, 0);
      RtlpHpHeapDestroy(a1, v16, v17, v18);
      return 0LL;
    }
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
      return ((__int64 (*)(void))qword_180174270)();
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
      v7 = 2147353480LL;
      v8 = *(_QWORD **)(a1 + 272);
      while ( (_QWORD *)(a1 + 272) != v8 )
      {
        v19 = (unsigned __int64)v8;
        v8 = (_QWORD *)*v8;
        v23 = 0LL;
        v24 = v19 & 0xFFFFFFFFFFFF0000uLL;
        RtlpSecMemFreeVirtualMemory(v4, &v24, &v23, 0x8000LL);
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v4 = (__int64)NtCurrentPeb()->SharedData + 558;
        else
          v4 = 2147353480LL;
        if ( *(_BYTE *)v4 )
          RtlpHeapLogRangeRelease(a1, v24, v23);
      }
      if ( *(_BYTE *)(a1 + 418) == 2 && *(_QWORD *)(a1 + 408) )
      {
        v22 = *(_QWORD *)(a1 + 408);
        v25 = 0LL;
        RtlpSecMemFreeVirtualMemory(v4, &v22, &v25, 0x8000LL);
      }
      if ( *(_QWORD *)(a1 + 232) )
      {
        v22 = 0LL;
        RtlpSecMemFreeVirtualMemory(v4, (_QWORD *)(a1 + 232), &v22, 0x8000LL);
        *(_QWORD *)(a1 + 232) = 0LL;
      }
      if ( (*(_BYTE *)(a1 + 112) & 1) == 0 )
      {
        if ( *(int *)(a1 + 112) >= 0 )
          RtlDeleteCriticalSection(*(__int64 **)(a1 + 352), v3, v5, v6);
        *(_QWORD *)(a1 + 352) = 0LL;
      }
      do
      {
        v9 = *(_QWORD *)(a1 + 296) - 24LL;
        RtlpDestroyHeapSegment(v9);
      }
      while ( v9 != a1 );
      v10 = 2147353472LL;
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v11 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v11 = 2147353472LL;
      if ( *(_BYTE *)v11 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v10 = (__int64)NtCurrentPeb()->SharedData + 550;
        v20 = *(unsigned __int8 *)v10;
        v28 = a1;
        v27 = 4131;
        NtTraceEvent(v20, 1026LL, 8LL, v26);
      }
      v12 = 2147353482LL;
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v13 = (__int64)NtCurrentPeb()->SharedData + 560;
      else
        v13 = 2147353482LL;
      if ( *(_BYTE *)v13 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v12 = (__int64)NtCurrentPeb()->SharedData + 560;
        v21 = *(unsigned __int8 *)v12;
        v31 = a1;
        v30 = 4131;
        NtTraceEvent(v21, 1026LL, 8LL, v29);
      }
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v7 = (__int64)NtCurrentPeb()->SharedData + 558;
      if ( *(_BYTE *)v7 )
        RtlpHeapLogRangeDestroy(a1);
      return 0LL;
    }
  }
  return a1;
}
