/*
 * XREFs of MiSectionCreated @ 0x140281DE0
 * Callers:
 *     MiCreateNewSection @ 0x1406F914C (MiCreateNewSection.c)
 * Callees:
 *     MiInitializeNewImageSectionProtos @ 0x140243208 (MiInitializeNewImageSectionProtos.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiSectionCreated(_DWORD *a1, __int64 a2, __int64 a3, __int64 *a4)
{
  volatile LONG *v4; // r15
  unsigned __int64 v8; // rdi
  __int64 *v9; // rsi
  __int64 v10; // rsi
  volatile LONG *v11; // rbp
  __int64 v12; // r12
  __int64 *v13; // rsi
  char v14; // cl
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v19; // eax
  bool v20; // zf
  __int64 v21; // rdx
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r11
  _DWORD *v24; // r9
  int v25; // edx

  v4 = (volatile LONG *)(a3 + 72);
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a3 + 72));
  if ( ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0 )
    *(_DWORD *)(a3 + 56) |= 0x200u;
  v9 = *(__int64 **)(a2 + 40);
  if ( (*(_DWORD *)(a3 + 56) & 0x20) != 0 )
  {
    v10 = v9[2];
    v11 = (volatile LONG *)(v10 + 72);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v10 + 72));
    v12 = 0LL;
    *(_QWORD *)(a3 + 80) = *(_QWORD *)(v10 + 80);
  }
  else
  {
    v10 = *v9;
    v11 = (volatile LONG *)(v10 + 72);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v10 + 72));
    v12 = *(_QWORD *)(v10 + 80);
  }
  *(_QWORD *)(a3 + 64) = *(_QWORD *)(v10 + 64);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C4F100);
  v13 = *(__int64 **)(a2 + 40);
  if ( (*(_DWORD *)(a3 + 56) & 0x20) != 0 )
  {
    v13[2] = a3;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4F100);
    ExReleaseSpinLockExclusiveFromDpcLevel(v11);
    ExReleaseSpinLockExclusiveFromDpcLevel(v4);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
          v20 = (v19 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v19;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v8);
    MiInitializeNewImageSectionProtos(a3, a4);
  }
  else
  {
    v14 = *(_BYTE *)(a3 + 62);
    if ( (v14 & 0xC) != 0 && (*a1 & 0x20000) == 0 )
    {
      v21 = v13[2];
      if ( v21 )
      {
        if ( (*(_DWORD *)(v21 + 56) & 3) != 0 || (*(_BYTE *)(v21 + 62) & 0xC) == 4 )
          *(_BYTE *)(a3 + 62) = v14 & 0xF3 | 8;
      }
    }
    *v13 = a3;
    *(_DWORD *)(a3 + 56) &= ~2u;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4F100);
    ExReleaseSpinLockExclusiveFromDpcLevel(v11);
    ExReleaseSpinLockExclusiveFromDpcLevel(v4);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v22 = KeGetCurrentIrql();
        if ( v22 <= 0xFu && (unsigned __int8)v8 <= 0xFu && v22 >= 2u )
        {
          v23 = KeGetCurrentPrcb();
          v24 = v23->SchedulerAssist;
          v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
          v20 = (v25 & v24[5]) == 0;
          v24[5] &= v25;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(v23);
        }
      }
    }
    __writecr8(v8);
    KeAbPostRelease((ULONG_PTR)v13);
  }
  return v12;
}
