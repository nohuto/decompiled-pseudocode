/*
 * XREFs of KiNormalPriorityReadyScan @ 0x140307080
 * Callers:
 *     KiRetireDpcList @ 0x140245AC0 (KiRetireDpcList.c)
 * Callees:
 *     KiRemoveThreadFromReadyQueue @ 0x140206BE0 (KiRemoveThreadFromReadyQueue.c)
 *     KiDeferredReadySingleThread @ 0x14023A3A0 (KiDeferredReadySingleThread.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     KiRemoveThreadFromSharedReadyQueue @ 0x140243C70 (KiRemoveThreadFromSharedReadyQueue.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140246840 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140252820 (KiFlushSoftwareInterruptBatch.c)
 *     KiInsertDeferredReadyList @ 0x1402B9EE4 (KiInsertDeferredReadyList.c)
 *     KiShouldScanSharedReadyQueue @ 0x1403073C8 (KiShouldScanSharedReadyQueue.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140307B50 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiSetPriorityBoost @ 0x140307D98 (KiSetPriorityBoost.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x140410464 (KiReadGuestSchedulerAssistPriority.c)
 *     EtwTraceAntiStarvationBoost @ 0x1404121E8 (EtwTraceAntiStarvationBoost.c)
 */

__int64 __fastcall KiNormalPriorityReadyScan(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // rcx
  __int64 v3; // rbx
  int v4; // edx
  char v5; // cl
  int v6; // edi
  __int64 v7; // r8
  int v8; // r9d
  char v9; // cl
  int v10; // edx
  unsigned int v11; // edi
  unsigned int v12; // eax
  unsigned __int8 v13; // r13
  _QWORD **v14; // r12
  _QWORD *v15; // r15
  __int64 v16; // rsi
  bool v17; // cl
  bool v18; // zf
  int v19; // r14d
  char v20; // r12
  _QWORD *v21; // r15
  char v22; // al
  int v23; // ebx
  volatile signed __int32 *v25; // rdi
  _QWORD *v26; // r14
  __int64 v27; // rcx
  int v28; // esi
  char v29; // di
  int GuestSchedulerAssistPriority; // eax
  __int64 v31; // rdx
  int v32; // ecx
  int v33; // r11d
  unsigned int v34; // ebx
  unsigned int v35; // eax
  int v36; // ebx
  int v37; // r14d
  _QWORD **v38; // r12
  _QWORD *v39; // r15
  _DWORD *v40; // rdi
  __int64 v41; // rdx
  bool v42; // cl
  int v43; // eax
  int v44; // esi
  int v45; // esi
  char v46; // r12
  _QWORD *v47; // rdi
  __int64 v48; // r8
  volatile signed __int32 *v49; // rbx
  _QWORD *v50; // rsi
  __int64 v51; // rcx
  int v52; // r15d
  char v53; // bl
  int v54; // eax
  unsigned int v55; // r14d
  int v56; // [rsp+30h] [rbp-49h]
  int v57; // [rsp+34h] [rbp-45h]
  int v58; // [rsp+38h] [rbp-41h]
  int v59; // [rsp+38h] [rbp-41h]
  char v60; // [rsp+3Ch] [rbp-3Dh]
  __int64 v61; // [rsp+40h] [rbp-39h] BYREF
  _DWORD v62[2]; // [rsp+48h] [rbp-31h] BYREF
  _DWORD v63[2]; // [rsp+50h] [rbp-29h] BYREF
  int v64; // [rsp+58h] [rbp-21h] BYREF
  _QWORD *v65; // [rsp+60h] [rbp-19h] BYREF
  _QWORD *v66; // [rsp+68h] [rbp-11h] BYREF
  _QWORD *v67; // [rsp+70h] [rbp-9h] BYREF
  _QWORD *v68; // [rsp+78h] [rbp-1h] BYREF
  __int64 v69; // [rsp+80h] [rbp+7h]
  int v71; // [rsp+E0h] [rbp+67h]
  int v72; // [rsp+E0h] [rbp+67h]
  int v73; // [rsp+E8h] [rbp+6Fh]
  int v74; // [rsp+E8h] [rbp+6Fh]
  __int64 v75; // [rsp+E8h] [rbp+6Fh]
  int v76; // [rsp+F0h] [rbp+77h]
  int v77; // [rsp+F0h] [rbp+77h]
  int v78; // [rsp+F0h] [rbp+77h]
  int v79; // [rsp+F8h] [rbp+7Fh]
  char v80; // [rsp+F8h] [rbp+7Fh]

  v1 = a1;
  v61 = 0LL;
  v56 = 16;
  if ( (unsigned int)KiShouldScanSharedReadyQueue(a1) )
  {
    v3 = *(_QWORD *)(v2 + 34888);
    v69 = v3;
    if ( (*(_DWORD *)(v3 + 8) & 0x300) != 0 )
    {
      v4 = KiNormalPriorityBoostMaximumThreadReadyCount * *(unsigned __int8 *)(v3 + 660);
      v5 = *(_BYTE *)(v3 + 659);
      v65 = 0LL;
      v60 = v5;
      v62[0] = 0;
      v73 = v4;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
      {
        do
          KeYieldProcessorEx(v62);
        while ( *(_QWORD *)v3 );
      }
      v6 = *(_DWORD *)(v3 + 8) & 0x300;
      if ( v6 )
      {
        LODWORD(v7) = 16;
        v8 = MEMORY[0xFFFFF78000000320] - KiNormalPriorityBoostReadyTimeTicks;
        v9 = v60;
        v10 = v73;
        v57 = KiCyclesPerClockQuantum * KiNormalPriorityBoostingPeriodMultiplier;
        v65 = 0LL;
        v76 = 16;
        v79 = MEMORY[0xFFFFF78000000320] - KiNormalPriorityBoostReadyTimeTicks;
        v11 = __ROR4__(v6, v60);
        do
        {
          _BitScanForward(&v12, v11);
          v11 ^= 1 << v12;
          v62[1] = v12;
          v13 = (v12 + v9) & 0x1F;
          v14 = (_QWORD **)(v3 + 16 + 16LL * v13);
          v58 = v13;
          v15 = *v14;
          do
          {
            v16 = (__int64)(v15 - 27);
            v17 = 0;
            v18 = (*(_DWORD *)(v15 - 12) & 0x400000) == 0;
            v15 = (_QWORD *)*v15;
            if ( !v18 )
            {
              GuestSchedulerAssistPriority = KiReadGuestSchedulerAssistPriority(v16, 0LL);
              v10 = v73;
              LODWORD(v7) = v76;
              v17 = GuestSchedulerAssistPriority != *(_DWORD *)(v16 + 1024);
              v8 = v79;
            }
            v19 = v8 - *(_DWORD *)(v16 + 436);
            if ( v19 > 0 || v17 )
            {
              KiRemoveThreadFromSharedReadyQueue(v3, v16, v13);
              KiInsertDeferredReadyList((__int64)&v65, v16);
              v10 = v73;
              LODWORD(v7) = v76;
              v8 = v79;
              if ( v19 > 0 )
                v10 = --v73;
            }
            v7 = (unsigned int)(v7 - 1);
            v76 = v7;
          }
          while ( v15 != v14 && v10 && (_DWORD)v7 );
          v20 = 0;
          if ( !v11 )
            break;
          if ( !v10 )
            break;
          v9 = v60;
        }
        while ( (_DWORD)v7 );
        _InterlockedAnd64((volatile signed __int64 *)v3, 0LL);
        v21 = v65;
        v1 = a1;
        if ( v65 )
        {
          do
          {
            v25 = (volatile signed __int32 *)(v21 - 27);
            v26 = v21;
            v27 = *(v21 - 18);
            v21 = (_QWORD *)*v21;
            v63[0] = 0;
            v71 = v27;
            while ( _interlockedbittestandset64(v25 + 16, 0LL) )
            {
              do
                KeYieldProcessorEx(v63);
              while ( *((_QWORD *)v25 + 8) );
            }
            v28 = *((char *)v25 + 195);
            if ( v79 - *((_DWORD *)v25 + 109) > 0 && v28 < 11 )
            {
              LOBYTE(v7) = 11;
              v20 = 1;
              KiSetPriorityBoost(0, (_DWORD)v25, v7, v71, v57);
            }
            *((_QWORD *)v25 + 8) = 0LL;
            if ( v20 && (BYTE8(PerfGlobalGroupMask) & 1) != 0 )
              EtwTraceAntiStarvationBoost(v25, (unsigned int)v28, v7);
            v20 = 0;
            *v26 = 0LL;
            v29 = 0;
            v66 = 0LL;
            do
            {
              KiDeferredReadySingleThread(v1, (unsigned __int64)(v26 - 27), (__int64)&v66);
              v26 = v66;
              ++v29;
              if ( v66 )
                v66 = (_QWORD *)*v66;
              if ( (v29 & 0xF) == 0 )
                KiFlushSoftwareInterruptBatch((unsigned __int8 *)(v1 + 12760));
            }
            while ( v26 );
            KiFlushSoftwareInterruptBatch((unsigned __int8 *)(v1 + 12760));
          }
          while ( v21 );
          v3 = v69;
          LODWORD(v7) = v76;
        }
        if ( (_DWORD)v7 && v73 )
        {
          v22 = 8;
        }
        else
        {
          v22 = 8;
          if ( (unsigned int)(v58 + 1) <= 9 )
            v22 = v58 + 1;
        }
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)v3, 0LL);
        v22 = 8;
      }
      *(_BYTE *)(v3 + 659) = v22;
    }
  }
  KiAcquirePrcbLocksForIsolationUnit(v1, 0, &v61);
  v23 = *(_DWORD *)(v1 + 32472) & 0x300;
  if ( v23 )
  {
    v31 = v1 + 32576;
    v32 = *(_DWORD *)(v1 + 32484);
    v33 = MEMORY[0xFFFFF78000000320] - KiNormalPriorityBoostReadyTimeTicks;
    v74 = KiNormalPriorityBoostMaximumThreadReadyCount;
    v80 = v32;
    v68 = 0LL;
    v72 = MEMORY[0xFFFFF78000000320] - KiNormalPriorityBoostReadyTimeTicks;
    v34 = __ROR4__(v23, v32);
    v59 = KiCyclesPerClockQuantum * KiNormalPriorityBoostingPeriodMultiplier;
    do
    {
      _BitScanForward(&v35, v34);
      v63[1] = v35;
      v77 = v34 ^ (1 << v35);
      v36 = v74;
      v37 = ((_BYTE)v35 + (_BYTE)v32) & 0x1F;
      v38 = (_QWORD **)(v31 + 16LL * (((_BYTE)v35 + (_BYTE)v32) & 0x1F));
      v39 = *v38;
      do
      {
        v40 = v39 - 27;
        v41 = (__int64)v39;
        v39 = (_QWORD *)*v39;
        v42 = 0;
        v75 = v41;
        if ( (v40[30] & 0x400000) != 0 )
        {
          v43 = KiReadGuestSchedulerAssistPriority(v40, 0LL);
          v41 = v75;
          v33 = v72;
          v42 = v43 != v40[256];
        }
        v44 = v33 - v40[109];
        if ( v44 > 0 || v42 )
        {
          KiRemoveThreadFromReadyQueue(v1, v41, v37);
          KiInsertDeferredReadyList((__int64)&v68, (__int64)v40);
          v33 = v72;
          if ( v44 > 0 )
            --v36;
        }
        v45 = --v56;
      }
      while ( v39 != v38 && v36 && v45 );
      v74 = v36;
      v46 = 0;
      v34 = v77;
      if ( !v77 )
        break;
      if ( !v74 )
        break;
      LOBYTE(v32) = v80;
      v31 = v1 + 32576;
    }
    while ( v45 );
    v47 = v68;
    if ( v68 )
    {
      KiReleasePrcbLocksForIsolationUnit(&v61);
      do
      {
        v49 = (volatile signed __int32 *)(v47 - 27);
        v50 = v47;
        v51 = *(v47 - 18);
        v47 = (_QWORD *)*v47;
        v64 = 0;
        v78 = v51;
        while ( _interlockedbittestandset64(v49 + 16, 0LL) )
        {
          do
            KeYieldProcessorEx(&v64);
          while ( *((_QWORD *)v49 + 8) );
        }
        v52 = *((char *)v49 + 195);
        if ( v72 - *((_DWORD *)v49 + 109) > 0 && v52 < 11 )
        {
          LOBYTE(v48) = 11;
          v46 = 1;
          KiSetPriorityBoost(0, (_DWORD)v49, v48, v78, v59);
        }
        *((_QWORD *)v49 + 8) = 0LL;
        if ( v46 && (BYTE8(PerfGlobalGroupMask) & 1) != 0 )
          EtwTraceAntiStarvationBoost(v49, (unsigned int)v52, v48);
        v46 = 0;
        *v50 = 0LL;
        v53 = 0;
        v67 = 0LL;
        do
        {
          KiDeferredReadySingleThread(v1, (unsigned __int64)(v50 - 27), (__int64)&v67);
          v50 = v67;
          ++v53;
          if ( v67 )
            v67 = (_QWORD *)*v67;
          if ( (v53 & 0xF) == 0 )
            KiFlushSoftwareInterruptBatch((unsigned __int8 *)(v1 + 12760));
        }
        while ( v50 );
        KiFlushSoftwareInterruptBatch((unsigned __int8 *)(v1 + 12760));
      }
      while ( v47 );
      KiAcquirePrcbLocksForIsolationUnit(v1, 0, &v61);
      v45 = v56;
    }
    if ( v45 && v74 )
    {
      v54 = 8;
    }
    else
    {
      v55 = v37 + 1;
      v54 = 8;
      if ( v55 <= 9 )
        v54 = v55;
    }
    *(_DWORD *)(v1 + 32484) = v54;
  }
  *(_DWORD *)(v1 + 32488) = KiNormalPriorityBoostScanLatencyTicks + MEMORY[0xFFFFF78000000320];
  return KiReleasePrcbLocksForIsolationUnit(&v61);
}
