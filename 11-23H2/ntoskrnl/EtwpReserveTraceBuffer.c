/*
 * XREFs of EtwpReserveTraceBuffer @ 0x1402341D0
 * Callers:
 *     EtwpTraceMessageVa @ 0x140227020 (EtwpTraceMessageVa.c)
 *     EtwpLogKernelEvent @ 0x140233D70 (EtwpLogKernelEvent.c)
 *     EtwpEventWriteFull @ 0x140258630 (EtwpEventWriteFull.c)
 *     EtwpLogSystemEventUnsafe @ 0x1403835CC (EtwpLogSystemEventUnsafe.c)
 *     EtwpLogContextSwapEvent @ 0x14038A610 (EtwpLogContextSwapEvent.c)
 *     EtwpReserveWithPmcCounters @ 0x1404682B8 (EtwpReserveWithPmcCounters.c)
 *     EtwTraceEvent @ 0x140468782 (EtwTraceEvent.c)
 *     EtwpReserveWithPebsIndex @ 0x1405FE7D0 (EtwpReserveWithPebsIndex.c)
 *     EtwTraceRaw @ 0x1405FF8A8 (EtwTraceRaw.c)
 *     EtwpWriteUserEvent @ 0x1406F4170 (EtwpWriteUserEvent.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x140226F20 (RtlGetSystemTimePrecise.c)
 *     EtwpSwitchBuffer @ 0x140227CE8 (EtwpSwitchBuffer.c)
 *     EtwpUnlockBufferList @ 0x14022818C (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x1402281D8 (EtwpLockBufferList.c)
 *     KeQueryPerformanceCounter @ 0x1402C3500 (KeQueryPerformanceCounter.c)
 *     HalpTimerGetInternalData @ 0x1402C4800 (HalpTimerGetInternalData.c)
 *     EtwpUpdateEventsLostCount @ 0x140366804 (EtwpUpdateEventsLostCount.c)
 *     HalpTimerScaleCounter @ 0x1403C4704 (HalpTimerScaleCounter.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     EtwpGetTimeStampAndQpcDelta @ 0x140601614 (EtwpGetTimeStampAndQpcDelta.c)
 */

