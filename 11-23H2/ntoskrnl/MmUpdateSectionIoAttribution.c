/*
 * XREFs of MmUpdateSectionIoAttribution @ 0x14020EAE8
 * Callers:
 *     CcMapAndCopyInToCache @ 0x1402CCB80 (CcMapAndCopyInToCache.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x14020C878 (IoDiskIoAttributionDereference.c)
 *     MiLockSectionControlArea @ 0x1402100C8 (MiLockSectionControlArea.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MmUpdateSectionIoAttribution(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned __int8 v6; // bl
  __int64 v7; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf
  unsigned __int8 v13; // [rsp+40h] [rbp+18h] BYREF

  v13 = 0;
  v3 = 0LL;
  v4 = MiLockSectionControlArea(a1, 1LL, &v13);
  v5 = v4;
  if ( v4 )
  {
    if ( a2 != 8LL * *(_QWORD *)(v4 + 120) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(a2 + 32)) <= 1 )
        __fastfail(0xEu);
      v7 = *(_QWORD *)(v4 + 120);
      v3 = 8 * v7;
      *(_QWORD *)(v5 + 120) = (a2 >> 3) | v7 & 0xE000000000000000uLL;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 72));
    if ( (_DWORD)KiIrqlFlags
      && (CurrentIrql = KeGetCurrentIrql(), ((unsigned __int8)KiIrqlFlags & 1) != 0)
      && CurrentIrql <= 0xFu )
    {
      v6 = v13;
      if ( v13 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v6 = v13;
        v11 = ~(unsigned __int16)(-1LL << (v13 + 1));
        v12 = (v11 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    else
    {
      v6 = v13;
    }
    __writecr8(v6);
    if ( v3 )
      IoDiskIoAttributionDereference(v3);
  }
}
