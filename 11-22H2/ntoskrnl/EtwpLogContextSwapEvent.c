/*
 * XREFs of EtwpLogContextSwapEvent @ 0x140388190
 * Callers:
 *     EtwTraceContextSwap @ 0x140388080 (EtwTraceContextSwap.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x140226E30 (RtlGetSystemTimePrecise.c)
 *     EtwpReleaseTraceBuffer @ 0x1402276B8 (EtwpReleaseTraceBuffer.c)
 *     EtwpReserveTraceBuffer @ 0x1402340E0 (EtwpReserveTraceBuffer.c)
 *     EtwEventEnabled @ 0x140258300 (EtwEventEnabled.c)
 *     HalpTimerGetInternalData @ 0x1402C4540 (HalpTimerGetInternalData.c)
 *     EtwpCCSwapTrace @ 0x1403883E0 (EtwpCCSwapTrace.c)
 *     HalpTimerScaleCounter @ 0x1403C3EC4 (HalpTimerScaleCounter.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     EtwpReserveWithPmcCounters @ 0x140467858 (EtwpReserveWithPmcCounters.c)
 *     EtwpStackTraceDispatcher @ 0x140468650 (EtwpStackTraceDispatcher.c)
 *     EtwpTraceLastBranchRecord @ 0x140469446 (EtwpTraceLastBranchRecord.c)
 *     EtwpTraceLostSystemEvent @ 0x1405FC780 (EtwpTraceLostSystemEvent.c)
 *     EtwpReserveWithPebsIndex @ 0x1405FE2F0 (EtwpReserveWithPebsIndex.c)
 *     EtwpTraceProcessorTrace @ 0x140602C84 (EtwpTraceProcessorTrace.c)
 */

