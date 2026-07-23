/*
 * XREFs of MiPerformVadSplitting @ 0x14030B884
 * Callers:
 *     MiDeletePartialVad @ 0x140309F64 (MiDeletePartialVad.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x1402085B0 (PsReturnProcessPagedPoolQuota.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     MiCountSharedPages @ 0x140273BA0 (MiCountSharedPages.c)
 *     MiGetSharedVm @ 0x140287104 (MiGetSharedVm.c)
 *     MiUnlockVadTree @ 0x140287B08 (MiUnlockVadTree.c)
 *     MiInsertVad @ 0x140287F20 (MiInsertVad.c)
 *     MiUnlockWorkingSetExclusive @ 0x14028A580 (MiUnlockWorkingSetExclusive.c)
 *     MiLockVadTree @ 0x14028AB50 (MiLockVadTree.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     MiComputePageCommitment @ 0x1402E4D40 (MiComputePageCommitment.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     MiPostInsertVad @ 0x14030BE50 (MiPostInsertVad.c)
 *     MiAdvanceVadView @ 0x14030BE7C (MiAdvanceVadView.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032FCF8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     MiLockNestedVad @ 0x140A47E58 (MiLockNestedVad.c)
 *     MiUnlockNestedVad @ 0x140A47EA8 (MiUnlockNestedVad.c)
 */

__int64 __fastcall MiPerformVadSplitting(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  int v2; // edx
  __int64 v3; // r13
  __int64 v4; // r15
  __int64 v5; // r14
  __int64 v6; // rcx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rbp
  __int64 v10; // rax
  struct _KTHREAD *v11; // r9
  __int64 v12; // rbx
  unsigned int AbEntrySummary; // eax
  unsigned int v14; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  __int64 v17; // rcx
  int SessionId; // eax
  int v19; // eax
  volatile LONG *v20; // rbx
  KIRQL v21; // al
  KIRQL v22; // r12
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rbx
  __int64 v26; // rdi
  unsigned int v27; // edx
  unsigned __int64 v28; // rax
  int v29; // edx
  struct _KPROCESS *v30; // rsi
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  int v33; // ecx
  unsigned __int64 v34; // rdx
  unsigned int v35; // ecx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  bool v41; // zf
  __int64 result; // rax
  signed __int32 v43; // eax
  signed __int32 v44; // ett
  volatile LONG *SharedVm; // rbx
  unsigned int v46; // edx
  unsigned __int64 v47; // rax
  int v48; // edx
  __int64 v49; // rdx
  unsigned __int64 v50; // r8
  unsigned __int64 v51; // rax
  __int64 v52; // rax
  unsigned __int64 v53; // rsi
  unsigned __int64 v54; // rbx
  unsigned __int64 v55; // rsi
  unsigned __int64 v56; // rax
  volatile LONG *v57; // rbx
  KIRQL v58; // al
  __int64 v59; // rax
  unsigned __int64 v60; // [rsp+40h] [rbp-98h]
  __int64 v61; // [rsp+48h] [rbp-90h]
  __int64 v62; // [rsp+50h] [rbp-88h]
  struct _KTHREAD *v63; // [rsp+58h] [rbp-80h]
  unsigned __int64 v64; // [rsp+68h] [rbp-70h]
  unsigned __int64 v65; // [rsp+70h] [rbp-68h]
  struct _KTHREAD *v66; // [rsp+80h] [rbp-58h]
  unsigned int v67; // [rsp+E0h] [rbp+8h]
  int v68; // [rsp+E8h] [rbp+10h]
  __int64 Process; // [rsp+F0h] [rbp+18h]
  __int64 v70; // [rsp+F8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v2 = *(_DWORD *)(a1 + 16);
  v3 = *(_QWORD *)(a1 + 8);
  Process = (__int64)CurrentThread->ApcState.Process;
  v61 = Process + 1664;
  v66 = CurrentThread;
  v62 = 0LL;
  v65 = *(_QWORD *)(a1 + 24);
  v64 = *(_QWORD *)(a1 + 32);
  v68 = v2;
  v4 = *(_QWORD *)a1;
  if ( v2 == 1 )
  {
    v5 = 0LL;
  }
  else
  {
    v5 = *(_QWORD *)a1;
    if ( v2 == 2 )
      v4 = 0LL;
    else
      v4 = *(_QWORD *)v4;
  }
  v6 = *(unsigned int *)(v3 + 52);
  LODWORD(v6) = v6 & 0x7FFFFFFF;
  v7 = 0LL;
  v8 = ((unsigned __int64)*(unsigned __int8 *)(v3 + 34) << 31) | v6;
  v9 = 0LL;
  v10 = 0x7FFFFFFFDLL;
  if ( v8 != 0x7FFFFFFFDLL )
  {
    v10 = 0LL;
    v7 = v8;
  }
  v60 = v10;
  if ( v2 == 3 )
  {
    v52 = v5;
    if ( (*(unsigned int *)(v5 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 33) << 32))
       - (*(unsigned int *)(v5 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 32) << 32))
       + 1 > (*(unsigned int *)(v4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 33) << 32))
           - (*(unsigned int *)(v4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32))
           + 1 )
      v52 = v4;
    v70 = v52;
    MiLockNestedVad(v52);
  }
  else
  {
    v70 = 0LL;
  }
  --CurrentThread->SpecialApcDisable;
  v11 = KeGetCurrentThread();
  v12 = 0LL;
  v63 = v11;
  _disable();
  AbEntrySummary = v11->AbEntrySummary;
  if ( !v11->AbEntrySummary )
  {
    AbEntrySummary = KiAbTryReclaimOrphanedEntries(v8, v11);
    if ( !AbEntrySummary )
    {
      v17 = Process;
      goto LABEL_12;
    }
    v11 = v63;
  }
  _BitScanForward(&v14, AbEntrySummary);
  v67 = v14;
  v11->AbEntrySummary = AbEntrySummary & ~(1 << v14);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v43 = *SchedulerAssist;
    do
    {
      v44 = v43;
      v43 = _InterlockedCompareExchange(SchedulerAssist, v43 & 0xFFDFFFFF, v43);
    }
    while ( v44 != v43 );
    if ( (v43 & 0x200000) != 0 )
    {
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      v11 = v63;
    }
  }
  _enable();
  v17 = Process;
  v12 = (__int64)(&v11[1].Process + 12 * v67);
  if ( (unsigned __int64)(Process + 1232 - qword_140C659E8) < 0x8000000000LL )
  {
    SessionId = MmGetSessionIdEx((__int64)v11->ApcState.Process);
    v17 = Process;
  }
  else
  {
    SessionId = -1;
  }
  *(_DWORD *)(v12 + 8) = SessionId;
  *(_QWORD *)v12 = (v17 + 1232) & 0x7FFFFFFFFFFFFFFCLL;
