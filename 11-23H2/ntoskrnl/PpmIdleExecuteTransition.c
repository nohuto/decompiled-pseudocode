/*
 * XREFs of PpmIdleExecuteTransition @ 0x1402C55B0
 * Callers:
 *     PoIdle @ 0x1402C4DF0 (PoIdle.c)
 * Callees:
 *     KeIsSubsetAffinityEx @ 0x1402031E0 (KeIsSubsetAffinityEx.c)
 *     EtwTraceKernelEvent @ 0x140211EDC (EtwTraceKernelEvent.c)
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140251670 (KxAcquireSpinLock.c)
 *     PpmTestAndLockProcessors @ 0x1402552E8 (PpmTestAndLockProcessors.c)
 *     PpmConvertTime @ 0x1402555D0 (PpmConvertTime.c)
 *     KeGetPrcb @ 0x1402573F0 (KeGetPrcb.c)
 *     KeAddProcessorAffinityEx @ 0x140257460 (KeAddProcessorAffinityEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x1402C0540 (KeRemoveProcessorAffinityEx.c)
 *     KePrepareNonClockOwnerForIdle @ 0x1402C1F6C (KePrepareNonClockOwnerForIdle.c)
 *     KiSetClockTimer @ 0x1402C2828 (KiSetClockTimer.c)
 *     HalpTimerGetInternalData @ 0x1402C4800 (HalpTimerGetInternalData.c)
 *     PpmExitCoordinatedIdle @ 0x1402C6F60 (PpmExitCoordinatedIdle.c)
 *     PpmUpdatePerformanceFeedback @ 0x1402C6FD0 (PpmUpdatePerformanceFeedback.c)
 *     KeResumeClockTimerFromIdle @ 0x1402C72F0 (KeResumeClockTimerFromIdle.c)
 *     KeAccumulateTicks @ 0x1402C7DA0 (KeAccumulateTicks.c)
 *     PpmGetExitSamplingCountdown @ 0x14032C684 (PpmGetExitSamplingCountdown.c)
 *     PpmIdleUpdateConcurrency @ 0x14033EBF0 (PpmIdleUpdateConcurrency.c)
 *     KiCancelClockTimer @ 0x140340F00 (KiCancelClockTimer.c)
 *     KeWakeProcessor @ 0x140341B10 (KeWakeProcessor.c)
 *     KeInterlockedClearProcessorAffinityEx @ 0x140341B70 (KeInterlockedClearProcessorAffinityEx.c)
 *     KePrepareClockTimerForIdle @ 0x1403475C4 (KePrepareClockTimerForIdle.c)
 *     KeInterlockedSetProcessorAffinityEx @ 0x140348E30 (KeInterlockedSetProcessorAffinityEx.c)
 *     HviIsXboxNanovisorPresent @ 0x140351668 (HviIsXboxNanovisorPresent.c)
 *     HalRequestIpi @ 0x14035C330 (HalRequestIpi.c)
 *     KdPowerTransitionEx @ 0x1403ADBD0 (KdPowerTransitionEx.c)
 *     HalpTimerScaleCounter @ 0x1403C4704 (HalpTimerScaleCounter.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     KiSetUserTbFlushPending @ 0x1404204F0 (KiSetUserTbFlushPending.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     HvlSetPlatformIdleState @ 0x1405475B8 (HvlSetPlatformIdleState.c)
 *     KdCallPowerHandlers @ 0x140567A04 (KdCallPowerHandlers.c)
 *     KeQueryWakeSource @ 0x14056CE58 (KeQueryWakeSource.c)
 *     PpmIdleCompleteExitLatencyTrace @ 0x140585278 (PpmIdleCompleteExitLatencyTrace.c)
 *     PpmIdleSetSynchronizationState @ 0x140585A1C (PpmIdleSetSynchronizationState.c)
 *     PpmPerfFeedbackCounterUpdate @ 0x14058D5B4 (PpmPerfFeedbackCounterUpdate.c)
 *     PpmEventEnterPlatformIdleState @ 0x14059A550 (PpmEventEnterPlatformIdleState.c)
 */