char __fastcall EtwpLogContextSwapEvent(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  __int64 v4; // rax
  int v5; // r13d
  bool v6; // zf
  __int64 v7; // r9
  __int64 v8; // r15
  __int64 v9; // rbx
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // rcx
  int v14; // r12d
  _QWORD *v15; // rdi
  unsigned __int64 v16; // rax
  __int64 v17; // r15
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r11
  __int64 QuadPart; // rcx
  __int64 v23; // r8
  int v24; // eax
  __int64 InternalData; // rax
  __int64 v26; // rax
  __int64 v27; // r13
  signed __int64 v28; // rdx
  __int64 v29; // rdi
  __int64 v30; // rax
  unsigned __int64 v31; // r10
  signed __int64 v32; // rax
  int v33; // r9d
  unsigned __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rcx
  unsigned __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // r13
  signed __int64 v43; // rdx
  __int64 v44; // rdi
  __int64 v45; // rax
  unsigned __int64 v46; // r10
  signed __int64 v47; // rax
  int v48; // r9d
  unsigned __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rcx
  unsigned __int64 v52; // r8
  __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // r8
  int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rdx
  __int64 v59; // rcx
  LARGE_INTEGER *v60; // rax
  struct _KPRCB *CurrentPrcb; // rax
  _PPM_IDLE_STATES *IdleStates; // rax
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rcx
  signed __int32 v68[8]; // [rsp+0h] [rbp-A8h] BYREF
  LARGE_INTEGER v69[2]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v70; // [rsp+40h] [rbp-68h] BYREF
  __int128 v71; // [rsp+48h] [rbp-60h] BYREF
  __int64 v72; // [rsp+58h] [rbp-50h]
  int v73; // [rsp+B0h] [rbp+8h]
  __int64 v74; // [rsp+B8h] [rbp+10h]
  unsigned int v76; // [rsp+C8h] [rbp+20h]

  v74 = a2;
  v3 = *(_DWORD *)(a1 + 4248);
  LOBYTE(v4) = 0;
  v5 = 0;
  v69[0].QuadPart = 0LL;
  v6 = !_BitScanForward((unsigned int *)&v7, v3);
  v73 = 0;
  v71 = 0LL;
  v76 = v7;
  v8 = a3;
  v9 = a2;
  v72 = 0LL;
  if ( !v6 )
  {
    while ( 1 )
    {
      v3 &= v3 - 1;
      v4 = 32LL * (unsigned int)v7;
      v11 = v4 + a1 + 4284;
      if ( v11 )
      {
        LODWORD(v4) = *(_DWORD *)(v11 + 4);
        if ( (v4 & 4) != 0 )
        {
          LODWORD(v4) = *(unsigned __int8 *)(a1 + 2 * v7 + 4232);
          if ( (unsigned int)v4 < *(_DWORD *)(a1 + 16) )
          {
            _mm_lfence();
            v4 = *(_QWORD *)(a1 + 456);
            v12 = *(_QWORD *)(v4 + 8LL * *(unsigned __int8 *)(a1 + 2 * v7 + 4232));
            if ( (v12 & 1) == 0 )
              break;
          }
        }
      }
LABEL_4:
      v6 = !_BitScanForward((unsigned int *)&v7, v3);
      v76 = v7;
      if ( v6 )
        return v4;
    }
    v13 = 32LL * v76 + a1 + 4284;
    if ( v13 && (*(_DWORD *)(v13 + 4) & 0x100) != 0 )
    {
      v14 = 1 << *(_DWORD *)(v12 + 200);
      LOBYTE(v4) = ~(_BYTE)v5;
      v15 = (_QWORD *)v12;
      if ( (~v5 & v14) == 0 )
        goto LABEL_21;
      v16 = *(_QWORD *)(v12 + 24);
      if ( v16 > 3 )
        goto LABEL_117;
      if ( (_DWORD)v16 != 1 )
      {
        if ( (_DWORD)v16 )
        {
          v24 = v16 - 2;
          if ( v24 )
          {
            if ( v24 != 1 )
LABEL_117:
              __fastfail(0x3Du);
            QuadPart = __rdtsc();
          }
          else
          {
            v70 = 0LL;
            ((void (__fastcall *)(__int64 *, __int64, __int64))off_140C01DF0[0])(&v70, a2, 10000000LL);
            QuadPart = v70;
          }
        }
        else
        {
          QuadPart = RtlGetSystemTimePrecise().QuadPart;
        }
        goto LABEL_20;
      }
      v17 = HalpPerformanceCounter;
      if ( *(_DWORD *)(HalpPerformanceCounter + 228) == 5 )
      {
        v18 = 10000000LL;
        if ( HalpTimerReferencePage )
        {
          if ( (*(_DWORD *)(HalpPerformanceCounter + 224) & 0x10000) != 0 )
            v19 = *(_QWORD *)(HalpPerformanceCounter + 72)
                + *(_DWORD *)(HalpPerformanceCounter + 80) * KeGetPcr()->Prcb.Number;
          else
            v19 = *(_QWORD *)(HalpPerformanceCounter + 72);
          v20 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(HalpPerformanceCounter + 112))(
                  v19,
                  a2,
                  10000000LL);
          v21 = 10000000LL;
          QuadPart = MEMORY[0xFFFFF780000003B8]
                   + (((unsigned __int64)v20 * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1)) >> 64);
LABEL_18:
          if ( v17 != HalpOriginalPerformanceCounter && HalpOriginalPerformanceCounter )
          {
            v55 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
            if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
              v55 = v21;
            QuadPart = HalpTimerScaleCounter(QuadPart, v18, v55);
          }
          v8 = a3;
          v9 = v74;
LABEL_20:
          v23 = *(unsigned int *)(v12 + 200);
          v69[0].QuadPart = QuadPart;
          LOBYTE(v4) = EtwpCCSwapTrace(v9, v8, v23, v69);
          v5 |= v14;
          v73 = v5;
LABEL_21:
          if ( !v8 )
            goto LABEL_25;
          LODWORD(v4) = *(_DWORD *)(v12 + 816);
          if ( (v4 & 0x80u) != 0LL )
          {
            v4 = v15[125];
            if ( (*(_BYTE *)(v4 + 164) & 0x10) != 0 )
              LOBYTE(v4) = EtwpStackTraceDispatcher(v15, v69, v8, 4217348LL);
          }
          if ( (*(_DWORD *)(v12 + 816) & 0x8000) != 0 )
          {
            v4 = v15[128];
            a2 = 0LL;
            if ( *(_DWORD *)(v4 + 8) )
            {
              while ( 1 )
              {
                v65 = v15[128];
                if ( *(_WORD *)(v65 + 2 * a2 + 12) == 1316 )
                  break;
                LODWORD(v4) = *(_DWORD *)(v65 + 8);
                a2 = (unsigned int)(a2 + 1);
                if ( (unsigned int)a2 >= (unsigned int)v4 )
                  goto LABEL_24;
              }
              LOBYTE(v4) = EtwpTraceLastBranchRecord(v15, v69, v8, 4217348LL);
            }
          }
LABEL_24:
          if ( (*(_DWORD *)(v12 + 816) & 0x4000000) != 0 && (v4 = v15[129], a2 = 0LL, *(_DWORD *)(v4 + 24)) )
          {
            while ( 1 )
            {
              v66 = v15[129];
              if ( *(_WORD *)(v66 + 2 * a2 + 28) == 1316 )
                break;
              LODWORD(v4) = *(_DWORD *)(v66 + 24);
              a2 = (unsigned int)(a2 + 1);
              if ( (unsigned int)a2 >= (unsigned int)v4 )
                goto LABEL_25;
            }
            LOBYTE(v4) = EtwpTraceProcessorTrace(v15, v69, v8, 4217348LL);
            v9 = v74;
          }
          else
          {
LABEL_25:
            v9 = v74;
          }
          goto LABEL_4;
        }
        if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
        {
          InternalData = HalpTimerGetInternalData(HalpPerformanceCounter);
          v26 = (*(__int64 (__fastcall **)(__int64))(v17 + 112))(InternalData);
          v27 = *(_QWORD *)(v17 + 208);
          v28 = v26;
        }
        else
        {
          do
          {
            v27 = *(_QWORD *)(v17 + 208);
            do
            {
              v29 = *(_QWORD *)(v17 + 200);
              v30 = HalpTimerGetInternalData(v17);
              v31 = (*(__int64 (__fastcall **)(__int64))(v17 + 112))(v30);
              _InterlockedOr(v68, 0);
              v32 = *(_QWORD *)(v17 + 200);
            }
            while ( v29 != v32 );
          }
          while ( v27 != *(_QWORD *)(v17 + 208) );
          v33 = *(_DWORD *)(v17 + 220);
          v34 = v29 ^ v31;
          if ( _bittest64((const __int64 *)&v34, (unsigned __int8)(v33 - 1)) )
          {
            if ( v33 == 64 )
              v35 = -1LL;
            else
              v35 = (1LL << v33) - 1;
            v36 = 0LL;
            if ( v33 != 64 )
              v36 = 1LL << v33;
            v37 = v29 & v35;
            v28 = v31 | v29 ^ v37;
            if ( v31 < v37 )
              v28 += v36;
            _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 200), v28, v32);
            v15 = (_QWORD *)v12;
          }
          else
          {
            if ( v33 == 64 )
              v38 = -1LL;
            else
              v38 = (1LL << v33) - 1;
            v39 = v29 & ~v38;
            v15 = (_QWORD *)v12;
            v28 = v31 | v39;
          }
        }
        QuadPart = HalpTimerScaleCounter(v28 + v27, *(_QWORD *)(v17 + 192), 10000000LL);
      }
      else
      {
        v18 = *(_QWORD *)(HalpPerformanceCounter + 192);
        if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
        {
          v40 = HalpTimerGetInternalData(HalpPerformanceCounter);
          v41 = (*(__int64 (__fastcall **)(__int64))(v17 + 112))(v40);
          v42 = *(_QWORD *)(v17 + 208);
          v43 = v41;
        }
        else
        {
          do
          {
            v42 = *(_QWORD *)(v17 + 208);
            do
            {
              v44 = *(_QWORD *)(v17 + 200);
              v45 = HalpTimerGetInternalData(v17);
              v46 = (*(__int64 (__fastcall **)(__int64))(v17 + 112))(v45);
              _InterlockedOr(v68, 0);
              v47 = *(_QWORD *)(v17 + 200);
            }
            while ( v44 != v47 );
          }
          while ( v42 != *(_QWORD *)(v17 + 208) );
          v48 = *(_DWORD *)(v17 + 220);
          v49 = v44 ^ v46;
          if ( _bittest64((const __int64 *)&v49, (unsigned __int8)(v48 - 1)) )
          {
            if ( v48 == 64 )
              v50 = -1LL;
            else
              v50 = (1LL << v48) - 1;
            v51 = 0LL;
            if ( v48 != 64 )
              v51 = 1LL << v48;
            v52 = v44 & v50;
            v43 = v46 | v44 ^ v52;
            if ( v46 < v52 )
              v43 += v51;
            _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 200), v43, v47);
            v15 = (_QWORD *)v12;
          }
          else
          {
            if ( v48 == 64 )
              v53 = -1LL;
            else
              v53 = (1LL << v48) - 1;
            v54 = v44 & ~v53;
            v15 = (_QWORD *)v12;
            v43 = v46 | v54;
          }
        }
        QuadPart = v43 + v42;
        v21 = 10000000LL;
      }
      v5 = v73;
      goto LABEL_18;
    }
    v56 = *(_DWORD *)(v12 + 816);
    v15 = (_QWORD *)v12;
    if ( (v56 & 0xC00) == 0 )
      goto LABEL_83;
    if ( (v56 & 0x400) != 0 )
    {
      v57 = EtwpReserveWithPebsIndex(v12, 1316, 24, (unsigned int)&v71, (__int64)v69, 4217348);
      goto LABEL_85;
    }
    if ( (v56 & 0x800) != 0 && (v58 = 0LL, *(_DWORD *)(*(_QWORD *)(v12 + 1016) + 8LL)) )
    {
      while ( 1 )
      {
        v59 = *(_QWORD *)(v12 + 1016);
        if ( *(_WORD *)(v59 + 2 * v58 + 12) == 1316 )
          break;
        v58 = (unsigned int)(v58 + 1);
        if ( (unsigned int)v58 >= *(_DWORD *)(v59 + 8) )
          goto LABEL_83;
      }
      v57 = EtwpReserveWithPmcCounters(v12, 1316, 24, (unsigned int)&v71, (__int64)v69, 4217348);
    }
    else
    {
LABEL_83:
      v60 = (LARGE_INTEGER *)EtwpReserveTraceBuffer(v12, 0x28u, (__int64)&v71, v69, 23044);
      if ( !v60 )
      {
LABEL_114:
        LOBYTE(v4) = EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_SYSTEM_EVENT);
        if ( (_BYTE)v4 )
          LOBYTE(v4) = EtwpTraceLostSystemEvent(1316LL, v12 + 136, 4217348LL, 3221225495LL);
        goto LABEL_4;
      }
      v57 = (__int64)&v60[2];
      v60[1] = v69[0];
      v60->LowPart = -1072627708;
      v60->HighPart = 86245416;
    }