__int64 __fastcall EtwpReserveTraceBuffer(__int64 a1, unsigned int a2, __int64 a3, LARGE_INTEGER *a4, __int16 a5)
{
  __int64 v7; // r8
  unsigned int v8; // edi
  unsigned int v9; // ebx
  LARGE_INTEGER *v10; // r9
  __int64 Number; // rcx
  __int64 v12; // rax
  __int64 v13; // r12
  _QWORD *v14; // r12
  signed __int64 *v15; // r15
  signed __int64 v16; // rsi
  signed __int64 v17; // rax
  int v18; // eax
  unsigned __int64 v19; // rsi
  unsigned __int32 v20; // r13d
  unsigned __int64 v21; // rax
  unsigned __int128 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // rax
  ULONG_PTR v26; // r11
  LARGE_INTEGER SystemTimePrecise; // rax
  unsigned __int32 v28; // eax
  __int64 v29; // rdx
  __int64 result; // rax
  int v31; // eax
  signed __int64 v32; // rax
  signed __int64 i; // rcx
  signed __int64 v34; // rtt
  bool v35; // zf
  __int64 v36; // rax
  __int64 v37; // rdx
  int v38; // edi
  LARGE_INTEGER PerformanceCounter; // rax
  LONGLONG v40; // r8
  signed __int64 v41; // r9
  signed __int64 v42; // rcx
  signed __int64 v43; // rax
  signed __int64 v44; // rtt
  __int64 v45; // r11
  signed __int64 v46; // r10
  unsigned __int32 v47; // eax
  ULONG_PTR v48; // rdi
  __int64 v49; // rbx
  __int64 v50; // rax
  unsigned __int64 v51; // r10
  ULONG_PTR v52; // r11
  int v53; // r9d
  unsigned __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // rcx
  unsigned __int64 v57; // r8
  __int64 v58; // rdx
  __int64 InternalData; // rax
  __int64 v60; // rdx
  __int64 v61; // rax
  ULONG_PTR v62; // rdi
  __int64 v63; // rbx
  __int64 v64; // rax
  int v65; // r10d
  unsigned __int64 v66; // rcx
  __int64 v67; // r9
  __int64 v68; // rcx
  unsigned __int64 v69; // r9
  __int64 v70; // rdx
  __int64 v71; // rdx
  __int64 v72; // r8
  signed __int32 v73[8]; // [rsp+0h] [rbp-B8h] BYREF
  unsigned int v74; // [rsp+30h] [rbp-88h]
  unsigned int v75; // [rsp+34h] [rbp-84h]
  ULONG_PTR v76; // [rsp+38h] [rbp-80h]
  unsigned int v77; // [rsp+40h] [rbp-78h]
  __int64 v78; // [rsp+48h] [rbp-70h]
  signed __int64 v79; // [rsp+50h] [rbp-68h] BYREF
  LARGE_INTEGER v80; // [rsp+58h] [rbp-60h] BYREF
  int v81; // [rsp+60h] [rbp-58h]
  __int64 v82; // [rsp+68h] [rbp-50h]
  LARGE_INTEGER v83; // [rsp+70h] [rbp-48h] BYREF
  unsigned __int64 v84; // [rsp+78h] [rbp-40h]
  unsigned __int8 v85; // [rsp+C0h] [rbp+8h] BYREF
  LARGE_INTEGER *v86; // [rsp+D8h] [rbp+20h]

  v86 = a4;
  if ( *(int *)(a1 + 16) < 0 || a2 > *(_DWORD *)(a1 + 8) )
  {
LABEL_53:
    EtwpUpdateEventsLostCount(a1);
    return 0LL;
  }
  v7 = *(unsigned int *)(a1 + 4);
  v8 = *(_DWORD *)a1;
  v9 = (a2 + 7) & 0xFFFFFFF8;
  v75 = v9;
  v74 = v7;
  v77 = v8;
  while ( 1 )
  {
    v10 = (LARGE_INTEGER *)KiProcessorBlock;
    Number = KeGetCurrentPrcb()->Number;
    v12 = *(_QWORD *)(a1 + 1096);
    v81 = Number;
    if ( v12 == EtwpHostSiloState )
    {
      if ( (unsigned int)Number >= (unsigned int)KeNumberProcessors_0 )
      {
        v13 = 0LL;
      }
      else
      {
        _mm_lfence();
        v13 = KiProcessorBlock[Number];
      }
      v14 = (_QWORD *)(*(_QWORD *)(v13 + 34472) + 320LL);
    }
    else
    {
      v14 = (_QWORD *)(*(_QWORD *)(v12 + 4144) + (Number << 6));
    }
    if ( (*(_DWORD *)(a1 + 12) & 0x10000000) != 0 )
      v15 = (signed __int64 *)(a1 + 128);
    else
      v15 = (signed __int64 *)(*v14 + 8LL * v8);
    v85 = 0;
    _m_prefetchw(v15);
    v16 = *v15;
    if ( (*v15 & 0xF) != 0 )
    {
      do
      {
        v17 = _InterlockedCompareExchange64(v15, v16 - 1, v16);
        if ( v16 == v17 )
          break;
        v16 = v17;
      }
      while ( (v17 & 0xF) != 0 );
    }
    if ( !v16 )
    {
      v19 = 0LL;
      goto LABEL_45;
    }
    v18 = v16 & 0xF;
    if ( (v16 & 0xF) != 0 )
    {
      v19 = v16 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v18 == 1 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 12), 0xFu);
        _m_prefetchw(v15);
        v43 = *v15;
        while ( (v43 & 0xF) == 0 )
        {
          if ( v19 != (v43 & 0xFFFFFFFFFFFFFFF0uLL) )
            break;
          v44 = v43;
          v43 = _InterlockedCompareExchange64(v15, v43 + 15, v43);
          if ( v44 == v43 )
            goto LABEL_15;
        }
        _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 12), 0xFFFFFFF1);
      }
    }
    else
    {
      EtwpLockBufferList(a1, &v85);
      v19 = *v15 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v19 )
        _InterlockedIncrement((volatile signed __int32 *)(v19 + 12));
      EtwpUnlockBufferList(a1, &v85);
      v7 = v74;
    }
