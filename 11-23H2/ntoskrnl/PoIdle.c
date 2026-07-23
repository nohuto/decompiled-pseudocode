/*
 * XREFs of PoIdle @ 0x1402C4DF0
 * Callers:
 *     KiIdleLoop @ 0x140423D50 (KiIdleLoop.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140251670 (KxAcquireSpinLock.c)
 *     KeCheckProcessorAffinityEx @ 0x140257420 (KeCheckProcessorAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x140257460 (KeAddProcessorAffinityEx.c)
 *     PpmIdlePrepare @ 0x1402C25C0 (PpmIdlePrepare.c)
 *     PpmIdleExecuteTransition @ 0x1402C55B0 (PpmIdleExecuteTransition.c)
 *     PpmEventIdleStateChange @ 0x14034EB08 (PpmEventIdleStateChange.c)
 *     MmGetNextNode @ 0x14034EE60 (MmGetNextNode.c)
 *     PpmPerfArbitratorApplyProcessorState @ 0x14034F330 (PpmPerfArbitratorApplyProcessorState.c)
 *     HalRequestIpi @ 0x14035C330 (HalRequestIpi.c)
 *     KeIdleSpecCtrl @ 0x1403727B0 (KeIdleSpecCtrl.c)
 *     PpmResetProcessorIdleAccounting @ 0x14039FDE4 (PpmResetProcessorIdleAccounting.c)
 *     PpmIdleSelectStates @ 0x1403B7650 (PpmIdleSelectStates.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     HalProcessorIdle @ 0x14041AA10 (HalProcessorIdle.c)
 *     KeExecuteVerw @ 0x140435A80 (KeExecuteVerw.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KeUpdatePendingQosRequest @ 0x14046187C (KeUpdatePendingQosRequest.c)
 *     PpmSetPlatformIdleDurationHint @ 0x140586110 (PpmSetPlatformIdleDurationHint.c)
 */

