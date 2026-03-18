/*
 * XREFs of MiAddViewsForSection @ 0x140311CC0
 * Callers:
 *     MiReferenceDataSubsections @ 0x14026CF88 (MiReferenceDataSubsections.c)
 *     MmMapViewInSystemCache @ 0x140285D90 (MmMapViewInSystemCache.c)
 *     MiCommitPagefileBackedSection @ 0x1406A3E60 (MiCommitPagefileBackedSection.c)
 *     MiMapViewOfDataSection @ 0x1406FB4D0 (MiMapViewOfDataSection.c)
 *     MiPfPrepareSequentialReadList @ 0x1407BCB30 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x1407BD420 (MiPfPrepareReadList.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MiCreatePrototypePtes @ 0x14026E564 (MiCreatePrototypePtes.c)
 *     MiDecrementSubsections @ 0x140286920 (MiDecrementSubsections.c)
 *     MiReferenceActiveSubsection @ 0x140286DE0 (MiReferenceActiveSubsection.c)
 *     MiCheckControlArea @ 0x140287660 (MiCheckControlArea.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpAcquireSpinLockExclusive @ 0x14030F870 (ExpAcquireSpinLockExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140461A66 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1405C4B8C (MiReturnCrossPartitionSectionCharges.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14063D8B0 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiAllocateFileExtents @ 0x14096F8CC (MiAllocateFileExtents.c)
 */