LABEL_12:
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 1232), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v17 + 1232), v12, v17 + 1232);
  if ( v12 )
    *(_BYTE *)(v12 + 18) = 1;
  v19 = *(_DWORD *)(v3 + 48);
  if ( v7 )
  {
    if ( (v19 & 0x200000) != 0 )
    {
      SharedVm = (volatile LONG *)MiGetSharedVm(v61);
      v22 = ExAcquireSpinLockExclusive(SharedVm);
      *((_DWORD *)SharedVm + 1) = 0;
      v9 = MiComputePageCommitment(v65, v64, v3, v22, 4, 0LL, 0LL);
    }
    else
    {
      v22 = 17;
      v9 = ((__int64)(((v64 >> 9) & 0x7FFFFFFFF8LL) - ((v65 >> 9) & 0x7FFFFFFFF8LL)) >> 3)
         - MiCountSharedPages(
             v3,
             ((v65 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
             ((v64 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)
         + 1;
    }
    if ( v68 == 1 )
    {
      v53 = v7;
      v23 = v60;
      v24 = v53 - v9;
    }
    else if ( v68 == 2 )
    {
      v24 = v60;
      v23 = v7 - v9;
    }
    else
    {
      if ( (*(_DWORD *)(v3 + 48) & 0x200000) != 0 )
      {
        v24 = MiComputePageCommitment(
                (*(unsigned int *)(v70 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v70 + 32) << 32)) << 12,
                ((*(unsigned int *)(v70 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v70 + 33) << 32)) << 12) | 0xFFF,
                v70,
                v22,
                4,
                0LL,
                0LL);
      }
      else
      {
        v54 = 8
            * ((*(unsigned int *)(v70 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v70 + 32) << 32)) & 0xFFFFFFFFFLL)
            - 0x98000000000LL;
        v55 = 8
            * ((*(unsigned int *)(v70 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v70 + 33) << 32)) & 0xFFFFFFFFFLL)
            - 0x98000000000LL;
        v24 = ((__int64)(v55 - v54) >> 3) - MiCountSharedPages(v70, v54, v55) + 1;
      }
      v23 = v7 - v9 - v24;
      v56 = v23;
      if ( v70 == v5 )
      {
        v23 = v24;
        v24 = v56;
      }
    }
  }
  else
  {
    if ( (v19 & 0x200000) != 0 )
    {
      v20 = (volatile LONG *)MiGetSharedVm(v61);
      v21 = ExAcquireSpinLockExclusive(v20);
      *((_DWORD *)v20 + 1) = 0;
      v22 = v21;
    }
    else
    {
      v22 = 17;
    }
    v23 = v60;
    v24 = v60;
  }
  if ( v22 == 17 )
  {
    v57 = (volatile LONG *)MiGetSharedVm(v61);
    v58 = ExAcquireSpinLockExclusive(v57);
    *((_DWORD *)v57 + 1) = 0;
    v22 = v58;
  }
  MiLockVadTree(3);
  LOBYTE(v25) = 15;
  if ( v5 )
  {
    v46 = *(_DWORD *)(v5 + 52) & 0x80000000;
    if ( (*(_DWORD *)(v5 + 52) & 0x7FFFFFFF | ((unsigned __int64)*(unsigned __int8 *)(v5 + 34) << 31)) == 0x7FFFFFFFDLL )
    {
      LOBYTE(v47) = 15;
      v48 = v46 | 0x7FFFFFFD;
    }
    else
    {
      v47 = v23 >> 31;
      v48 = v23 & 0x7FFFFFFF | v46;
    }
    *(_DWORD *)(v5 + 52) = v48;
    *(_BYTE *)(v5 + 34) = v47;
    v49 = *(unsigned int *)(v5 + 28);
    v50 = (v49 | ((unsigned __int64)*(unsigned __int8 *)(v5 + 33) << 32)) + 1;
    v51 = (v49 | ((unsigned __int64)*(unsigned __int8 *)(v5 + 33) << 32))
        - (*(unsigned int *)(v5 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 32) << 32));
    *(_DWORD *)(v3 + 24) = v49 + 1;
    *(_BYTE *)(v3 + 32) = BYTE4(v50);
    v26 = 8 * v51 + 8;
    MiInsertVad(v5, Process, 3);
  }
  else
  {
    v26 = 0LL;
  }
  if ( v4 )
  {
    v27 = *(_DWORD *)(v4 + 52) & 0x80000000;
    if ( (*(_DWORD *)(v4 + 52) & 0x7FFFFFFF | ((unsigned __int64)*(unsigned __int8 *)(v4 + 34) << 31)) == 0x7FFFFFFFDLL )
    {
      LOBYTE(v28) = 15;
      v29 = v27 | 0x7FFFFFFD;
    }
    else
    {
      v28 = v24 >> 31;
      v29 = v24 & 0x7FFFFFFF | v27;
    }
    v30 = (struct _KPROCESS *)Process;
    *(_DWORD *)(v4 + 52) = v29;
    *(_BYTE *)(v4 + 34) = v28;
    v31 = *(unsigned int *)(v4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32);
    v32 = (*(unsigned int *)(v4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 33) << 32)) - v31;
    *(_DWORD *)(v3 + 28) = *(_DWORD *)(v4 + 24) - 1;
    v26 += 8 * v32 + 8;
    *(_BYTE *)(v3 + 33) = (v31 - 1) >> 32;
    MiInsertVad(v4, Process, 3);
  }
  else
  {
    v30 = (struct _KPROCESS *)Process;
  }
  v33 = *(_DWORD *)(v3 + 52);
  v34 = v33 & 0x7FFFFFFF | ((unsigned __int64)*(unsigned __int8 *)(v3 + 34) << 31);
  if ( v34 == 0x7FFFFFFFDLL )
  {
    v35 = v33 & 0x80000000 | 0x7FFFFFFD;
  }
  else
  {
    if ( (*(_DWORD *)(v3 + 48) & 0x200000) == 0 && v34 < 0x7FFFFFFFDLL )
    {
      v59 = 0LL;
      if ( v26 )
        v59 = v26;
      v62 = v59;
    }
    v25 = v9 >> 31;
    v35 = (v33 ^ v9) & 0x7FFFFFFF ^ v33;
  }
  *(_DWORD *)(v3 + 52) = v35;
  *(_BYTE *)(v3 + 34) = v25;
  MiAdvanceVadView(v3, 0LL);
  MiUnlockVadTree(3, 0x11u);
  MiUnlockWorkingSetExclusive((__int64)&v30[1].ActiveProcessors.StaticBitmap[26], v22, v36, v37);
  if ( v5 )
    MiPostInsertVad(v5, v38, 0LL);
  if ( v4 )
    MiPostInsertVad(v4, v38, 0LL);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&v30[1].Affinity.StaticBitmap[8], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&v30[1].Affinity.StaticBitmap[8]);
  KeAbPostRelease((ULONG_PTR)&v30[1].Affinity.StaticBitmap[8]);
  v41 = v66->SpecialApcDisable++ == -1;
  if ( v41 && ($C71981A45BEB2B45F82C232A7085991E *)v66->ApcState.ApcListHead[0].Flink != &v66->152 )
    KiCheckForKernelApcDelivery(v66, 1LL, v39, v40);
  if ( v70 )
    MiUnlockNestedVad(v70);
  result = v62;
  if ( v62 )
    return PsReturnProcessPagedPoolQuota(v30, v62);
  return result;
}
