/*
 * XREFs of EtwpLogKernelEvent @ 0x140233D70
 * Callers:
 *     EtwpTraceFileIo @ 0x14020BEC0 (EtwpTraceFileIo.c)
 *     EtwTraceKernelEvent @ 0x140211EDC (EtwTraceKernelEvent.c)
 *     EtwpTraceFileName @ 0x140213550 (EtwpTraceFileName.c)
 *     EtwTraceSiloKernelEvent @ 0x140214950 (EtwTraceSiloKernelEvent.c)
 *     KiExecuteAllDpcs @ 0x140244590 (KiExecuteAllDpcs.c)
 *     KiProcessExpiredTimerList @ 0x140252C10 (KiProcessExpiredTimerList.c)
 *     EtwTraceTimedEvent @ 0x140338FE0 (EtwTraceTimedEvent.c)
 *     EtwpCCSwapFlush @ 0x14038ABE4 (EtwpCCSwapFlush.c)
 *     EtwTraceSiloTimedEvent @ 0x14046799A (EtwTraceSiloTimedEvent.c)
 *     EtwpTraceStackWalk @ 0x1404693CC (EtwpTraceStackWalk.c)
 *     EtwpTraceCachedStack @ 0x140469898 (EtwpTraceCachedStack.c)
 *     EtwpTraceStackKey @ 0x140469970 (EtwpTraceStackKey.c)
 *     EtwpTraceLastBranchRecord @ 0x140469EA6 (EtwpTraceLastBranchRecord.c)
 *     EtwTracePool @ 0x1405FD700 (EtwTracePool.c)
 *     EtwTraceSiloDcEvent @ 0x1405FDA90 (EtwTraceSiloDcEvent.c)
 *     EtwpLogMemInfo @ 0x1405FE394 (EtwpLogMemInfo.c)
 *     EtwpTraceKernelEventWithFilter @ 0x1405FEA78 (EtwpTraceKernelEventWithFilter.c)
 *     PerfInfoLogIpiSend @ 0x1405FF010 (PerfInfoLogIpiSend.c)
 *     EtwpWriteProcessorTrace @ 0x140603220 (EtwpWriteProcessorTrace.c)
 *     EtwpEnumerateAddressSpace @ 0x1406ADB2C (EtwpEnumerateAddressSpace.c)
 *     EtwpTraceImageRundown @ 0x140809234 (EtwpTraceImageRundown.c)
 *     EtwpLogGroupMask @ 0x140820340 (EtwpLogGroupMask.c)
 *     EtwpTraceProcessRundown @ 0x140820AB4 (EtwpTraceProcessRundown.c)
 *     EtwpLogAlwaysPresentRundown @ 0x140820D18 (EtwpLogAlwaysPresentRundown.c)
 *     EtwpSysModuleRunDown @ 0x140820D88 (EtwpSysModuleRunDown.c)
 *     EtwpSystemImageEnumCallback @ 0x14083AB50 (EtwpSystemImageEnumCallback.c)
 *     EtwpLogSessionWorkingSetInfo @ 0x1408A71DC (EtwpLogSessionWorkingSetInfo.c)
 *     EtwpProcessPerfCtrsRundown @ 0x1408A8350 (EtwpProcessPerfCtrsRundown.c)
 *     EtwpLogMemInfoWsHelper @ 0x1409E62F8 (EtwpLogMemInfoWsHelper.c)
 *     EtwpLogTxREvent @ 0x1409E64CC (EtwpLogTxREvent.c)
 *     EtwLogPfnInfoRundown @ 0x1409EE988 (EtwLogPfnInfoRundown.c)
 *     EtwpClockSourceRunDown @ 0x1409EECAC (EtwpClockSourceRunDown.c)
 *     EtwpExecutiveResourceConfigRunDown @ 0x1409EEE2C (EtwpExecutiveResourceConfigRunDown.c)
 *     EtwpLogPmcCounterRundown @ 0x1409EEFEC (EtwpLogPmcCounterRundown.c)
 *     EtwpObjectHandleEnumCallback @ 0x1409EF3A0 (EtwpObjectHandleEnumCallback.c)
 *     EtwpObjectTypeRundown @ 0x1409EF680 (EtwpObjectTypeRundown.c)
 *     EtwpPoolRunDown @ 0x1409EF7DC (EtwpPoolRunDown.c)
 *     EtwpProcessorRundown @ 0x1409EF9F0 (EtwpProcessorRundown.c)
 *     EtwpSampledProfileRunDown @ 0x1409EFEA4 (EtwpSampledProfileRunDown.c)
 *     EtwpSpinLockConfigRunDown @ 0x1409F0050 (EtwpSpinLockConfigRunDown.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x14022ECE0 (KeAreInterruptsEnabled.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     EtwpReserveTraceBuffer @ 0x1402341D0 (EtwpReserveTraceBuffer.c)
 *     EtwEventEnabled @ 0x1402584E0 (EtwEventEnabled.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140259F60 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140322090 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwpUpdateEventsLostCount @ 0x140366804 (EtwpUpdateEventsLostCount.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x14036AD38 (EtwpGetReserveTraceBufferStatus.c)
 *     EtwpSendTraceEvent @ 0x1403A2268 (EtwpSendTraceEvent.c)
 *     EtwpCloseLogger @ 0x1403C2700 (EtwpCloseLogger.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     EtwpReserveWithPmcCounters @ 0x1404682B8 (EtwpReserveWithPmcCounters.c)
 *     EtwpStackTraceDispatcher @ 0x1404690B0 (EtwpStackTraceDispatcher.c)
 *     EtwpTraceLastBranchRecord @ 0x140469EA6 (EtwpTraceLastBranchRecord.c)
 *     EtwpTraceLostSystemEvent @ 0x1405FCC60 (EtwpTraceLostSystemEvent.c)
 *     EtwpReserveWithPebsIndex @ 0x1405FE7D0 (EtwpReserveWithPebsIndex.c)
 *     EtwpInvokeEventCallback @ 0x1406014E8 (EtwpInvokeEventCallback.c)
 *     EtwpTraceProcessorTrace @ 0x140603164 (EtwpTraceProcessorTrace.c)
 */

