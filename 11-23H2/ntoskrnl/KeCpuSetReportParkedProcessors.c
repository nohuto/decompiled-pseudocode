/*
 * XREFs of KeCpuSetReportParkedProcessors @ 0x14039D894
 * Callers:
 *     PpmParkReportMask @ 0x14035AF00 (PpmParkReportMask.c)
 *     KiModifySystemAllowedCpuSetsWithLock @ 0x14039D6D0 (KiModifySystemAllowedCpuSetsWithLock.c)
 * Callees:
 *     KiDeferredReadySingleThread @ 0x14023A3A0 (KiDeferredReadySingleThread.c)
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140251670 (KxAcquireSpinLock.c)
 *     KiAndAffinityEx @ 0x140252500 (KiAndAffinityEx.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140252820 (KiFlushSoftwareInterruptBatch.c)
 *     KeAndGroupAffinityEx @ 0x140254540 (KeAndGroupAffinityEx.c)
 *     KeGetProcessorIndexFromNumber @ 0x140255270 (KeGetProcessorIndexFromNumber.c)
 *     KeEnumerateNextProcessor @ 0x140257370 (KeEnumerateNextProcessor.c)
 *     KeAddProcessorAffinityEx @ 0x140257460 (KeAddProcessorAffinityEx.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14039E0CC (KiUpdateGlobalCpuSetConfiguration.c)
 *     RtlWriteAcquireTickLock @ 0x1403C18C0 (RtlWriteAcquireTickLock.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 */