__int64 __fastcall PpmIdleExecuteTransition(
        ULONG_PTR BugCheckParameter4,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int8 a5,
        unsigned __int64 a6,
        __int64 a7,
        char a8,
        char a9)
{
  int v9; // r14d
  __int64 v10; // r10
  unsigned __int16 v11; // bp
  unsigned int v12; // esi
  __int64 v13; // r12
  __int64 v14; // r15
  char v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rdx
  _BYTE *v19; // r13
  unsigned __int16 *v20; // rbx
  int v21; // edi
  unsigned int v22; // ebx
  char v23; // cl
  __int64 v24; // rdx
  unsigned __int16 v25; // cx
  unsigned __int8 v26; // bl
  unsigned int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rcx
  unsigned __int64 v30; // r8
  __int64 v31; // rdx
  signed __int64 v32; // rax
  __int64 v33; // r9
  signed __int64 v34; // rdi
  int v35; // r11d
  int v36; // r8d
  unsigned __int64 *v37; // r10
  __int64 v38; // r11
  unsigned __int64 v39; // rdx
  int v40; // eax
  int v41; // eax
  int ExitSamplingCountdown; // eax
  __int64 v43; // r9
  unsigned __int64 v44; // rdx
  int v45; // ecx
  __int64 v46; // rsi
  signed __int64 v47; // rdi
  __int64 v48; // rbx
  __int64 v49; // rsi
  __int64 v50; // rdx
  __int64 v51; // rbx
  __int64 v52; // rdi
  unsigned __int8 v53; // bl
  struct _KPRCB *CurrentPrcb; // rbx
  int v55; // edi
  bool v56; // zf
  int v57; // eax
  __int64 v58; // rcx
  int *v59; // rcx
  __int64 v60; // rdi
  volatile signed __int32 *SchedulerAssist; // rcx
  bool v62; // bl
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // r15
  __int64 v65; // rdx
  struct _KPRCB *v66; // r8
  signed __int32 *v67; // rdx
  signed __int32 v68; // eax
  signed __int32 v69; // ett
  KSPIN_LOCK *v70; // rcx
  unsigned int v71; // edi
  unsigned __int64 v72; // r11
  unsigned __int64 v73; // rbx
  unsigned __int64 v74; // r9
  unsigned __int64 v75; // rcx
  __int64 v76; // rdx
  __int64 (__fastcall *v77)(__int64, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  unsigned int v78; // r14d
  __int64 v79; // rbx
  int v80; // edi
  __int64 v81; // rsi
  int v82; // ebx
  __int64 v83; // rdi
  __int64 v84; // rdx
  int v85; // edi
  __int64 v86; // rdx
  int v87; // ecx
  __int64 v88; // rsi
  __int64 v89; // rcx
  __int64 v90; // rdx
  __int64 v91; // r8
  volatile unsigned __int8 DeepSleep; // r15
  bool v93; // cf
  struct _KPRCB *v94; // rbx
  __int64 Number; // rdx
  unsigned __int64 v96; // rax
  unsigned __int64 v97; // rcx
  unsigned __int64 v98; // rax
  unsigned __int16 v99; // r8
  __int16 v100; // bx
  unsigned __int16 v101; // ax
  __int64 v102; // rdx
  signed __int16 v103; // tt
  unsigned int v104; // r13d
  __int64 v105; // rcx
  int v106; // edi
  unsigned __int16 v107; // ax
  __int16 v108; // ax
  char v109; // al
  __int64 v110; // rsi
  __int64 v111; // rdi
  __int64 v112; // r14
  unsigned __int64 v113; // rbx
  __int64 v114; // rax
  unsigned __int64 v115; // r10
  signed __int64 v116; // rax
  int v117; // r8d
  __int64 v118; // r9
  __int64 v119; // r11
  signed __int64 v120; // rdx
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 InternalData; // rax
  __int64 v124; // r14
  unsigned __int64 v125; // rbx
  __int64 v126; // rax
  unsigned __int64 v127; // r10
  signed __int64 v128; // rax
  int v129; // r8d
  __int64 v130; // r9
  __int64 v131; // r11
  signed __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // rax
  __int64 v135; // r8
  volatile signed __int32 *v136; // rcx
  bool v137; // si
  __int64 v138; // rax
  __int64 v139; // rbx
  struct _KPRCB *v140; // r8
  signed __int32 *v141; // rdx
  signed __int32 v142; // eax
  signed __int32 v143; // ett
  unsigned __int64 v144; // rax
  unsigned __int64 v145; // r8
  unsigned __int64 v146; // rax
  unsigned __int64 v147; // rcx
  KSPIN_LOCK *v148; // rcx
  unsigned __int8 v149; // al
  int v150; // eax
  int v151; // ecx
  _BYTE *v152; // rbx
  unsigned __int8 CurrentIrql; // bl
  _DWORD *v154; // r8
  __int64 v155; // r9
  unsigned __int8 v156; // al
  struct _KPRCB *v157; // r10
  _DWORD *v158; // r9
  int v159; // eax
  int v160; // r9d
  __int64 v161; // rdi
  unsigned int v162; // eax
  __int64 v163; // r14
  unsigned int v164; // r13d
  __int64 *v165; // rax
  _DWORD *v166; // rcx
  __int64 v167; // rcx
  __int64 *v168; // rbx
  __int64 v169; // r9
  _DWORD *v170; // rdi
  __int64 v171; // r9
  __int64 v172; // r10
  unsigned __int16 *v173; // rsi
  unsigned int v174; // r12d
  unsigned __int16 v175; // bx
  unsigned __int64 v176; // rdi
  int v177; // r13d
  int v178; // edx
  unsigned int v179; // ecx
  unsigned __int64 v180; // rdx
  int v181; // ebp
  __int64 Prcb; // r8
  __int64 v183; // r14
  unsigned __int32 v184; // eax
  unsigned __int32 v185; // r9d
  signed __int32 v186; // ecx
  int v187; // r13d
  __int64 v188; // r14
  int v189; // edi
  __int64 result; // rax
  signed __int32 v191[8]; // [rsp+0h] [rbp-438h] BYREF
  unsigned __int8 v192; // [rsp+50h] [rbp-3E8h]
  volatile unsigned __int8 v193; // [rsp+51h] [rbp-3E7h]
  char v194; // [rsp+52h] [rbp-3E6h]
  char v195; // [rsp+53h] [rbp-3E5h]
  int v196; // [rsp+54h] [rbp-3E4h]
  unsigned __int8 v197; // [rsp+58h] [rbp-3E0h]
  char v198; // [rsp+59h] [rbp-3DFh]
  char v199; // [rsp+5Ah] [rbp-3DEh]
  int v200; // [rsp+5Ch] [rbp-3DCh]
  unsigned int v201; // [rsp+60h] [rbp-3D8h]
  __int64 v202; // [rsp+68h] [rbp-3D0h]
  unsigned int BugCheckParameter2; // [rsp+70h] [rbp-3C8h]
  unsigned int BugCheckParameter2_4; // [rsp+74h] [rbp-3C4h]
  int v205; // [rsp+78h] [rbp-3C0h]
  int v206; // [rsp+7Ch] [rbp-3BCh] BYREF
  int v207; // [rsp+84h] [rbp-3B4h]
  PKSPIN_LOCK SpinLock; // [rsp+88h] [rbp-3B0h]
  int v209; // [rsp+90h] [rbp-3A8h] BYREF
  __int64 v210; // [rsp+98h] [rbp-3A0h] BYREF
  unsigned __int64 v211; // [rsp+A0h] [rbp-398h] BYREF
  __int64 v212; // [rsp+A8h] [rbp-390h] BYREF
  __int64 v213; // [rsp+B0h] [rbp-388h]
  __int64 v214; // [rsp+B8h] [rbp-380h]
  __int64 v215; // [rsp+C0h] [rbp-378h]
  _BYTE *v216; // [rsp+C8h] [rbp-370h]
  __int64 v217; // [rsp+D0h] [rbp-368h]
  ULONG_PTR v218; // [rsp+D8h] [rbp-360h]
  __int128 v219; // [rsp+E0h] [rbp-358h] BYREF
  _QWORD v220[2]; // [rsp+F0h] [rbp-348h] BYREF
  _QWORD v221[2]; // [rsp+100h] [rbp-338h] BYREF
  _OWORD v222[8]; // [rsp+110h] [rbp-328h] BYREF
  __int64 v223; // [rsp+190h] [rbp-2A8h]
  _QWORD v224[34]; // [rsp+1A0h] [rbp-298h] BYREF
  _DWORD v225[68]; // [rsp+2B0h] [rbp-188h] BYREF
  __int64 v226; // [rsp+3C0h] [rbp-78h] BYREF
  int v227; // [rsp+3C8h] [rbp-70h]
  int v228; // [rsp+3CCh] [rbp-6Ch]
  int v229; // [rsp+430h] [rbp-8h]

  v10 = *(_QWORD *)(BugCheckParameter4 + 33600);
  v223 = 0LL;
  v11 = 0;
  v193 = 0;
  v194 = 0;
  LOBYTE(v9) = 0;
  LOBYTE(v205) = 0;
  v12 = 0;
  v198 = 0;
  v13 = BugCheckParameter4;
  v195 = 0;
  v14 = 0LL;
  memset(v222, 0, sizeof(v222));
  v201 = a3;
  v15 = a8;
  BugCheckParameter2 = a2;
  v220[0] = a4;
  v16 = BugCheckParameter4 + 33672;
  v212 = 0LL;
  v218 = BugCheckParameter4;
  v210 = 0LL;
  LODWORD(SpinLock) = 0;
  v214 = *(_QWORD *)(v10 + 688);
  v17 = a2;
  v18 = v10 + 1088;
  v200 = 0;
  v19 = (_BYTE *)(v10 + 344 * v17);
  v207 = v9;
  LODWORD(v212) = 11;
  v206 = 130;
  v209 = -1;
  v202 = v10;
  v199 = 0;
  v217 = v10 + 1088;
  v196 = 0;
  if ( !a8 || *(_BYTE *)(v10 + 739) || v19[1453] )
  {
    v192 = 0;
    v197 = 3;
  }
  else
  {
    v192 = 1;
    v197 = 4;
  }
  BugCheckParameter2_4 = 3;
  if ( *(_BYTE *)v10 )
  {
    v20 = (unsigned __int16 *)(v10 + 344);
    goto LABEL_15;
  }
  if ( a8 )
  {
    LOBYTE(v18) = 1;
    PpmIdleSetSynchronizationState(BugCheckParameter4 + 33672, v18);
  }
  v20 = (unsigned __int16 *)(v10 + 344);
  *(_QWORD *)(v10 + 344) = 2097153LL;
  memset((void *)(v10 + 352), 0, 0x100uLL);
  v196 = PpmTestAndLockProcessors((__int64)v20, *(_DWORD *)(v202 + 748), *(unsigned int **)(v202 + 752));
  v21 = v196;
  if ( v196 >= 0 )
  {
    v10 = v202;
    v16 = v13 + 33672;
    v15 = a8;
LABEL_15:
    v24 = *v20;
    v25 = 0;
    if ( (_WORD)v24 )
    {
      while ( !*(_QWORD *)&v20[4 * v25 + 4] )
      {
        if ( ++v25 >= (unsigned __int16)v24 )
          goto LABEL_20;
      }
      *(_WORD *)(v10 + 56) |= 0x20u;
    }
LABEL_20:
    v26 = v192;
    v27 = BugCheckParameter2;
    *(_BYTE *)(v13 + 33656) = v192;
    *(_DWORD *)(v13 + 33660) = v27;
    if ( v15 )
    {
      LOBYTE(v24) = 2;
      *(_BYTE *)(v13 + 33657) = v19[1450] == 0;
      PpmIdleSetSynchronizationState(v16, v24);
    }
    v28 = *(_QWORD *)(v10 + 8);
    if ( v28 != -1 )
    {
      v29 = a7 + v28;
      v198 = 1;
      v210 = v29;
      if ( KiClockTimerPerCpuTickScheduling )
      {
        KiSetClockTimer(v13, v29, 0, 5, 0, *(_BYTE *)(v10 + 740) == 0);
      }
      else
      {
        *(_QWORD *)(v13 + 33648) = v29;
        _interlockedbittestandset64(
          (volatile signed __int32 *)(*(_QWORD *)(v13 + 192) + 72LL),
          *(unsigned __int8 *)(v13 + 209));
      }
    }
    LODWORD(v213) = 0x8000;
    v216 = v19 + 1449;
    v215 = 2LL;
    if ( v19[1449] || a9 && !KiClockTimerPerCpuTickScheduling )
    {
      v46 = v202;
      goto LABEL_100;
    }
    v30 = *(_QWORD *)(v13 + 200);
    v31 = *(_QWORD *)(v13 + 192);
    v194 = 1;
    _m_prefetchw((const void *)(v31 + 64));
    v32 = _InterlockedOr64((volatile signed __int64 *)(v31 + 64), v30);
    v33 = *(_QWORD *)(v13 + 33600);
    v34 = v32;
    v200 = 0;
    v35 = 0;
    if ( v26 )
    {
      v35 = 1;
      v200 = 1;
    }
    else if ( v201 == -1 )
    {
      v36 = 0;
      if ( *(_WORD *)(v33 + 344) )
      {
        v37 = (unsigned __int64 *)(v33 + 352);
        v38 = *(unsigned __int16 *)(v33 + 344);
        do
        {
          v39 = *v37++;
          v36 += (unsigned int)((0x101010101010101LL
                               * ((((v39 - ((v39 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                 + (((v39 - ((v39 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                 + ((((v39 - ((v39 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                   + (((v39 - ((v39 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
          --v38;
        }
        while ( v38 );
        v12 = (unsigned int)SpinLock;
        LOBYTE(v9) = v207;
        v14 = (unsigned int)SpinLock;
        v13 = v218;
      }
      if ( v36 != (_DWORD)KeNumberProcessors_0 - 1 )
        goto LABEL_44;
      v26 = v192;
      v35 = 2;
      v200 = 2;
    }
    v40 = *(_DWORD *)(v33 + 20);
    if ( v40 && (v41 = v40 - 1, (*(_DWORD *)(v33 + 20) = v41) != 0)
      || (ExitSamplingCountdown = PpmGetExitSamplingCountdown(), (*(_DWORD *)(v43 + 20) = ExitSamplingCountdown) == 0) )
    {
      v200 = v35;
      if ( v26 )
        goto LABEL_45;
    }
    else
    {
      LOBYTE(v11) = 1;
      *(_BYTE *)(v43 + 3) = 1;
      if ( v26 )
      {
        *(_QWORD *)(v43 + 64) = -1LL;
        goto LABEL_45;
      }
    }
LABEL_44:
    v12 = 1;
LABEL_45:
    v45 = ((__int64 (__fastcall *)(_QWORD))off_140C01B50[0])(v12);
    v196 = v45;
    if ( *(_DWORD *)(v13 + 13144) )
    {
      v21 = -2147483631;
      v196 = -2147483631;
      goto LABEL_89;
    }
    if ( v45 < 0 )
    {
      v21 = v45;
LABEL_89:
      if ( a8 )
        PpmIdleSetSynchronizationState(v13 + 33672, 0LL);
      v11 = 0;
      BugCheckParameter2_4 = 0;
      LOBYTE(v12) = 0;
      goto LABEL_92;
    }
    v46 = v202;
    if ( *(_BYTE *)v202 != 1 )
      goto LABEL_60;
    v47 = *(_QWORD *)(v13 + 200) | v34;
    v48 = *(unsigned __int8 *)(v13 + 208);
    memset(v224, 0, 0x108uLL);
    v49 = PpmPlatformStates;
    if ( !PpmPlatformStates )
    {
LABEL_59:
      v46 = v202;
LABEL_60:
      if ( (_BYTE)v11 )
        *(_WORD *)(v46 + 56) |= 0x200u;
      v53 = v192;
      if ( v192 )
      {
        v199 = 1;
        _InterlockedIncrement(&PpmNonInterruptibleCount);
        CurrentPrcb = KeGetCurrentPrcb();
        v55 = KiClockTimerOwner;
        if ( (CurrentPrcb->PendingTickFlags & 1) != 0 )
        {
          off_140C01C98[0]();
          CurrentPrcb->PendingTickFlags &= ~1u;
          CurrentPrcb->ClockTimerState.ClockActive = 0;
        }
        if ( CurrentPrcb->Number == v55 )
          ++dword_140C41B28;
        if ( CurrentPrcb->ClockOwner )
          CurrentPrcb->ClockOwner = 0;
        v53 = v192;
      }
      v56 = *(_BYTE *)(v46 + 740) == 0;
      v210 = -1LL;
      if ( !v56 )
      {
        LOBYTE(v57) = v205;
        if ( (_BYTE)v11 )
        {
          v57 = (unsigned __int8)v205;
          if ( !v53 )
            v57 = 1;
          v205 = v57;
        }
        if ( a5 && v201 != -1 && PpmDripsStateIndex != -1 && *(_BYTE *)v46 == 1 )
          LOBYTE(v9) = 1;
        KePrepareClockTimerForIdle(
          a5,
          (unsigned __int8)v9,
          *(_QWORD *)(v46 + 720),
          (unsigned __int8)v57,
          (__int64)&v212,
          (__int64)&v210);
        goto LABEL_86;
      }
      if ( (_DWORD)KiClockTimerOwner == *(_DWORD *)(v13 + 36) )
      {
LABEL_86:
        v11 = 0;
        if ( KiClockTimerPerCpuTickScheduling )
          *(_QWORD *)(v13 + 33648) = v210;
        goto LABEL_100;
      }
      if ( KiClockTimerPerCpuTickScheduling )
      {
        KePrepareNonClockOwnerForIdle(&v210);
        LODWORD(v212) = 10;
        goto LABEL_86;
      }
      v11 = 0;
LABEL_100:
      v60 = *(_QWORD *)(v13 + 34040);
      SpinLock = (PKSPIN_LOCK)v60;
      if ( v60 )
      {
        _disable();
        SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
        if ( SchedulerAssist )
          _InterlockedOr(SchedulerAssist, 0x200000u);
        v62 = (v229 & 0x200) != 0;
        KxAcquireSpinLock((PKSPIN_LOCK)v60);
        v63 = *(_QWORD *)(v60 + 16);
        v64 = a6;
        v65 = *(unsigned int *)(v60 + 12);
        if ( a6 > v63 )
        {
          *(_QWORD *)(v60 + 16) = a6;
          *(_QWORD *)(v60 + 24) += a6 - v63;
          *(_QWORD *)(v60 + 8 * v65 + 328) += a6 - v63;
        }
        *(_DWORD *)(v60 + 12) = v65 - 1;
        KxReleaseSpinLock((volatile signed __int64 *)v60);
        if ( v62 )
        {
          v66 = KeGetCurrentPrcb();
          v67 = (signed __int32 *)v66->SchedulerAssist;
          if ( v67 )
          {
            _m_prefetchw(v67);
            v68 = *v67;
            do
            {
              v69 = v68;
              v68 = _InterlockedCompareExchange(v67, v68 & 0xFFDFFFFF, v68);
            }
            while ( v69 != v68 );
            if ( (v68 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick(v66);
          }
          _enable();
        }
        v70 = *(KSPIN_LOCK **)(v13 + 34048);
        if ( v70 )
          PpmIdleUpdateConcurrency(v70);
      }
      else
      {
        v64 = a6;
      }
      v71 = BugCheckParameter2;
      *(_DWORD *)(v46 + 28) = BugCheckParameter2;
      v72 = __rdtsc();
      if ( (*(_QWORD *)(v13 + 35232) & 0x8000000000LL) != 0 )
        v73 = __readmsr(0xDB2u);
      else
        v73 = 0LL;
      v74 = v64 - *(_QWORD *)(v13 + 33720);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 + 33736), v74);
      if ( (*(_QWORD *)(v13 + 35232) & 0x8000000000LL) != 0 )
        *(_QWORD *)(v13 + 33808) += PpmConvertTime(v74, v72 - *(_QWORD *)(v13 + 33688), v73 - *(_QWORD *)(v13 + 33800));
      v75 = *(_QWORD *)(v13 + 33688);
      *(_QWORD *)(v13 + 33720) = v64;
      if ( v72 > v75 )
        *(_QWORD *)(v13 + 33696) += v72 - v75;
      *(_QWORD *)(v13 + 33688) = v72;
      if ( (*(_QWORD *)(v13 + 35232) & 0x8000000000LL) != 0 )
        *(_QWORD *)(v13 + 33800) = v73;
      LOBYTE(v74) = 1;
      PpmUpdatePerformanceFeedback(v13, 0, 0, v74, 0LL);
      if ( PopSnapEnergyCounters )
        PopSnapEnergyCounters(*(unsigned int *)(v13 + 36), 0LL, 0LL);
      *(_QWORD *)(v13 + 33640) = v64;
      _InterlockedIncrement64((volatile signed __int64 *)(v13 + 33632));
      v77 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(v46 + 616);
      v78 = v201;
      if ( v77 )
      {
        v79 = v46 + 1088;
        v80 = v77(v214, v71, v201, *(unsigned int *)(v46 + 1092), *(_QWORD *)(v46 + 1104));
        v196 = v80;
      }
      else
      {
        v80 = v196;
        v79 = v217;
      }
      if ( v201 != -1 && v201 == PpmDripsStateIndex && *(int *)(v13 + 33824) >= 2 )
        HvlSetPlatformIdleState(1LL);
      if ( v80 < 0 )
      {
        v104 = BugCheckParameter2;
      }
      else
      {
        v81 = *(_QWORD *)(v79 + 16);
        v82 = *(_DWORD *)(v79 + 4);
        v195 = 1;
        if ( v201 != -1 )
        {
          v83 = PpmPlatformStates + 448LL * v201;
          PpmEventEnterPlatformIdleState(v201);
          if ( !qword_140CF7D40 && v201 == dword_140CF7D80 )
            _InterlockedCompareExchange64(&qword_140CF7D40, MEMORY[0xFFFFF78000000008], 0LL);
          if ( a5 )
          {
            *(_BYTE *)(PpmPlatformStates + 56) = 1;
            ++*(_DWORD *)(*(_QWORD *)(PpmPlatformStates + 48) + 8LL);
          }
          if ( *(_BYTE *)(v83 + 120) )
          {
            LOBYTE(v84) = 1;
            KdPowerTransitionEx(2147483652LL, v84);
            KdCallPowerHandlers(4LL);
          }
        }
        v85 = v213;
        if ( v82 )
        {
          if ( ((unsigned int)v213 & DWORD2(PerfGlobalGroupMask)) != 0 )
          {
            v226 = v81;
            v227 = 4 * v82;
            v228 = 0;
            EtwTraceKernelEvent((int)&v226, 1, 0x40008000u, 4671, 1538);
          }
          do
          {
            v86 = PpmPlatformStates + 448LL * *(unsigned int *)(v81 + 4LL * (unsigned int)--v82);
            *(_QWORD *)(v86 + 424) = v64;
            v87 = *(_DWORD *)(v86 + 416);
            if ( !*(_DWORD *)(PpmPlatformStates + 4) )
              v87 ^= ((unsigned __int16)v87 ^ (unsigned __int16)KeGetPcr()->Prcb.Number) & 0xFFF;
            *(_DWORD *)(v86 + 416) = v87 & 0xF8FFFFFF | 0x4000000;
          }
          while ( v82 );
        }
        v88 = v202;
        if ( v78 != -1 )
          *(_WORD *)(v202 + 56) |= 0x10u;
        v89 = *(_QWORD *)(v88 + 712);
        v90 = *(unsigned __int8 *)(v88 + 741);
        v91 = *(unsigned __int16 *)(v88 + 56);
        v219 = 0LL;
        if ( (v85 & DWORD2(PerfGlobalGroupMask)) != 0 )
        {
          LODWORD(v219) = BugCheckParameter2;
          WORD2(v219) = v91;
          WORD3(v219) = (unsigned __int8)v90;
          *((_QWORD *)&v219 + 1) = v89;
          v221[0] = &v219;
          v221[1] = 16LL;
          EtwTraceKernelEvent((int)v221, 1, 0x40008000u, 4665, 1538);
        }
        if ( a8 )
          PpmIdleSetSynchronizationState(v13 + 33672, v197);
        DeepSleep = 0;
        if ( v194 )
        {
          v93 = v19[1448] < 2u;
          v193 = 0;
          if ( !v93 && (HvlEnlightenments & 4) == 0 && !(unsigned __int8)HviIsXboxNanovisorPresent(v89, v90, v91) )
          {
            v94 = KeGetCurrentPrcb();
            if ( v94->CpuVendor != 1 )
            {
              Number = v94->Number;
              v94->DeepSleep = 1;
              KeInterlockedSetProcessorAffinityEx(&KeSleepingProcessors, Number);
              if ( !v94->DeepSleep )
              {
                KeInterlockedClearProcessorAffinityEx(&KeSleepingProcessors, v94->Number);
                if ( KiFlushPcid )
                {
                  v96 = __readcr3();
                  __writecr3(v96);
                  if ( !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
                    KiSetUserTbFlushPending();
                }
                else
                {
                  v97 = __readcr4();
                  if ( (v97 & 0x20080) != 0 )
                  {
                    __writecr4(v97 ^ 0x80);
                    __writecr4(v97);
                  }
                  else
                  {
                    v98 = __readcr3();
                    __writecr3(v98);
                  }
                }
              }
              DeepSleep = v94->DeepSleep;
            }
            v193 = DeepSleep;
          }
        }
        v99 = 0;
        if ( (*(_BYTE *)(v13 + 1762) & 1) != 0 && *(_WORD *)(v13 + 1764) )
          *(_WORD *)(v13 + 1760) |= 1u;
        _m_prefetchw((const void *)(v13 + 1772));
        v100 = *(_WORD *)(v13 + 1772) & 4;
        if ( v100 )
        {
          if ( (*(_BYTE *)(v13 + 1760) & 1) != 0 )
          {
            v101 = *(_WORD *)(v13 + 1764);
            if ( (v101 & 3) == 0 )
            {
              v99 = 2;
              *(_WORD *)(v13 + 1764) = v101 | 2;
              __writemsr(0x48u, v101 | 2u);
            }
          }
          _InterlockedOr16((volatile signed __int16 *)(v13 + 1772), 2u);
          v102 = *(_QWORD *)(v13 + 11696);
          _m_prefetchw((const void *)(v102 + 1772));
          do
            v103 = *(_WORD *)(v102 + 1772);
          while ( v103 != _InterlockedCompareExchange16(
                            (volatile signed __int16 *)(v102 + 1772),
                            v103 & 0xFFE4 | 0xA,
                            v103) );
        }
        v56 = (*(_BYTE *)(v13 + 1762) & 0x40) == 0;
        v201 = v99;
        if ( !v56 )
          HIWORD(v201) = *(_WORD *)(v13 + 40618);
        v104 = BugCheckParameter2;
        v196 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, _DWORD, _QWORD))(v88 + 624))(
                 v214,
                 v220[0],
                 BugCheckParameter2,
                 v78,
                 v201,
                 *(_DWORD *)(v88 + 1092),
                 *(_QWORD *)(v88 + 1104));
        v106 = v196;
        if ( v100 )
        {
          v76 = *(_QWORD *)(v13 + 11696);
          _m_prefetchw((const void *)(v76 + 1772));
          do
          {
            v107 = *(_WORD *)(v76 + 1772);
            v105 = v107;
            LOWORD(v105) = v107 & 0xFFF5 | 2;
          }
          while ( v107 != _InterlockedCompareExchange16((volatile signed __int16 *)(v76 + 1772), v105, v107) );
          if ( (*(_WORD *)(v13 + 1772) & 0x10) == 0 )
          {
            v108 = *(_WORD *)(v13 + 1764);
            if ( (v108 & 2) != 0 )
            {
              v105 = 72LL;
              *(_WORD *)(v13 + 1764) = v108 & 0xFFFD;
              v76 = 0LL;
              __writemsr(0x48u, v108 & 0xFFFD);
            }
          }
        }
        *(_WORD *)(v13 + 1760) &= ~1u;
        if ( DeepSleep )
        {
          v109 = *(_BYTE *)(v13 + 33114);
          v193 = 0;
          if ( v109 )
            KeWakeProcessor(v105, v76);
        }
        if ( *(int *)(v88 + 72) < 0 )
        {
          if ( v106 >= 0 )
            v106 = *(_DWORD *)(v88 + 72);
          v196 = v106;
        }
        v211 = 0LL;
        if ( ((unsigned int)v213 & DWORD2(PerfGlobalGroupMask)) != 0 )
        {
          v211 = __PAIR64__(v106, v104);
          v220[0] = &v211;
          v220[1] = 8LL;
          EtwTraceKernelEvent((int)v220, 1, 0x40008000u, 4666, 1538);
        }
      }
      v110 = HalpPerformanceCounter;
      if ( *(_DWORD *)(HalpPerformanceCounter + 228) == 5 )
      {
        v111 = 10000000LL;
        if ( HalpTimerReferencePage )
        {
          InternalData = HalpTimerGetInternalData(HalpPerformanceCounter);
          v14 = (((unsigned __int64)(*(__int64 (__fastcall **)(__int64))(v110 + 112))(InternalData)
                * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1)) >> 64)
              + MEMORY[0xFFFFF780000003B8];
        }
        else
        {
          if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
          {
            v121 = HalpTimerGetInternalData(HalpPerformanceCounter);
            v122 = (*(__int64 (__fastcall **)(__int64))(v110 + 112))(v121);
            v112 = *(_QWORD *)(v110 + 208);
            v120 = v122;
          }
          else
          {
            do
            {
              v112 = *(_QWORD *)(v110 + 208);
              do
              {
                v113 = *(_QWORD *)(v110 + 200);
                v114 = HalpTimerGetInternalData(v110);
                v115 = (*(__int64 (__fastcall **)(__int64))(v110 + 112))(v114);
                _InterlockedOr(v191, 0);
                v116 = *(_QWORD *)(v110 + 200);
              }
              while ( v113 != v116 );
            }
            while ( v112 != *(_QWORD *)(v110 + 208) );
            v117 = *(_DWORD *)(v110 + 220);
            if ( ((v113 ^ v115) & (1LL << ((unsigned __int8)v117 - 1))) != 0 )
            {
              if ( v117 == 64 )
                v118 = -1LL;
              else
                v118 = (1LL << v117) - 1;
              v119 = 0LL;
              if ( v117 != 64 )
                v119 = 1LL << v117;
              v120 = v115 | v113 ^ v118 & v113;
              if ( v115 < (v118 & v113) )
                v120 += v119;
              _InterlockedCompareExchange64((volatile signed __int64 *)(v110 + 200), v120, v116);
            }
            else if ( v117 == 64 )
            {
              v120 = v115;
            }
            else
            {
              v120 = v115 | v113 & ~((1LL << v117) - 1);
            }
          }
          v14 = HalpTimerScaleCounter(v112 + v120, *(_QWORD *)(v110 + 192), 10000000LL);
        }
      }
      else
      {
        v111 = *(_QWORD *)(HalpPerformanceCounter + 192);
        if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
        {
          if ( (*(_DWORD *)(HalpPerformanceCounter + 224) & 0x10000) != 0 )
            v133 = *(_QWORD *)(HalpPerformanceCounter + 72)
                 + *(_DWORD *)(HalpPerformanceCounter + 80) * KeGetPcr()->Prcb.Number;
          else
            v133 = *(_QWORD *)(HalpPerformanceCounter + 72);
          v134 = (*(__int64 (__fastcall **)(__int64, __int64))(HalpPerformanceCounter + 112))(v133, v76);
          v124 = *(_QWORD *)(v110 + 208);
          v132 = v134;
        }
        else
        {
          do
          {
            v124 = *(_QWORD *)(v110 + 208);
            do
            {
              v125 = *(_QWORD *)(v110 + 200);
              v126 = HalpTimerGetInternalData(v110);
              v127 = (*(__int64 (__fastcall **)(__int64))(v110 + 112))(v126);
              _InterlockedOr(v191, 0);
              v128 = *(_QWORD *)(v110 + 200);
            }
            while ( v125 != v128 );
          }
          while ( v124 != *(_QWORD *)(v110 + 208) );
          v129 = *(_DWORD *)(v110 + 220);
          if ( ((v125 ^ v127) & (1LL << ((unsigned __int8)v129 - 1))) != 0 )
          {
            if ( v129 == 64 )
              v130 = -1LL;
            else
              v130 = (1LL << v129) - 1;
            v131 = 0LL;
            if ( v129 != 64 )
              v131 = 1LL << v129;
            v132 = v127 | v125 ^ v130 & v125;
            if ( v127 < (v130 & v125) )
              v132 += v131;
            _InterlockedCompareExchange64((volatile signed __int64 *)(v110 + 200), v132, v128);
          }
          else if ( v129 == 64 )
          {
            v132 = v127;
          }
          else
          {
            v132 = v127 | v125 & ~((1LL << v129) - 1);
          }
        }
        v14 = v124 + v132;
      }
      if ( v110 != HalpOriginalPerformanceCounter && HalpOriginalPerformanceCounter )
      {
        v135 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
        if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
          v135 = 10000000LL;
        v14 = HalpTimerScaleCounter(v14, v111, v135);
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v13 + 33632));
      *(_QWORD *)(v13 + 33640) = 0LL;
      if ( *(_BYTE *)(v13 + 33817) )
      {
        _disable();
        v136 = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
        if ( v136 )
          _InterlockedOr(v136, 0x200000u);
        v137 = (v229 & 0x200) != 0;
        KxAcquireSpinLock((PKSPIN_LOCK)(v13 + 33680));
        v138 = 2LL;
        v139 = v13 + 33704;
        do
        {
          if ( *(_QWORD *)v139 && *(_BYTE *)(*(_QWORD *)v139 + 34LL) )
          {
            PpmPerfFeedbackCounterUpdate();
            v138 = v215;
          }
          v139 += 8LL;
          v215 = --v138;
        }
        while ( v138 );
        KxReleaseSpinLock((volatile signed __int64 *)(v13 + 33680));
        if ( v137 )
        {
          v140 = KeGetCurrentPrcb();
          v141 = (signed __int32 *)v140->SchedulerAssist;
          if ( v141 )
          {
            _m_prefetchw(v141);
            v142 = *v141;
            do
            {
              v143 = v142;
              v142 = _InterlockedCompareExchange(v141, v142 & 0xFFDFFFFF, v142);
            }
            while ( v143 != v142 );
            if ( (v142 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick(v140);
          }
          _enable();
        }
      }
      v144 = __rdtsc();
      v44 = (unsigned __int64)HIDWORD(v144) << 32;
      v145 = v144;
      if ( _bittest64((const signed __int64 *)(v13 + 35232), 0x27u) )
      {
        v146 = __readmsr(0xDB2u);
        v44 = (unsigned __int64)HIDWORD(v146) << 32;
        v147 = v146;
      }
      else
      {
        v147 = 0LL;
      }
      *(_QWORD *)(v13 + 33720) = v14;
      *(_QWORD *)(v13 + 33688) = v145;
      if ( _bittest64((const signed __int64 *)(v13 + 35232), 0x27u) )
        *(_QWORD *)(v13 + 33800) = v147;
      v148 = SpinLock;
      if ( SpinLock )
      {
        PpmIdleUpdateConcurrency(SpinLock);
        v148 = *(KSPIN_LOCK **)(v13 + 34048);
        if ( v148 )
          PpmIdleUpdateConcurrency(v148);
      }
      *(_QWORD *)(v13 + 33616) = v14 - a6;
      if ( a8 )
      {
        v149 = PpmIdleSetSynchronizationState(v13 + 33672, 0LL);
        v21 = v196;
        if ( v196 >= 0 && v149 != 8 && v192 )
          KeBugCheckEx(0xA0u, 0x702uLL, v104, v149, v13);
        *(_BYTE *)(v13 + 33657) = 0;
      }
      else
      {
        v21 = v196;
      }
      LOBYTE(v12) = v195;
      if ( !v194 )
        goto LABEL_282;
      if ( v195 )
      {
        if ( v21 >= 0 )
        {
          v44 = PpmPlatformStates;
          if ( PpmPlatformStates )
          {
            if ( PpmDripsStateIndex != -1
              && *(_DWORD *)(448LL * (unsigned int)PpmDripsStateIndex + PpmPlatformStates + 416) )
            {
              v150 = KeQueryWakeSource(&v212, &v206, v222);
              v151 = v206;
              if ( v150 < 0 )
                v151 = 3;
              v206 = v151;
            }
          }
        }
      }
LABEL_92:
      v58 = *(_QWORD *)(v13 + 192);
      _interlockedbittestandreset64((volatile signed __int32 *)(v58 + 64), *(unsigned __int8 *)(v13 + 209));
      if ( v193 && *(_BYTE *)(v13 + 33114) )
        KeWakeProcessor(v58, v44);
      if ( (_BYTE)v205 && v21 >= 0 )
        v59 = &v209;
      else
        v59 = 0LL;
      KeResumeClockTimerFromIdle(v59);
      off_140C01B60();
      KeAccumulateTicks(v13, *(_DWORD *)(v13 + 13248), MEMORY[0xFFFFF78000000320], 0, 0, 3);
LABEL_282:
      LOBYTE(v148) = 1;
      v152 = v216;
      ((void (__fastcall *)(KSPIN_LOCK *))off_140C01DB8[0])(v148);
      if ( v198 )
      {
        if ( KiClockTimerPerCpuTickScheduling )
        {
          if ( *v152 )
          {
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(0xFuLL);
            if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
            {
              v154 = KeGetCurrentPrcb()->SchedulerAssist;
              if ( CurrentIrql == 15 )
                LODWORD(v155) = v213;
              else
                v155 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
              v154[5] |= v155;
            }
            KiCancelClockTimer(v13, 5LL);
            if ( (_DWORD)KiIrqlFlags )
            {
              v156 = KeGetCurrentIrql();
              if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v156 <= 0xFu && CurrentIrql <= 0xFu && v156 >= 2u )
              {
                v157 = KeGetCurrentPrcb();
                v158 = v157->SchedulerAssist;
                v159 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                v56 = (v159 & v158[5]) == 0;
                v158[5] &= v159;
                if ( v56 )
                  KiRemoveSystemWorkPriorityKick(v157);
              }
            }
            __writecr8(CurrentIrql);
          }
          else
          {
            KiCancelClockTimer(v13, 5LL);
          }
        }
        else
        {
          _interlockedbittestandreset64(
            (volatile signed __int32 *)(*(_QWORD *)(v13 + 192) + 72LL),
            *(unsigned __int8 *)(v13 + 209));
        }
        *(_QWORD *)(v13 + 33648) = -1LL;
      }
      v22 = BugCheckParameter2_4;
      v23 = BugCheckParameter2_4 != 3;
      goto LABEL_304;
    }
    LODWORD(v224[0]) = 2097153;
    memset((char *)v224 + 4, 0, 0x104uLL);
    if ( (_WORD)v48 )
    {
      if ( WORD1(v224[0]) <= (unsigned __int16)v48 )
      {
LABEL_54:
        v50 = v202;
        v51 = 0LL;
        v52 = *(_QWORD *)(v202 + 1048);
        if ( *(_DWORD *)(v52 + 4) )
        {
          while ( 1 )
          {
            if ( *(_DWORD *)(v52 + 4 * v51 + 8) == -1 )
            {
              if ( (unsigned int)KeIsSubsetAffinityEx(
                                   v49 + 448LL * *(unsigned int *)(*(_QWORD *)(v50 + 1080) + 24 * v51 + 4) + 128,
                                   (__int64)v224) )
              {
                v21 = -1073741802;
                v196 = -1073741802;
                goto LABEL_89;
              }
              v50 = v202;
            }
            v51 = (unsigned int)(v51 + 1);
            if ( (unsigned int)v51 >= *(_DWORD *)(v52 + 4) )
              goto LABEL_59;
          }
        }
        v46 = v202;
        goto LABEL_60;
      }
      LOWORD(v224[0]) = v48 + 1;
    }
    v224[v48 + 1] |= v47;
    goto LABEL_54;
  }
  if ( a8 )
    PpmIdleSetSynchronizationState(v13 + 33672, 0LL);
  v22 = 1;
  BugCheckParameter2_4 = 1;
  ((void (__fastcall *)(__int64))off_140C01DB8[0])(1LL);
  v23 = 1;
LABEL_304:
  v160 = v21;
  v161 = v217;
  v162 = PpmExitCoordinatedIdle(v13, v217, (unsigned __int8)v12, v160, v23, v14, a5, (__int64)v222, v206);
  v163 = v202;
  v164 = v162;
  LODWORD(SpinLock) = v162;
  if ( v22 == 3 )
  {
    v167 = *(_QWORD *)(v161 + 16);
    v168 = (__int64 *)(v161 + 16);
    v169 = *(unsigned int *)(v161 + 4);
    v170 = (_DWORD *)(v161 + 4);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64, __int64))(v202 + 656))(
      v214,
      BugCheckParameter2,
      v162,
      v169,
      v167);
    v165 = v168;
    v166 = v170;
    if ( v164 != -1 && v164 == PpmDripsStateIndex && *(int *)(v13 + 33824) >= 2 )
    {
      HvlSetPlatformIdleState(0LL);
      v165 = v168;
      v166 = v170;
    }
  }
  else
  {
    if ( !*(_BYTE *)v202 )
      (*(void (__fastcall **)(__int64, _QWORD))(v202 + 664))(v214, v22);
    v165 = (__int64 *)(v161 + 16);
    v166 = (_DWORD *)(v161 + 4);
  }
  LODWORD(v171) = *v166;
  v172 = *v165;
  if ( *v166 )
  {
    do
    {
      v171 = (unsigned int)(v171 - 1);
      *(_DWORD *)(448LL * *(unsigned int *)(v172 + 4 * v171) + PpmPlatformStates + 416) = 0;
    }
    while ( (_DWORD)v171 );
  }
  if ( v199 )
    _InterlockedDecrement(&PpmNonInterruptibleCount);
  v173 = (unsigned __int16 *)(v163 + 344);
  v225[0] = 2097153;
  memset(&v225[1], 0, 0x104uLL);
  v174 = KeGetPcr()->Prcb.Number;
  v175 = 0;
  v176 = *(_QWORD *)(v163 + 352);
  v177 = v196;
  while ( 1 )
  {
    v178 = v200;
    v207 = 0;
    v179 = v173 ? *v173 : v175 + 1;
    if ( !v176 )
      break;
LABEL_323:
    _BitScanForward64(&v180, v176);
    v176 &= ~(1LL << v180);
    v207 = v180;
    v181 = KiProcessorNumberToIndexMappingTable[64 * v175 + (unsigned __int8)v180];
    Prcb = KeGetPrcb(v181);
    v183 = *(_QWORD *)(Prcb + 33600);
    _m_prefetchw((const void *)(Prcb + 33672));
    v184 = *(_DWORD *)(Prcb + 33672);
    do
    {
      v185 = v184;
      v186 = v184 ^ (v184 ^ (v184 - 1)) & 0xFFFFFF;
      if ( (v186 & 0xFFFFFF) == 0 )
      {
        if ( HIBYTE(v184) == 5 )
        {
          v186 = v186 & 0xFFFFFF | 0x4000000;
        }
        else if ( HIBYTE(v184) == 7 )
        {
          v186 = v186 & 0xFFFFFF | 0x6000000;
        }
      }
      v184 = _InterlockedCompareExchange((volatile signed __int32 *)(Prcb + 33672), v186, v184);
    }
    while ( v184 != v185 );
    if ( HIBYTE(v186) == 6 )
      KeAddProcessorAffinityEx((unsigned __int16 *)v225, v181);
    KeInterlockedClearProcessorAffinityEx(v183 + 80, v174);
    KeRemoveProcessorAffinityEx(v173, v181);
    v11 = 0;
  }
  while ( ++v175 < v179 )
  {
    v176 = *(_QWORD *)&v173[4 * v175 + 4];
    if ( v176 )
      goto LABEL_323;
  }
  v196 = v177;
  v187 = (int)SpinLock;
  if ( LOWORD(v225[0]) )
  {
    while ( !*(_QWORD *)&v225[2 * v11 + 2] )
    {
      if ( ++v11 >= LOWORD(v225[0]) )
        goto LABEL_338;
    }
    HalRequestIpi(0LL, v225);
    v178 = v200;
  }
LABEL_338:
  v188 = v202;
  v189 = v196;
  if ( *(_BYTE *)(v202 + 3) )
    PpmIdleCompleteExitLatencyTrace(v218, v196, v192, v14, v209, v178, BugCheckParameter2, v187);
  result = BugCheckParameter2_4;
  *(_DWORD *)(v188 + 76) = BugCheckParameter2_4;
  *(_DWORD *)(v188 + 72) = v189;
  return result;
}