void __fastcall EtwpLogKernelEvent(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int16 a5,
        unsigned int a6)
{
  __int64 v6; // r15
  unsigned int v7; // r13d
  unsigned __int8 v11; // bl
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rsi
  unsigned int v16; // r15d
  unsigned int v17; // r10d
  __m128i v18; // xmm5
  __m128i v19; // xmm4
  unsigned int v20; // r15d
  __int64 v21; // r9
  __m128i v22; // xmm3
  __int64 v23; // r9
  __int64 v24; // rdx
  __m128i v25; // xmm2
  __int64 v26; // rcx
  __m128i v27; // xmm4
  __m128i v28; // xmm4
  _DWORD *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rax
  _DWORD *v32; // r8
  char *v33; // rax
  char *v34; // r12
  __int64 v35; // r14
  unsigned int v36; // edi
  unsigned __int16 v37; // r15
  signed __int64 *v38; // roff
  signed __int64 v39; // rax
  __int64 v40; // rdx
  signed __int64 v41; // rtt
  unsigned int v42; // r14d
  struct _KTHREAD *v43; // rcx
  int v45; // eax
  __int64 v46; // rax
  __int64 v47; // r8
  __int64 v48; // rax
  unsigned int v49; // r8d
  __int64 v50; // rcx
  unsigned int v51; // edx
  __int64 v52; // rcx
  __int64 v53; // rcx
  unsigned int ReserveTraceBufferStatus; // eax
  _DWORD Size[3]; // [rsp+34h] [rbp-3Ch] BYREF
  void *v56; // [rsp+40h] [rbp-30h]
  __int64 v57; // [rsp+48h] [rbp-28h]
  __int64 v58; // [rsp+50h] [rbp-20h]
  __int128 v59; // [rsp+58h] [rbp-18h] BYREF
  __int64 v60; // [rsp+68h] [rbp-8h]

  v6 = a3;
  v7 = 0;
  v59 = 0LL;
  v60 = 0LL;
  *(_QWORD *)&Size[1] = 0LL;
  v11 = 0;
  if ( KeAreInterruptsEnabled() && KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    v13 = (unsigned int)v6;
    --CurrentThread->KernelApcDisable;
    if ( !ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a2 + 448) + 8 * v6), 1u) )
    {
      KeLeaveCriticalRegion();
      return;
    }
    v11 = 1;
  }
  else
  {
    v13 = v6;
  }
  v14 = *(_QWORD *)(a2 + 456);
  v58 = 8 * v13;
  v15 = *(_QWORD *)(8 * v13 + v14);
  v57 = v15;
  if ( (v15 & 1) != 0 )
  {
    EtwpCloseLogger((unsigned int)v6, a2, v11);
    return;
  }
  if ( v15 )
  {
    Size[0] = 0;
    v16 = 0;
    v17 = 0;
    if ( a4 )
    {
      if ( a4 < 8 )
        goto LABEL_12;
      v18 = 0LL;
      v19 = 0LL;
      v20 = 2;
      do
      {
        v21 = 2LL * v17;
        v17 += 8;
        v22 = _mm_unpacklo_epi32(
                _mm_cvtsi32_si128(*(_DWORD *)(a1 + 8 * v21 + 8)),
                _mm_cvtsi32_si128(*(_DWORD *)(a1 + 16LL * (v20 - 1) + 8)));
        v23 = 2LL * (v20 + 5);
        v24 = 2LL * (v20 + 3);
        v25 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 16LL * (v20 + 4) + 8));
        v18 = _mm_add_epi32(
                v18,
                _mm_unpacklo_epi64(
                  v22,
                  _mm_unpacklo_epi32(
                    _mm_cvtsi32_si128(*(_DWORD *)(a1 + 16LL * v20 + 8)),
                    _mm_cvtsi32_si128(*(_DWORD *)(a1 + 16LL * (v20 + 1) + 8)))));
        v26 = 2LL * (v20 + 2);
        v20 += 8;
        v19 = _mm_add_epi32(
                v19,
                _mm_unpacklo_epi64(
                  _mm_unpacklo_epi32(
                    _mm_cvtsi32_si128(*(_DWORD *)(a1 + 8 * v26 + 8)),
                    _mm_cvtsi32_si128(*(_DWORD *)(a1 + 8 * v24 + 8))),
                  _mm_unpacklo_epi32(v25, _mm_cvtsi32_si128(*(_DWORD *)(a1 + 8 * v23 + 8)))));
      }
      while ( v17 < (a4 & 0xFFFFFFF8) );
      v27 = _mm_add_epi32(v19, v18);
      v28 = _mm_add_epi32(v27, _mm_srli_si128(v27, 8));
      v16 = _mm_cvtsi128_si32(_mm_add_epi32(v28, _mm_srli_si128(v28, 4)));
      Size[0] = v16;
      if ( v17 < a4 )
      {
LABEL_12:
        v29 = (_DWORD *)(16LL * v17 + a1 + 8);
        v30 = a4 - v17;
        do
        {
          v16 += *v29;
          v29 += 4;
          --v30;
        }
        while ( v30 );
        Size[0] = v16;
      }
    }
    if ( (a6 & 0x100) != 0 )
    {
      if ( (a6 & 0x10000000) != 0 )
      {
        v48 = EtwpReserveTraceBuffer(v15, v16 + 24, (unsigned int)&v59, (unsigned int)&Size[1], a6);
        v32 = (_DWORD *)v48;
        if ( !v48 )
          goto LABEL_44;
        *(_DWORD *)v48 = (unsigned __int8)a6 | 0xC0040000;
        *(_QWORD *)(v48 + 16) = *(_QWORD *)&Size[1];
        *(_WORD *)(v48 + 4) = v16 + 24;
        *(_WORD *)(v48 + 6) = a5;
        *(_DWORD *)(v48 + 8) = KeGetCurrentThread()[1].CurrentRunTime;
        *(_DWORD *)(v48 + 12) = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
        v33 = (char *)(v48 + 24);
      }
      else
      {
        v56 = KeGetCurrentThread();
        v31 = EtwpReserveTraceBuffer(v15, v16 + 32, (unsigned int)&v59, (unsigned int)&Size[1], a6);
        if ( !v31 )
          goto LABEL_44;
        v32 = v56;
        *(_DWORD *)v31 = (unsigned __int8)a6 | 0xC0020000;
        *(_QWORD *)(v31 + 16) = *(_QWORD *)&Size[1];
        *(_WORD *)(v31 + 4) = v16 + 32;
        *(_WORD *)(v31 + 6) = a5;
        *(_DWORD *)(v31 + 8) = v32[308];
        *(_DWORD *)(v31 + 12) = v32[306];
        *(_DWORD *)(v31 + 24) = v32[163];
        *(_DWORD *)(v31 + 28) = v32[183];
        v33 = (char *)(v31 + 32);
      }
    }
    else
    {
      v45 = *(_DWORD *)(v15 + 816);
      if ( (v45 & 0xC00) == 0 )
        goto LABEL_37;
      if ( (v45 & 0x400) != 0 && a5 == 1316 )
      {
        v33 = (char *)EtwpReserveWithPebsIndex(v15, 1316, v16, (unsigned int)&v59, (__int64)&Size[1], a6);
        goto LABEL_19;
      }
      if ( (v45 & 0x800) == 0 || (v49 = 0, !*(_DWORD *)(*(_QWORD *)(v15 + 1016) + 8LL)) )
      {
LABEL_37:
        v46 = EtwpReserveTraceBuffer(v15, v16 + 16, (unsigned int)&v59, (unsigned int)&Size[1], a6);
        if ( !v46 )
          goto LABEL_44;
        *(_QWORD *)(v46 + 8) = *(_QWORD *)&Size[1];
        *(_DWORD *)v46 = (unsigned __int8)a6 | 0xC0110000;
        *(_WORD *)(v46 + 4) = v16 + 16;
        *(_WORD *)(v46 + 6) = a5;
        v33 = (char *)(v46 + 16);
        goto LABEL_19;
      }
      while ( 1 )
      {
        v50 = *(_QWORD *)(v15 + 1016);
        if ( *(_WORD *)(v50 + 2LL * v49 + 12) == a5 )
          break;
        if ( ++v49 >= *(_DWORD *)(v50 + 8) )
          goto LABEL_37;
      }
      v33 = (char *)EtwpReserveWithPmcCounters(v15, a5, v16, (unsigned int)&v59, (__int64)&Size[1], a6);
    }
