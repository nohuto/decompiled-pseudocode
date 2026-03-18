/*
 * XREFs of MiReferenceControlArea @ 0x140287C84
 * Callers:
 *     MiCreateImageOrDataSection @ 0x1406FDCD0 (MiCreateImageOrDataSection.c)
 * Callees:
 *     KeWaitForGate @ 0x140217454 (KeWaitForGate.c)
 *     MiControlAreaRequiresCharge @ 0x140287380 (MiControlAreaRequiresCharge.c)
 *     MiReleaseControlAreaWaiters @ 0x1402879F8 (MiReleaseControlAreaWaiters.c)
 *     MiReferenceActiveControlArea @ 0x140287F58 (MiReferenceActiveControlArea.c)
 *     MiValidateControlAreaPartition @ 0x14028ADEC (MiValidateControlAreaPartition.c)
 *     KeAbPreWait @ 0x14029F580 (KeAbPreWait.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     KeAbPostReleaseEx @ 0x140353BB0 (KeAbPostReleaseEx.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140356250 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     FsRtlReleaseFile @ 0x1406FE310 (FsRtlReleaseFile.c)
 */

__int64 __fastcall MiReferenceControlArea(__int64 a1, __int64 a2, __int64 *a3)
{
  struct _FILE_OBJECT *v4; // rcx
  bool v6; // zf
  __int64 *SectionObjectPointer; // r14
  KIRQL v8; // al
  __int64 v9; // r13
  unsigned __int64 v10; // rbx
  int v11; // r15d
  __int64 *active; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r15
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r10
  _DWORD *v19; // r9
  int v20; // eax
  unsigned __int8 v21; // cl
  struct _KPRCB *v22; // r9
  int v23; // eax
  _DWORD *v24; // r8
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r9
  int v27; // eax
  _DWORD *v28; // r8
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r9
  int v31; // eax
  _DWORD *v32; // r8
  unsigned __int8 v33; // cl
  struct _KPRCB *v34; // r9
  int v35; // eax
  _DWORD *v36; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v39; // eax
  _DWORD *SchedulerAssist; // r8
  __int128 v41; // [rsp+20h] [rbp-30h] BYREF
  __int128 v42; // [rsp+30h] [rbp-20h] BYREF
  char *v43; // [rsp+40h] [rbp-10h]
  struct _FILE_OBJECT *FileObject; // [rsp+90h] [rbp+40h]

  v4 = *(struct _FILE_OBJECT **)(a1 + 56);
  v41 = 0LL;
  v43 = 0LL;
  v6 = (*(_DWORD *)(a1 + 16) & 0x1000000) == 0;
  v42 = 0LL;
  SectionObjectPointer = (__int64 *)v4->SectionObjectPointer;
  FileObject = v4;
  if ( !v6 )
    SectionObjectPointer += 2;
  while ( 1 )
  {
    v8 = ExAcquireSpinLockExclusive(&dword_140C4F100);
    v9 = *SectionObjectPointer;
    v10 = v8;
    if ( !*SectionObjectPointer )
    {
      *SectionObjectPointer = a2;
      v14 = KeAbPreAcquire(SectionObjectPointer, 0LL, 0LL);
      if ( v14 )
        *(_BYTE *)(v14 + 18) = 1;
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4F100);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v39 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v6 = (v39 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v39;
            if ( v6 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v10);
      *a3 = a2;
      return 0LL;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v9 + 72) )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4F100);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v17 = KeGetCurrentIrql();
        if ( v17 <= 0xFu && (unsigned __int8)v10 <= 0xFu && v17 >= 2u )
        {
          v18 = KeGetCurrentPrcb();
          v19 = v18->SchedulerAssist;
          v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
          v6 = (v20 & v19[5]) == 0;
          v19[5] &= v20;
          if ( v6 )
            KiRemoveSystemWorkPriorityKick(v18);
        }
      }
    }
    __writecr8(v10);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4F100);
  v11 = MiValidateControlAreaPartition(a1, v9);
  if ( v11 < 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v21 = KeGetCurrentIrql();
        if ( v21 <= 0xFu && (unsigned __int8)v10 <= 0xFu && v21 >= 2u )
        {
          v22 = KeGetCurrentPrcb();
          v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
          v24 = v22->SchedulerAssist;
          v6 = (v23 & v24[5]) == 0;
          v24[5] &= v23;
          if ( v6 )
            KiRemoveSystemWorkPriorityKick(v22);
        }
      }
    }
