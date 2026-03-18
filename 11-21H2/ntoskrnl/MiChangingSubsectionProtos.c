/*
 * XREFs of MiChangingSubsectionProtos @ 0x14059D69C
 * Callers:
 *     MmPurgeSection @ 0x14027F360 (MmPurgeSection.c)
 *     MiPurgeFileOnlyPfn @ 0x1405A0774 (MiPurgeFileOnlyPfn.c)
 *     MiAllocateFileExtents @ 0x14096F8CC (MiAllocateFileExtents.c)
 * Callees:
 *     KeWaitForGate @ 0x140217454 (KeWaitForGate.c)
 *     KeAbPreWait @ 0x14029F580 (KeAbPreWait.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     KeAbPostReleaseEx @ 0x140353BB0 (KeAbPostReleaseEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiUnlinkSubsectionWaitBlock @ 0x1405A19E0 (MiUnlinkSubsectionWaitBlock.c)
 */

__int64 __fastcall MiChangingSubsectionProtos(_QWORD *BugCheckParameter2, char a2, __int64 a3)
{
  __int64 v3; // r12
  int v4; // r13d
  unsigned int v5; // ebx
  volatile LONG *v8; // rbp
  unsigned __int64 v9; // rdi
  bool v10; // zf
  __int64 *v11; // rcx
  __int64 *v12; // r12
  __int64 *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r10
  _DWORD *v18; // r9
  int v19; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v22; // eax
  _DWORD *SchedulerAssist; // r8
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r9
  int v26; // eax
  _DWORD *v27; // r8
  __int64 v28; // rax
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r9
  int v31; // eax
  _DWORD *v32; // r8
  __int64 v33; // rcx
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // r10
  int v36; // edx
  _DWORD *v37; // r9
  unsigned __int64 v39; // [rsp+20h] [rbp-48h]
  int v40; // [rsp+70h] [rbp+8h]
  __int64 v42; // [rsp+88h] [rbp+20h]

  v3 = *BugCheckParameter2;
  v4 = a2 & 0x10;
  v42 = *BugCheckParameter2;
  v5 = 0;
  v40 = v4;
  v8 = (volatile LONG *)(*BugCheckParameter2 + 72LL);
  while ( 1 )
  {
    v9 = ExAcquireSpinLockExclusive(v8);
    if ( v4 )
    {
      MiUnlinkSubsectionWaitBlock(BugCheckParameter2, a3, 1LL);
      v10 = *(_DWORD *)(a3 + 12) == 2;
      *(_DWORD *)(a3 + 8) = 0;
      if ( v10 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(v8);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v10 = (v22 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v22;
              if ( v10 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
        }
        v5 = -1073740748;
        goto LABEL_67;
      }
    }
    *(_DWORD *)(a3 + 8) = (a2 & 8) != 0 ? 0x40 : 0;
    if ( (a2 & 0x20) != 0 )
      *(_DWORD *)(a3 + 8) |= 0x100u;
    if ( v40 )
      *(_DWORD *)(a3 + 8) |= 0x80u;
    if ( BugCheckParameter2[1] && (a2 & 1) != 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v8);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v24 = KeGetCurrentIrql();
          if ( v24 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v24 >= 2u )
          {
            v25 = KeGetCurrentPrcb();
            v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
            v27 = v25->SchedulerAssist;
            v10 = (v26 & v27[5]) == 0;
            v27[5] &= v26;
            if ( v10 )
              KiRemoveSystemWorkPriorityKick((__int64)v25);
          }
        }
      }
      v5 = -1073741302;
      goto LABEL_67;
    }
    v39 = 0LL;
    v11 = 0LL;
    if ( (a2 & 8) == 0 )
    {
      if ( (*(_DWORD *)(v3 + 56) & 0x20) != 0 )
        v11 = *(__int64 **)(v3 + 80);
      else
        v11 = (__int64 *)BugCheckParameter2[3];
      while ( v11 )
      {
        v12 = v11;
        if ( (v11[1] & 0x40) == 0 )
        {
          v13 = (__int64 *)KeAbPreAcquire((__int64)BugCheckParameter2, 0LL);
          v39 = (unsigned __int64)v13;
          v11 = v12;
          if ( v13 )
          {
            KeAbPreWait(v13, v14, v15);
            v11 = v12;
          }
          break;
        }
        v11 = (__int64 *)*v11;
      }
    }
    *(_DWORD *)(a3 + 12) = 0;
    *(_WORD *)(a3 + 16) = 263;
    *(_BYTE *)(a3 + 18) = 6;
    *(_DWORD *)(a3 + 20) = 0;
    *(_QWORD *)(a3 + 32) = a3 + 24;
    *(_QWORD *)(a3 + 24) = a3 + 24;
    if ( (*(_DWORD *)(v42 + 56) & 0x20) != 0 )
    {
      *(_QWORD *)a3 = *(_QWORD *)(v42 + 80);
      *(_QWORD *)(v42 + 80) = a3;
    }
    else
    {
      *(_QWORD *)a3 = BugCheckParameter2[3];
      BugCheckParameter2[3] = a3;
    }
    if ( (a2 & 8) != 0 )
      break;
    if ( !v11 )
    {
      v28 = KeAbPreAcquire((__int64)BugCheckParameter2, 0LL);
      if ( v28 )
        *(_BYTE *)(v28 + 18) = 1;
      ExReleaseSpinLockExclusiveFromDpcLevel(v8);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v29 = KeGetCurrentIrql();
          if ( v29 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v29 >= 2u )
          {
            v30 = KeGetCurrentPrcb();
            v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
            v32 = v30->SchedulerAssist;
            v10 = (v31 & v32[5]) == 0;
            v32[5] &= v31;
            if ( v10 )
            {
              v33 = (__int64)v30;
LABEL_66:
              KiRemoveSystemWorkPriorityKick(v33);
              goto LABEL_67;
            }
          }
        }
      }
      goto LABEL_67;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v8);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v16 = KeGetCurrentIrql();
        if ( v16 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v16 >= 2u )
        {
          v17 = KeGetCurrentPrcb();
          v18 = v17->SchedulerAssist;
          v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v10 = (v19 & v18[5]) == 0;
          v18[5] &= v19;
          if ( v10 )
            KiRemoveSystemWorkPriorityKick((__int64)v17);
        }
      }
    }
    __writecr8(v9);
    KeWaitForGate(a3 + 16, 0x12u);
    v3 = v42;
    v4 = v40;
    if ( v39 )
    {
      KeAbPreAcquire((__int64)BugCheckParameter2, v39);
      KeAbPostReleaseEx((ULONG_PTR)BugCheckParameter2, v39);
    }
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v8);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v34 = KeGetCurrentIrql();
      if ( v34 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v34 >= 2u )
      {
        v35 = KeGetCurrentPrcb();
        v36 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v37 = v35->SchedulerAssist;
        v10 = (v36 & v37[5]) == 0;
        v37[5] &= v36;
        if ( v10 )
        {
          v33 = (__int64)v35;
          goto LABEL_66;
        }
      }
    }
  }
LABEL_67:
  __writecr8(v9);
  return v5;
}
