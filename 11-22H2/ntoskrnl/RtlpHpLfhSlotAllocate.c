/*
 * XREFs of RtlpHpLfhSlotAllocate @ 0x1402ADC90
 * Callers:
 *     ExAllocateHeapPool @ 0x1402AD2B0 (ExAllocateHeapPool.c)
 *     RtlpHpLfhBucketAllocate @ 0x1403D3BF8 (RtlpHpLfhBucketAllocate.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402A7AE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     RtlpLfhBlockBitmapAllocate @ 0x1402AED30 (RtlpLfhBlockBitmapAllocate.c)
 *     ExfReleasePushLockShared @ 0x1402BD830 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F640 (KiCheckForKernelApcDelivery.c)
 *     RtlpHpAcquireLockShared @ 0x140315948 (RtlpHpAcquireLockShared.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x14031597C (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x140315AE0 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x1403167C0 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhSlotAddSubsegment @ 0x14031694C (RtlpHpLfhSlotAddSubsegment.c)
 *     RtlpHpAcquireLockExclusive @ 0x140316AE4 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x140316E10 (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x14033BA60 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x140349CE8 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x140351570 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     RtlHeapZero @ 0x1403D8230 (RtlHeapZero.c)
 *     RtlpLfhIncrementDataSlot @ 0x14041165C (RtlpLfhIncrementDataSlot.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall RtlpHpLfhSlotAllocate(unsigned __int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  volatile LONG *v5; // rsi
  __int64 v6; // r13
  signed __int16 *v7; // rbp
  int v9; // r12d
  int v10; // r15d
  unsigned int v11; // edi
  unsigned __int16 v12; // r9
  unsigned __int8 *v13; // rdx
  signed __int64 v14; // rsi
  signed __int64 v15; // rax
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r14
  unsigned int v20; // eax
  unsigned int v21; // r12d
  __int64 v22; // rdx
  unsigned int v23; // edi
  unsigned int v24; // ebp
  unsigned __int16 v25; // ax
  int v26; // r8d
  unsigned __int64 v27; // r8
  int v28; // r14d
  __int64 v29; // rdi
  unsigned __int64 v30; // rbp
  char v31; // cl
  int v32; // r11d
  __int64 v33; // r8
  int v34; // edx
  unsigned int v35; // edx
  __int64 v36; // rcx
  __int64 v37; // rdx
  signed __int16 *v38; // rdx
  unsigned __int64 v39; // rbx
  int v40; // r13d
  signed __int16 v41; // ax
  signed __int16 v42; // tt
  __int64 v43; // r10
  int v44; // ecx
  unsigned __int64 v45; // rdx
  __int64 v46; // rdi
  signed __int16 *v47; // r12
  unsigned __int64 v48; // rsi
  __int64 v49; // rdx
  __int64 v50; // r11
  unsigned int v51; // r8d
  unsigned __int16 v52; // bp
  unsigned __int16 v53; // cx
  unsigned int v54; // r10d
  _QWORD *v55; // r10
  _QWORD *v56; // r15
  _QWORD *v57; // r9
  _QWORD *v58; // r8
  __int64 **v59; // rcx
  __int64 v60; // r9
  __int64 *v61; // rax
  __int64 *v62; // rax
  unsigned __int8 v63; // r12
  __int64 v64; // r12
  unsigned __int64 v65; // rcx
  __int64 v66; // rax
  unsigned int v67; // esi
  __int64 v68; // rdx
  unsigned int v69; // r14d
  unsigned int v70; // ebp
  __int64 v71; // rax
  unsigned __int16 v72; // ax
  int v73; // r8d
  int v74; // eax
  unsigned __int64 v75; // r8
  unsigned int v76; // edx
  unsigned int v77; // esi
  char v78; // cl
  __int64 v79; // r9
  __int64 v80; // rdi
  __int64 v81; // rbp
  signed __int16 *v82; // rdi
  signed __int16 *v83; // r14
  signed __int16 v84; // ax
  signed __int16 v85; // tt
  int v86; // r10d
  __int64 v87; // r11
  int v88; // r14d
  int v89; // edx
  __int16 v90; // dx
  __int64 v91; // rdx
  unsigned __int8 v92; // al
  unsigned __int8 v93; // al
  __int64 Subsegment; // rsi
  __int64 v96; // rdx
  __int64 v97; // r8
  __int64 v98; // r9
  struct _KTHREAD *v99; // rcx
  bool v100; // zf
  unsigned __int8 v101; // cl
  bool v102; // cf
  struct _KPRCB *v103; // r10
  _DWORD *v104; // r9
  int v105; // eax
  __int64 v106; // rdx
  __int64 v107; // r9
  struct _KTHREAD *v108; // rcx
  char v109; // cl
  unsigned int v110; // r8d
  __int64 (__fastcall *v111)(__int64, unsigned __int64, _QWORD); // rax
  __int64 v112; // r9
  __int64 v113; // rcx
  int v114; // eax
  unsigned __int64 v115; // rdx
  unsigned __int8 v116; // cl
  struct _KPRCB *v117; // r10
  _DWORD *v118; // r9
  int v119; // eax
  int v120; // eax
  unsigned __int8 v121; // r12
  __int64 v122; // rax
  __int64 v123; // rdx
  __int64 v124; // r8
  __int64 v125; // r9
  struct _KTHREAD *v126; // rcx
  unsigned __int8 v127; // al
  unsigned __int8 v128; // cl
  bool v129; // cf
  struct _KPRCB *v130; // r10
  _DWORD *v131; // r9
  int v132; // eax
  unsigned __int8 v133; // r12
  __int64 v134; // rdx
  __int64 v135; // r8
  __int64 v136; // r9
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int8 v138; // bp
  char v139; // cl
  int v140; // r11d
  unsigned __int8 v141; // bp
  int (__fastcall *v142)(__int64, __int64, _QWORD, __int64); // rax
  unsigned int v143; // r10d
  __int64 v144; // r11
  __int64 v145; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v149; // eax
  __int64 v150; // rdx
  __int64 v151; // r9
  struct _KTHREAD *v152; // rcx
  unsigned __int8 v153; // al
  struct _KPRCB *v154; // r9
  int v155; // eax
  int v156; // r12d
  __int16 v157; // dx
  __int64 v158; // rax
  unsigned __int8 v159; // al
  __int64 v160; // rdx
  unsigned __int8 v161; // al
  __int64 v162; // rdx
  __int64 v163; // r8
  __int64 v164; // r9
  struct _KTHREAD *v165; // rcx
  unsigned __int8 v166; // al
  struct _KPRCB *v167; // r10
  _DWORD *v168; // r9
  int v169; // r8d
  PEX_SPIN_LOCK v170; // rsi
  ULONG_PTR v171; // rcx
  __int64 v172; // rdx
  __int64 v173; // r8
  __int64 v174; // r9
  struct _KTHREAD *v175; // rcx
  unsigned __int8 v176; // al
  struct _KPRCB *v177; // r9
  int v178; // eax
  _DWORD *v179; // r8
  PEX_SPIN_LOCK v180; // rbx
  __int64 v181; // rdx
  __int64 v182; // r8
  __int64 v183; // r9
  struct _KTHREAD *v184; // rcx
  unsigned __int8 v185; // al
  struct _KPRCB *v186; // r9
  _DWORD *v187; // r8
  int v188; // edx
  unsigned __int8 v189; // [rsp+40h] [rbp-C8h]
  unsigned __int8 v190; // [rsp+40h] [rbp-C8h]
  char v191; // [rsp+40h] [rbp-C8h]
  unsigned __int8 v192; // [rsp+41h] [rbp-C7h]
  int v193; // [rsp+44h] [rbp-C4h]
  unsigned int v194; // [rsp+44h] [rbp-C4h]
  char v195; // [rsp+48h] [rbp-C0h] BYREF
  char v196[3]; // [rsp+49h] [rbp-BFh] BYREF
  int v197; // [rsp+4Ch] [rbp-BCh]
  __int64 v198; // [rsp+50h] [rbp-B8h]
  volatile LONG *v199; // [rsp+58h] [rbp-B0h]
  PEX_SPIN_LOCK SpinLock; // [rsp+60h] [rbp-A8h]
  __int64 v201; // [rsp+68h] [rbp-A0h]
  volatile LONG *v202; // [rsp+70h] [rbp-98h]
  __int64 v203; // [rsp+78h] [rbp-90h]
  __int64 v204; // [rsp+80h] [rbp-88h]
  signed __int16 *v205; // [rsp+88h] [rbp-80h]
  unsigned int v206; // [rsp+90h] [rbp-78h]
  signed __int16 *v207; // [rsp+98h] [rbp-70h]
  int v208; // [rsp+A0h] [rbp-68h] BYREF
  int v209; // [rsp+A4h] [rbp-64h] BYREF
  _QWORD v210[2]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v211[10]; // [rsp+B8h] [rbp-50h] BYREF
  unsigned __int64 v212; // [rsp+110h] [rbp+8h]

  v212 = a1;
  v5 = (volatile LONG *)(a3 + 16);
  v6 = a4;
  v7 = (signed __int16 *)(a1 + 57);
  v189 = -1;
  v9 = 0;
  v197 = 0;
  v201 = 0LL;
  v10 = 0;
  SpinLock = (PEX_SPIN_LOCK)(a3 + 16);
  v11 = ((unsigned int)RtlpHpLfhPerfFlags >> 2) & 1;
  while ( 1 )
  {
    v205 = v7;
    v202 = v5;
    v12 = 1;
    v203 = (__int64)v7;
    v13 = (unsigned __int8 *)v7;
    v199 = v5;
    v207 = v7;
    if ( v11 )
    {
      while ( 1 )
      {
        _m_prefetchw((const void *)(a3 + 56));
        v14 = *(_QWORD *)(a3 + 56);
        if ( (v14 & 0xFFF) != 0 )
        {
          while ( 1 )
          {
            v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(a3 + 56), v14 - 1, v14);
            if ( v14 == v15 )
              break;
            v10 = 1;
            v14 = v15;
            if ( (v15 & 0xFFF) == 0 )
              goto LABEL_29;
          }
          v16 = v14 & 0xFFFFFFFFFFFFF000uLL;
          if ( v16 )
          {
            if ( v9 )
            {
              if ( *(_BYTE *)v7 )
              {
                ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
                if ( (_DWORD)KiIrqlFlags
                  && (CurrentIrql = KeGetCurrentIrql(), ((unsigned __int8)KiIrqlFlags & 1) != 0)
                  && CurrentIrql <= 0xFu )
                {
                  v133 = v189;
                  if ( v189 <= 0xFu && CurrentIrql >= 2u )
                  {
                    CurrentPrcb = KeGetCurrentPrcb();
                    SchedulerAssist = CurrentPrcb->SchedulerAssist;
                    v149 = ~(unsigned __int16)(-1LL << (v189 + 1));
                    v100 = (v149 & SchedulerAssist[5]) == 0;
                    SchedulerAssist[5] &= v149;
                    if ( v100 )
                      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                  }
                }
                else
                {
                  v133 = v189;
                }
                __writecr8(v133);
              }
              else
              {
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)SpinLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock(SpinLock);
                KeAbPostRelease((ULONG_PTR)SpinLock);
                CurrentThread = KeGetCurrentThread();
                v100 = CurrentThread->SpecialApcDisable++ == -1;
                if ( v100
                  && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
                {
                  KiCheckForKernelApcDelivery(CurrentThread, v134, v135, v136);
                }
              }
              v197 = 0;
            }
            v17 = *(unsigned __int16 *)(v16 + 34) + (unsigned __int64)*(unsigned __int8 *)(v16 + 39);
            v210[1] = v16 + 48;
            v18 = *(unsigned __int8 *)(a3 + 1);
            v19 = 3LL;
            v210[0] = 2 * v17;
            LODWORD(v199) = *((unsigned __int8 *)RtlpSearchWidth + v18);
            LODWORD(v202) = (unsigned int)v16 >> 12;
            v20 = qword_140C6B388 ^ *(_DWORD *)(v16 + 40) ^ ((unsigned int)v16 >> 12);
            v21 = (unsigned __int16)v20;
            v22 = HIWORD(v20);
            v23 = HIWORD(v20);
            v24 = HIWORD(v20);
            if ( (unsigned int)v6 >= (unsigned __int16)v20 )
              v19 = 1LL;
            if ( (*(_BYTE *)(v212 + 62) & 2) != 0 )
            {
              v24 = v22;
              v26 = 0;
              if ( (unsigned int)v6 >= (unsigned __int16)v20 )
                v24 = v22;
            }
            else
            {
              v25 = RtlpLfhIncrementDataSlot(v22, v22);
              if ( (unsigned int)v6 >= v21 )
                v24 = v23;
              v26 = RtlpLowFragHeapRandomData[v25];
            }
            v28 = RtlpLfhBlockBitmapAllocate(
                    (unsigned int)v210,
                    *(unsigned __int16 *)(v16 + 36),
                    v26,
                    (_DWORD)v199,
                    v19);
            *(_WORD *)(v16 + 36) = v28;
            v29 = v24 + v28 * v21;
            v30 = v16;
            if ( *(_BYTE *)(v16 + 45) <= 1u )
              goto LABEL_25;
            v31 = *(_BYTE *)(v16 + 44);
            v32 = 0;
            v33 = (unsigned int)v29 >> v31;
            v34 = (unsigned __int16)qword_140C6B388 ^ *(unsigned __int16 *)(v16 + 40) ^ (unsigned __int16)v202;
            v208 = 0;
            v206 = v34;
            v195 = -1;
            v35 = (unsigned int)(v29 + v34 - 1) >> v31;
            v36 = *(unsigned __int16 *)(v16 + 46);
            v37 = v35 - (unsigned int)v33 + 1;
            v192 = -1;
            v198 = 2 * v33;
            v27 = 2 * v33 + v16 + v36;
            v207 = (signed __int16 *)v27;
            _m_prefetchw((const void *)v27);
            v38 = (signed __int16 *)(v27 + 2 * v37);
            LODWORD(v203) = (unsigned __int8)v208;
            v193 = (unsigned __int8)v208;
            v30 = v16;
            if ( v27 >= (unsigned __int64)v38 )
            {
LABEL_25:
              v46 = v30 + v29;
              if ( (a5 & 2) != 0 )
                RtlHeapZero(v46, ((unsigned int)v6 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL, v27);
              if ( (unsigned int)v6 < v21 )
              {
                v156 = v21 - v6;
                if ( v156 == 1 )
                  v157 = 0x8000;
                else
                  v157 = v156 & 0x3FFF;
                *(_WORD *)(((unsigned __int16)qword_140C6B388 ^ *(unsigned __int16 *)(v16 + 40) ^ (unsigned __int64)(unsigned __int16)v202)
                         + v46
                         - 2) = v157;
              }
              v47 = v205;
              v48 = v212;
              goto LABEL_95;
            }
            v39 = (unsigned __int64)v38;
            v40 = -1;
            do
            {
              while ( 1 )
              {
                v41 = *(_WORD *)v27;
                while ( v41 > 0 )
                {
                  v42 = v41;
                  v41 = _InterlockedCompareExchange16((volatile signed __int16 *)v27, v41 + 1, v41);
                  if ( v42 == v41 )
                  {
                    v43 = v198;
                    v44 = v193;
                    goto LABEL_20;
                  }
                }
                if ( v32 )
                  break;
                LODWORD(v199) = 1;
                v93 = RtlpHpAcquireLockExclusive(v16 + 24, *(unsigned __int8 *)v205);
                v27 = (unsigned __int64)v207;
                v32 = 1;
                v192 = v93;
              }
              v43 = v198;
              if ( v41 )
              {
                v44 = ++v193;
                v203 = v198 >> 1;
                if ( v40 == -1 )
                  v40 = v198 >> 1;
              }
              else
              {
                v44 = --v193;
              }
              *(_WORD *)v27 = v41 + 1;
LABEL_20:
              v27 += 2LL;
              v207 = (signed __int16 *)v27;
              v198 = v43 + 2;
            }
            while ( v27 < v39 );
            LODWORD(v199) = v40;
            LODWORD(v6) = a4;
            if ( v44 )
            {
              v45 = v212;
              if ( (RtlpHpLfhPerfFlags & 0x20) != 0 )
                _InterlockedExchangeAdd64(
                  (volatile signed __int64 *)(*(__int16 *)(v212 + 58) + v212 + 24),
                  (v193 << *(_BYTE *)(v16 + 44)) / 4096);
            }
            else
            {
              v45 = v212;
            }
            v27 = (unsigned int)v199;
            if ( (_DWORD)v199 == -1 )
            {
              if ( v32 )
              {
                if ( *(_BYTE *)v205 )
                {
                  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v16 + 24));
                  if ( (_DWORD)KiIrqlFlags )
                  {
                    v116 = KeGetCurrentIrql();
                    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v116 <= 0xFu && v192 <= 0xFu && v116 >= 2u )
                    {
                      v117 = KeGetCurrentPrcb();
                      v118 = v117->SchedulerAssist;
                      v119 = ~(unsigned __int16)(-1LL << (v192 + 1));
                      v100 = (v119 & v118[5]) == 0;
                      v27 = (unsigned int)v119 & v118[5];
                      v118[5] = v27;
                      if ( v100 )
                        KiRemoveSystemWorkPriorityKick(v117);
                    }
                  }
                  __writecr8(v192);
                }
                else
                {
                  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v16 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                    ExfTryToWakePushLock(v16 + 24);
                  KeAbPostRelease(v16 + 24);
                  v108 = KeGetCurrentThread();
                  v100 = v108->SpecialApcDisable++ == -1;
                  if ( v100 && ($C71981A45BEB2B45F82C232A7085991E *)v108->ApcState.ApcListHead[0].Flink != &v108->152 )
                    KiCheckForKernelApcDelivery(v108, v106, v27, v107);
                }
              }
              goto LABEL_25;
            }
            v109 = *(_BYTE *)(v16 + 44);
            v110 = (_DWORD)v199 << v109;
            v195 = v192;
            v111 = (__int64 (__fastcall *)(__int64, unsigned __int64, _QWORD))(v45 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v45 + 24));
            v208 = v203 - (_DWORD)v199 + 1;
            v112 = (unsigned int)(v208 << v109);
            v113 = *(_QWORD *)v45;
            LODWORD(v199) = v110;
            v203 = v112;
            v114 = v111(v113, v16 + v110, (unsigned int)v112);
            v115 = v16;
            if ( v114 >= 0 )
            {
              RtlpHpLfhSubsegmentIncBlockCounts(v212, v16, (_DWORD)v199, v203, (__int64)&v208, 1, (__int64)&v195);
              goto LABEL_25;
            }
            v48 = v212;
            RtlpHpLfhSubsegmentDecBlockCounts(v212, v115, (unsigned int)v29, v206);
            v47 = v205;
            if ( *(_BYTE *)v205 )
            {
              ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v30 + 24));
              if ( (_DWORD)KiIrqlFlags )
              {
                v166 = KeGetCurrentIrql();
                if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v166 <= 0xFu && v192 <= 0xFu && v166 >= 2u )
                {
                  v167 = KeGetCurrentPrcb();
                  v168 = v167->SchedulerAssist;
                  v192 = v195;
                  v169 = ~(unsigned __int16)(-1LL << (v195 + 1)) & v168[5];
                  v168[5] = v169;
                  if ( !v169 )
                    KiRemoveSystemWorkPriorityKick(v167);
                }
              }
              __writecr8(v192);
            }
            else
            {
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v30 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock(v30 + 24);
              KeAbPostRelease(v30 + 24);
              v165 = KeGetCurrentThread();
              v100 = v165->SpecialApcDisable++ == -1;
              if ( v100 && ($C71981A45BEB2B45F82C232A7085991E *)v165->ApcState.ApcListHead[0].Flink != &v165->152 )
                KiCheckForKernelApcDelivery(v165, v162, v163, v164);
            }
            v46 = 0LL;
            if ( v28 == -1 )
            {
LABEL_95:
              if ( v46 )
                goto LABEL_96;
            }
            else
            {
              _InterlockedAnd64(
                (volatile signed __int64 *)(v30 + 8 * ((unsigned __int64)(unsigned int)(2 * v28) >> 6) + 48),
                ~(3LL << ((2 * v28) & 0x3F)));
            }
            RtlpHpLfhSubsegmentFreeBlock(v48, v30, 0LL, a5);
LABEL_96:
            if ( !v197 )
              goto LABEL_97;
            if ( v197 == 2 )
            {
              if ( !*(_BYTE *)v47 )
              {
                v170 = SpinLock;
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)SpinLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock(v170);
                v171 = (ULONG_PTR)v170;
LABEL_270:
                KeAbPostRelease(v171);
                v175 = KeGetCurrentThread();
                v100 = v175->SpecialApcDisable++ == -1;
                if ( v100 && ($C71981A45BEB2B45F82C232A7085991E *)v175->ApcState.ApcListHead[0].Flink != &v175->152 )
                  KiCheckForKernelApcDelivery(v175, v172, v173, v174);
                goto LABEL_97;
              }
              ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
            }
            else
            {
              if ( !*(_BYTE *)v47 )
              {
                v180 = SpinLock;
                if ( _InterlockedCompareExchange64((volatile signed __int64 *)SpinLock, 0LL, 17LL) != 17 )
                  ExfReleasePushLockShared(v180);
                v171 = (ULONG_PTR)v180;
                goto LABEL_270;
              }
              ExReleaseSpinLockSharedFromDpcLevel(SpinLock);
            }
            if ( (_DWORD)KiIrqlFlags )
            {
              v176 = KeGetCurrentIrql();
              if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v176 <= 0xFu && v189 <= 0xFu && v176 >= 2u )
              {
                v177 = KeGetCurrentPrcb();
                v178 = ~(unsigned __int16)(-1LL << (v189 + 1));
                v179 = v177->SchedulerAssist;
                v100 = (v178 & v179[5]) == 0;
                v179[5] &= v178;
                if ( v100 )
                  KiRemoveSystemWorkPriorityKick(v177);
              }
            }
            __writecr8(v189);
            goto LABEL_97;
          }
LABEL_29:
          a1 = v212;
        }
        if ( v9 == 2 )
          break;
        v91 = *(unsigned __int8 *)(a1 + 57);
        v9 = 2;
        v197 = 2;
        v92 = RtlpHpAcquireLockExclusive(a3 + 16, v91);
        a1 = v212;
        v12 = 1;
        v189 = v92;
      }
      v5 = SpinLock;
      goto LABEL_32;
    }
    if ( !v9 )
    {
      v9 = 1;
      v189 = RtlpHpAcquireLockShared(v5, *(unsigned __int8 *)v7, 4096LL);
      v12 = 1;
LABEL_32:
      v13 = (unsigned __int8 *)v7;
    }
    if ( !*(_QWORD *)(a3 + 8) )
      break;
    v49 = *(_QWORD *)(a3 + 24);
    v50 = a3 + 24;
    if ( v11 )
      v12 = 4096;
    if ( v49 == v50 )
    {
LABEL_220:
      v198 = 0LL;
      goto LABEL_58;
    }
LABEL_37:
    LOWORD(v51) = *(_WORD *)(v49 + 32);
    v10 = 0;
    while ( 1 )
    {
      LODWORD(v202) = v10;
      if ( v12 < (unsigned __int16)v51 )
      {
        v52 = v12;
      }
      else
      {
        v52 = v51;
        if ( v9 == 1 )
        {
          v49 = *(_QWORD *)v49;
          if ( v49 == v50 )
            goto LABEL_220;
          goto LABEL_37;
        }
      }
      v53 = v51 - v52;
      v51 = (unsigned __int16)_InterlockedCompareExchange16((volatile signed __int16 *)(v49 + 32), v51 - v52, v51);
      v54 = v52 + v53;
      if ( v51 == v54 )
        break;
      if ( v51 < v54 )
        v10 = 1;
    }
    if ( *(_WORD *)(v49 + 32) )
      goto LABEL_55;
    v55 = (_QWORD *)v49;
    switch ( *(_BYTE *)(v49 + 38) )
    {
      case 0:
        v56 = (_QWORD *)(a3 + 8);
        v57 = 0LL;
        v58 = (_QWORD *)(a3 + 8);
        goto LABEL_44;
      case 1:
        v57 = 0LL;
        v50 = a3 + 40;
        v58 = 0LL;
        v56 = (_QWORD *)(a3 + 8);
LABEL_44:
        v198 = 0LL;
        v59 = (__int64 **)(a3 + 40);
        if ( v50 )
        {
          v60 = *(_QWORD *)v49;
          v61 = *(__int64 **)(v49 + 8);
          if ( *(_QWORD *)(*(_QWORD *)v49 + 8LL) == v49 && *v61 == v49 )
          {
            *v61 = v60;
            *(_QWORD *)(v60 + 8) = v61;
            v57 = (_QWORD *)v198;
            if ( v58 )
              --*v58;
            goto LABEL_49;
          }
LABEL_286:
          __fastfail(3u);
        }
LABEL_49:
        *(_BYTE *)(v49 + 38) = 1;
        if ( v59 )
        {
          v62 = v59[1];
          if ( (__int64 **)*v62 != v59 )
            goto LABEL_286;
          *(_QWORD *)v49 = v59;
          v55 = 0LL;
          *(_QWORD *)(v49 + 8) = v62;
          *v62 = v49;
          v59[1] = (__int64 *)v49;
        }
        if ( (*(_BYTE *)a3 & 1) == 0 && *v56 > 8uLL )
        {
          v55 = *v59;
          v158 = **v59;
          if ( (__int64 **)(*v59)[1] != v59 || *(_QWORD **)(v158 + 8) != v55 )
            goto LABEL_286;
          *v59 = (__int64 *)v158;
          *(_QWORD *)(v158 + 8) = v59;
          --*v57;
          *((_BYTE *)v55 + 38) = 2;
        }
        if ( v55 && *((_BYTE *)v55 + 38) == 2 )
          v55[2] = 0LL;
        break;
      case 2:
        v59 = (__int64 **)(a3 + 40);
        v57 = 0LL;
        v56 = (_QWORD *)(a3 + 8);
        goto LABEL_49;
    }
LABEL_55:
    v10 = (int)v202;
    v198 = v49;
    if ( v49 )
    {
      v198 = v49;
      if ( v52 > 1u )
      {
        v198 = v49;
        *(_QWORD *)(a3 + 56) = v49 ^ ((unsigned __int16)v49 ^ (unsigned __int16)(v52 - 1)) & 0xFFF;
      }
    }
LABEL_58:
    SpinLock = v5;
    v7 = v207;
    if ( v9 == 2 )
    {
      if ( *(_BYTE *)v207 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(v5);
        if ( (_DWORD)KiIrqlFlags )
        {
          v101 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v101 <= 0xFu )
          {
            v63 = v189;
            if ( v189 <= 0xFu )
            {
              v102 = v101 < 2u;
              goto LABEL_117;
            }
            goto LABEL_62;
          }
        }
LABEL_61:
        v63 = v189;
        goto LABEL_62;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v5);
LABEL_105:
      KeAbPostRelease((ULONG_PTR)v5);
      v99 = KeGetCurrentThread();
      v100 = v99->SpecialApcDisable++ == -1;
      if ( v100 && ($C71981A45BEB2B45F82C232A7085991E *)v99->ApcState.ApcListHead[0].Flink != &v99->152 )
        KiCheckForKernelApcDelivery(v99, v96, v97, v98);
    }
    else
    {
      if ( !*(_BYTE *)v207 )
      {
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v5, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v5);
        goto LABEL_105;
      }
      ExReleaseSpinLockSharedFromDpcLevel(v5);
      if ( !(_DWORD)KiIrqlFlags )
        goto LABEL_61;
      v159 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) == 0 || v159 > 0xFu )
        goto LABEL_61;
      v63 = v189;
      if ( v189 <= 0xFu )
      {
        v102 = v159 < 2u;
LABEL_117:
        if ( !v102 )
        {
          v103 = KeGetCurrentPrcb();
          v104 = v103->SchedulerAssist;
          v105 = ~(unsigned __int16)(-1LL << (v63 + 1));
          v100 = (v105 & v104[5]) == 0;
          v104[5] &= v105;
          if ( v100 )
            KiRemoveSystemWorkPriorityKick(v103);
        }
      }
LABEL_62:
      __writecr8(v63);
    }
    v64 = v198;
    if ( v198 )
    {
      v65 = *(unsigned __int16 *)(v198 + 34) + (unsigned __int64)*(unsigned __int8 *)(v198 + 39);
      v211[1] = v198 + 48;
      v66 = *(unsigned __int8 *)(a3 + 1);
      v211[0] = 2 * v65;
      v207 = (signed __int16 *)(v198 + 40);
      v206 = *((unsigned __int8 *)RtlpSearchWidth + v66);
      LODWORD(v202) = (unsigned int)v198 >> 12;
      v67 = (unsigned __int16)(*(_WORD *)(v198 + 40) ^ qword_140C6B388 ^ ((unsigned int)v198 >> 12));
      v68 = (*(_DWORD *)(v198 + 40) ^ (unsigned int)qword_140C6B388 ^ ((unsigned int)v198 >> 12)) >> 16;
      v69 = (*(_DWORD *)(v198 + 40) ^ (unsigned int)qword_140C6B388 ^ ((unsigned int)v198 >> 12)) >> 16;
      v70 = v69;
      v71 = 3LL;
      v194 = v67;
      if ( (unsigned int)v6 >= v67 )
        v71 = 1LL;
      v204 = v71;
      if ( (*(_BYTE *)(v212 + 62) & 2) != 0 )
      {
        v70 = v68;
        v73 = 0;
        if ( (unsigned int)v6 >= v67 )
          v70 = v68;
      }
      else
      {
        v72 = RtlpLfhIncrementDataSlot(v68, v68);
        if ( (unsigned int)v6 >= v67 )
          v70 = v69;
        v73 = RtlpLowFragHeapRandomData[v72];
      }
      v74 = RtlpLfhBlockBitmapAllocate((unsigned int)v211, *(unsigned __int16 *)(v198 + 36), v73, v206, v204);
      v76 = v67;
      LODWORD(v203) = v74;
      *(_WORD *)(v198 + 36) = v74;
      v77 = v70 + v67 * v74;
      if ( *(_BYTE *)(v64 + 45) <= 1u )
        goto LABEL_82;
      v78 = *(_BYTE *)(v64 + 44);
      v79 = 0LL;
      v80 = v64 + *(unsigned __int16 *)(v64 + 46);
      v75 = v77 >> v78;
      v209 = 0;
      v196[0] = -1;
      v190 = -1;
      LODWORD(SpinLock) = (unsigned __int16)*v207 ^ (unsigned __int16)v202 ^ (unsigned __int16)qword_140C6B388;
      v81 = 2 * v75;
      v82 = (signed __int16 *)(2 * v75 + v80);
      _m_prefetchw(v82);
      v198 = 0LL;
      LODWORD(v199) = 0;
      v197 = -1;
      if ( v82 >= &v82[((v77 + (_DWORD)SpinLock - 1) >> v78) - (unsigned int)v75 + 1] )
        goto LABEL_81;
      v83 = &v82[((v77 + (_DWORD)SpinLock - 1) >> v78) - (unsigned int)v75 + 1];
      do
      {
        while ( 1 )
        {
          v84 = *v82;
          while ( v84 > 0 )
          {
            v85 = v84;
            v84 = _InterlockedCompareExchange16(v82, v84 + 1, v84);
            if ( v85 == v84 )
            {
              v75 = (unsigned int)v199;
              v86 = v197;
              LODWORD(v87) = v198;
              goto LABEL_77;
            }
          }
          if ( (_DWORD)v79 )
            break;
          v206 = 1;
          v127 = RtlpHpAcquireLockExclusive(v64 + 24, *(unsigned __int8 *)v205);
          v79 = 1LL;
          v190 = v127;
        }
        v86 = v197;
        if ( v84 )
        {
          v75 = (unsigned int)((_DWORD)v199 + 1);
          v87 = v81 >> 1;
          LODWORD(v199) = (_DWORD)v199 + 1;
          v198 = v81 >> 1;
          if ( v197 == -1 )
          {
            v86 = v81 >> 1;
            v197 = v86;
          }
        }
        else
        {
          LODWORD(v87) = v198;
          v75 = (unsigned int)((_DWORD)v199 - 1);
          LODWORD(v199) = (_DWORD)v199 - 1;
        }
        *v82 = v84 + 1;
LABEL_77:
        ++v82;
        v81 += 2LL;
      }
      while ( v82 < v83 );
      v88 = v203;
      if ( (_DWORD)v75 )
      {
        v75 = (unsigned int)((_DWORD)v75 << *(_BYTE *)(v64 + 44));
        if ( (RtlpHpLfhPerfFlags & 0x20) != 0 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(v212 + 58) + v212 + 24), (int)v75 / 4096);
      }
      if ( v86 == -1 )
      {
        if ( !(_DWORD)v79 )
          goto LABEL_81;
        if ( *(_BYTE *)v205 )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v64 + 24));
          if ( (_DWORD)KiIrqlFlags
            && (v153 = KeGetCurrentIrql(), ((unsigned __int8)KiIrqlFlags & 1) != 0)
            && v153 <= 0xFu )
          {
            v138 = v190;
            if ( v190 <= 0xFu && v153 >= 2u )
            {
              v154 = KeGetCurrentPrcb();
              v155 = ~(unsigned __int16)(-1LL << (v190 + 1));
              v75 = (unsigned __int64)v154->SchedulerAssist;
              v100 = (v155 & *(_DWORD *)(v75 + 20)) == 0;
              *(_DWORD *)(v75 + 20) &= v155;
              if ( v100 )
              {
                KiRemoveSystemWorkPriorityKick(v154);
                __writecr8(v190);
                goto LABEL_81;
              }
            }
          }
          else
          {
            v138 = v190;
          }
          __writecr8(v138);
          goto LABEL_81;
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v64 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v64 + 24);
        KeAbPostRelease(v64 + 24);
        v152 = KeGetCurrentThread();
        v100 = v152->SpecialApcDisable++ == -1;
        if ( v100 && ($C71981A45BEB2B45F82C232A7085991E *)v152->ApcState.ApcListHead[0].Flink != &v152->152 )
          KiCheckForKernelApcDelivery(v152, v150, v75, v151);
LABEL_81:
        v76 = v194;
LABEL_82:
        v46 = v64 + v77;
        if ( (a5 & 2) != 0 )
        {
          RtlHeapZero(v64 + v77, (v6 + 15) & 0xFFFFFFFFFFFFFFF0uLL, v75);
          v76 = v194;
        }
        if ( (unsigned int)v6 < v76 )
        {
          v89 = v76 - v6;
          if ( v89 == 1 )
            v90 = 0x8000;
          else
            v90 = v89 & 0x3FFF;
          *(_WORD *)(((unsigned __int16)*v207 ^ (unsigned __int16)v202 ^ (unsigned __int64)(unsigned __int16)qword_140C6B388)
                   + v46
                   - 2) = v90;
        }
LABEL_92:
        if ( v46 )
        {
LABEL_97:
          Subsegment = v201;
          goto LABEL_98;
        }
      }
      else
      {
        v139 = *(_BYTE *)(v64 + 44);
        v140 = v87 - v86 + 1;
        v141 = v190;
        v142 = (int (__fastcall *)(__int64, __int64, _QWORD, __int64))(v212 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v212 + 24));
        v143 = v86 << v139;
        v209 = v140;
        v144 = (unsigned int)(v140 << v139);
        v145 = *(_QWORD *)v212;
        v196[0] = v190;
        v197 = v143;
        v198 = v144;
        if ( v142(v145, v64 + v143, (unsigned int)v144, v79) >= 0 )
        {
          RtlpHpLfhSubsegmentIncBlockCounts(v212, v64, v197, v198, (__int64)&v209, 1, (__int64)v196);
          goto LABEL_81;
        }
        RtlpHpLfhSubsegmentDecBlockCounts(v212, v64, v77, (unsigned int)SpinLock);
        if ( *(_BYTE *)v205 )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v64 + 24));
          if ( (_DWORD)KiIrqlFlags )
          {
            v185 = KeGetCurrentIrql();
            if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v185 <= 0xFu && v190 <= 0xFu && v185 >= 2u )
            {
              v186 = KeGetCurrentPrcb();
              v187 = v186->SchedulerAssist;
              v191 = v196[0];
              v188 = ~(unsigned __int16)(-1LL << (v196[0] + 1)) & v187[5];
              v187[5] = v188;
              if ( !v188 )
                KiRemoveSystemWorkPriorityKick(v186);
              v141 = v191;
            }
          }
          __writecr8(v141);
        }
        else
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v64 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v64 + 24);
          KeAbPostRelease(v64 + 24);
          v184 = KeGetCurrentThread();
          v100 = v184->SpecialApcDisable++ == -1;
          if ( v100 && ($C71981A45BEB2B45F82C232A7085991E *)v184->ApcState.ApcListHead[0].Flink != &v184->152 )
            KiCheckForKernelApcDelivery(v184, v181, v182, v183);
        }
        v46 = 0LL;
        if ( v88 == -1 )
          goto LABEL_92;
        _InterlockedAnd64(
          (volatile signed __int64 *)(v64 + 8 * ((unsigned __int64)(unsigned int)(2 * v88) >> 6) + 48),
          ~(3LL << ((2 * v88) & 0x3F)));
      }
      RtlpHpLfhSubsegmentFreeBlock(v212, v64, 0LL, a5);
      goto LABEL_97;
    }
    v160 = *(unsigned __int8 *)v7;
    v9 = 2;
    v197 = 2;
    v189 = RtlpHpAcquireLockExclusive(v199, v160);
LABEL_145:
    a1 = v212;
  }
  v120 = *v13;
  v7 = (signed __int16 *)v13;
  SpinLock = v5;
  if ( v9 == 2 )
  {
    if ( v120 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v5);
      if ( (_DWORD)KiIrqlFlags )
      {
        v128 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v128 <= 0xFu )
        {
          v121 = v189;
          if ( v189 <= 0xFu )
          {
            v129 = v128 < 2u;
            goto LABEL_159;
          }
          goto LABEL_142;
        }
      }
LABEL_141:
      v121 = v189;
      goto LABEL_142;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v5);
LABEL_148:
    KeAbPostRelease((ULONG_PTR)v5);
    v126 = KeGetCurrentThread();
    v100 = v126->SpecialApcDisable++ == -1;
    if ( v100 && ($C71981A45BEB2B45F82C232A7085991E *)v126->ApcState.ApcListHead[0].Flink != &v126->152 )
      KiCheckForKernelApcDelivery(v126, v123, v124, v125);
  }
  else
  {
    if ( !(_BYTE)v120 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v5, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v5);
      goto LABEL_148;
    }
    ExReleaseSpinLockSharedFromDpcLevel(v5);
    if ( !(_DWORD)KiIrqlFlags )
      goto LABEL_141;
    v161 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) == 0 || v161 > 0xFu )
      goto LABEL_141;
    v121 = v189;
    if ( v189 <= 0xFu )
    {
      v129 = v161 < 2u;
LABEL_159:
      if ( !v129 )
      {
        v130 = KeGetCurrentPrcb();
        v131 = v130->SchedulerAssist;
        v132 = ~(unsigned __int16)(-1LL << (v121 + 1));
        v100 = (v132 & v131[5]) == 0;
        v131[5] &= v132;
        if ( v100 )
          KiRemoveSystemWorkPriorityKick(v130);
      }
    }
LABEL_142:
    __writecr8(v121);
  }
  Subsegment = RtlpHpLfhBucketGetSubsegment(a2, *(unsigned __int8 *)v203);
  if ( Subsegment || (Subsegment = RtlpHpLfhSubsegmentCreate(v212, a2, a5)) != 0 )
  {
    v9 = 2;
    v197 = 2;
    v189 = RtlpHpAcquireLockExclusive(v202, *(unsigned __int8 *)v203);
    v122 = RtlpHpLfhSlotAddSubsegment(a3, Subsegment);
    v5 = SpinLock;
    v201 = v122;
    goto LABEL_145;
  }
  v46 = 0LL;
LABEL_98:
  if ( v10 )
    RtlpHpLfhBucketUpdateAffinityMapping(v212, a2);
  if ( Subsegment )
    RtlpHpLfhBucketAddSubsegment(v212, a2, Subsegment, a5);
  return v46;
}
