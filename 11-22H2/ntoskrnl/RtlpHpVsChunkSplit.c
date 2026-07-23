/*
 * XREFs of RtlpHpVsChunkSplit @ 0x14024A460
 * Callers:
 *     RtlpHpVsContextAllocateInternal @ 0x14024A090 (RtlpHpVsContextAllocateInternal.c)
 * Callees:
 *     RtlpHpAcquireQueuedLockExclusive @ 0x140207670 (RtlpHpAcquireQueuedLockExclusive.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     RtlRbRemoveNode @ 0x14024B910 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x14024CCA0 (RtlRbInsertNodeEx.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D340 (ExAcquireSpinLockExclusive.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x140289AC0 (RtlpHpReleaseQueuedLockExclusive.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F640 (KiCheckForKernelApcDelivery.c)
 *     RtlpHpVsFreeChunkRemove @ 0x140333E84 (RtlpHpVsFreeChunkRemove.c)
 *     RtlpHpVsChunkComputeCost @ 0x140333F00 (RtlpHpVsChunkComputeCost.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x140337120 (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlpHpVsSubsegmentCleanup @ 0x140351F78 (RtlpHpVsSubsegmentCleanup.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14060B12C (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall RtlpHpVsChunkSplit(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char a5, _QWORD *a6)
{
  unsigned int v9; // r15d
  unsigned int v11; // ebx
  __int64 v12; // r9
  unsigned int v13; // edx
  int v14; // r8d
  unsigned int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // r15d
  unsigned __int64 v18; // rcx
  int v19; // eax
  unsigned int v20; // r10d
  unsigned int v21; // r15d
  int v22; // eax
  unsigned int v23; // ecx
  unsigned int v24; // r8d
  int v25; // r9d
  unsigned __int64 v26; // r12
  unsigned __int64 v27; // r12
  unsigned __int64 v28; // rdi
  int v29; // edx
  unsigned __int64 v30; // rdx
  unsigned int i; // r10d
  __int64 v32; // r9
  unsigned __int64 v33; // rax
  unsigned int v34; // r12d
  __int64 v35; // r15
  unsigned __int16 v36; // cx
  unsigned __int64 v37; // r8
  __int64 v38; // r15
  __int64 v39; // r15
  unsigned int v40; // r9d
  unsigned int v41; // r8d
  unsigned __int64 v42; // r15
  _RTL_RB_TREE *v43; // r12
  __int64 v44; // rdx
  unsigned int v45; // r8d
  unsigned __int64 v46; // r9
  unsigned __int64 v47; // r10
  unsigned int v48; // eax
  unsigned __int64 v49; // rdx
  unsigned __int64 v50; // rax
  _RTL_BALANCED_NODE *Min; // rax
  _RTL_BALANCED_NODE *v52; // r10
  _RTL_BALANCED_NODE *v53; // rdx
  int v54; // r9d
  BOOLEAN v55; // al
  _RTL_BALANCED_NODE *v56; // rax
  bool v58; // zf
  int v59; // eax
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rdx
  unsigned __int64 v62; // rcx
  __int64 v63; // r12
  volatile LONG *v64; // rcx
  unsigned __int64 v65; // r15
  KIRQL v66; // al
  int v67; // r12d
  KIRQL v68; // r15
  __int16 v69; // ax
  __int16 v70; // r8
  __int64 v71; // r8
  _RTL_BALANCED_NODE *Root; // rax
  BOOLEAN v73; // r10
  int v74; // r8d
  _RTL_BALANCED_NODE *v75; // rdx
  _RTL_BALANCED_NODE *v76; // rax
  __int64 v77; // rcx
  unsigned int v78; // edx
  unsigned __int64 v79; // r8
  unsigned __int64 v80; // r15
  unsigned __int64 v81; // rdx
  unsigned __int64 v82; // rcx
  unsigned __int64 v83; // rdx
  struct _KTHREAD *v84; // rcx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v89; // eax
  int v90; // [rsp+30h] [rbp-68h]
  KIRQL v91; // [rsp+38h] [rbp-60h]
  __int64 v92; // [rsp+40h] [rbp-58h]
  KIRQL v93; // [rsp+58h] [rbp-40h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  unsigned __int64 v95; // [rsp+A0h] [rbp+8h] BYREF
  unsigned __int64 v96; // [rsp+A8h] [rbp+10h]
  unsigned int v97; // [rsp+B0h] [rbp+18h]
  unsigned int v98; // [rsp+B8h] [rbp+20h] BYREF

  v9 = WORD1(RtlpHpHeapGlobals) ^ WORD1(a3) ^ *(unsigned __int16 *)(a3 + 2);
  RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 16), (PRTL_BALANCED_NODE)(a3 + 8));
  v11 = 0;
  v12 = a3 ^ RtlpHpHeapGlobals ^ *(_QWORD *)a3;
  v13 = (a3 + 16 * (((unsigned int)a3 ^ (unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)a3) >> 16) - a2) & 0xFFFFF000;
  v14 = ((16 * (((unsigned int)a3 ^ (unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)a3) >> 16)
        + (unsigned __int64)(a3 & 0xFFF)
        + 4095) >> 12)
      - (((unsigned __int64)(16 * (((unsigned int)a3 ^ (unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)a3) >> 16)) + 4095) >> 12);
  v98 = a3 - a2;
  v15 = (a3 - a2 + 4127) & 0xFFFFF000;
  v16 = v13 - v15;
  if ( v15 >= v13 )
    v16 = 0;
  *(_QWORD *)(a1 + 56) -= (v16 >> 12) + v14 - (unsigned __int16)v12;
  v17 = v9 - a4;
  if ( v17 && (*(_DWORD *)(a1 + 176) & 1) != 0 )
  {
    v18 = (((a3 + 16LL * a4 + 4095) & 0xFFFFFFFFFFFFF000uLL) - (a3 + 16LL * a4)) >> 4;
    v19 = 16 * v18;
    if ( (unsigned int)(16 * v18) < 0x20 )
    {
      a4 += v18;
      v17 -= v18;
    }
    else if ( (v19 & 0xFFFFFFC0) == 0 && v19 != 32 )
    {
      ++a4;
      --v17;
    }
  }
  if ( 16 * v17 < 0x20 )
    a4 += v17;
  v95 = 0x1000000000000LL;
  v20 = 0;
  if ( 16 * v17 >= 0x20 )
    v20 = v17;
  v21 = v20;
  v97 = v20;
  v22 = 16 * a4 + 32;
  *(_BYTE *)(a3 + 6) = BYTE6(a3) ^ BYTE6(RtlpHpHeapGlobals) ^ 1;
  v23 = v98;
  v24 = v98 >> 12;
  v25 = (unsigned __int8)(RtlpHpHeapGlobals ^ (v98 >> 12) ^ a3);
  *(_DWORD *)(a3 + 8) = v25;
  if ( !v20 )
    v22 = 16 * a4;
  v26 = (0xFFFFFFFFFFFFFFFFuLL >> (63 - (unsigned __int8)((v23 - 1 + v22) >> 12))) & (-1LL << v24);
  v27 = (*(_QWORD *)(a2 + 16) ^ v26) & v26;
  if ( v27 )
  {
    v58 = (a5 & 1) == 0;
    v59 = a5 & 1;
    *(_DWORD *)(a3 + 8) = v25 | 0x200;
    v90 = v59;
    if ( v58 )
      RtlpHpReleaseQueuedLockExclusive(*(unsigned int *)(a1 + 8), a6);
    v60 = ((v27 - ((v27 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
        + (((v27 - ((v27 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL);
    _BitScanForward64(&v61, v27);
    _BitScanReverse64(&v62, v27);
    v98 = v61;
    LODWORD(v95) = v62 - v61 + 1;
    v63 = a2 + (unsigned int)((_DWORD)v61 << 12);
    LODWORD(v96) = (_DWORD)v95 << 12;
    v64 = (volatile LONG *)(a2 + 24);
    v65 = (0x101010101010101LL * ((v60 + (v60 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
    v92 = ((1LL << v95) - 1) << v61;
    if ( *(_DWORD *)(a1 + 8) )
    {
      v66 = ExAcquireSpinLockExclusive(v64);
      v93 = v66;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      v93 = 0;
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v64, 0LL);
      v66 = 0;
    }
    v91 = v66;
    v67 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 152)))(
            *(_QWORD *)(a1 + 128) ^ a1,
            v63,
            (unsigned int)v96);
    if ( v67 >= 0 )
    {
      *(_QWORD *)(a2 + 16) |= v92;
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 48), v65);
      v67 = 0;
      v91 = v93;
    }
    if ( *(_DWORD *)(a1 + 8) )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a2 + 24, retaddr);
      else
        *(_DWORD *)(a2 + 24) = 0;
      v68 = v91;
      if ( (_DWORD)KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v91 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v68 = v93;
          v89 = ~(unsigned __int16)(-1LL << (v93 + 1));
          v58 = (v89 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v89;
          if ( v58 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v68);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a2 + 24);
      KeAbPostRelease(a2 + 24);
      v84 = KeGetCurrentThread();
      v58 = v84->SpecialApcDisable++ == -1;
      if ( v58 && ($C71981A45BEB2B45F82C232A7085991E *)v84->ApcState.ApcListHead[0].Flink != &v84->152 )
        KiCheckForKernelApcDelivery();
    }
    v21 = v97;
    if ( v67 < 0 )
    {
      v21 = v97 + a4;
      a4 = 0;
    }
    if ( !v90 )
      RtlpHpAcquireQueuedLockExclusive((volatile signed __int32 *)a1, *(_DWORD *)(a1 + 8), a6);
    *(_DWORD *)(a3 + 8) &= ~0x200u;
  }
  *(_WORD *)(a3 + 2) = WORD1(RtlpHpHeapGlobals) ^ a4 ^ WORD1(a3);
  if ( v21 )
  {
    v28 = 16LL * a4 + a3;
    v95 = 0LL;
    if ( a4 )
      LOWORD(v29) = a4;
    else
      v29 = HIDWORD(RtlpHpHeapGlobals) ^ HIDWORD(*(_QWORD *)v28) ^ HIDWORD(v28);
    LODWORD(v95) = (v21 << 16) | (unsigned __int16)v95;
    HIDWORD(v95) = (unsigned __int16)v29 | 0x10000;
    *(_QWORD *)v28 = v95 ^ RtlpHpHeapGlobals ^ v28;
    v30 = v28 + 16LL * v21;
    *(_DWORD *)(v28 + 8) = (unsigned __int8)(RtlpHpHeapGlobals ^ v28 ^ ((unsigned int)(v28 - a2) >> 12));
    if ( v30 < a2 + 16 * ((unsigned __int64)*(unsigned __int16 *)(a2 + 32) + 3) )
    {
      LODWORD(v95) = 0;
      HIDWORD(v95) = (unsigned __int16)v21;
      *(_WORD *)(v30 + 4) = WORD2(v30) ^ WORD2(RtlpHpHeapGlobals) ^ v21;
    }
    for ( i = 0; ; i = v34 )
    {
      v32 = a2 + 48;
      v98 = i;
      v33 = (RtlpHpHeapGlobals ^ *(_QWORD *)v28 ^ v28) >> 32;
      v34 = ((unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)v28 ^ (unsigned int)v28) >> 16;
      LODWORD(v95) = v34;
      *(_BYTE *)(v28 + 6) = BYTE6(RtlpHpHeapGlobals) ^ BYTE6(v28);
      if ( (_WORD)v33 )
      {
        v96 = v28 - 16LL * (unsigned __int16)v33;
        v35 = RtlpHpHeapGlobals ^ *(_QWORD *)v96 ^ v96;
        if ( (v35 & 0xFF000000000000LL) == 0 )
        {
          RtlpHpVsFreeChunkRemove(a1, a2, v28 - 16LL * (unsigned __int16)v33, v32);
          v28 = v96;
          v32 = a2 + 48;
          i = v98;
          v34 += WORD1(v35);
        }
      }
      v36 = *(_WORD *)(a2 + 32);
      v37 = v28 + 16LL * v34;
      if ( v37 < v32 + 16 * (unsigned __int64)v36 )
      {
        v38 = RtlpHpHeapGlobals ^ *(_QWORD *)v37 ^ v37;
        if ( (v38 & 0xFF000000000000LL) == 0 )
        {
          RtlpHpVsFreeChunkRemove(a1, a2, v37, v32);
          v36 = *(_WORD *)(a2 + 32);
          v32 = a2 + 48;
          i = v98;
          v34 += WORD1(v38);
        }
      }
      if ( (*(_DWORD *)(a1 + 176) & 1) != 0 )
      {
        v37 = v28 + 16LL * v34;
        if ( v37 < v32 + 16 * (unsigned __int64)v36 )
        {
          v39 = RtlpHpHeapGlobals ^ *(_QWORD *)v37 ^ v37;
          if ( (v39 & 0xFF000000000000LL) == 0 )
          {
            RtlpHpVsFreeChunkRemove(a1, a2, v37, v32);
            i = v98;
            v32 = a2 + 48;
            v34 += WORD1(v39);
          }
        }
      }
      if ( (_DWORD)v95 != v34 )
      {
        v83 = v28 + 16LL * v34;
        *(_WORD *)(v28 + 2) = WORD1(RtlpHpHeapGlobals) ^ v34 ^ WORD1(v28);
        if ( v83 < v32 + 16 * (unsigned __int64)*(unsigned __int16 *)(a2 + 32) )
        {
          LODWORD(v95) = 0;
          HIDWORD(v95) = (unsigned __int16)v34;
          *(_WORD *)(v83 + 4) = WORD2(RtlpHpHeapGlobals) ^ WORD2(v83) ^ v34;
        }
      }
      if ( v34 == *(unsigned __int16 *)(a2 + 32) )
      {
        RtlpHpVsSubsegmentCleanup(a1, a2, v37, v32);
        return a4;
      }
      if ( v34 <= i )
        break;
      v40 = (v28 - a2 + 4127) & 0xFFFFF000;
      v41 = (v28 + 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v28) ^ *(unsigned __int16 *)(v28 + 2)) - a2) & 0xFFFFF000;
      if ( v40 >= v41 )
        break;
      v80 = *(_QWORD *)(a2 + 16) & (-1LL << (v40 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                    - (unsigned __int8)((unsigned __int64)(v41 - 1) >> 12)));
      if ( v41 - v40 < 0x1000 )
        break;
      if ( !v80 )
        break;
      v81 = (0x101010101010101LL
           * ((((v80 - ((v80 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
             + (((v80 - ((v80 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
             + ((((v80 - ((v80 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
               + (((v80 - ((v80 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
      v96 = v81;
      if ( *(__int16 *)(a2 + 34) < 0 )
        break;
      if ( (*(_DWORD *)(a1 + 176) & 2) == 0 )
      {
        v82 = *(_QWORD *)(a1 + 48) >> 7;
        if ( v82 <= 8 )
          v82 = 8LL;
        if ( *(_QWORD *)(a1 + 56) + (unsigned __int64)(unsigned int)v81 <= v82 )
          break;
      }
      v95 = 0x1000000000000LL;
      *(_BYTE *)(v28 + 6) = BYTE6(RtlpHpHeapGlobals) ^ BYTE6(v28) ^ 1;
      v58 = (a5 & 1) == 0;
      *(_DWORD *)(v28 + 8) = (unsigned __int8)(RtlpHpHeapGlobals ^ v28 ^ ((unsigned int)(v28 - a2) >> 12)) | 0x200;
      if ( v58 )
      {
        RtlpHpReleaseQueuedLockExclusive(*(unsigned int *)(a1 + 8), a6);
        RtlpHpVsSubsegmentCommitPages(a1, a2, v80, v96, 0);
        RtlpHpAcquireQueuedLockExclusive((volatile signed __int32 *)a1, *(_DWORD *)(a1 + 8), a6);
      }
      else
      {
        RtlpHpVsSubsegmentCommitPages(a1, a2, v80, v81, 0);
      }
      *(_DWORD *)(v28 + 8) &= ~0x200u;
    }
    if ( (*(_DWORD *)(a1 + 176) & 1) == 0 || ((v28 + 32) & 0xFFF) == 0 )
      goto LABEL_39;
    if ( ((v28 + 4111) & 0xFFFFFFFFFFFFF000uLL) - v28 < 16
                                                      * (unsigned __int64)(WORD1(RtlpHpHeapGlobals) ^ WORD1(v28) ^ *(unsigned __int16 *)(v28 + 2)) )
    {
      v42 = ((v28 + 4111) & 0xFFFFFFFFFFFFF000uLL) - 32;
      v77 = (__int64)(v42 - v28) >> 4;
      v78 = (WORD1(RtlpHpHeapGlobals) ^ WORD1(v28) ^ *(unsigned __int16 *)(v28 + 2)) - v77;
      *(_WORD *)(v28 + 2) = WORD1(RtlpHpHeapGlobals) ^ v77 ^ WORD1(v28);
      *(_OWORD *)v42 = 0LL;
      *(_OWORD *)(v42 + 16) = 0LL;
      *(_WORD *)(v42 + 2) = v78;
      v79 = v42 + 16LL * v78;
      *(_WORD *)(v42 + 4) = v77;
      *(_QWORD *)v42 ^= RtlpHpHeapGlobals ^ v42;
      if ( v79 < a2 + 16 * ((unsigned __int64)*(unsigned __int16 *)(a2 + 32) + 3) )
      {
        LODWORD(v95) = 0;
        HIDWORD(v95) = (unsigned __int16)v78;
        *(_WORD *)(v79 + 4) = WORD2(RtlpHpHeapGlobals) ^ WORD2(v79) ^ v78;
      }
    }
    else
    {
      v42 = 0LL;
    }
    if ( !v42 )
    {
LABEL_39:
      v43 = (_RTL_RB_TREE *)(a1 + 16);
      goto LABEL_40;
    }
    v98 = 0;
    v95 = 0LL;
    v69 = RtlpHpVsChunkComputeCost(v42, a2, &v98, &v95);
    v43 = (_RTL_RB_TREE *)(a1 + 16);
    v70 = v69
        - ((0x101010101010101LL
          * ((((v95 - ((v95 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
            + (((v95 - ((v95 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
            + ((((v95 - ((v95 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
              + (((v95 - ((v95 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56);
    *(_QWORD *)(a1 + 56) += (unsigned int)((0x101010101010101LL
                                          * ((((v95 - ((v95 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                            + (((v95 - ((v95 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                            + ((((v95 - ((v95 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                              + (((v95 - ((v95 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
    *(_WORD *)v42 = RtlpHpHeapGlobals ^ v42 ^ (v98 + v70);
    v71 = *(_QWORD *)(a1 + 24);
    if ( (v71 & 1) == 0 )
    {
      Root = v43->Root;
      goto LABEL_81;
    }
    v75 = v43->Root;
    if ( v43->Root )
    {
      Root = (_RTL_BALANCED_NODE *)((unsigned __int64)v75 ^ (unsigned __int64)v43);
LABEL_81:
      v73 = 0;
      v74 = v71 & 1;
      v75 = Root;
      if ( !Root )
        goto LABEL_106;
      while ( 1 )
      {
        if ( ((unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)v42 ^ (unsigned int)v42) >= ((unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)&v75[-1].0 ^ ((_DWORD)v75 - 8)) )
        {
          v76 = v75->Children[1];
          if ( v74 )
          {
            if ( !v76 )
              goto LABEL_92;
            v76 = (_RTL_BALANCED_NODE *)((unsigned __int64)v75 ^ (unsigned __int64)v76);
          }
          if ( !v76 )
          {
LABEL_92:
            v73 = 1;
            goto LABEL_106;
          }
        }
        else
        {
          v76 = v75->Children[0];
          if ( v74 )
          {
            if ( !v76 )
              goto LABEL_106;
            v76 = (_RTL_BALANCED_NODE *)((unsigned __int64)v75 ^ (unsigned __int64)v76);
          }
          if ( !v76 )
            goto LABEL_106;
        }
        v75 = v76;
      }
    }
    v73 = 0;
LABEL_106:
    RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 16), v75, v73, (PRTL_BALANCED_NODE)(v42 + 8));
LABEL_40:
    v44 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v28) ^ *(unsigned __int16 *)(v28 + 2));
    v45 = (v28 - a2 + 4127) & 0xFFFFF000;
    v46 = ((v28 & 0xFFF) + v44 + 4095) >> 12;
    v47 = (unsigned __int64)(v44 + 4095) >> 12;
    v48 = (v44 + v28 - a2) & 0xFFFFF000;
    if ( v45 < v48 )
    {
      v11 = v48 - v45;
      v49 = *(_QWORD *)(a2 + 16) & (-1LL << (v45 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                    - (unsigned __int8)((unsigned __int64)(v48 - 1) >> 12)));
    }
    else
    {
      v49 = 0LL;
    }
    v50 = v49 - ((v49 >> 1) & 0x5555555555555555LL);
    *(_QWORD *)(a1 + 56) += (unsigned int)((0x101010101010101LL
                                          * (((v50 & 0x3333333333333333LL)
                                            + ((v50 >> 2) & 0x3333333333333333LL)
                                            + (((v50 & 0x3333333333333333LL) + ((v50 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
    *(_WORD *)v28 = RtlpHpHeapGlobals ^ v28 ^ (v46
                                             + (v11 >> 12)
                                             - v47
                                             - ((0x101010101010101LL
                                               * (((v50 & 0x3333333333333333LL)
                                                 + ((v50 >> 2) & 0x3333333333333333LL)
                                                 + (((v50 & 0x3333333333333333LL) + ((v50 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56));
    Min = v43->Min;
    if ( ((unsigned __int8)Min & 1) == 0 )
    {
      v52 = v43->Root;
      goto LABEL_44;
    }
    v53 = v43->Root;
    if ( v43->Root )
    {
      v52 = (_RTL_BALANCED_NODE *)((unsigned __int64)v53 ^ (unsigned __int64)v43);
LABEL_44:
      v53 = v52;
      v54 = (unsigned __int8)Min & 1;
      v55 = 0;
      if ( !v52 )
        goto LABEL_57;
      while ( 1 )
      {
        if ( ((unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)v28 ^ (unsigned int)v28) >= ((unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)&v53[-1].0 ^ ((_DWORD)v53 - 8)) )
        {
          v56 = v53->Children[1];
          if ( v54 )
          {
            if ( !v56 )
              goto LABEL_55;
            v56 = (_RTL_BALANCED_NODE *)((unsigned __int64)v53 ^ (unsigned __int64)v56);
          }
          if ( !v56 )
          {
LABEL_55:
            v55 = 1;
            goto LABEL_57;
          }
        }
        else
        {
          v56 = v53->Children[0];
          if ( v54 )
          {
            if ( !v56 )
              break;
            v56 = (_RTL_BALANCED_NODE *)((unsigned __int64)v53 ^ (unsigned __int64)v56);
          }
          if ( !v56 )
            break;
        }
        v53 = v56;
      }
    }
    v55 = 0;
LABEL_57:
    RtlRbInsertNodeEx(v43, v53, v55, (PRTL_BALANCED_NODE)(v28 + 8));
  }
  return a4;
}
