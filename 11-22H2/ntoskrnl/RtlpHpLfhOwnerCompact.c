/*
 * XREFs of RtlpHpLfhOwnerCompact @ 0x14031579C
 * Callers:
 *     RtlpHpLfhContextCompact @ 0x140314E58 (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhOwnerCompact @ 0x14031579C (RtlpHpLfhOwnerCompact.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402A7AE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExfReleasePushLockShared @ 0x1402BD830 (ExfReleasePushLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F640 (KiCheckForKernelApcDelivery.c)
 *     RtlpHpLfhOwnerCompact @ 0x14031579C (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpAcquireLockShared @ 0x140315948 (RtlpHpAcquireLockShared.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x140316150 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall RtlpHpLfhOwnerCompact(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r15d
  _QWORD **v6; // rdi
  volatile LONG *v7; // rbx
  unsigned __int8 v8; // al
  _QWORD *v9; // r14
  unsigned __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  bool v14; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // eax

  v3 = a3;
  if ( (*(_BYTE *)a2 & 1) != 0 && *(_BYTE *)(a2 + 2) )
  {
    v11 = 0LL;
    v12 = *(unsigned __int8 *)(a2 + 2);
    do
    {
      RtlpHpLfhOwnerCompact(a1, *(_QWORD *)(v11 + *(_QWORD *)(a2 + 96)), v3);
      v11 += 8LL;
      --v12;
    }
    while ( v12 );
  }
  v6 = (_QWORD **)(a2 + 24);
  if ( *v6 != v6 || *(_QWORD *)(a2 + 40) != a2 + 40 )
  {
    v7 = (volatile LONG *)(a2 + 16);
    v8 = RtlpHpAcquireLockShared(v7, *(unsigned __int8 *)(a1 + 57), a3);
    v9 = *v6;
    v10 = v8;
    while ( v9 != v6 )
    {
      RtlpHpLfhSubsegmentDecommitPages(a1, (_DWORD)v9, -1, 1, v3);
      v9 = (_QWORD *)*v9;
    }
    if ( *(_BYTE *)(a1 + 57) )
    {
      ExReleaseSpinLockSharedFromDpcLevel(v7);
      if ( (_DWORD)KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
          && CurrentIrql <= 0xFu
          && (unsigned __int8)v10 <= 0xFu
          && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
          v14 = (v18 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v18;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v10);
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v7);
      KeAbPostRelease((ULONG_PTR)v7);
      CurrentThread = KeGetCurrentThread();
      v14 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v14
        && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
  }
}
