/*
 * XREFs of KeSetSystemMultipleGroupAffinityThread @ 0x14036CD14
 * Callers:
 *     PsSetSystemMultipleGroupAffinityThread @ 0x1405A4620 (PsSetSystemMultipleGroupAffinityThread.c)
 *     MiCombineAllPhysicalMemory @ 0x1406F9F20 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     KiQueueReadyThread @ 0x1402345E0 (KiQueueReadyThread.c)
 *     KiDeferredReadySingleThread @ 0x14023A3A0 (KiDeferredReadySingleThread.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     KiEndThreadAccountingPeriodEx @ 0x140248520 (KiEndThreadAccountingPeriodEx.c)
 *     KiReadyDeferredReadyList @ 0x140249D60 (KiReadyDeferredReadyList.c)
 *     KiAndAffinityEx @ 0x140252500 (KiAndAffinityEx.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140252820 (KiFlushSoftwareInterruptBatch.c)
 *     KeAndGroupAffinityEx @ 0x140254540 (KeAndGroupAffinityEx.c)
 *     KeGetProcessorIndexFromNumber @ 0x140255270 (KeGetProcessorIndexFromNumber.c)
 *     KeEnumerateNextProcessor @ 0x140257370 (KeEnumerateNextProcessor.c)
 *     KeAddProcessorAffinityEx @ 0x140257460 (KeAddProcessorAffinityEx.c)
 *     KiAbPropagateBoosts @ 0x1402BC160 (KiAbPropagateBoosts.c)
 *     KiAbProcessThreadLocks @ 0x1402BC5E0 (KiAbProcessThreadLocks.c)
 *     KiSetSystemAffinityThread @ 0x1403073EC (KiSetSystemAffinityThread.c)
 *     KeFirstGroupAffinityEx @ 0x140309370 (KeFirstGroupAffinityEx.c)
 *     KiDeliverApc @ 0x14030FB20 (KiDeliverApc.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140428670 (KiSwapContext.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall KeSetSystemMultipleGroupAffinityThread(__int64 *a1, unsigned __int16 a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v6; // rax
  unsigned __int16 v7; // cx
  unsigned int v8; // r9d
  _WORD *v9; // r8
  __int64 v10; // rax
  unsigned __int8 CurrentIrql; // r14
  _DWORD *SchedulerAssist; // r9
  __int64 v13; // rdx
  __int64 CurrentPrcb; // rsi
  __int64 v15; // rdi
  int v16; // eax
  char v17; // r13
  __int64 v18; // rcx
  int v19; // ecx
  int v20; // ecx
  __int64 v21; // r8
  _WORD *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r9
  _QWORD *v25; // rbx
  char v26; // di
  ULONG_PTR v27; // rbp
  struct _KPRCB *v28; // rdi
  unsigned int v29; // ebx
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r9
  _DWORD *v32; // r8
  int v33; // eax
  __int64 v34; // rbx
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // r8
  __int64 v37; // rcx
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rcx
  struct _KPRCB *v40; // rcx
  signed __int32 *v41; // r8
  signed __int32 v42; // eax
  signed __int32 v43; // ett
  __int64 v44; // r8
  bool v45; // zf
  unsigned __int8 v46; // al
  struct _KPRCB *v47; // rcx
  _DWORD *v48; // rdx
  unsigned __int8 v49; // al
  struct _KPRCB *v50; // r9
  _DWORD *v51; // r8
  int v52; // eax
  void (__fastcall *v53)(_QWORD, _DWORD *, int *, __int64, _PROCESSOR_NUMBER *); // rax
  __int16 v54; // r12
  unsigned int *v55; // rbx
  unsigned __int64 v56; // rdi
  int v57; // ebp
  unsigned __int8 v58; // si
  __int64 (__fastcall *v59)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  int v60; // eax
  __int64 (__fastcall *v61)(_QWORD, _DWORD *, __int128 *, _QWORD, int *); // rax
  int v62; // eax
  __int64 (__fastcall *v63)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  int v64; // eax
  _DWORD v66[2]; // [rsp+40h] [rbp-328h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+48h] [rbp-320h] BYREF
  int v68; // [rsp+4Ch] [rbp-31Ch]
  _QWORD *v69; // [rsp+50h] [rbp-318h] BYREF
  __int128 v70; // [rsp+58h] [rbp-310h] BYREF
  int v71; // [rsp+68h] [rbp-300h]
  int v72; // [rsp+70h] [rbp-2F8h] BYREF
  int v73; // [rsp+74h] [rbp-2F4h] BYREF
  __int64 v74; // [rsp+78h] [rbp-2F0h] BYREF
  __int128 v75; // [rsp+80h] [rbp-2E8h] BYREF
  __int64 v76; // [rsp+90h] [rbp-2D8h]
  __int64 *v77; // [rsp+98h] [rbp-2D0h] BYREF
  _DWORD v78[2]; // [rsp+A0h] [rbp-2C8h] BYREF
  _DWORD v79[2]; // [rsp+A8h] [rbp-2C0h] BYREF
  int v80; // [rsp+B0h] [rbp-2B8h] BYREF
  int v81; // [rsp+B4h] [rbp-2B4h]
  _DWORD v82[2]; // [rsp+B8h] [rbp-2B0h] BYREF
  _DWORD v83[2]; // [rsp+C0h] [rbp-2A8h] BYREF
  _DWORD v84[2]; // [rsp+C8h] [rbp-2A0h] BYREF
  unsigned __int64 v85; // [rsp+D0h] [rbp-298h] BYREF
  int v86; // [rsp+D8h] [rbp-290h] BYREF
  __int128 v87; // [rsp+DCh] [rbp-28Ch]
  __int128 v88; // [rsp+F0h] [rbp-278h] BYREF
  _QWORD v89[34]; // [rsp+100h] [rbp-268h] BYREF
  _QWORD v90[34]; // [rsp+210h] [rbp-158h] BYREF
  int v91; // [rsp+360h] [rbp-8h]

  v3 = a2;
  v69 = 0LL;
  KeGetCurrentIrql();
  if ( KeGetCurrentIrql() > 2u )
    return (unsigned int)-1073741811;
  if ( a2 > LOWORD(KeActiveProcessors[0]) )
    return (unsigned int)-1073741811;
  if ( *(_BYTE *)(a3 + 18) >= 3u )
    return (unsigned int)-1073741811;
  v6 = *(_QWORD *)(a3 + 24);
  if ( !*(_WORD *)v6 )
    return (unsigned int)-1073741811;
  v7 = *(_WORD *)(v6 + 2);
  if ( *(_WORD *)v6 > v7 || *(_DWORD *)(v6 + 4) || v7 < LOWORD(KeActiveProcessors[0]) )
    return (unsigned int)-1073741811;
  v8 = 0;
  if ( a2 )
  {
    v9 = (_WORD *)a1 + 6;
    while ( !(*v9 | (unsigned __int16)(v9[1] | *(v9 - 1))) )
    {
      v10 = (unsigned __int16)*(v9 - 2);
      if ( (unsigned __int16)v10 >= LOWORD(KeActiveProcessors[0])
        || (qword_140D1EFF8[v10] & *(_QWORD *)(v9 - 6)) != *(_QWORD *)(v9 - 6) )
      {
        break;
      }
      ++v8;
      v9 += 8;
      if ( v8 >= a2 )
        goto LABEL_14;
    }
    return (unsigned int)-1073741811;
  }
LABEL_14:
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v13) = 4;
    else
      v13 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v13;
  }
  CurrentPrcb = (__int64)KeGetCurrentPrcb();
  v72 = 0;
  v15 = *(_QWORD *)(CurrentPrcb + 8);
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v72);
    while ( *(_QWORD *)(v15 + 64) );
  }
  v16 = *(_DWORD *)(v15 + 116);
  v17 = 1;
  if ( (v16 & 8) == 0 )
  {
    *(_DWORD *)(v15 + 116) = v16 | 8;
    if ( (*(_BYTE *)(a3 + 19) & 1) != 0 )
      goto LABEL_61;
    goto LABEL_34;
  }
  v18 = *(_QWORD *)(v15 + 1104);
  if ( !v18 )
    goto LABEL_59;
  if ( v18 != a3 )
  {
    if ( (*(_BYTE *)(a3 + 19) & 1) != 0 )
      goto LABEL_61;
    v19 = *(unsigned __int8 *)(v18 + 18);
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( v20 )
      {
        if ( v20 != 1 )
          goto LABEL_35;
        goto LABEL_34;
      }
LABEL_59:
      KeFirstGroupAffinityEx(a3 + 8, *(_WORD **)(v15 + 576));
      *(_BYTE *)(a3 + 19) |= 2u;
      *(_BYTE *)(a3 + 18) = 2;
LABEL_35:
      if ( (_WORD)v3 )
      {
        v21 = v3;
        while ( 1 )
        {
          v22 = *(_WORD **)(a3 + 24);
          v23 = *((unsigned __int16 *)a1 + 4);
          v24 = *a1;
          if ( *v22 > (unsigned __int16)v23 )
            goto LABEL_40;
          if ( v22[1] > (unsigned __int16)v23 )
            break;
LABEL_41:
          a1 += 2;
          if ( !--v21 )
            goto LABEL_42;
        }
        *v22 = v23 + 1;
LABEL_40:
        *(_QWORD *)&v22[4 * v23 + 4] |= v24;
        goto LABEL_41;
      }
LABEL_42:
      if ( v17 )
      {
        *(_BYTE *)(a3 + 19) |= 1u;
        *(_QWORD *)a3 = *(_QWORD *)(v15 + 1104);
        *(_QWORD *)(v15 + 1104) = a3;
      }
      KiSetSystemAffinityThread(CurrentPrcb, *(unsigned __int16 **)(a3 + 24), 0LL, 0x800u, (__int64)&v69);
      v25 = v69;
      v26 = 0;
      if ( v69 )
      {
        v69 = (_QWORD *)*v69;
        do
        {
          KiDeferredReadySingleThread(CurrentPrcb, (unsigned __int64)(v25 - 27), (__int64)&v69);
          v25 = v69;
          ++v26;
          if ( v69 )
            v69 = (_QWORD *)*v69;
          if ( (v26 & 0xF) == 0 )
            KiFlushSoftwareInterruptBatch((unsigned __int8 *)(CurrentPrcb + 12760));
        }
        while ( v25 );
      }
      KiFlushSoftwareInterruptBatch((unsigned __int8 *)(CurrentPrcb + 12760));
      if ( CurrentIrql >= 2u )
      {
        if ( *(_QWORD *)(CurrentPrcb + 16) && !*(_BYTE *)(CurrentPrcb + 13242) )
        {
          if ( *(_BYTE *)(CurrentPrcb + 32) )
          {
            *(_BYTE *)(CurrentPrcb + 6) = 1;
          }
          else
          {
            memset(&v89[1], 0, 0x100uLL);
            v87 = 0LL;
            if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x40) == 0 || HalpInterruptNoShorthand )
            {
              LODWORD(v89[0]) = 2097153;
              memset((char *)v89 + 4, 0, 0x104uLL);
              KeAddProcessorAffinityEx((unsigned __int16 *)v89, KeGetPcr()->Prcb.Number);
              v66[0] = 0;
              v76 = 0LL;
              v88 = 0LL;
              v75 = 0LL;
              memset(&v90[1], 0, 0x100uLL);
              v71 = 0;
              v70 = 0LL;
              if ( qword_140C62548 )
              {
                qword_140C62548(v89, 47LL);
              }
              else
              {
                LODWORD(v90[0]) = 2097153;
                memset((char *)v90 + 4, 0, 0x104uLL);
                KiAndAffinityEx((unsigned __int16 *)&HalpInterruptPhysicalTargets, (unsigned __int16 *)v89, v90, 0x20u);
                v54 = v91;
                if ( HalpInterruptClusterModeEnabled )
                {
                  v55 = (unsigned int *)HalpInterruptClusterData;
                  ProcNumber = 0;
                  while ( (unsigned __int64)v55 < HalpInterruptClusterDataEnd )
                  {
                    if ( (unsigned int)KeAndGroupAffinityEx(v89, (__int64)(v55 + 2), (char *)&v88) )
                    {
                      v56 = v88;
                      v57 = 0;
                      LODWORD(v70) = 6;
                      v58 = 0;
                      *((_QWORD *)&v70 + 1) = *v55;
                      ProcNumber.Group = WORD4(v88);
                      for ( ProcNumber.Number = 0; v56; ProcNumber.Number = v58 )
                      {
                        if ( (v56 & 1) != 0 )
                        {
                          v66[0] = KeGetProcessorIndexFromNumber(&ProcNumber);
                          v57 |= *(_DWORD *)(HalpInterruptTargets + 24LL * v66[0] + 12);
                          HIDWORD(v70) = v57;
                        }
                        ++v58;
                        v56 >>= 1;
                      }
                      v78[0] = -1;
                      v79[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
                      v79[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
                      v78[1] = 1;
                      v59 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
                      _disable();
                      v60 = v59(*(_QWORD *)(HalpInterruptController + 16), v79, &v70, 47LL, v78);
                      if ( (v54 & 0x200) != 0 )
                        _enable();
                      if ( v60 < 0 )
                        return 0;
                    }
                    v55 += 6;
                  }
                }
                else if ( !HalpInterruptPhysicalModeOnly )
                {
                  *((_QWORD *)&v75 + 1) = v89[1];
                  *(_QWORD *)&v75 = v89;
                  LODWORD(v70) = 5;
                  DWORD2(v70) = 0;
                  while ( !(unsigned int)KeEnumerateNextProcessor(v66, (unsigned __int16 **)&v75) )
                  {
                    if ( *(_DWORD *)(HalpInterruptTargets + 24LL * v66[0]) == 5 )
                      DWORD2(v70) |= *(_DWORD *)(HalpInterruptTargets + 24LL * v66[0] + 8);
                  }
                  if ( DWORD2(v70) )
                  {
                    v80 = -1;
                    v81 = 1;
                    v82[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
                    v82[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
                    v61 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, _QWORD, int *))(HalpInterruptController
                                                                                                + 120);
                    _disable();
                    v62 = v61(*(_QWORD *)(HalpInterruptController + 16), v82, &v70, (unsigned int)(v81 + 46), &v80);
                    if ( (v54 & 0x200) != 0 )
                      _enable();
                    if ( v62 < 0 )
                      return 0;
                  }
                }
                *((_QWORD *)&v75 + 1) = v90[1];
                *(_QWORD *)&v75 = v90;
                v66[0] = 0;
                LOWORD(v76) = 0;
                do
                {
                  if ( (unsigned int)KeEnumerateNextProcessor(v66, (unsigned __int16 **)&v75) )
                    break;
                  LODWORD(v70) = 4;
                  v83[0] = -1;
                  v83[1] = 1;
                  DWORD2(v70) = *(_DWORD *)(HalpInterruptTargets + 24LL * v66[0] + 8);
                  v84[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
                  v84[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
                  v63 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController
                                                                                                  + 120);
                  _disable();
                  v64 = v63(*(_QWORD *)(HalpInterruptController + 16), v84, &v70, 47LL, v83);
                  if ( (v54 & 0x200) != 0 )
                    _enable();
                }
                while ( v64 >= 0 );
              }
            }
            else
            {
              v86 = 3;
              ProcNumber = (_PROCESSOR_NUMBER)-1;
              v68 = 1;
              v66[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
              v66[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
              v53 = *(void (__fastcall **)(_QWORD, _DWORD *, int *, __int64, _PROCESSOR_NUMBER *))(HalpInterruptController
                                                                                                 + 120);
              _disable();
              v53(*(_QWORD *)(HalpInterruptController + 16), v66, &v86, 47LL, &ProcNumber);
              if ( (v91 & 0x200) != 0 )
                _enable();
            }
          }
        }
      }
      else
      {
        v27 = *(_QWORD *)(CurrentPrcb + 8);
        if ( *(_QWORD *)(CurrentPrcb + 16) )
        {
          if ( (*(unsigned __int8 *)(v27 + 792) | *(unsigned __int8 *)(v27 + 870)) != 0x3F )
          {
            v28 = KeGetCurrentPrcb();
            v74 = 0LL;
            v77 = 0LL;
            KiAbProcessThreadLocks(v27, 1, 1, 1, (__int64)&v74, (__int64)&v77, (__int64)&v28->AbSelfIoBoostsList);
            KiAbPropagateBoosts(&v77, (__int64)&v28->AbSelfIoBoostsList, (__int64)&v74);
            KiReadyDeferredReadyList((__int64)v28, &v74);
          }
          v73 = 0;
          v85 = CurrentPrcb & 0xFFFFFFFFFFFFFFFEuLL;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(CurrentPrcb + 48), 0LL) )
          {
            do
              KeYieldProcessorEx(&v73);
            while ( *(_QWORD *)(CurrentPrcb + 48) );
          }
          v34 = *(_QWORD *)(CurrentPrcb + 16);
          *(_QWORD *)(CurrentPrcb + 16) = 0LL;
          _disable();
          *(_BYTE *)(CurrentPrcb + 32) = 1;
          v35 = __rdtsc();
          v36 = v35 - *(_QWORD *)(CurrentPrcb + 33152);
          *(_QWORD *)(v27 + 72) += v36;
          v37 = *(unsigned int *)(v27 + 80);
          v38 = v36 * *(unsigned int *)(CurrentPrcb + 33208);
          *(_QWORD *)(CurrentPrcb + 33152) = v35;
          v39 = (v38 >> 16) + v37;
          if ( v39 > 0xFFFFFFFF )
            LODWORD(v39) = -1;
          v45 = (*(_BYTE *)(v27 + 2) & 0xBE) == 0;
          *(_DWORD *)(v27 + 80) = v39;
          if ( !v45 )
            KiEndThreadAccountingPeriodEx(CurrentPrcb, v27, v36, 1u);
          v40 = KeGetCurrentPrcb();
          v41 = (signed __int32 *)v40->SchedulerAssist;
          if ( v41 )
          {
            _m_prefetchw(v41);
            v42 = *v41;
            do
            {
              v43 = v42;
              v42 = _InterlockedCompareExchange(v41, v42 & 0xFFDFFFFF, v42);
            }
            while ( v43 != v42 );
            if ( (v42 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick(v40);
          }
          _enable();
          *(_QWORD *)(CurrentPrcb + 8) = v34;
          if ( *(_BYTE *)(v34 + 388) == 1 )
            *(_DWORD *)(v34 + 132) = *(_DWORD *)(v34 + 132) - *(_DWORD *)(v34 + 436) + MEMORY[0xFFFFF78000000320];
          *(_BYTE *)(v34 + 388) = 2;
          *(_BYTE *)(v27 + 390) = CurrentIrql;
          *(_BYTE *)(v27 + 643) = 32;
          KiQueueReadyThread(CurrentPrcb, (__int64 *)&v85, v27);
          LOBYTE(v44) = CurrentIrql;
          v45 = (unsigned __int8)KiSwapContext(v27, v34, v44) == 0;
        }
        else
        {
          v45 = (*(_DWORD *)(v27 + 116) & 0x40) == 0;
        }
        if ( !v45 )
        {
          if ( (_DWORD)KiIrqlFlags )
          {
            v46 = KeGetCurrentIrql();
            if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v46 - 2) <= 0xDu )
            {
              v47 = KeGetCurrentPrcb();
              v48 = v47->SchedulerAssist;
              v45 = (v48[5] & 0xFFFF0003) == 0;
              v48[5] &= 0xFFFF0003;
              if ( v45 )
                KiRemoveSystemWorkPriorityKick(v47);
            }
          }
          __writecr8(1uLL);
          *(_DWORD *)(v27 + 116) &= ~0x40u;
          KiDeliverApc(0, 0LL, 0LL);
        }
        if ( (_DWORD)KiIrqlFlags )
        {
          v49 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v49 - 2) <= 0xDu )
          {
            v50 = KeGetCurrentPrcb();
            v51 = v50->SchedulerAssist;
            v52 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v45 = (v52 & v51[5]) == 0;
            v51[5] &= v52;
            if ( v45 )
              KiRemoveSystemWorkPriorityKick(v50);
          }
        }
        __writecr8(CurrentIrql);
      }
      return 0;
    }
LABEL_34:
    *(_BYTE *)(a3 + 18) = 0;
    goto LABEL_35;
  }
  if ( *(_BYTE *)(a3 + 18) != 1 )
  {
    v17 = 0;
    goto LABEL_35;
  }
LABEL_61:
  *(_QWORD *)(v15 + 64) = 0LL;
  v29 = -1073741811;
  if ( (_DWORD)KiIrqlFlags )
  {
    v30 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v30 <= 0xFu && CurrentIrql <= 0xFu && v30 >= 2u )
    {
      v31 = KeGetCurrentPrcb();
      v32 = v31->SchedulerAssist;
      v33 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v45 = (v33 & v32[5]) == 0;
      v32[5] &= v33;
      if ( v45 )
        KiRemoveSystemWorkPriorityKick(v31);
    }
  }
  __writecr8(CurrentIrql);
  return v29;
}