LABEL_15:
    if ( v19 )
    {
      v79 = 0LL;
      v80.QuadPart = 0LL;
      _m_prefetchw((const void *)(v19 + 8));
      v20 = *(_DWORD *)(v19 + 8);
      if ( v20 <= (unsigned int)v7 )
        break;
    }
LABEL_45:
    v38 = EtwpSwitchBuffer(a1, v19, v15, v81, a5);
    if ( (*(_DWORD *)(a1 + 12) & 0x4000000) != 0 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v40 = PerformanceCounter.QuadPart
          - _InterlockedExchange64((volatile __int64 *)(a1 + 1256), PerformanceCounter.QuadPart);
      do
      {
        v41 = *(_QWORD *)(a1 + 1264);
        if ( v41 )
          v42 = (v41 + v40 + 2 * v41) / 4;
        else
          v42 = v40;
      }
      while ( v41 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1264), v42, v41) );
    }
    if ( v38 < 0 )
      goto LABEL_53;
    v8 = v77;
    v7 = v74;
  }
  while ( (*(_DWORD *)(a1 + 816) & 0x8000000) != 0 )
  {
    if ( (unsigned int)EtwpGetTimeStampAndQpcDelta(a1, &v80, &v79, v10) )
      goto LABEL_82;
    v45 = 8LL * v8;
    v46 = *(_QWORD *)(v45 + v14[2]);
    if ( v79 == v46 && v20 != 72 )
    {
      SystemTimePrecise = v80;
      goto LABEL_28;
    }
    v47 = _InterlockedCompareExchange((volatile signed __int32 *)(v19 + 8), v20 + 24, v20);
    if ( v20 == v47 )
    {
      if ( (unsigned __int64)v47 + 24 > v74 )
      {
        *(_DWORD *)(v19 + 4) = v47;
        goto LABEL_45;
      }
      v35 = v46 == _InterlockedCompareExchange64((volatile signed __int64 *)(v14[2] + v45), v79, v46);
      *(_DWORD *)(v47 + v19 + 4) = 5308440;
      v20 = v47;
      *(LARGE_INTEGER *)(v47 + v19 + 8) = v80;
      if ( v35 )
      {
        *(_QWORD *)(v47 + v19 + 16) = v79;
        *(_DWORD *)(v47 + v19) = -1072627710;
      }
      else
      {
        *(_DWORD *)(v47 + v19) = -1072627711;
        *(_QWORD *)(v47 + v19 + 16) = 0LL;
      }
    }
    else
    {
      v20 = v47;
    }
LABEL_82:
    v7 = v74;
LABEL_50:
    if ( v20 > (unsigned int)v7 )
      goto LABEL_45;
  }
  v21 = *(_QWORD *)(a1 + 24);
  if ( v21 > 3 )
    goto LABEL_129;
  if ( (_DWORD)v21 == 1 )
  {
    *((_QWORD *)&v22 + 1) = HalpPerformanceCounter;
    v76 = HalpPerformanceCounter;
    if ( *(_DWORD *)(HalpPerformanceCounter + 228) == 5 )
    {
      v23 = 10000000LL;
      v82 = 10000000LL;
      if ( HalpTimerReferencePage )
      {
        if ( (*(_DWORD *)(HalpPerformanceCounter + 224) & 0x10000) != 0 )
          v24 = *(_QWORD *)(HalpPerformanceCounter + 72)
              + *(_DWORD *)(HalpPerformanceCounter + 80) * KeGetPcr()->Prcb.Number;
        else
          v24 = *(_QWORD *)(HalpPerformanceCounter + 72);
        v25 = (*(__int64 (__fastcall **)(__int64, ULONG_PTR, __int64, LARGE_INTEGER *))(HalpPerformanceCounter + 112))(
                v24,
                HalpPerformanceCounter,
                v7,
                v10);
        v26 = v76;
        v7 = MEMORY[0xFFFFF780000003B8];
        v22 = (unsigned __int64)v25 * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1);
        goto LABEL_25;
      }
      if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
      {
        InternalData = HalpTimerGetInternalData(HalpPerformanceCounter, HalpPerformanceCounter, v7, v10);
        v61 = (*(__int64 (__fastcall **)(__int64))(v60 + 112))(InternalData);
        v52 = v76;
        *((_QWORD *)&v22 + 1) = v61;
        *(_QWORD *)&v22 = *(_QWORD *)(v76 + 208);
      }
      else
      {
        v48 = HalpPerformanceCounter;
        do
        {
          v78 = *(_QWORD *)(v48 + 208);
          do
          {
            v49 = *(_QWORD *)(v48 + 200);
            v50 = HalpTimerGetInternalData(v48, *((_QWORD *)&v22 + 1), v7, v10);
            v51 = (*(__int64 (__fastcall **)(__int64))(v48 + 112))(v50);
            _InterlockedOr(v73, 0);
            *(_QWORD *)&v22 = *(_QWORD *)(v48 + 200);
          }
          while ( v49 != (_QWORD)v22 );
        }
        while ( v78 != *(_QWORD *)(v48 + 208) );
        v52 = v76;
        v23 = v82;
        v53 = *(_DWORD *)(v76 + 220);
        v54 = v49 ^ v51;
        if ( _bittest64((const __int64 *)&v54, (unsigned __int8)(v53 - 1)) )
        {
          if ( v53 == 64 )
            v55 = -1LL;
          else
            v55 = (1LL << v53) - 1;
          v56 = 0LL;
          if ( v53 != 64 )
            v56 = 1LL << v53;
          v57 = v49 & v55;
          *((_QWORD *)&v22 + 1) = v51 | v49 ^ v57;
          if ( v51 < v57 )
            *((_QWORD *)&v22 + 1) += v56;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v76 + 200), *((signed __int64 *)&v22 + 1), v22);
          v9 = v75;
          *(_QWORD *)&v22 = v78;
        }
        else
        {
          if ( v53 == 64 )
            v58 = -1LL;
          else
            v58 = (1LL << v53) - 1;
          *(_QWORD *)&v22 = v78;
          *((_QWORD *)&v22 + 1) = v49 & ~v58;
          v9 = v75;
          *((_QWORD *)&v22 + 1) |= v51;
        }
      }
      SystemTimePrecise.QuadPart = HalpTimerScaleCounter(
                                     v22 + *((_QWORD *)&v22 + 1),
                                     *(_QWORD *)(v52 + 192),
                                     10000000LL);
    }
    else
    {
      v35 = *(_DWORD *)(HalpPerformanceCounter + 220) == 64;
      v23 = *(_QWORD *)(HalpPerformanceCounter + 192);
      v82 = v23;
      if ( v35 )
      {
        v36 = HalpTimerGetInternalData(HalpPerformanceCounter, HalpPerformanceCounter, v7, v10);
        *(_QWORD *)&v22 = (*(__int64 (__fastcall **)(__int64))(v37 + 112))(v36);
        v26 = v76;
        *((_QWORD *)&v22 + 1) = v22;
        v7 = *(_QWORD *)(v76 + 208);
      }
      else
      {
        v62 = HalpPerformanceCounter;
        do
        {
          v78 = *(_QWORD *)(v62 + 208);
          do
          {
            v63 = *(_QWORD *)(v62 + 200);
            v64 = HalpTimerGetInternalData(v62, *((_QWORD *)&v22 + 1), v7, v10);
            v10 = (LARGE_INTEGER *)(*(__int64 (__fastcall **)(__int64))(v62 + 112))(v64);
            v84 = (unsigned __int64)v10;
            _InterlockedOr(v73, 0);
            *(_QWORD *)&v22 = *(_QWORD *)(v62 + 200);
          }
          while ( v63 != (_QWORD)v22 );
          v7 = v78;
        }
        while ( v78 != *(_QWORD *)(v62 + 208) );
        v26 = v76;
        v23 = v82;
        v65 = *(_DWORD *)(v76 + 220);
        v66 = v63 ^ (unsigned __int64)v10;
        if ( _bittest64((const __int64 *)&v66, (unsigned __int8)(v65 - 1)) )
        {
          if ( v65 == 64 )
            v67 = -1LL;
          else
            v67 = (1LL << v65) - 1;
          v68 = 0LL;
          if ( v65 != 64 )
            v68 = 1LL << v65;
          v69 = v63 & v67;
          *((_QWORD *)&v22 + 1) = v84 | v63 ^ v69;
          if ( v84 < v69 )
            *((_QWORD *)&v22 + 1) += v68;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v76 + 200), *((signed __int64 *)&v22 + 1), v22);
          v9 = v75;
        }
        else
        {
          if ( v65 == 64 )
            v70 = -1LL;
          else
            v70 = (1LL << v65) - 1;
          v71 = v63 & ~v70;
          v9 = v75;
          *((_QWORD *)&v22 + 1) = (unsigned __int64)v10 | v71;
        }
      }