char __fastcall KeCpuSetReportParkedProcessors(unsigned __int16 *a1)
{
  _PROCESSOR_NUMBER v1; // r14d
  int v3; // ebp
  int v4; // r13d
  unsigned __int16 v5; // di
  int v6; // r11d
  __int64 v7; // rsi
  __int64 v8; // r10
  __int64 v9; // r10
  int v10; // r11d
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rbp
  __int64 v16; // r12
  __int64 v17; // r8
  __int64 v18; // rdx
  unsigned __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r8
  unsigned __int16 v26; // dx
  __int64 v27; // rcx
  struct _KPRCB *CurrentPrcb; // rbx
  char v29; // si
  _QWORD *v30; // rdi
  int Processor; // eax
  __int64 (__fastcall *v32)(_QWORD, _DWORD *, int *, __int64, _PROCESSOR_NUMBER *); // rax
  __int16 v33; // r12
  unsigned int *v34; // rbx
  unsigned __int64 v35; // rdi
  unsigned __int8 v36; // si
  bool v37; // zf
  __int64 (__fastcall *v38)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  __int64 (__fastcall *v39)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  __int64 (__fastcall *v40)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  _DWORD v42[2]; // [rsp+30h] [rbp-418h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+38h] [rbp-410h] BYREF
  int v44; // [rsp+3Ch] [rbp-40Ch]
  _QWORD *v45; // [rsp+40h] [rbp-408h] BYREF
  __int128 v46; // [rsp+48h] [rbp-400h] BYREF
  int v47; // [rsp+58h] [rbp-3F0h]
  int v48; // [rsp+60h] [rbp-3E8h]
  int v49; // [rsp+64h] [rbp-3E4h]
  int v50; // [rsp+68h] [rbp-3E0h]
  __int128 v51; // [rsp+70h] [rbp-3D8h] BYREF
  __int64 v52; // [rsp+80h] [rbp-3C8h]
  _DWORD v53[2]; // [rsp+88h] [rbp-3C0h] BYREF
  _DWORD v54[2]; // [rsp+90h] [rbp-3B8h] BYREF
  _DWORD v55[2]; // [rsp+98h] [rbp-3B0h] BYREF
  _DWORD v56[2]; // [rsp+A0h] [rbp-3A8h] BYREF
  _DWORD v57[2]; // [rsp+A8h] [rbp-3A0h] BYREF
  _DWORD v58[2]; // [rsp+B0h] [rbp-398h] BYREF
  int v59; // [rsp+B8h] [rbp-390h] BYREF
  __int128 v60; // [rsp+BCh] [rbp-38Ch]
  __int128 v61; // [rsp+D0h] [rbp-378h] BYREF
  _QWORD v62[34]; // [rsp+E0h] [rbp-368h] BYREF
  _QWORD v63[66]; // [rsp+1F0h] [rbp-258h] BYREF
  int v64; // [rsp+440h] [rbp-8h]

  v1 = (_PROCESSOR_NUMBER)(unsigned __int16)KiActiveGroups;
  ProcNumber = (_PROCESSOR_NUMBER)(unsigned __int16)KiActiveGroups;
  _m_prefetchw(KiCpuSetAffinities);
  _m_prefetchw(KiCpuSetAffinitiesShadow);
  v3 = 0;
  if ( a1 )
    KxAcquireSpinLock(&KiCpuSetLock);
  v4 = 0;
  v5 = 0;
  if ( v1 )
  {
    v6 = 0;
    do
    {
      v7 = qword_140D1EFF8[v5];
      if ( a1 )
      {
        if ( v5 >= *a1 )
          v8 = 0LL;
        else
          v8 = *(_QWORD *)&a1[4 * v5 + 4];
        v9 = v7 ^ v8;
        v63[v5 + 34] = v9;
        if ( KiNonParkedCpuSets[v5] == v9 )
          goto LABEL_37;
      }
      else
      {
        v9 = KiNonParkedCpuSets[v5];
        v63[v5 + 34] = v9;
      }
      v10 = v6 << 6;
      v11 = v7 & v9;
      v4 = 1;
      v12 = v7 ^ v7 & v9;
      if ( (v7 & v9) != 0 )
      {
        do
        {
          _BitScanForward64(&v13, v11);
          v48 = v13;
          v11 ^= 1LL << v13;
          *((_QWORD *)KiCpuSetAffinitiesShadow + (unsigned int)(v10 + v13)) = 1LL << v13;
        }
        while ( v11 );
        v1 = ProcNumber;
      }
      if ( v12 )
      {
        v14 = *((_QWORD *)&unk_140D20578 + 4 * v5);
        v15 = v14 & -(__int64)((v9 & (v7 ^ v14)) != 0 && (v9 & v14) != 0);
        v16 = (v7 ^ v14) & -(__int64)((v9 & (v7 ^ v14)) != 0 && (v9 & v14) != 0);
        v17 = KiSystemAllowedCpuSets[2 * v5] ^ v7;
        v18 = v17 & v9;
        if ( !v17 || !v18 )
          goto LABEL_27;
        v19 = v12 & v17;
        v12 ^= v19;
        if ( v19 )
        {
          do
          {
            _BitScanForward64((unsigned __int64 *)&v20, v19);
            v21 = v18;
            v19 &= ~(1LL << v20);
            v49 = v20;
            if ( _bittest64(&v15, (unsigned int)v20) )
            {
              if ( (v18 & v15) != 0 )
                v21 = v18 & v15;
            }
            else if ( (v18 & v16) != 0 )
            {
              v21 = v18 & v16;
            }
            *((_QWORD *)KiCpuSetAffinitiesShadow + (unsigned int)(v10 + v20)) = v21;
          }
          while ( v19 );
          v1 = ProcNumber;
        }
        if ( v12 )
        {
LABEL_27:
          v22 = v7 & ~v18;
          if ( (v9 & v22) == 0 )
            v22 = v7;
          do
          {
            _BitScanForward64((unsigned __int64 *)&v23, v12);
            v24 = v22;
            v12 &= ~(1LL << v23);
            v50 = v23;
            if ( _bittest64(&v15, (unsigned int)v23) )
            {
              if ( (v9 & v15 & v22) != 0 )
              {
                v25 = v15;
LABEL_34:
                v24 = v22 & v25;
              }
            }
            else if ( (v9 & v16 & v22) != 0 )
            {
              v25 = v16;
              goto LABEL_34;
            }
            *((_QWORD *)KiCpuSetAffinitiesShadow + (unsigned int)(v10 + v23)) = v24;
          }
          while ( v12 );
        }
        v3 = 0;
      }
LABEL_37:
      v6 = ++v5;
    }
    while ( v5 < *(unsigned int *)&v1 );
  }
  v45 = 0LL;
  if ( v4 )
  {
    RtlWriteAcquireTickLock(&KiCpuSetSequence);
    v26 = 0;
    if ( v1 )
    {
      do
      {
        v27 = v26++;
        KiNonParkedCpuSets[v27] = v63[v27 + 34];
      }
      while ( v26 < *(unsigned int *)&v1 );
    }
    memmove(KiCpuSetAffinities, KiCpuSetAffinitiesShadow, (unsigned int)KiCpuSetAffinitySize);
    ++KiCpuSetSequence;
    KiUpdateGlobalCpuSetConfiguration(&v45);
  }
  KxReleaseSpinLock((volatile signed __int64 *)&KiCpuSetLock);
  CurrentPrcb = KeGetCurrentPrcb();
  v29 = 0;
  v30 = v45;
  if ( v45 )
  {
    v45 = (_QWORD *)*v45;
    do
    {
      KiDeferredReadySingleThread((__int64)CurrentPrcb, (unsigned __int64)(v30 - 27), (__int64)&v45);
      v30 = v45;
      ++v29;
      if ( v45 )
        v45 = (_QWORD *)*v45;
      if ( (v29 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts.Level);
    }
    while ( v30 );
  }
  LOBYTE(Processor) = KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts.Level);
  if ( CurrentPrcb->NextThread )
  {
    LOBYTE(Processor) = CurrentPrcb->DpcRoutineActive;
    if ( !(_BYTE)Processor )
    {
      if ( CurrentPrcb->NestingLevel )
      {
        CurrentPrcb->InterruptRequest = 1;
        return Processor;
      }
      memset(&v62[1], 0, 0x100uLL);
      v60 = 0LL;
      if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x40) != 0 && !HalpInterruptNoShorthand )
      {
        v59 = 3;
        ProcNumber = (_PROCESSOR_NUMBER)-1;
        v44 = 1;
        v42[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
        v42[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
        v32 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, int *, __int64, _PROCESSOR_NUMBER *))(HalpInterruptController
                                                                                              + 120);
        _disable();
        LOBYTE(Processor) = v32(*(_QWORD *)(HalpInterruptController + 16), v42, &v59, 47LL, &ProcNumber);
        if ( (v64 & 0x200) != 0 )
          _enable();
        return Processor;
      }
      LODWORD(v62[0]) = 2097153;
      memset((char *)v62 + 4, 0, 0x104uLL);
      KeAddProcessorAffinityEx((unsigned __int16 *)v62, KeGetPcr()->Prcb.Number);
      v42[0] = 0;
      v52 = 0LL;
      v61 = 0LL;
      v51 = 0LL;
      memset(&v63[1], 0, 0x100uLL);
      v47 = 0;
      v46 = 0LL;
      if ( qword_140C62548 )
      {
        LOBYTE(Processor) = qword_140C62548(v62, 47LL);
        return Processor;
      }
      LODWORD(v63[0]) = 2097153;
      memset((char *)v63 + 4, 0, 0x104uLL);
      KiAndAffinityEx((unsigned __int16 *)&HalpInterruptPhysicalTargets, (unsigned __int16 *)v62, v63, 0x20u);
      v33 = v64;
      if ( HalpInterruptClusterModeEnabled )
      {
        v34 = (unsigned int *)HalpInterruptClusterData;
        ProcNumber = 0;
        while ( (unsigned __int64)v34 < HalpInterruptClusterDataEnd )
        {
          if ( (unsigned int)KeAndGroupAffinityEx(v62, (__int64)(v34 + 2), (char *)&v61) )
          {
            v35 = v61;
            v36 = 0;
            LODWORD(v46) = 6;
            v37 = (_QWORD)v61 == 0LL;
            *((_QWORD *)&v46 + 1) = *v34;
            ProcNumber.Group = WORD4(v61);
            while ( 1 )
            {
              ProcNumber.Number = v36;
              if ( v37 )
                break;
              if ( (v35 & 1) != 0 )
              {
                v42[0] = KeGetProcessorIndexFromNumber(&ProcNumber);
                v3 |= *(_DWORD *)(HalpInterruptTargets + 24LL * v42[0] + 12);
                HIDWORD(v46) = v3;
              }
              ++v36;
              v35 >>= 1;
              v37 = v35 == 0;
            }
            v53[0] = -1;
            v53[1] = 1;
            v54[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
            v54[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
            v38 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController
                                                                                            + 120);
            _disable();
            Processor = v38(*(_QWORD *)(HalpInterruptController + 16), v54, &v46, 47LL, v53);
            if ( (v33 & 0x200) != 0 )
              _enable();
            v3 = 0;
            if ( Processor < 0 )
              return Processor;
          }
          v34 += 6;
        }
        goto LABEL_82;
      }
      if ( HalpInterruptPhysicalModeOnly )
        goto LABEL_82;
      *((_QWORD *)&v51 + 1) = v62[1];
      *(_QWORD *)&v51 = v62;
      LODWORD(v46) = 5;
      DWORD2(v46) = 0;
      while ( !(unsigned int)KeEnumerateNextProcessor(v42, (unsigned __int16 **)&v51) )
      {
        if ( *(_DWORD *)(HalpInterruptTargets + 24LL * v42[0]) == 5 )
          DWORD2(v46) |= *(_DWORD *)(HalpInterruptTargets + 24LL * v42[0] + 8);
      }
      if ( !DWORD2(v46) )
        goto LABEL_82;
      v55[0] = -1;
      v55[1] = 1;
      v56[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
      v56[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
      v39 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
      _disable();
      Processor = v39(*(_QWORD *)(HalpInterruptController + 16), v56, &v46, 47LL, v55);
      if ( (v33 & 0x200) != 0 )
        _enable();
      if ( Processor >= 0 )
      {
LABEL_82:
        *((_QWORD *)&v51 + 1) = v63[1];
        *(_QWORD *)&v51 = v63;
        v42[0] = 0;
        LOWORD(v52) = 0;
        do
        {
          Processor = KeEnumerateNextProcessor(v42, (unsigned __int16 **)&v51);
          if ( Processor )
            break;
          LODWORD(v46) = 4;
          v57[0] = -1;
          v57[1] = 1;
          DWORD2(v46) = *(_DWORD *)(HalpInterruptTargets + 24LL * v42[0] + 8);
          v58[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
          v58[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
          v40 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
          _disable();
          Processor = v40(*(_QWORD *)(HalpInterruptController + 16), v58, &v46, 47LL, v57);
          if ( (v33 & 0x200) != 0 )
            _enable();
        }
        while ( Processor >= 0 );
      }
    }
  }
  return Processor;
}