LABEL_85:
    if ( v57 )
    {
      *(_OWORD *)v57 = 0LL;
      *(_QWORD *)(v57 + 16) = 0LL;
      if ( v9 )
      {
        *(_DWORD *)(v57 + 4) = *(_DWORD *)(v9 + 1232);
        *(_BYTE *)(v57 + 9) = *(_BYTE *)(v9 + 195);
        *(_BYTE *)(v57 + 12) = *(_BYTE *)(v9 + 643);
        *(_BYTE *)(v57 + 13) ^= (*(_BYTE *)(v57 + 13) ^ *(_BYTE *)(v9 + 391)) & 1;
        *(_BYTE *)(v57 + 14) = *(_BYTE *)(v9 + 388);
        *(_BYTE *)(v57 + 15) = *(_BYTE *)(v9 + 588);
        *(_BYTE *)(v57 + 13) ^= (*(_BYTE *)(v57 + 13) ^ (2 * *(_BYTE *)(v9 + 512))) & 0xE;
        *(_DWORD *)(v57 + 20) = (*(_QWORD *)(v9 + 32) - *(_QWORD *)(v9 + 72)) >> 10;
        CurrentPrcb = KeGetCurrentPrcb();
        if ( (_KTHREAD *)v9 == CurrentPrcb->IdleThread )
        {
          IdleStates = CurrentPrcb->PowerState.IdleStates;
          if ( IdleStates )
            *(_BYTE *)(v57 + 10) = IdleStates->ActualState;
        }
        else
        {
          v63 = *(_QWORD *)(v9 + 104);
          if ( v63 )
          {
            v64 = v63 + CurrentPrcb->ScbOffset;
            while ( 1 )
            {
              LODWORD(v63) = *(_DWORD *)(v64 + 116);
              if ( (unsigned int)v63 > 0xFF )
                break;
              if ( !(_BYTE)v63 )
              {
                v64 = *(_QWORD *)(v64 + 408);
                if ( v64 )
                  continue;
              }
              goto LABEL_98;
            }
            LOBYTE(v63) = -1;
          }
LABEL_98:
          *(_BYTE *)(v57 + 10) = v63;
        }
      }
      if ( v8 )
      {
        *(_DWORD *)v57 = *(_DWORD *)(v8 + 1232);
        *(_BYTE *)(v57 + 8) = *(_BYTE *)(v8 + 195);
        *(_BYTE *)(v57 + 11) = *(_BYTE *)(v8 + 564);
        *(_BYTE *)(v57 + 13) ^= (*(_BYTE *)(v57 + 13) ^ (16 * *(_BYTE *)(v8 + 512))) & 0x70;
        *(_DWORD *)(v57 + 16) = MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v8 + 436);
      }
      LOBYTE(v4) = EtwpReleaseTraceBuffer((signed __int64 *)&v71);
      goto LABEL_21;
    }
    goto LABEL_114;
  }
  return v4;
}