LABEL_55:
    __writecr8(v10);
    if ( (*(_DWORD *)a1 & 1) == 0 )
    {
      KeGetCurrentThread()[1].TrapFrame = *(_KTRAP_FRAME **)(a1 + 184);
      FsRtlReleaseFile(FileObject);
      *(_DWORD *)a1 &= ~2u;
    }
    return (unsigned int)v11;
  }
  else
  {
    if ( !(*(_DWORD *)(v9 + 56) & 1 | ((*(_DWORD *)(v9 + 56) & 2) != 0)) )
    {
      if ( (*(_DWORD *)(a1 + 16) & 0x1000000) != 0
        && (*(_DWORD *)(a1 + 20) & 0x100000) != 0
        && !(unsigned int)MiControlAreaRequiresCharge(v9) )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v29 = KeGetCurrentIrql();
            if ( v29 <= 0xFu && (unsigned __int8)v10 <= 0xFu && v29 >= 2u )
            {
              v30 = KeGetCurrentPrcb();
              v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
              v32 = v30->SchedulerAssist;
              v6 = (v31 & v32[5]) == 0;
              v32[5] &= v31;
              if ( v6 )
                KiRemoveSystemWorkPriorityKick(v30);
            }
          }
        }
        v11 = -1073740277;
        goto LABEL_55;
      }
      active = (__int64 *)MiReferenceActiveControlArea(a1, v9);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v33 = KeGetCurrentIrql();
          if ( v33 <= 0xFu && (unsigned __int8)v10 <= 0xFu && v33 >= 2u )
          {
            v34 = KeGetCurrentPrcb();
            v35 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
            v36 = v34->SchedulerAssist;
            v6 = (v35 & v36[5]) == 0;
            v36[5] &= v35;
            if ( v6 )
              KiRemoveSystemWorkPriorityKick(v34);
          }
        }
      }
      __writecr8(v10);
      MiReleaseControlAreaWaiters(active);
      *a3 = v9;
      return 0LL;
    }
    v15 = KeAbPreAcquire(SectionObjectPointer, 0LL, 0LL);
    v16 = v15;
    if ( v15 )
      KeAbPreWait(v15);
    DWORD1(v42) = 0;
    v43 = (char *)&v42 + 8;
    LOWORD(v42) = 263;
    *((_QWORD *)&v42 + 1) = (char *)&v42 + 8;
    BYTE2(v42) = 6;
    DWORD2(v41) = 1;
    *(_QWORD *)&v41 = *(_QWORD *)(v9 + 80);
    *(_QWORD *)(v9 + 80) = &v41;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v25 = KeGetCurrentIrql();
        if ( v25 <= 0xFu && (unsigned __int8)v10 <= 0xFu && v25 >= 2u )
        {
          v26 = KeGetCurrentPrcb();
          v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
          v28 = v26->SchedulerAssist;
          v6 = (v27 & v28[5]) == 0;
          v28[5] &= v27;
          if ( v6 )
            KiRemoveSystemWorkPriorityKick(v26);
        }
      }
    }
    __writecr8(v10);
    if ( (*(_DWORD *)a1 & 1) == 0 )
    {
      KeGetCurrentThread()[1].TrapFrame = *(_KTRAP_FRAME **)(a1 + 184);
      FsRtlReleaseFile(FileObject);
      *(_DWORD *)a1 &= ~2u;
    }
    KeWaitForGate((__int64)&v42, 0x12u);
    if ( v16 )
    {
      KeAbPreAcquire(SectionObjectPointer, v16, 0LL);
      KeAbPostReleaseEx((ULONG_PTR)SectionObjectPointer);
    }
    *a3 = 0LL;
    return 3221226029LL;
  }
}
