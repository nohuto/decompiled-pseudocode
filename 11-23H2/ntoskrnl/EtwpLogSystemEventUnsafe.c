/*
 * XREFs of EtwpLogSystemEventUnsafe @ 0x1403835CC
 * Callers:
 *     NtTraceEvent @ 0x1402579A0 (NtTraceEvent.c)
 *     EtwpTraceThreadRundown @ 0x140383280 (EtwpTraceThreadRundown.c)
 *     EtwpLogRegistryEvent @ 0x1408A70DC (EtwpLogRegistryEvent.c)
 *     EtwpSetMark @ 0x1409E6B40 (EtwpSetMark.c)
 * Callees:
 *     EtwpOpenLogger @ 0x140227700 (EtwpOpenLogger.c)
 *     EtwpReleaseTraceBuffer @ 0x1402277A8 (EtwpReleaseTraceBuffer.c)
 *     EtwpReserveTraceBuffer @ 0x1402341D0 (EtwpReserveTraceBuffer.c)
 *     EtwEventEnabled @ 0x1402584E0 (EtwEventEnabled.c)
 *     EtwpUpdateEventsLostCount @ 0x140366804 (EtwpUpdateEventsLostCount.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x14036AD38 (EtwpGetReserveTraceBufferStatus.c)
 *     EtwpCopyEventData @ 0x1403837E0 (EtwpCopyEventData.c)
 *     EtwpSendTraceEvent @ 0x1403A2268 (EtwpSendTraceEvent.c)
 *     EtwpCloseLogger @ 0x1403C2700 (EtwpCloseLogger.c)
 *     memset @ 0x140435E00 (memset.c)
 *     EtwpStackTraceDispatcher @ 0x1404690B0 (EtwpStackTraceDispatcher.c)
 *     EtwpTraceLastBranchRecord @ 0x140469EA6 (EtwpTraceLastBranchRecord.c)
 *     EtwpTraceLostSystemEvent @ 0x1405FCC60 (EtwpTraceLostSystemEvent.c)
 *     EtwpInvokeEventCallback @ 0x1406014E8 (EtwpInvokeEventCallback.c)
 *     EtwpTraceProcessorTrace @ 0x140603164 (EtwpTraceProcessorTrace.c)
 */

__int64 __fastcall EtwpLogSystemEventUnsafe(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int16 a6,
        unsigned int a7,
        char a8)
{
  unsigned int v10; // edi
  __int64 result; // rax
  __int64 v12; // rbx
  unsigned int v13; // esi
  _DWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r9
  int v17; // edx
  void *v18; // r12
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // r15d
  __int64 v22; // r8
  unsigned int v23; // edx
  __int64 v24; // rdx
  unsigned int ReserveTraceBufferStatus; // esi
  _BYTE v26[4]; // [rsp+30h] [rbp-78h] BYREF
  unsigned int v27; // [rsp+34h] [rbp-74h]
  unsigned int v28; // [rsp+38h] [rbp-70h]
  LARGE_INTEGER v29[3]; // [rsp+40h] [rbp-68h] BYREF
  __int128 v30; // [rsp+58h] [rbp-50h] BYREF
  __int64 v31; // [rsp+68h] [rbp-40h]

  v30 = 0LL;
  v31 = 0LL;
  v10 = 0;
  v26[0] = 0;
  v29[0].QuadPart = 0LL;
  result = EtwpOpenLogger(a4, a1, 1, v26);
  v12 = result;
  v29[2].QuadPart = result;
  if ( result )
  {
    v13 = 0;
    v27 = 0;
    if ( a5 )
    {
      v14 = (_DWORD *)(a2 + 8);
      v15 = a5;
      do
      {
        v13 += *v14;
        v14 += 4;
        --v15;
      }
      while ( v15 );
      v27 = v13;
    }
    v16 = EtwpReserveTraceBuffer(v12, v13 + 32, (__int64)&v30, v29, a7);
    if ( !v16 )
      goto LABEL_37;
    v17 = -1073676288;
    if ( (a7 & 0xC0000000) != 0x80000000 )
      v17 = -1073610752;
    *(_DWORD *)v16 = (unsigned __int8)a7 | v17;
    *(LARGE_INTEGER *)(v16 + 16) = v29[0];
    *(_WORD *)(v16 + 4) = v13 + 32;
    *(_WORD *)(v16 + 6) = a6;
    *(_DWORD *)(v16 + 8) = a3[308];
    *(_DWORD *)(v16 + 12) = a3[306];
    *(_DWORD *)(v16 + 24) = a3[163];
    *(_DWORD *)(v16 + 28) = a3[183];
    v18 = (void *)(v16 + 32);
    v29[1].QuadPart = v16 + 32;
    if ( v16 == -32 )
    {
LABEL_37:
      ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v12, v13);
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_SYSTEM_EVENT) )
        EtwpTraceLostSystemEvent(a6, v12 + 136, a7, ReserveTraceBufferStatus);
    }
    else
    {
      v21 = EtwpCopyEventData(v18);
      v28 = v21;
      if ( v21 )
      {
        memset(v18, 0, v13);
        EtwpUpdateEventsLostCount(v12);
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_SYSTEM_EVENT) )
          EtwpTraceLostSystemEvent(a6, v12 + 136, a7, v21);
      }
      if ( (*(_DWORD *)(v12 + 12) & 0x80000) != 0
        && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
      {
        EtwpSendTraceEvent(v12, &v30, v19);
      }
      if ( *(_QWORD *)(v12 + 1288) )
      {
        LOBYTE(v20) = a8;
        EtwpInvokeEventCallback(v12, &v30, 0LL, v20);
      }
      EtwpReleaseTraceBuffer((signed __int64 *)&v30);
      if ( (*(_DWORD *)(v12 + 816) & 0x80u) != 0
        && ((*(char *)(((unsigned __int64)(a6 & 0x1FFF) >> 3) + *(_QWORD *)(v12 + 1000)) >> (a6 & 7)) & 1) != 0 )
      {
        EtwpStackTraceDispatcher(v12, v29, a3, a7);
      }
      if ( (*(_DWORD *)(v12 + 816) & 0x8000) != 0 )
      {
        v23 = 0;
        if ( *(_DWORD *)(*(_QWORD *)(v12 + 1024) + 8LL) )
        {
          while ( 1 )
          {
            v22 = *(_QWORD *)(v12 + 1024);
            if ( *(_WORD *)(v22 + 2LL * v23 + 12) == a6 )
              break;
            if ( ++v23 >= *(_DWORD *)(v22 + 8) )
              goto LABEL_16;
          }
          EtwpTraceLastBranchRecord(v12, v29, a3, a7);
        }
      }
LABEL_16:
      if ( (*(_DWORD *)(v12 + 816) & 0x4000000) != 0 && *(_DWORD *)(*(_QWORD *)(v12 + 1032) + 24LL) )
      {
        while ( 1 )
        {
          v24 = *(_QWORD *)(v12 + 1032);
          if ( *(_WORD *)(v24 + 2LL * v10 + 28) == a6 )
            break;
          if ( ++v10 >= *(_DWORD *)(v24 + 24) )
            goto LABEL_17;
        }
        EtwpTraceProcessorTrace(v12, v29, a3, a7);
      }
    }
LABEL_17:
    LOBYTE(v22) = v26[0];
    return EtwpCloseLogger(a4, a1, v22);
  }
  return result;
}
