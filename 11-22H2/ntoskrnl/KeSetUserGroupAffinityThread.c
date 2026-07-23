/*
 * XREFs of KeSetUserGroupAffinityThread @ 0x1403AA6BC
 * Callers:
 *     MiSelectBestZeroingProcessor @ 0x1402D06B0 (MiSelectBestZeroingProcessor.c)
 *     MiMoveBackgroundZeroThreads @ 0x140655020 (MiMoveBackgroundZeroThreads.c)
 * Callees:
 *     KeIsSubsetAffinityEx @ 0x1402031E0 (KeIsSubsetAffinityEx.c)
 *     KiSetAffinityThread @ 0x14020327C (KiSetAffinityThread.c)
 *     KiQueueReadyThread @ 0x1402344F0 (KiQueueReadyThread.c)
 *     KiDeferredReadySingleThread @ 0x14023A2B0 (KiDeferredReadySingleThread.c)
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     KiEndThreadAccountingPeriodEx @ 0x140248430 (KiEndThreadAccountingPeriodEx.c)
 *     KiReadyDeferredReadyList @ 0x140249C70 (KiReadyDeferredReadyList.c)
 *     KiAndAffinityEx @ 0x140252320 (KiAndAffinityEx.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140252640 (KiFlushSoftwareInterruptBatch.c)
 *     KeAndGroupAffinityEx @ 0x140254360 (KeAndGroupAffinityEx.c)
 *     KiCopyAffinityEx @ 0x1402544A0 (KiCopyAffinityEx.c)
 *     KeIsEmptyAffinityEx @ 0x140255050 (KeIsEmptyAffinityEx.c)
 *     KeGetProcessorIndexFromNumber @ 0x140255090 (KeGetProcessorIndexFromNumber.c)
 *     KeEnumerateNextProcessor @ 0x140257190 (KeEnumerateNextProcessor.c)
 *     KeAddProcessorAffinityEx @ 0x140257280 (KeAddProcessorAffinityEx.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14025ABF0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402A7AE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiAbPropagateBoosts @ 0x1402BBEA0 (KiAbPropagateBoosts.c)
 *     KiAbProcessThreadLocks @ 0x1402BC320 (KiAbProcessThreadLocks.c)
 *     KiDeliverApc @ 0x14030F6B0 (KiDeliverApc.c)
 *     KeVerifyGroupAffinity @ 0x140321194 (KeVerifyGroupAffinity.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     KiSwapContext @ 0x140427C20 (KiSwapContext.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     memset @ 0x140435400 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeSetUserGroupAffinityThread(__int64 a1, __int64 a2)
{
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rdi
  unsigned __int8 CurrentIrql; // r14
  _DWORD *SchedulerAssist; // r9
  __int64 v10; // rdx
  unsigned __int8 v11; // al
  struct _KPRCB *v12; // r9
  _DWORD *v13; // r8
  int v14; // eax
  __int64 CurrentPrcb; // rsi
  _QWORD *v16; // rbx
  char v17; // di
  ULONG_PTR v18; // rbp
  struct _KPRCB *v19; // rdi
  __int64 v20; // rbx
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // r10
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rax
  struct _KPRCB *v26; // rcx
  signed __int32 *v27; // r8
  signed __int32 v28; // eax
  signed __int32 v29; // ett
  __int64 v30; // r8
  bool v31; // zf
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // rcx
  _DWORD *v34; // rdx
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r9
  _DWORD *v37; // r8
  int v38; // eax
  void (__fastcall *v39)(_QWORD, _DWORD *, int *, __int64, _PROCESSOR_NUMBER *); // rax
  __int16 v40; // r15
  unsigned int *v41; // rbx
  unsigned __int64 v42; // rdi
  int v43; // ebp
  unsigned __int8 v44; // si
  __int64 (__fastcall *v45)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  int v46; // eax
  __int64 (__fastcall *v47)(_QWORD, _DWORD *, __int128 *, _QWORD, int *); // rax
  int v48; // eax
  __int64 (__fastcall *v49)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  int v50; // eax
  _DWORD v51[2]; // [rsp+40h] [rbp-438h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+48h] [rbp-430h] BYREF
  int v53; // [rsp+4Ch] [rbp-42Ch]
  _QWORD *v54; // [rsp+50h] [rbp-428h] BYREF
  __int128 v55; // [rsp+58h] [rbp-420h] BYREF
  int v56; // [rsp+68h] [rbp-410h]
  int v57; // [rsp+70h] [rbp-408h] BYREF
  __int64 v58; // [rsp+78h] [rbp-400h] BYREF
  __int128 v59; // [rsp+80h] [rbp-3F8h] BYREF
  __int64 v60; // [rsp+90h] [rbp-3E8h]
  __int64 *v61; // [rsp+98h] [rbp-3E0h] BYREF
  _DWORD v62[2]; // [rsp+A0h] [rbp-3D8h] BYREF
  _DWORD v63[2]; // [rsp+A8h] [rbp-3D0h] BYREF
  int v64; // [rsp+B0h] [rbp-3C8h] BYREF
  int v65; // [rsp+B4h] [rbp-3C4h]
  _DWORD v66[2]; // [rsp+B8h] [rbp-3C0h] BYREF
  _DWORD v67[2]; // [rsp+C0h] [rbp-3B8h] BYREF
  _DWORD v68[2]; // [rsp+C8h] [rbp-3B0h] BYREF
  unsigned __int64 v69; // [rsp+D0h] [rbp-3A8h] BYREF
  int v70; // [rsp+D8h] [rbp-3A0h] BYREF
  __int128 v71; // [rsp+DCh] [rbp-39Ch]
  __int128 v72; // [rsp+F0h] [rbp-388h] BYREF
  _DWORD v73[68]; // [rsp+100h] [rbp-378h] BYREF
  _QWORD v74[34]; // [rsp+210h] [rbp-268h] BYREF
  _QWORD v75[34]; // [rsp+320h] [rbp-158h] BYREF
  int v76; // [rsp+470h] [rbp-8h]

  memset(&v73[2], 0, 0x100uLL);
  if ( !KeVerifyGroupAffinity(a2, 1) )
    return 3221225485LL;
  v73[0] = 2097153;
  memset(&v73[1], 0, 0x104uLL);
  v5 = *(unsigned __int16 *)(a2 + 8);
  v6 = *(_QWORD *)a2;
  if ( !(_WORD)v5 )
    goto LABEL_6;
  if ( HIWORD(v73[0]) > (unsigned __int16)v5 )
  {
    LOWORD(v73[0]) = v5 + 1;
LABEL_6:
    *(_QWORD *)&v73[2 * v5 + 2] |= v6;
  }
  v7 = *(_QWORD *)(a1 + 544);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v10) = 4;
    else
      v10 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v10;
  }
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v7 + 64));
  if ( (unsigned int)KeIsSubsetAffinityEx((__int64)v73, v7 + 80) )
  {
    if ( (unsigned int)KeIsEmptyAffinityEx(v73) )
      KiCopyAffinityEx((__int64)v73, HIWORD(v73[0]), (unsigned __int16 *)(v7 + 80));
    v54 = 0LL;
    KiSetAffinityThread(a1, (__int64)&v54, v73);
    CurrentPrcb = (__int64)KeGetCurrentPrcb();
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v7 + 64));
    v16 = v54;
    v17 = 0;
    if ( v54 )
    {
      v54 = (_QWORD *)*v54;
      do
      {
        KiDeferredReadySingleThread(CurrentPrcb, (unsigned __int64)(v16 - 27), (__int64)&v54);
        v16 = v54;
        ++v17;
        if ( v54 )
          v54 = (_QWORD *)*v54;
        if ( (v17 & 0xF) == 0 )
          KiFlushSoftwareInterruptBatch((unsigned __int8 *)(CurrentPrcb + 12760));
      }
      while ( v16 );
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
          memset(&v74[1], 0, 0x100uLL);
          v71 = 0LL;
          if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x40) == 0 || HalpInterruptNoShorthand )
          {
            LODWORD(v74[0]) = 2097153;
            memset((char *)v74 + 4, 0, 0x104uLL);
            KeAddProcessorAffinityEx((unsigned __int16 *)v74, KeGetPcr()->Prcb.Number);
            v51[0] = 0;
            v60 = 0LL;
            v72 = 0LL;
            v59 = 0LL;
            memset(&v75[1], 0, 0x100uLL);
            v56 = 0;
            v55 = 0LL;
            if ( qword_140C62628 )
            {
              qword_140C62628(v74, 47LL);
            }
            else
            {
              LODWORD(v75[0]) = 2097153;
              memset((char *)v75 + 4, 0, 0x104uLL);
              KiAndAffinityEx((unsigned __int16 *)&HalpInterruptPhysicalTargets, (unsigned __int16 *)v74, v75, 0x20u);
              v40 = v76;
              if ( HalpInterruptClusterModeEnabled )
              {
                v41 = (unsigned int *)HalpInterruptClusterData;
                ProcNumber = 0;
                while ( (unsigned __int64)v41 < HalpInterruptClusterDataEnd )
                {
                  if ( (unsigned int)KeAndGroupAffinityEx(v74, (__int64)(v41 + 2), (char *)&v72) )
                  {
                    v42 = v72;
                    v43 = 0;
                    LODWORD(v55) = 6;
                    v44 = 0;
                    *((_QWORD *)&v55 + 1) = *v41;
                    ProcNumber.Group = WORD4(v72);
                    for ( ProcNumber.Number = 0; v42; ProcNumber.Number = v44 )
                    {
                      if ( (v42 & 1) != 0 )
                      {
                        v51[0] = KeGetProcessorIndexFromNumber(&ProcNumber);
                        v43 |= *(_DWORD *)(HalpInterruptTargets + 24LL * v51[0] + 12);
                        HIDWORD(v55) = v43;
                      }
                      ++v44;
                      v42 >>= 1;
                    }
                    v62[0] = -1;
                    v63[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
                    v63[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
                    v62[1] = 1;
                    v45 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
                    _disable();
                    v46 = v45(*(_QWORD *)(HalpInterruptController + 16), v63, &v55, 47LL, v62);
                    if ( (v40 & 0x200) != 0 )
                      _enable();
                    if ( v46 < 0 )
                      return 0LL;
                  }
                  v41 += 6;
                }
              }
              else if ( !HalpInterruptPhysicalModeOnly )
              {
                *((_QWORD *)&v59 + 1) = v74[1];
                *(_QWORD *)&v59 = v74;
                LODWORD(v55) = 5;
                DWORD2(v55) = 0;
                while ( !(unsigned int)KeEnumerateNextProcessor(v51, (unsigned __int16 **)&v59) )
                {
                  if ( *(_DWORD *)(HalpInterruptTargets + 24LL * v51[0]) == 5 )
                    DWORD2(v55) |= *(_DWORD *)(HalpInterruptTargets + 24LL * v51[0] + 8);
                }
                if ( DWORD2(v55) )
                {
                  v64 = -1;
                  v65 = 1;
                  v66[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
                  v66[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
                  v47 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, _QWORD, int *))(HalpInterruptController
                                                                                              + 120);
                  _disable();
                  v48 = v47(*(_QWORD *)(HalpInterruptController + 16), v66, &v55, (unsigned int)(v65 + 46), &v64);
                  if ( (v40 & 0x200) != 0 )
                    _enable();
                  if ( v48 < 0 )
                    return 0LL;
                }
              }
              *((_QWORD *)&v59 + 1) = v75[1];
              *(_QWORD *)&v59 = v75;
              v51[0] = 0;
              LOWORD(v60) = 0;
              do
              {
                if ( (unsigned int)KeEnumerateNextProcessor(v51, (unsigned __int16 **)&v59) )
                  break;
                LODWORD(v55) = 4;
                v67[0] = -1;
                v67[1] = 1;
                DWORD2(v55) = *(_DWORD *)(HalpInterruptTargets + 24LL * v51[0] + 8);
                v68[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
                v68[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
                v49 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController
                                                                                                + 120);
                _disable();
                v50 = v49(*(_QWORD *)(HalpInterruptController + 16), v68, &v55, 47LL, v67);
                if ( (v40 & 0x200) != 0 )
                  _enable();
              }
              while ( v50 >= 0 );
            }
          }
          else
          {
            v70 = 3;
            ProcNumber = (_PROCESSOR_NUMBER)-1;
            v53 = 1;
            v51[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
            v51[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
            v39 = *(void (__fastcall **)(_QWORD, _DWORD *, int *, __int64, _PROCESSOR_NUMBER *))(HalpInterruptController
                                                                                               + 120);
            _disable();
            v39(*(_QWORD *)(HalpInterruptController + 16), v51, &v70, 47LL, &ProcNumber);
            if ( (v76 & 0x200) != 0 )
              _enable();
          }
        }
      }
    }
    else
    {
      v18 = *(_QWORD *)(CurrentPrcb + 8);
      if ( *(_QWORD *)(CurrentPrcb + 16) )
      {
        if ( (*(unsigned __int8 *)(v18 + 792) | *(unsigned __int8 *)(v18 + 870)) != 0x3F )
        {
          v19 = KeGetCurrentPrcb();
          v58 = 0LL;
          v61 = 0LL;
          KiAbProcessThreadLocks(v18, 1, 1, 1, (__int64)&v58, (__int64)&v61, (__int64)&v19->AbSelfIoBoostsList);
          KiAbPropagateBoosts(&v61, (__int64)&v19->AbSelfIoBoostsList, (__int64)&v58);
          KiReadyDeferredReadyList((__int64)v19, &v58);
        }
        v57 = 0;
        v69 = CurrentPrcb & 0xFFFFFFFFFFFFFFFEuLL;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(CurrentPrcb + 48), 0LL) )
        {
          do
            KeYieldProcessorEx(&v57);
          while ( *(_QWORD *)(CurrentPrcb + 48) );
        }
        v20 = *(_QWORD *)(CurrentPrcb + 16);
        *(_QWORD *)(CurrentPrcb + 16) = 0LL;
        _disable();
        *(_BYTE *)(CurrentPrcb + 32) = 1;
        v21 = __rdtsc();
        v22 = v21 - *(_QWORD *)(CurrentPrcb + 33152);
        *(_QWORD *)(v18 + 72) += v22;
        v23 = *(unsigned int *)(v18 + 80);
        v24 = v22 * *(unsigned int *)(CurrentPrcb + 33208);
        *(_QWORD *)(CurrentPrcb + 33152) = v21;
        v25 = (v24 >> 16) + v23;
        if ( v25 > 0xFFFFFFFF )
          LODWORD(v25) = -1;
        v31 = (*(_BYTE *)(v18 + 2) & 0xBE) == 0;
        *(_DWORD *)(v18 + 80) = v25;
        if ( !v31 )
          KiEndThreadAccountingPeriodEx(CurrentPrcb, v18, v22, 1u);
        v26 = KeGetCurrentPrcb();
        v27 = (signed __int32 *)v26->SchedulerAssist;
        if ( v27 )
        {
          _m_prefetchw(v27);
          v28 = *v27;
          do
          {
            v29 = v28;
            v28 = _InterlockedCompareExchange(v27, v28 & 0xFFDFFFFF, v28);
          }
          while ( v29 != v28 );
          if ( (v28 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(v26);
        }
        _enable();
        *(_QWORD *)(CurrentPrcb + 8) = v20;
        if ( *(_BYTE *)(v20 + 388) == 1 )
          *(_DWORD *)(v20 + 132) = *(_DWORD *)(v20 + 132) - *(_DWORD *)(v20 + 436) + MEMORY[0xFFFFF78000000320];
        *(_BYTE *)(v20 + 388) = 2;
        *(_BYTE *)(v18 + 643) = 32;
        *(_BYTE *)(v18 + 390) = CurrentIrql;
        KiQueueReadyThread(CurrentPrcb, (__int64 *)&v69, v18);
        LOBYTE(v30) = CurrentIrql;
        v31 = (unsigned __int8)KiSwapContext(v18, v20, v30) == 0;
      }
      else
      {
        v31 = (*(_DWORD *)(v18 + 116) & 0x40) == 0;
      }
      if ( !v31 )
      {
        if ( (_DWORD)KiIrqlFlags )
        {
          v32 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v32 - 2) <= 0xDu )
          {
            v33 = KeGetCurrentPrcb();
            v34 = v33->SchedulerAssist;
            v31 = (v34[5] & 0xFFFF0003) == 0;
            v34[5] &= 0xFFFF0003;
            if ( v31 )
              KiRemoveSystemWorkPriorityKick(v33);
          }
        }
        __writecr8(1uLL);
        *(_DWORD *)(v18 + 116) &= ~0x40u;
        KiDeliverApc(0, 0LL, 0LL);
      }
      if ( (_DWORD)KiIrqlFlags )
      {
        v35 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v35 - 2) <= 0xDu )
        {
          v36 = KeGetCurrentPrcb();
          v37 = v36->SchedulerAssist;
          v38 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v31 = (v38 & v37[5]) == 0;
          v37[5] &= v38;
          if ( v31 )
            KiRemoveSystemWorkPriorityKick(v36);
        }
      }
      __writecr8(CurrentIrql);
    }
    return 0LL;
  }
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v7 + 64));
  if ( (_DWORD)KiIrqlFlags )
  {
    v11 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
    {
      v12 = KeGetCurrentPrcb();
      v13 = v12->SchedulerAssist;
      v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v31 = (v14 & v13[5]) == 0;
      v13[5] &= v14;
      if ( v31 )
        KiRemoveSystemWorkPriorityKick(v12);
    }
  }
  __writecr8(CurrentIrql);
  return 3221225473LL;
}
