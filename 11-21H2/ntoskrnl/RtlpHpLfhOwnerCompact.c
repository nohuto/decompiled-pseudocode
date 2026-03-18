/*
 * XREFs of RtlpHpLfhOwnerCompact @ 0x1403645A4
 * Callers:
 *     RtlpHpLfhContextCompact @ 0x1403644A4 (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhOwnerCompact @ 0x1403645A4 (RtlpHpLfhOwnerCompact.c)
 * Callees:
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     RtlpHpLfhOwnerCompact @ 0x1403645A4 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpAcquireLockShared @ 0x140364760 (RtlpHpAcquireLockShared.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1403650F0 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall RtlpHpLfhOwnerCompact(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r15d
  _QWORD **v7; // rdi
  volatile LONG *v8; // rbx
  unsigned __int8 v9; // al
  _QWORD *v10; // r14
  unsigned __int64 v11; // rsi
  $CEA84C04E3712D858E5667A507841A2A *v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  bool v16; // zf
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9

  v4 = a3;
  if ( (*(_BYTE *)a2 & 1) != 0 && *(_BYTE *)(a2 + 2) )
  {
    v13 = 0LL;
    v14 = *(unsigned __int8 *)(a2 + 2);
    do
    {
      RtlpHpLfhOwnerCompact(a1, *(_QWORD *)(*(_QWORD *)(a2 + 96) + v13), v4);
      v13 += 8LL;
      --v14;
    }
    while ( v14 );
  }
  v7 = (_QWORD **)(a2 + 24);
  if ( *v7 != v7
    || (v12 = ($CEA84C04E3712D858E5667A507841A2A *)(a2 + 40),
        ($CEA84C04E3712D858E5667A507841A2A *)v12->ApcState.ApcListHead[0].Flink != v12) )
  {
    v8 = (volatile LONG *)(a2 + 16);
    v9 = RtlpHpAcquireLockShared(v8, *(unsigned __int8 *)(a1 + 57), a3, a4);
    v10 = *v7;
    v11 = v9;
    while ( v10 != v7 )
    {
      RtlpHpLfhSubsegmentDecommitPages(a1, (_DWORD)v10, -1, 1, v4);
      v10 = (_QWORD *)*v10;
    }
    if ( *(_BYTE *)(a1 + 57) )
    {
      ExReleaseSpinLockSharedFromDpcLevel(v8);
      LOBYTE(v12) = KiIrqlFlags;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          LOBYTE(v12) = KeGetCurrentIrql();
          if ( (unsigned __int8)v12 <= 0xFu && (unsigned __int8)v11 <= 0xFu && (unsigned __int8)v12 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            LODWORD(v12) = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
            v16 = ((unsigned int)v12 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= (unsigned int)v12;
            if ( v16 )
              LOBYTE(v12) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v11);
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v8, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v8);
      LOBYTE(v12) = KeAbPostRelease((ULONG_PTR)v8);
      CurrentThread = KeGetCurrentThread();
      v16 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v16 )
      {
        v12 = &CurrentThread->152;
        if ( ($CEA84C04E3712D858E5667A507841A2A *)v12->ApcState.ApcListHead[0].Flink != v12 )
          LOBYTE(v12) = KiCheckForKernelApcDelivery();
      }
    }
  }
  return (char)v12;
}