LABEL_25:
      SystemTimePrecise.QuadPart = v7 + *((_QWORD *)&v22 + 1);
    }
    if ( v26 != HalpOriginalPerformanceCounter && HalpOriginalPerformanceCounter )
    {
      v72 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
      if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
        v72 = 10000000LL;
      SystemTimePrecise.QuadPart = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HalpTimerScaleCounter)(
                                     (LARGE_INTEGER)SystemTimePrecise.QuadPart,
                                     v23,
                                     v72);
    }
    v8 = v77;
    goto LABEL_28;
  }
  if ( !(_DWORD)v21 )
  {
    SystemTimePrecise = RtlGetSystemTimePrecise();
LABEL_28:
    v7 = v74;
    goto LABEL_29;
  }
  v31 = v21 - 2;
  if ( !v31 )
  {
    v83.QuadPart = 0LL;
    ((void (__fastcall *)(LARGE_INTEGER *, _QWORD, __int64, LARGE_INTEGER *))off_140C01DF0[0])(&v83, 0LL, v7, v10);
    SystemTimePrecise = v83;
    goto LABEL_28;
  }
  if ( v31 != 1 )
LABEL_129:
    __fastfail(0x3Du);
  SystemTimePrecise.QuadPart = __rdtsc();
LABEL_29:
  v10 = v86;
  *v86 = SystemTimePrecise;
  v28 = _InterlockedCompareExchange((volatile signed __int32 *)(v19 + 8), v9 + v20, v20);
  v29 = v28;
  if ( v20 != v28 )
  {
    v20 = v28;
    goto LABEL_50;
  }
  if ( v28 + v9 > (unsigned int)v7 )
  {
    *(_DWORD *)(v19 + 4) = v28;
    goto LABEL_45;
  }
  if ( (*(_DWORD *)(a1 + 12) & 0x400) != 0 )
  {
    v32 = *(_QWORD *)(v19 + 16);
    for ( i = v10->QuadPart; v10->QuadPart > v32; i = v10->QuadPart )
    {
      v34 = v32;
      v32 = _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 16), i, v32);
      if ( v34 == v32 )
        break;
    }
  }
  ++*(_QWORD *)(v14[1] + 8LL * v8);
  result = v19 + v29;
  *(_QWORD *)a3 = v19;
  *(_QWORD *)(a3 + 8) = v15;
  *(_DWORD *)(a3 + 16) = v29;
  return result;
}
