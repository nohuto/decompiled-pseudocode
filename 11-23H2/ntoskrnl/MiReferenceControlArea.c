/*
 * XREFs of MiReferenceControlArea @ 0x140288548
 * Callers:
 *     MiCreateImageOrDataSection @ 0x140723550 (MiCreateImageOrDataSection.c)
 * Callees:
 *     MiControlAreaRequiresCharge @ 0x140214CC4 (MiControlAreaRequiresCharge.c)
 *     MiReferenceActiveControlArea @ 0x140219910 (MiReferenceActiveControlArea.c)
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiValidateControlAreaPartition @ 0x1402A2884 (MiValidateControlAreaPartition.c)
 *     KeAbPostReleaseEx @ 0x1402BD780 (KeAbPostReleaseEx.c)
 *     MiReleaseControlAreaWaiters @ 0x1402E41BC (MiReleaseControlAreaWaiters.c)
 *     KeAbPreWait @ 0x1402FD500 (KeAbPreWait.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140312480 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeWaitForGate @ 0x14034AF20 (KeWaitForGate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     FsRtlReleaseFile @ 0x140723B10 (FsRtlReleaseFile.c)
 */

__int64 __fastcall MiReferenceControlArea(__int64 a1, __int64 a2, __int64 *a3)
{
  bool v3; // zf
  struct _FILE_OBJECT *v6; // rax
  __int64 *SectionObjectPointer; // r14
  KIRQL v8; // al
  __int64 v9; // r13
  unsigned __int64 v10; // rbx
  int v11; // r15d
  int v12; // edx
  __int64 active; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r15
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r10
  _DWORD *v22; // r9
  int v23; // eax
  unsigned __int8 v24; // cl
  struct _KPRCB *v25; // r9
  int v26; // eax
  _DWORD *v27; // r8
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r9
  int v30; // eax
  _DWORD *v31; // r8
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r9
  int v34; // eax
  _DWORD *v35; // r8
  unsigned __int8 v36; // cl
  struct _KPRCB *v37; // r9
  int v38; // eax
  _DWORD *v39; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v42; // eax
  _DWORD *SchedulerAssist; // r8
  __int128 v44; // [rsp+20h] [rbp-30h] BYREF
  __int128 v45; // [rsp+30h] [rbp-20h] BYREF
  char *v46; // [rsp+40h] [rbp-10h]
  struct _FILE_OBJECT *FileObject; // [rsp+90h] [rbp+40h]

  v3 = (*(_DWORD *)(a1 + 16) & 0x1000000) == 0;
  v46 = 0LL;
  v6 = *(struct _FILE_OBJECT **)(a1 + 56);
  v44 = 0LL;
  FileObject = v6;
  v45 = 0LL;
  SectionObjectPointer = (__int64 *)v6->SectionObjectPointer;
  if ( !v3 )
    SectionObjectPointer += 2;
  while ( 1 )
  {
    v8 = ExAcquireSpinLockExclusive(&dword_140C65540);
    v9 = *SectionObjectPointer;
    v10 = v8;
    if ( !*SectionObjectPointer )
    {
      *SectionObjectPointer = a2;
      v15 = KeAbPreAcquire((__int64)SectionObjectPointer, 0LL);
      if ( v15 )
        *(_BYTE *)(v15 + 18) = 1;
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C65540);
      if ( (_DWORD)KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
          && CurrentIrql <= 0xFu
          && (unsigned __int8)v10 <= 0xFu
          && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v42 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v3 = (v42 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v42;
          if ( v3 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v10);
      *a3 = a2;
      return 0LL;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v9 + 72) )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C65540);
    if ( (_DWORD)KiIrqlFlags )
    {
      v20 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v20 <= 0xFu && (unsigned __int8)v10 <= 0xFu && v20 >= 2u )
      {
        v21 = KeGetCurrentPrcb();
        v22 = v21->SchedulerAssist;
        v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
        v3 = (v23 & v22[5]) == 0;
        v22[5] &= v23;
        if ( v3 )
          KiRemoveSystemWorkPriorityKick(v21);
      }
    }
    __writecr8(v10);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C65540);
  v11 = MiValidateControlAreaPartition(a1, v9);
  if ( v11 < 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
    if ( (_DWORD)KiIrqlFlags )
    {
      v24 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v24 <= 0xFu && (unsigned __int8)v10 <= 0xFu && v24 >= 2u )
      {
        v25 = KeGetCurrentPrcb();
        v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
        v27 = v25->SchedulerAssist;
        v3 = (v26 & v27[5]) == 0;
        v27[5] &= v26;
        if ( v3 )
          KiRemoveSystemWorkPriorityKick(v25);
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
      if ( (*(_DWORD *)(a1 + 16) & 0x1000000) != 0 )
      {
        v12 = *(_DWORD *)(a1 + 20);
        if ( (v12 & 0x100000) != 0 && !(unsigned int)MiControlAreaRequiresCharge(v9, ((v12 & 0x200000) == 0) | 2u) )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
          if ( (_DWORD)KiIrqlFlags )
          {
            v32 = KeGetCurrentIrql();
            if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v32 <= 0xFu && (unsigned __int8)v10 <= 0xFu && v32 >= 2u )
            {
              v33 = KeGetCurrentPrcb();
              v34 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
              v35 = v33->SchedulerAssist;
              v3 = (v34 & v35[5]) == 0;
              v35[5] &= v34;
              if ( v3 )
                KiRemoveSystemWorkPriorityKick(v33);
            }
          }
          v11 = -1073740277;
          goto LABEL_55;
        }
      }
      active = MiReferenceActiveControlArea((_DWORD *)a1, v9);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
      if ( (_DWORD)KiIrqlFlags )
      {
        v36 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v36 <= 0xFu && (unsigned __int8)v10 <= 0xFu && v36 >= 2u )
        {
          v37 = KeGetCurrentPrcb();
          v38 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
          v39 = v37->SchedulerAssist;
          v3 = (v38 & v39[5]) == 0;
          v39[5] &= v38;
          if ( v3 )
            KiRemoveSystemWorkPriorityKick(v37);
        }
      }
      __writecr8(v10);
      MiReleaseControlAreaWaiters(active);
      *a3 = v9;
      return 0LL;
    }
    v16 = KeAbPreAcquire((__int64)SectionObjectPointer, 0LL);
    v19 = v16;
    if ( v16 )
      KeAbPreWait(v16, v17, v18);
    DWORD1(v45) = 0;
    v46 = (char *)&v45 + 8;
    LOWORD(v45) = 263;
    *((_QWORD *)&v45 + 1) = (char *)&v45 + 8;
    BYTE2(v45) = 6;
    DWORD2(v44) = 1;
    *(_QWORD *)&v44 = *(_QWORD *)(v9 + 80);
    *(_QWORD *)(v9 + 80) = &v44;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
    if ( (_DWORD)KiIrqlFlags )
    {
      v28 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v28 <= 0xFu && (unsigned __int8)v10 <= 0xFu && v28 >= 2u )
      {
        v29 = KeGetCurrentPrcb();
        v30 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
        v31 = v29->SchedulerAssist;
        v3 = (v30 & v31[5]) == 0;
        v31[5] &= v30;
        if ( v3 )
          KiRemoveSystemWorkPriorityKick(v29);
      }
    }
    __writecr8(v10);
    if ( (*(_DWORD *)a1 & 1) == 0 )
    {
      KeGetCurrentThread()[1].TrapFrame = *(_KTRAP_FRAME **)(a1 + 184);
      FsRtlReleaseFile(FileObject);
      *(_DWORD *)a1 &= ~2u;
    }
    KeWaitForGate(&v45, 18LL);
    if ( v19 )
    {
      KeAbPreAcquire((__int64)SectionObjectPointer, v19);
      KeAbPostReleaseEx((ULONG_PTR)SectionObjectPointer);
    }
    *a3 = 0LL;
    return 3221226029LL;
  }
}