__int64 __fastcall PoIdle(ULONG_PTR BugCheckParameter4)
{
  unsigned __int16 v1; // bx
  __int64 *v3; // rdx
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // r12
  unsigned __int16 v7; // ax
  __int64 v8; // rdx
  unsigned __int16 v9; // bx
  unsigned __int16 v10; // di
  __int64 v11; // rcx
  __int64 v12; // r10
  unsigned __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // r9
  unsigned __int64 *v16; // rax
  unsigned int v17; // ecx
  __int64 v18; // rax
  unsigned __int8 v19; // r13
  char v20; // r15
  bool v21; // r14
  bool v22; // zf
  __int64 v23; // rdi
  __int16 v24; // r14
  volatile signed __int32 *SchedulerAssist; // rcx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rax
  int v28; // eax
  unsigned int v29; // eax
  int v30; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *v32; // r8
  signed __int32 v33; // eax
  signed __int32 v34; // ett
  unsigned int v35; // edi
  unsigned __int16 v36; // ax
  __int64 v37; // rdx
  unsigned __int16 v38; // bx
  unsigned __int16 v39; // di
  __int64 v40; // rcx
  int v41; // ecx
  int v42; // edx
  unsigned __int16 v43; // dx
  __int64 v44; // r13
  char v45; // si
  unsigned __int16 v46; // cx
  int v47; // r12d
  struct _KPRCB *v48; // rdi
  unsigned __int16 *v49; // r10
  int *v50; // rsi
  unsigned int v51; // r15d
  unsigned int v52; // r9d
  __int64 v53; // rcx
  _KSCHEDULER_SUBNODE *v54; // rcx
  unsigned __int64 DeepIdleSet; // rdx
  unsigned __int64 Mask; // r8
  int NextNode; // eax
  char v58; // [rsp+50h] [rbp-198h] BYREF
  char v59; // [rsp+51h] [rbp-197h] BYREF
  char v60; // [rsp+52h] [rbp-196h]
  unsigned int v61; // [rsp+54h] [rbp-194h] BYREF
  unsigned int v62; // [rsp+58h] [rbp-190h] BYREF
  int v63; // [rsp+5Ch] [rbp-18Ch] BYREF
  __int64 v64; // [rsp+60h] [rbp-188h] BYREF
  __int64 v65; // [rsp+68h] [rbp-180h] BYREF
  unsigned __int64 v66; // [rsp+70h] [rbp-178h] BYREF
  __int64 v67[3]; // [rsp+78h] [rbp-170h] BYREF
  _DWORD v68[68]; // [rsp+90h] [rbp-158h] BYREF
  int v69; // [rsp+1E0h] [rbp-8h]

  v1 = 0;
  v59 = 0;
  v64 = 0LL;
  v65 = 0LL;
  v67[0] = 0LL;
  v58 = 0;
  v63 = 0;
  v62 = 0;
  memset(&v68[2], 0, 0x100uLL);
  v3 = PpmCurrentProfile;
  result = dword_140C3D96C;
  if ( BYTE5(PpmCurrentProfile[55 * dword_140C3D96C + 23]) )
    return result;
  v5 = *(_QWORD *)(BugCheckParameter4 + 33600);
  v6 = *(_QWORD *)(BugCheckParameter4 + 33608);
  v66 = 0LL;
  if ( !v5 )
  {
    v61 = 0;
    v7 = KeIdleSpecCtrl(BugCheckParameter4, 1LL, &v61, 0LL);
    v9 = v61;
    v10 = v7;
    if ( (_WORD)v61 )
    {
      v8 = 0LL;
      __writemsr(0x48u, 0LL);
    }
    v11 = HIWORD(v61);
    if ( HIWORD(v61) )
      KeExecuteVerw(v11, v8);
    HalProcessorIdle(v11, v8);
    if ( v9 )
      __writemsr(0x48u, v9);
    else
      _mm_lfence();
    return KeIdleSpecCtrl(BugCheckParameter4, 0LL, &v61, v10);
  }
  *(_DWORD *)(v5 + 1092) = 0;
  v12 = *(_QWORD *)(BugCheckParameter4 + 33600);
  if ( *(_BYTE *)(v12 + 5) )
  {
    v13 = *(_QWORD *)(BugCheckParameter4 + 33616);
    *(_QWORD *)(BugCheckParameter4 + 33616) = 0LL;
    v14 = *(unsigned int *)(v12 + 28);
    *(_QWORD *)(BugCheckParameter4 + 33624) += v13;
    v15 = *(_QWORD *)(BugCheckParameter4 + 33608) + 1008 * v14;
    *(_QWORD *)(v15 + 40) += v13;
    if ( *(_DWORD *)(v12 + 76) == 3 )
    {
      if ( *(int *)(v12 + 72) >= 0 )
      {
        ++*(_DWORD *)(v15 + 56);
        v16 = (unsigned __int64 *)&PpmIdleIntervalLimits;
        v17 = 0;
        while ( v13 >= *v16 )
        {
          if ( v13 < v16[3] )
          {
            if ( ++v17 >= 0x1A )
            {
              ++*(_DWORD *)(v15 + 60);
              goto LABEL_27;
            }
            break;
          }
          v16 += 6;
          v17 += 2;
          if ( v17 >= 0x1A )
          {
            ++*(_DWORD *)(v15 + 60);
            goto LABEL_27;
          }
        }
        v18 = 32LL * v17;
        *(_QWORD *)(v18 + v15 + 216) += v13;
        ++*(_DWORD *)(v18 + v15 + 240);
        if ( v13 < *(_QWORD *)(v18 + v15 + 224) )
          *(_QWORD *)(v18 + v15 + 224) = v13;
        if ( v13 > *(_QWORD *)(v18 + v15 + 232) )
          *(_QWORD *)(v18 + v15 + 232) = v13;
LABEL_27:
        if ( v13 < *(_QWORD *)(v15 + 64) )
          *(_QWORD *)(v15 + 64) = v13;
        if ( v13 > *(_QWORD *)(v15 + 72) )
          *(_QWORD *)(v15 + 72) = v13;
      }
      else
      {
        ++*(_DWORD *)(v15 + 52);
      }
    }
    else
    {
      ++*(_DWORD *)(v15 + 48);
    }
  }
  v19 = 0;
  *(_DWORD *)(v12 + 72) = 0;
  v20 = 0;
  *(_DWORD *)(v12 + 76) = 3;
  v21 = 0;
  *(_BYTE *)(v12 + 5) = 0;
  v22 = PpmPerfQosEnabled == 0;
  v23 = 0LL;
  *(_BYTE *)(v5 + 5) = 1;
  v60 = 0;
  if ( !v22 && PpmPerfQosManageIdleProcessors && *(_DWORD *)(BugCheckParameter4 + 34112) != 5 )
  {
    v23 = *(_QWORD *)(BugCheckParameter4 + 33976);
    if ( v23 && *(_BYTE *)(v23 + 125) )
    {
      v24 = v69;
      v20 = 1;
      _disable();
      SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
      if ( SchedulerAssist )
        _InterlockedOr(SchedulerAssist, 0x200000u);
      v21 = (v24 & 0x200) != 0;
      KxAcquireSpinLock((PKSPIN_LOCK)(v23 + 128));
    }
    if ( (*(_BYTE *)(BugCheckParameter4 + 34120) & 0x20) == 0 )
    {
      v3 = (__int64 *)__rdtsc();
      v26 = (unsigned __int64)v3 - *(_QWORD *)(BugCheckParameter4 + 34096);
      v27 = *(_QWORD *)(BugCheckParameter4 + 34104);
      if ( v26 < v27 && !*(_BYTE *)(BugCheckParameter4 + 34061) )
      {
        v28 = *(_DWORD *)(BugCheckParameter4 + 236);
        v19 = 1;
        v60 = 1;
        if ( (v28 & 0x300) == 0 )
        {
          v29 = v28 & 0xFFFFFCFF | 0x100;
LABEL_48:
          *(_DWORD *)(BugCheckParameter4 + 236) = v29;
          KeUpdatePendingQosRequest(BugCheckParameter4);
          goto LABEL_49;
        }
        goto LABEL_49;
      }
      *(_QWORD *)(BugCheckParameter4 + 34096) = v3;
      *(_BYTE *)(BugCheckParameter4 + 34061) = v26 >= 2 * v27;
    }
    *(_DWORD *)(BugCheckParameter4 + 34112) = 5;
    LOBYTE(v3) = 1;
    PpmPerfArbitratorApplyProcessorState(BugCheckParameter4, v3, 0LL);
    *(_BYTE *)(BugCheckParameter4 + 236) = 5;
  }
  v30 = *(_DWORD *)(BugCheckParameter4 + 236);
  if ( (v30 & 0x300) != 0 )
  {
    v29 = v30 & 0xFFFFFCFF;
    goto LABEL_48;
  }
LABEL_49:
  if ( v20 )
  {
    KxReleaseSpinLock((volatile signed __int64 *)(v23 + 128));
    if ( v21 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v32 = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( v32 )
      {
        _m_prefetchw(v32);
        v33 = *v32;
        do
        {
          v34 = v33;
          v33 = _InterlockedCompareExchange(v32, v33 & 0xFFDFFFFF, v33);
        }
        while ( v34 != v33 );
        if ( (v33 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      _enable();
    }
  }
  v68[0] = 2097153;
  memset(&v68[1], 0, 0x104uLL);
  *(_WORD *)(v5 + 56) = 0;
  if ( *(_BYTE *)v5 )
  {
    if ( PpmIdleVetoBias && *(_BYTE *)(v5 + 16) )
      return ((__int64 (*)(void))HalProcessorIdle)();
    PpmIdleSelectStates(
      BugCheckParameter4,
      v19,
      (unsigned int)&v64,
      (unsigned int)&v65,
      (__int64)&v59,
      (__int64)&v62,
      (__int64)&v63,
      (__int64)v67,
      (__int64)&v58);
    v35 = v62;
  }
  else
  {
    result = PpmIdlePrepare(BugCheckParameter4, v19, (bool *)&v59, &v64, &v65, &v66, (unsigned __int16 *)v68);
    v35 = result;
    v62 = result;
    if ( (_DWORD)result == -2 )
    {
      v61 = 0;
      v36 = KeIdleSpecCtrl(BugCheckParameter4, 1LL, &v61, 0LL);
      v38 = v61;
      v39 = v36;
      if ( (_WORD)v61 )
      {
        v37 = 0LL;
        __writemsr(0x48u, 0LL);
      }
      v40 = HIWORD(v61);
      if ( HIWORD(v61) )
        KeExecuteVerw(v40, v37);
      HalProcessorIdle(v40, v37);
      if ( v38 )
        __writemsr(0x48u, v38);
      else
        _mm_lfence();
      return KeIdleSpecCtrl(BugCheckParameter4, 0LL, &v61, v39);
    }
    if ( (_DWORD)result == -1 )
    {
      ++*(_DWORD *)(v6 + 12);
      return result;
    }
    v41 = *(_DWORD *)(v5 + 760);
    v63 = v41;
    if ( v41 != -1 )
    {
      **(_DWORD **)(v5 + 1104) = v41;
      *(_DWORD *)(v5 + 1092) = 1;
    }
    v58 = *(_BYTE *)(344LL * (unsigned int)result + v5 + 1450) == 0;
  }
  v42 = *(_DWORD *)(v5 + 24);
  if ( v35 != v42 )
  {
    *(_DWORD *)(v5 + 32) = v42;
    *(_DWORD *)(v5 + 24) = v35;
    PpmEventIdleStateChange(v35);
  }
  v22 = (*(_DWORD *)(v6 + 4))++ == -1;
  if ( v22 )
    PpmResetProcessorIdleAccounting(v6, v64);
  v43 = v68[0];
  v44 = *(_QWORD *)(BugCheckParameter4 + 33600);
  v45 = *(_BYTE *)(344LL * v35 + v5 + 1449);
  v46 = 0;
  if ( LOWORD(v68[0]) )
  {
    while ( !*(_QWORD *)&v68[2 * v46 + 2] )
    {
      if ( ++v46 >= LOWORD(v68[0]) )
        goto LABEL_88;
    }
    *(_WORD *)(v44 + 56) |= 0x400u;
    if ( KiSerializeTimerExpiration && v66 )
      PpmSetPlatformIdleDurationHint();
    v43 = v68[0];
  }
LABEL_88:
  v47 = KiClockTimerOwner;
  if ( !(_BYTE)KiDynamicTickDisableReason
    && !PpmIpiLastClockOwnerDisable
    && !*(_BYTE *)(BugCheckParameter4 + 33)
    && *(_BYTE *)(KiProcessorBlock[(unsigned int)KiClockTimerOwner] + 33)
    && !v45 )
  {
    v48 = KeGetCurrentPrcb();
    v61 = 0;
    v49 = (unsigned __int16 *)KeNodeBlock[v48->SchedulerSubNode->Affinity.Reserved[0]];
    v50 = &KiProcessorIndexToNumberMappingTable[v48->Number];
    v51 = *v49;
    while ( 1 )
    {
      v52 = *((_DWORD *)v49 + 4);
      while ( v52 )
      {
        _BitScanForward((unsigned int *)&v53, v52);
        v52 &= ~(1 << v53);
        v54 = *(_KSCHEDULER_SUBNODE **)&v49[4 * v53 + 12];
        DeepIdleSet = v54->DeepIdleSet;
        Mask = v54->Affinity.Mask;
        if ( v54 == v48->SchedulerSubNode )
        {
          DeepIdleSet &= ~(1LL << v48->GroupIndex);
          _bittestandreset64((__int64 *)&Mask, *v50 & 0x3F);
        }
        if ( DeepIdleSet != Mask )
          goto LABEL_104;
      }
      NextNode = MmGetNextNode(v51, &v61);
      if ( NextNode == -1 )
        break;
      v49 = (unsigned __int16 *)KeNodeBlock[NextNode];
    }
    if ( !(unsigned int)KeCheckProcessorAffinityEx((unsigned __int16 *)v68, v47) )
    {
      KeAddProcessorAffinityEx((unsigned __int16 *)v68, v47);
      *(_WORD *)(v44 + 56) |= 0x800u;
    }
LABEL_104:
    v43 = v68[0];
  }
  if ( v43 )
  {
    while ( !*(_QWORD *)&v68[2 * v1 + 2] )
    {
      if ( ++v1 >= v43 )
        return PpmIdleExecuteTransition(BugCheckParameter4, v59, v64, v65, v58, v60);
    }
    HalRequestIpi(0LL, v68);
  }
  return PpmIdleExecuteTransition(BugCheckParameter4, v59, v64, v65, v58, v60);
}