__int64 __fastcall MiAddViewsForSection(
        __int64 *BugCheckParameter2,
        unsigned __int64 a2,
        _DWORD *SchedulerAssist,
        __int64 a4)
{
  __int64 v4; // r14
  int v5; // esi
  unsigned int v6; // edi
  ULONG_PTR v8; // r15
  unsigned __int8 CurrentIrql; // bp
  int *v10; // rcx
  int v11; // ecx
  int active; // eax
  unsigned __int64 v13; // rax
  struct _KPRCB *v14; // rcx
  _DWORD *v15; // rdx
  ULONG_PTR v17; // rdi
  struct _KTHREAD *v18; // rbp
  char *v19; // rbx
  __int64 v20; // rdx
  int v21; // r8d
  bool v22; // zf
  __int64 v23; // rcx
  int PrototypePtes; // eax
  unsigned int v25; // ecx
  ULONG_PTR v26; // rdx
  struct _KTHREAD *v27; // r10
  ULONG_PTR v28; // r9
  char *v29; // rcx
  __int64 v30; // r8
  unsigned int i; // r11d
  int v32; // r8d
  unsigned int v33; // eax
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // r10
  _DWORD *v36; // r9
  int v37; // edx
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r10
  _DWORD *v40; // r9
  int v41; // edx
  int v42; // edx
  unsigned __int8 v43; // cl
  struct _KPRCB *v44; // r10
  _DWORD *v45; // r9
  int v46; // edx
  unsigned __int8 v47; // al
  struct _KPRCB *v48; // r10
  _DWORD *v49; // r9
  int v50; // edx
  unsigned int v51; // ebp
  ULONG_PTR v52; // rdx
  struct _KTHREAD *v53; // rcx
  unsigned int v54; // eax
  __int64 v55; // r8
  char *p_Process; // r15
  unsigned int v57; // r9d
  int v58; // r8d
  unsigned __int64 v59; // r15
  __int64 v60; // rsi
  unsigned __int8 v61; // cl
  struct _KPRCB *v62; // r9
  int v63; // eax
  _DWORD *v64; // r8
  KIRQL v65; // al
  _DWORD *v66; // r8
  int v67; // eax
  unsigned __int8 v68; // al
  struct _KPRCB *v69; // r10
  _DWORD *v70; // r9
  int v71; // edx
  unsigned __int8 v72; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v74; // r9
  int v75; // edx
  unsigned int SessionId; // eax
  unsigned int v77; // r9d
  char v78; // [rsp+30h] [rbp-98h]
  unsigned int BugCheckParameter3; // [rsp+34h] [rbp-94h]
  int BugCheckParameter3_4; // [rsp+38h] [rbp-90h]
  int v81; // [rsp+3Ch] [rbp-8Ch]
  __int64 v82; // [rsp+40h] [rbp-88h]
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-80h]
  __int64 v84; // [rsp+50h] [rbp-78h]
  _KPROCESS **v85; // [rsp+58h] [rbp-70h]
  __int64 v86; // [rsp+58h] [rbp-70h]
  struct _KTHREAD *v87; // [rsp+60h] [rbp-68h]
  ULONG_PTR v88; // [rsp+78h] [rbp-50h]
  void *retaddr; // [rsp+C8h] [rbp+0h]
  int BugCheckParameter2a; // [rsp+D0h] [rbp+8h]
  ULONG_PTR BugCheckParameter2b; // [rsp+D0h] [rbp+8h]
  unsigned int v93; // [rsp+E0h] [rbp+18h]
  int FileExtents; // [rsp+E0h] [rbp+18h]
  unsigned int BugCheckParameter1; // [rsp+E8h] [rbp+20h]
  ULONG_PTR BugCheckParameter1a; // [rsp+E8h] [rbp+20h]

  v4 = *BugCheckParameter2;
  v5 = 0;
  v6 = (unsigned int)SchedulerAssist;
  BugCheckParameter1 = (unsigned int)SchedulerAssist;
  v84 = 0LL;
  v8 = (ULONG_PTR)BugCheckParameter2;
  if ( *(_QWORD *)(*BugCheckParameter2 + 64) )
  {
    BugCheckParameter2a = 1;
    CurrentThread = 0LL;
    v82 = 0LL;
  }
  else
  {
    v23 = *(_QWORD *)v4;
    BugCheckParameter2a = 0;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v82 = v23;
    ExAcquirePushLockExclusiveEx(v23 + 40, 0LL);
  }
  BugCheckParameter3_4 = v6 & 0x180;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v10 = (int *)(v4 + 72);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v10, CurrentIrql);
  else
    ExpAcquireSpinLockExclusive(v10, CurrentIrql, (__int64)SchedulerAssist, a4);
  if ( (v6 & 1) != 0 )
  {
    ++*(_QWORD *)(v4 + 40);
    ++*(_DWORD *)(v4 + 88);
    v6 |= 4u;
    v11 = v6;
    BugCheckParameter1 = v6;
  }
  else
  {
    v11 = v6;
  }
  BugCheckParameter3 = -1;
  v78 = CurrentIrql + 1;
  do
  {
    v93 = *(_DWORD *)(v8 + 44);
    v88 = v8;
    if ( *(_QWORD *)(v8 + 8) )
    {
      if ( (v6 & 0x400) != 0 )
      {
        FileExtents = -1073741800;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v72 = KeGetCurrentIrql();
            if ( v72 <= 0xFu && CurrentIrql <= 0xFu && v72 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v74 = CurrentPrcb->SchedulerAssist;
              v75 = ~(unsigned __int16)(-1LL << v78);
              v22 = (v75 & v74[5]) == 0;
              v74[5] &= v75;
              if ( v22 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(CurrentIrql);
        v51 = BugCheckParameter2a;
        if ( !BugCheckParameter2a )
        {
          v52 = v82 + 40;
          BugCheckParameter2b = v82 + 40;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v82 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          {
            ExfTryToWakePushLock(v52);
            v52 = v82 + 40;
          }
          v53 = KeGetCurrentThread();
          BugCheckParameter1a = (ULONG_PTR)v53;
          if ( v52 - qword_140C50630 >= 0x8000000000LL )
          {
            v55 = 0xFFFFFFFFLL;
          }
          else
          {
            SessionId = MmGetSessionIdEx((__int64)v53->ApcState.Process);
            v53 = (struct _KTHREAD *)BugCheckParameter1a;
            v55 = SessionId;
            v52 = v82 + 40;
          }
          _disable();
          p_Process = (char *)&v53[1].Process;
          v77 = 0;
          while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != (v52 & 0x7FFFFFFFFFFFFFFCLL)
               || !p_Process[18]
               || (*(_DWORD *)p_Process & 1) != 0
               || *((_DWORD *)p_Process + 2) != (_DWORD)v55 )
          {
            ++v77;
            p_Process += 96;
            if ( v77 >= 6 )
            {
              if ( (*((_DWORD *)&v53->0 + 1) & 0x10000) == 0 )
                KeBugCheckEx(0x162u, (ULONG_PTR)v53, v52, (unsigned int)v55, 0LL);
LABEL_145:
              _enable();
              goto LABEL_146;
            }
          }
          p_Process[18] = 0;
          if ( *(__int64 *)p_Process >= 0 )
            goto LABEL_140;
LABEL_139:
          *p_Process |= 2u;
          _enable();
          KiAbEntryRemoveFromTree(p_Process, v52, v55);
          _disable();
          v53 = (struct _KTHREAD *)BugCheckParameter1a;
          v52 = BugCheckParameter2b;
LABEL_140:
          v58 = *((_DWORD *)p_Process + 22);
          *((_DWORD *)p_Process + 22) = 0;
          p_Process[17] = 0;
          *(_QWORD *)p_Process = 0LL;
          v53->AbEntrySummary |= 1 << p_Process[16];
          _enable();
          if ( v58 )
            KiAbThreadRemoveBoostsSlow((ULONG_PTR)v53, v52, v58);
LABEL_146:
          v22 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v22
            && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery();
          }
        }
LABEL_149:
        v25 = FileExtents;
        goto LABEL_150;
      }
      active = MiReferenceActiveSubsection((__int64 *)v8, v11, CurrentIrql);
      FileExtents = active;
      if ( active < 0 )
      {
        if ( active != -1073741302 )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v47 = KeGetCurrentIrql();
              if ( v47 <= 0xFu && CurrentIrql <= 0xFu && v47 >= 2u )
              {
                v48 = KeGetCurrentPrcb();
                v49 = v48->SchedulerAssist;
                v50 = ~(unsigned __int16)(-1LL << v78);
                v22 = (v50 & v49[5]) == 0;
                v49[5] &= v50;
                if ( v22 )
                  KiRemoveSystemWorkPriorityKick(v48);
              }
            }
          }
          __writecr8(CurrentIrql);
          v51 = BugCheckParameter2a;
          if ( !BugCheckParameter2a )
          {
            v52 = v82 + 40;
            BugCheckParameter2b = v82 + 40;
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v82 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            {
              ExfTryToWakePushLock(v52);
              v52 = v82 + 40;
            }
            v53 = KeGetCurrentThread();
            BugCheckParameter1a = (ULONG_PTR)v53;
            if ( v52 - qword_140C50630 >= 0x8000000000LL )
            {
              v55 = 0xFFFFFFFFLL;
            }
            else
            {
              v54 = MmGetSessionIdEx((__int64)v53->ApcState.Process);
              v53 = (struct _KTHREAD *)BugCheckParameter1a;
              v55 = v54;
              v52 = v82 + 40;
            }
            _disable();
            p_Process = (char *)&v53[1].Process;
            v57 = 0;
            while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != (v52 & 0x7FFFFFFFFFFFFFFCLL)
                 || !p_Process[18]
                 || (*(_DWORD *)p_Process & 1) != 0
                 || *((_DWORD *)p_Process + 2) != (_DWORD)v55 )
            {
              ++v57;
              p_Process += 96;
              if ( v57 >= 6 )
              {
                if ( (*((_DWORD *)&v53->0 + 1) & 0x10000) == 0 )
                  KeBugCheckEx(0x162u, (ULONG_PTR)v53, v52, (unsigned int)v55, 0LL);
                goto LABEL_145;
              }
            }
            p_Process[18] = 0;
            if ( *(__int64 *)p_Process >= 0 )
              goto LABEL_140;
            goto LABEL_139;
          }
          goto LABEL_149;
        }
        goto LABEL_52;
      }
      if ( BugCheckParameter2a && (*(_DWORD *)(v8 + 52) & 0x40000000) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v38 = KeGetCurrentIrql();
            if ( v38 <= 0xFu && CurrentIrql <= 0xFu && v38 >= 2u )
            {
              v39 = KeGetCurrentPrcb();
              v40 = v39->SchedulerAssist;
              v41 = ~(unsigned __int16)(-1LL << v78);
              v22 = (v41 & v40[5]) == 0;
              v40[5] &= v41;
              if ( v22 )
                KiRemoveSystemWorkPriorityKick(v39);
            }
          }
        }
        __writecr8(CurrentIrql);
        if ( (v6 & 0x800) != 0 )
        {
          v25 = -1073741078;
          FileExtents = -1073741078;
LABEL_167:
          v84 = v8;
LABEL_168:
          v51 = BugCheckParameter2a;
LABEL_150:
          if ( v84 )
          {
            v59 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72));
            if ( (v6 & 5) == 0 )
              v5 = BugCheckParameter3_4 | 8;
            v60 = MiDecrementSubsections((ULONG_PTR)BugCheckParameter2, v84, v5);
            ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v61 = KeGetCurrentIrql();
                if ( v61 <= 0xFu && (unsigned __int8)v59 <= 0xFu && v61 >= 2u )
                {
                  v62 = KeGetCurrentPrcb();
                  v63 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v59 + 1));
                  v64 = v62->SchedulerAssist;
                  v22 = (v63 & v64[5]) == 0;
                  v64[5] &= v63;
                  if ( v22 )
                    KiRemoveSystemWorkPriorityKick(v62);
                }
              }
            }
            __writecr8(v59);
            if ( v60 )
              MiReturnCrossPartitionSectionCharges(
                *(_QWORD *)(qword_140C51F48 + 8LL * (*(_WORD *)(v4 + 60) & 0x3FF)),
                v51,
                v60);
            v25 = FileExtents;
          }
          if ( (v6 & 1) != 0 )
          {
            v65 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72));
            --*(_QWORD *)(v4 + 40);
            --*(_DWORD *)(v4 + 88);
            MiCheckControlArea(v4, v65, v66);
            return (unsigned int)FileExtents;
          }
          return v25;
        }
        FileExtents = MiAllocateFileExtents(v8, 0, -1);
        v25 = FileExtents;
        if ( (int)(FileExtents + 0x80000000) >= 0 && FileExtents != -1073741302 )
          goto LABEL_167;
        ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72));
        if ( FileExtents < 0 )
        {
          v42 = 0;
          if ( (v6 & 5) == 0 )
            v42 = BugCheckParameter3_4 | 8;
          BugCheckParameter1 = v42;
          v86 = MiDecrementSubsections(v8, v8, v42);
          if ( v86 )
          {
            ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v43 = KeGetCurrentIrql();
                if ( v43 <= 0xFu && CurrentIrql <= 0xFu && v43 >= 2u )
                {
                  v44 = KeGetCurrentPrcb();
                  v45 = v44->SchedulerAssist;
                  v46 = ~(unsigned __int16)(-1LL << v78);
                  v22 = (v46 & v45[5]) == 0;
                  v45[5] &= v46;
                  if ( v22 )
                    KiRemoveSystemWorkPriorityKick(v44);
                }
              }
            }
            __writecr8(CurrentIrql);
            MiReturnCrossPartitionSectionCharges(
              *(_QWORD *)(qword_140C51F48 + 8LL * (*(_WORD *)(v4 + 60) & 0x3FF)),
              1LL,
              v86);
            goto LABEL_77;
          }
          goto LABEL_52;
        }
      }
    }
    else
    {
      v81 = *(_DWORD *)(v8 + 52) & 0x3FFFFFFF;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v34 = KeGetCurrentIrql();
          if ( v34 <= 0xFu && CurrentIrql <= 0xFu && v34 >= 2u )
          {
            v35 = KeGetCurrentPrcb();
            v36 = v35->SchedulerAssist;
            v37 = ~(unsigned __int16)(-1LL << v78);
            v22 = (v37 & v36[5]) == 0;
            v36[5] &= v37;
            if ( v22 )
              KiRemoveSystemWorkPriorityKick(v35);
          }
        }
      }
      __writecr8(CurrentIrql);
      if ( !BugCheckParameter2a )
      {
        v26 = v82 + 40;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v82 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        {
          ExfTryToWakePushLock(v26);
          v26 = v82 + 40;
        }
        v27 = KeGetCurrentThread();
        v87 = v27;
        if ( v26 - qword_140C50630 < 0x8000000000LL )
        {
          v33 = MmGetSessionIdEx((__int64)v27->ApcState.Process);
          v26 = v82 + 40;
          v27 = v87;
          v28 = v33;
        }
        else
        {
          v28 = 0xFFFFFFFFLL;
        }
        _disable();
        v29 = (char *)&v27[1].Process;
        v85 = &v27[1].Process;
        v30 = v26 & 0x7FFFFFFFFFFFFFFCLL;
        for ( i = 0; i < 6; ++i )
        {
          if ( (*(_QWORD *)v29 & 0x7FFFFFFFFFFFFFFCLL) == v30
            && v29[18]
            && (*(_DWORD *)v29 & 1) == 0
            && *((_DWORD *)v29 + 2) == (_DWORD)v28 )
          {
            v29[18] = 0;
            if ( *(__int64 *)v29 < 0 )
            {
              *v29 |= 2u;
              _enable();
              KiAbEntryRemoveFromTree(v29, v26, v30);
              _disable();
              v29 = (char *)v85;
              v26 = v82 + 40;
              v27 = v87;
            }
            v32 = *((_DWORD *)v29 + 22);
            *((_DWORD *)v29 + 22) = 0;
            v29[17] = 0;
            *(_QWORD *)v29 = 0LL;
            v27->AbEntrySummary |= 1 << v29[16];
            _enable();
            if ( v32 )
              KiAbThreadRemoveBoostsSlow((ULONG_PTR)v27, v26, v32);
            goto LABEL_68;
          }
          v29 += 96;
          v85 = (_KPROCESS **)v29;
        }
        if ( (*((_DWORD *)&v27->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v27, v26, v28, 0LL);
        _enable();
LABEL_68:
        v22 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v22
          && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
      }
      if ( (v6 & 2) != 0 )
        return 3221225865LL;
      if ( (*(_BYTE *)(v4 + 62) & 0xC) != 0 && (v6 & 0x800) != 0 )
        return 3221226218LL;
      PrototypePtes = MiCreatePrototypePtes(v8, BugCheckParameter1, v93 - v81, v93);
      FileExtents = PrototypePtes;
      v25 = PrototypePtes;
      if ( PrototypePtes < 0 )
      {
        if ( PrototypePtes != -1073741302 )
          goto LABEL_168;
        if ( !BugCheckParameter2a )
        {
          --CurrentThread->SpecialApcDisable;
          ExAcquirePushLockExclusiveEx(v82 + 40, 0LL);
        }
LABEL_77:
        ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72));
LABEL_52:
        v11 = BugCheckParameter1;
        continue;
      }
      if ( !BugCheckParameter2a )
      {
        --CurrentThread->SpecialApcDisable;
        ExAcquirePushLockExclusiveEx(v82 + 40, 0LL);
      }
      ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72));
    }
    if ( a2 )
    {
      v13 = *(unsigned int *)(v8 + 44);
      if ( a2 <= v13 )
        break;
      a2 -= v13;
    }
    v8 = *(_QWORD *)(v8 + 16);
    v84 = v88;
    if ( BugCheckParameter2a )
      goto LABEL_52;
    v11 = BugCheckParameter3_4 | 4;
    v84 = v88;
    BugCheckParameter1 = BugCheckParameter3_4 | 4;
  }
  while ( v8 );
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v4 + 72, retaddr);
  else
    *(_DWORD *)(v4 + 72) = 0;
  v14 = KeGetCurrentPrcb();
  v15 = v14->SchedulerAssist;
  if ( v15 )
  {
    if ( v14->NestingLevel <= 1u )
    {
      v67 = v15[6] - 1;
      v15[6] = v67;
      if ( !v67 )
        KiRemoveSystemWorkPriorityKick(v14);
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v68 = KeGetCurrentIrql();
      if ( v68 <= 0xFu && CurrentIrql <= 0xFu && v68 >= 2u )
      {
        v69 = KeGetCurrentPrcb();
        v70 = v69->SchedulerAssist;
        v71 = ~(unsigned __int16)(-1LL << v78);
        v22 = (v71 & v70[5]) == 0;
        v70[5] &= v71;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick(v69);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( !BugCheckParameter2a )
  {
    v17 = v82 + 40;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v82 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v17);
    v18 = KeGetCurrentThread();
    if ( v17 - qword_140C50630 < 0x8000000000LL )
      BugCheckParameter3 = MmGetSessionIdEx((__int64)v18->ApcState.Process);
    _disable();
    v19 = (char *)&v18[1].Process;
    v20 = 0LL;
    do
    {
      if ( (*(_QWORD *)v19 & 0x7FFFFFFFFFFFFFFCLL) == (v17 & 0x7FFFFFFFFFFFFFFCLL)
        && v19[18]
        && (*(_DWORD *)v19 & 1) == 0
        && *((_DWORD *)v19 + 2) == BugCheckParameter3 )
      {
        v19[18] = 0;
        if ( *(__int64 *)v19 < 0 )
        {
          *v19 |= 2u;
          _enable();
          KiAbEntryRemoveFromTree(v19, v20, BugCheckParameter3);
          _disable();
        }
        v21 = *((_DWORD *)v19 + 22);
        *((_DWORD *)v19 + 22) = 0;
        v19[17] = 0;
        *(_QWORD *)v19 = 0LL;
        v18->AbEntrySummary |= 1 << v19[16];
        _enable();
        if ( v21 )
          KiAbThreadRemoveBoostsSlow((ULONG_PTR)v18, v17, v21);
        goto LABEL_36;
      }
      v20 = (unsigned int)(v20 + 1);
      v19 += 96;
    }
    while ( (unsigned int)v20 < 6 );
    if ( (*((_DWORD *)&v18->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v18, v17, BugCheckParameter3, 0LL);
    _enable();
LABEL_36:
    v22 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v22 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  return 0LL;
}