LABEL_19:
    v56 = v33;
    if ( v33 )
    {
      v34 = v33;
      if ( !a4 )
        goto LABEL_24;
      while ( 1 )
      {
        v35 = *(unsigned int *)(a1 + 8);
        if ( (unsigned int)v35 > v16 )
          break;
        memmove(v34, *(const void **)a1, (unsigned int)v35);
        v34 += v35;
        v16 -= v35;
        ++v7;
        a1 += 16LL;
        if ( v7 >= a4 )
        {
          v15 = v57;
          goto LABEL_24;
        }
      }
      memset(v56, 0, Size[0]);
      v15 = v57;
      EtwpUpdateEventsLostCount(v57);
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_SYSTEM_EVENT) )
      {
        v37 = a5;
        v36 = a6;
        EtwpTraceLostSystemEvent(a5, v15 + 136, a6, 3221225476LL);
      }
      else
      {
LABEL_24:
        v36 = a6;
        v37 = a5;
      }
      if ( (*(_DWORD *)(v15 + 12) & 0x80000) != 0
        && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
      {
        EtwpSendTraceEvent(v15, &v59, v32);
      }
      if ( *(_QWORD *)(v15 + 1288) )
        EtwpInvokeEventCallback(v15, &v59, 0LL, 0LL);
      v38 = (signed __int64 *)*((_QWORD *)&v59 + 1);
      _m_prefetchw(*((const void **)&v59 + 1));
      v39 = *v38;
      v40 = v59;
      if ( (*v38 ^ (unsigned __int64)v59) >= 0xF )
      {
LABEL_43:
        _InterlockedDecrement((volatile signed __int32 *)(v40 + 12));
      }
      else
      {
        while ( 1 )
        {
          v41 = v39;
          v39 = _InterlockedCompareExchange64(*((volatile signed __int64 **)&v59 + 1), v39 + 1, v39);
          if ( v41 == v39 )
            break;
          v40 = v59;
          if ( (v39 ^ (unsigned __int64)v59) >= 0xF )
            goto LABEL_43;
        }
      }
      if ( (*(_DWORD *)(v15 + 816) & 0x80u) != 0
        && ((*(char *)(((unsigned __int64)(v37 & 0x1FFF) >> 3) + *(_QWORD *)(v15 + 1000)) >> (v37 & 7)) & 1) != 0 )
      {
        EtwpStackTraceDispatcher(v15, &Size[1], 0LL, v36);
      }
      v42 = 0;
      if ( (*(_DWORD *)(v15 + 816) & 0x8000) != 0 )
      {
        v51 = 0;
        if ( *(_DWORD *)(*(_QWORD *)(v15 + 1024) + 8LL) )
        {
          while ( 1 )
          {
            v52 = *(_QWORD *)(v15 + 1024);
            if ( *(_WORD *)(v52 + 2LL * v51 + 12) == v37 )
              break;
            if ( ++v51 >= *(_DWORD *)(v52 + 8) )
              goto LABEL_32;
          }
          EtwpTraceLastBranchRecord(v15, &Size[1], 0LL, v36);
        }
      }
LABEL_32:
      if ( (*(_DWORD *)(v15 + 816) & 0x4000000) != 0 && *(_DWORD *)(*(_QWORD *)(v15 + 1032) + 24LL) )
      {
        while ( 1 )
        {
          v53 = *(_QWORD *)(v15 + 1032);
          if ( *(_WORD *)(v53 + 2LL * v42 + 28) == v37 )
            break;
          if ( ++v42 >= *(_DWORD *)(v53 + 24) )
            goto LABEL_33;
        }
        EtwpTraceProcessorTrace(v15, &Size[1], 0LL, v36);
      }
      goto LABEL_33;
    }
LABEL_44:
    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_SYSTEM_EVENT) )
    {
      ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v15, v16, v47);
      EtwpTraceLostSystemEvent(a5, v15 + 136, a6, ReserveTraceBufferStatus);
    }
LABEL_33:
    if ( v11 )
    {
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a2 + 448) + v58), 1u);
      v43 = KeGetCurrentThread();
      if ( v43->KernelApcDisable++ == -1
        && ($C71981A45BEB2B45F82C232A7085991E *)v43->ApcState.ApcListHead[0].Flink != &v43->152
        && !v43->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
  }
}
