/*
 * XREFs of KeSetCpuSetsProcess @ 0x14039C834
 * Callers:
 *     KeAssignCpuPartitionsToProcess @ 0x140574ABC (KeAssignCpuPartitionsToProcess.c)
 *     PspAllocateProcess @ 0x1406B442C (PspAllocateProcess.c)
 *     NtSetInformationProcess @ 0x140774A50 (NtSetInformationProcess.c)
 * Callees:
 *     KiQueueReadyThread @ 0x1402344F0 (KiQueueReadyThread.c)
 *     KiDeferredReadySingleThread @ 0x14023A2B0 (KiDeferredReadySingleThread.c)
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     KiEndThreadAccountingPeriodEx @ 0x140248430 (KiEndThreadAccountingPeriodEx.c)
 *     KiReadyDeferredReadyList @ 0x140249C70 (KiReadyDeferredReadyList.c)
 *     KiAndAffinityEx @ 0x140252320 (KiAndAffinityEx.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140252640 (KiFlushSoftwareInterruptBatch.c)
 *     KeAndGroupAffinityEx @ 0x140254360 (KeAndGroupAffinityEx.c)
 *     KeGetProcessorIndexFromNumber @ 0x140255090 (KeGetProcessorIndexFromNumber.c)
 *     KeEnumerateNextProcessor @ 0x140257190 (KeEnumerateNextProcessor.c)
 *     KeAddProcessorAffinityEx @ 0x140257280 (KeAddProcessorAffinityEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028A810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiAbPropagateBoosts @ 0x1402BBEA0 (KiAbPropagateBoosts.c)
 *     KiAbProcessThreadLocks @ 0x1402BC320 (KiAbProcessThreadLocks.c)
 *     KiDeliverApc @ 0x14030F6B0 (KiDeliverApc.c)
 *     KiGetProcessCpuSetMaskPointer @ 0x14039D144 (KiGetProcessCpuSetMaskPointer.c)
 *     KiValidateCpuSetMasks @ 0x14039D37C (KiValidateCpuSetMasks.c)
 *     KiWriteCpuSetMasks @ 0x14039DDAC (KiWriteCpuSetMasks.c)
 *     KiUpdateThreadCpuSetAffinitiesProcess @ 0x14039E6C0 (KiUpdateThreadCpuSetAffinitiesProcess.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     KiSwapContext @ 0x140427C20 (KiSwapContext.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     memset @ 0x140435400 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeSetCpuSetsProcess(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int v7; // r10d
  __int64 ProcessCpuSetMaskPointer; // r15
  unsigned __int8 CurrentIrql; // r14
  _DWORD *SchedulerAssist; // r9
  int v11; // edx
  __int64 CurrentPrcb; // rsi
  char v13; // di
  _QWORD *v14; // rbx
  ULONG_PTR v15; // rbp
  struct _KPRCB *v16; // rdi
  __int64 v17; // rbx
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // r8
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  struct _KPRCB *v23; // rcx
  signed __int32 *v24; // r8
  signed __int32 v25; // eax
  signed __int32 v26; // ett
  __int64 v27; // r8
  bool v28; // zf
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // rcx
  _DWORD *v31; // rdx
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r9
  _DWORD *v34; // r8
  int v35; // eax
  void (__fastcall *v36)(_QWORD, _DWORD *, int *, __int64, _PROCESSOR_NUMBER *); // rax
  __int16 v37; // r12
  unsigned int *v38; // rbx
  unsigned __int64 v39; // rdi
  int v40; // ebp
  unsigned __int8 v41; // si
  __int64 (__fastcall *v42)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  int v43; // eax
  __int64 (__fastcall *v44)(_QWORD, _DWORD *, __int128 *, _QWORD, int *); // rax
  int v45; // eax
  __int64 (__fastcall *v46)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  int v47; // eax
  _DWORD v48[2]; // [rsp+40h] [rbp-338h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+48h] [rbp-330h] BYREF
  int v50; // [rsp+4Ch] [rbp-32Ch]
  _QWORD *v51; // [rsp+50h] [rbp-328h] BYREF
  __int128 v52; // [rsp+58h] [rbp-320h] BYREF
  int v53; // [rsp+68h] [rbp-310h]
  int v54; // [rsp+70h] [rbp-308h] BYREF
  __int64 v55; // [rsp+78h] [rbp-300h] BYREF
  __int128 v56; // [rsp+80h] [rbp-2F8h] BYREF
  __int64 v57; // [rsp+90h] [rbp-2E8h]
  __int64 *v58; // [rsp+98h] [rbp-2E0h] BYREF
  _DWORD v59[2]; // [rsp+A0h] [rbp-2D8h] BYREF
  _DWORD v60[2]; // [rsp+A8h] [rbp-2D0h] BYREF
  int v61; // [rsp+B0h] [rbp-2C8h] BYREF
  int v62; // [rsp+B4h] [rbp-2C4h]
  _DWORD v63[2]; // [rsp+B8h] [rbp-2C0h] BYREF
  _DWORD v64[2]; // [rsp+C0h] [rbp-2B8h] BYREF
  _DWORD v65[2]; // [rsp+C8h] [rbp-2B0h] BYREF
  unsigned __int64 v66; // [rsp+D0h] [rbp-2A8h] BYREF
  int v67; // [rsp+D8h] [rbp-2A0h] BYREF
  __int128 v68; // [rsp+DCh] [rbp-29Ch]
  __int128 v69; // [rsp+F0h] [rbp-288h] BYREF
  _QWORD v70[34]; // [rsp+100h] [rbp-278h] BYREF
  _QWORD v71[34]; // [rsp+210h] [rbp-168h] BYREF
  int v72; // [rsp+370h] [rbp-8h]

  ProcNumber = 0;
  v51 = 0LL;
  result = KiValidateCpuSetMasks(a3);
  if ( (int)result >= 0 )
  {
    ProcessCpuSetMaskPointer = KiGetProcessCpuSetMaskPointer(a1, v7, &ProcNumber);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        v11 = 4;
      else
        v11 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v11;
    }
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    KiWriteCpuSetMasks(ProcessCpuSetMaskPointer, *(unsigned int *)&ProcNumber, a3, a2);
    KiUpdateThreadCpuSetAffinitiesProcess(a1, &v51);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    CurrentPrcb = (__int64)KeGetCurrentPrcb();
    v13 = 0;
    v14 = v51;
    if ( v51 )
    {
      v51 = (_QWORD *)*v51;
      do
      {
        KiDeferredReadySingleThread(CurrentPrcb, (unsigned __int64)(v14 - 27), (__int64)&v51);
        v14 = v51;
        ++v13;
        if ( v51 )
          v51 = (_QWORD *)*v51;
        if ( (v13 & 0xF) == 0 )
          KiFlushSoftwareInterruptBatch((unsigned __int8 *)(CurrentPrcb + 12760));
      }
      while ( v14 );
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
          memset(&v70[1], 0, 0x100uLL);
          v68 = 0LL;
          if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x40) == 0 || HalpInterruptNoShorthand )
          {
            LODWORD(v70[0]) = 2097153;
            memset((char *)v70 + 4, 0, 0x104uLL);
            KeAddProcessorAffinityEx((unsigned __int16 *)v70, KeGetPcr()->Prcb.Number);
            v48[0] = 0;
            v57 = 0LL;
            v69 = 0LL;
            v56 = 0LL;
            memset(&v71[1], 0, 0x100uLL);
            v53 = 0;
            v52 = 0LL;
            if ( qword_140C62628 )
            {
              qword_140C62628(v70, 47LL);
            }
            else
            {
              LODWORD(v71[0]) = 2097153;
              memset((char *)v71 + 4, 0, 0x104uLL);
              KiAndAffinityEx((unsigned __int16 *)&HalpInterruptPhysicalTargets, (unsigned __int16 *)v70, v71, 0x20u);
              v37 = v72;
              if ( HalpInterruptClusterModeEnabled )
              {
                v38 = (unsigned int *)HalpInterruptClusterData;
                ProcNumber = 0;
                while ( (unsigned __int64)v38 < HalpInterruptClusterDataEnd )
                {
                  if ( (unsigned int)KeAndGroupAffinityEx(v70, (__int64)(v38 + 2), (char *)&v69) )
                  {
                    v39 = v69;
                    v40 = 0;
                    LODWORD(v52) = 6;
                    v41 = 0;
                    *((_QWORD *)&v52 + 1) = *v38;
                    ProcNumber.Group = WORD4(v69);
                    for ( ProcNumber.Number = 0; v39; ProcNumber.Number = v41 )
                    {
                      if ( (v39 & 1) != 0 )
                      {
                        v48[0] = KeGetProcessorIndexFromNumber(&ProcNumber);
                        v40 |= *(_DWORD *)(HalpInterruptTargets + 24LL * v48[0] + 12);
                        HIDWORD(v52) = v40;
                      }
                      ++v41;
                      v39 >>= 1;
                    }
                    v59[0] = -1;
                    v60[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
                    v60[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
                    v59[1] = 1;
                    v42 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
                    _disable();
                    v43 = v42(*(_QWORD *)(HalpInterruptController + 16), v60, &v52, 47LL, v59);
                    if ( (v37 & 0x200) != 0 )
                      _enable();
                    if ( v43 < 0 )
                      return 0LL;
                  }
                  v38 += 6;
                }
              }
              else if ( !HalpInterruptPhysicalModeOnly )
              {
                *((_QWORD *)&v56 + 1) = v70[1];
                *(_QWORD *)&v56 = v70;
                LODWORD(v52) = 5;
                DWORD2(v52) = 0;
                while ( !(unsigned int)KeEnumerateNextProcessor(v48, (unsigned __int16 **)&v56) )
                {
                  if ( *(_DWORD *)(HalpInterruptTargets + 24LL * v48[0]) == 5 )
                    DWORD2(v52) |= *(_DWORD *)(HalpInterruptTargets + 24LL * v48[0] + 8);
                }
                if ( DWORD2(v52) )
                {
                  v61 = -1;
                  v62 = 1;
                  v63[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
                  v63[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
                  v44 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, _QWORD, int *))(HalpInterruptController
                                                                                              + 120);
                  _disable();
                  v45 = v44(*(_QWORD *)(HalpInterruptController + 16), v63, &v52, (unsigned int)(v62 + 46), &v61);
                  if ( (v37 & 0x200) != 0 )
                    _enable();
                  if ( v45 < 0 )
                    return 0LL;
                }
              }
              *((_QWORD *)&v56 + 1) = v71[1];
              *(_QWORD *)&v56 = v71;
              v48[0] = 0;
              LOWORD(v57) = 0;
              do
              {
                if ( (unsigned int)KeEnumerateNextProcessor(v48, (unsigned __int16 **)&v56) )
                  break;
                LODWORD(v52) = 4;
                v64[0] = -1;
                v64[1] = 1;
                DWORD2(v52) = *(_DWORD *)(HalpInterruptTargets + 24LL * v48[0] + 8);
                v65[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
                v65[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
                v46 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController
                                                                                                + 120);
                _disable();
                v47 = v46(*(_QWORD *)(HalpInterruptController + 16), v65, &v52, 47LL, v64);
                if ( (v37 & 0x200) != 0 )
                  _enable();
              }
              while ( v47 >= 0 );
            }
          }
          else
          {
            v67 = 3;
            ProcNumber = (_PROCESSOR_NUMBER)-1;
            v50 = 1;
            v48[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
            v48[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
            v36 = *(void (__fastcall **)(_QWORD, _DWORD *, int *, __int64, _PROCESSOR_NUMBER *))(HalpInterruptController
                                                                                               + 120);
            _disable();
            v36(*(_QWORD *)(HalpInterruptController + 16), v48, &v67, 47LL, &ProcNumber);
            if ( (v72 & 0x200) != 0 )
              _enable();
          }
        }
      }
    }
    else
    {
      v15 = *(_QWORD *)(CurrentPrcb + 8);
      if ( *(_QWORD *)(CurrentPrcb + 16) )
      {
        if ( (*(unsigned __int8 *)(v15 + 792) | *(unsigned __int8 *)(v15 + 870)) != 0x3F )
        {
          v16 = KeGetCurrentPrcb();
          v55 = 0LL;
          v58 = 0LL;
          KiAbProcessThreadLocks(v15, 1, 1, 1, (__int64)&v55, (__int64)&v58, (__int64)&v16->AbSelfIoBoostsList);
          KiAbPropagateBoosts(&v58, (__int64)&v16->AbSelfIoBoostsList, (__int64)&v55);
          KiReadyDeferredReadyList((__int64)v16, &v55);
        }
        v54 = 0;
        v66 = CurrentPrcb & 0xFFFFFFFFFFFFFFFEuLL;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(CurrentPrcb + 48), 0LL) )
        {
          do
            KeYieldProcessorEx(&v54);
          while ( *(_QWORD *)(CurrentPrcb + 48) );
        }
        v17 = *(_QWORD *)(CurrentPrcb + 16);
        *(_QWORD *)(CurrentPrcb + 16) = 0LL;
        _disable();
        *(_BYTE *)(CurrentPrcb + 32) = 1;
        v18 = __rdtsc();
        v19 = v18 - *(_QWORD *)(CurrentPrcb + 33152);
        *(_QWORD *)(v15 + 72) += v19;
        v20 = *(unsigned int *)(v15 + 80);
        v21 = v19 * *(unsigned int *)(CurrentPrcb + 33208);
        *(_QWORD *)(CurrentPrcb + 33152) = v18;
        v22 = (v21 >> 16) + v20;
        if ( v22 > 0xFFFFFFFF )
          LODWORD(v22) = -1;
        v28 = (*(_BYTE *)(v15 + 2) & 0xBE) == 0;
        *(_DWORD *)(v15 + 80) = v22;
        if ( !v28 )
          KiEndThreadAccountingPeriodEx(CurrentPrcb, v15, v19, 1u);
        v23 = KeGetCurrentPrcb();
        v24 = (signed __int32 *)v23->SchedulerAssist;
        if ( v24 )
        {
          _m_prefetchw(v24);
          v25 = *v24;
          do
          {
            v26 = v25;
            v25 = _InterlockedCompareExchange(v24, v25 & 0xFFDFFFFF, v25);
          }
          while ( v26 != v25 );
          if ( (v25 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(v23);
        }
        _enable();
        *(_QWORD *)(CurrentPrcb + 8) = v17;
        if ( *(_BYTE *)(v17 + 388) == 1 )
          *(_DWORD *)(v17 + 132) = *(_DWORD *)(v17 + 132) - *(_DWORD *)(v17 + 436) + MEMORY[0xFFFFF78000000320];
        *(_BYTE *)(v17 + 388) = 2;
        *(_BYTE *)(v15 + 390) = CurrentIrql;
        *(_BYTE *)(v15 + 643) = 32;
        KiQueueReadyThread(CurrentPrcb, (__int64 *)&v66, v15);
        LOBYTE(v27) = CurrentIrql;
        v28 = (unsigned __int8)KiSwapContext(v15, v17, v27) == 0;
      }
      else
      {
        v28 = (*(_DWORD *)(v15 + 116) & 0x40) == 0;
      }
      if ( !v28 )
      {
        if ( (_DWORD)KiIrqlFlags )
        {
          v29 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v29 - 2) <= 0xDu )
          {
            v30 = KeGetCurrentPrcb();
            v31 = v30->SchedulerAssist;
            v28 = (v31[5] & 0xFFFF0003) == 0;
            v31[5] &= 0xFFFF0003;
            if ( v28 )
              KiRemoveSystemWorkPriorityKick(v30);
          }
        }
        __writecr8(1uLL);
        *(_DWORD *)(v15 + 116) &= ~0x40u;
        KiDeliverApc(0, 0LL, 0LL);
      }
      if ( (_DWORD)KiIrqlFlags )
      {
        v32 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v32 - 2) <= 0xDu )
        {
          v33 = KeGetCurrentPrcb();
          v34 = v33->SchedulerAssist;
          v35 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v28 = (v35 & v34[5]) == 0;
          v34[5] &= v35;
          if ( v28 )
            KiRemoveSystemWorkPriorityKick(v33);
        }
      }
      __writecr8(CurrentIrql);
    }
    return 0LL;
  }
  return result;
}
