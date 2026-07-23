/*
 * XREFs of MiFreePrivateFixupEntryForSystemImage @ 0x14020B148
 * Callers:
 *     MiCountSystemImageCommitment @ 0x14020ABB4 (MiCountSystemImageCommitment.c)
 *     MiGetSystemAddressForImage @ 0x140696090 (MiGetSystemAddressForImage.c)
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 *__fastcall MiFreePrivateFixupEntryForSystemImage(ULONG_PTR BugCheckParameter2, int a2)
{
  PVOID *v3; // rsi
  KIRQL v5; // al
  __int64 *v6; // rbx
  unsigned __int64 v7; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v12; // edx
  bool v13; // zf
  __int64 v14; // rcx
  __int64 **v15; // rax
  unsigned __int8 v16; // cl
  struct _KPRCB *v17; // r9
  _DWORD *v18; // r8
  int v19; // eax

  v3 = 0LL;
  v5 = ExAcquireSpinLockExclusive(&dword_140C658E4);
  v6 = (__int64 *)qword_140C658C0;
  v7 = v5;
  while ( v6 != &qword_140C658C0 )
  {
    v3 = (PVOID *)v6;
    if ( BugCheckParameter2 == v6[2] )
    {
      if ( !a2 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C658E4);
        if ( (_DWORD)KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
            && CurrentIrql <= 0xFu
            && (unsigned __int8)v7 <= 0xFu
            && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
            v13 = (v12 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v12;
            if ( v13 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(v7);
        return v6;
      }
      v14 = *v6;
      v15 = (__int64 **)v6[1];
      if ( *(__int64 **)(*v6 + 8) != v6 || *v15 != v6 )
        __fastfail(3u);
      *v15 = (__int64 *)v14;
      *(_QWORD *)(v14 + 8) = v15;
      break;
    }
    v6 = (__int64 *)*v6;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C658E4);
  if ( (_DWORD)KiIrqlFlags )
  {
    v16 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v16 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v16 >= 2u )
    {
      v17 = KeGetCurrentPrcb();
      v18 = v17->SchedulerAssist;
      v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
      v13 = (v19 & v18[5]) == 0;
      v18[5] &= v19;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick(v17);
    }
  }
  __writecr8(v7);
  if ( a2 )
  {
    if ( v6 == &qword_140C658C0 )
      KeBugCheckEx(0x1Au, 0x1011uLL, BugCheckParameter2, 0LL, 0LL);
    ExFreePoolWithTag(v3[5], 0);
    ExFreePoolWithTag(v3, 0);
  }
  return 0LL;
}
