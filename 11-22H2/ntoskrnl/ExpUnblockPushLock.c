/*
 * XREFs of ExpUnblockPushLock @ 0x140209468
 * Callers:
 *     CmpDecrementAppHiveUnloadCount @ 0x140207A0C (CmpDecrementAppHiveUnloadCount.c)
 *     CmpTryToRundownHive @ 0x1402092DC (CmpTryToRundownHive.c)
 *     ExUnblockPushLockEx @ 0x14022F6C0 (ExUnblockPushLockEx.c)
 *     MiUnlockImageSection @ 0x14025A340 (MiUnlockImageSection.c)
 *     ExSweepSingleHandle @ 0x1402BEAE8 (ExSweepSingleHandle.c)
 *     ExBlockOnAddressPushLock @ 0x1403481B0 (ExBlockOnAddressPushLock.c)
 *     ExTimedWaitForUnblockPushLock @ 0x140348290 (ExTimedWaitForUnblockPushLock.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x14035557C (RtlpCSparseBitmapPageDecommit.c)
 *     RtlReleaseSwapReference @ 0x14035CBF4 (RtlReleaseSwapReference.c)
 *     ExUnblockOnAddressPushLockEx @ 0x1403D5150 (ExUnblockOnAddressPushLockEx.c)
 *     ExfUnblockPushLock @ 0x140411A50 (ExfUnblockPushLock.c)
 *     IopCheckHandleForRevocation @ 0x140558780 (IopCheckHandleForRevocation.c)
 *     PspHandleTableWalker @ 0x1405A3FD0 (PspHandleTableWalker.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     ExTimedWaitForUnblockPushLock @ 0x140348290 (ExTimedWaitForUnblockPushLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall ExpUnblockPushLock(volatile __int64 *a1, void *a2, char a3)
{
  char v3; // bp
  __int64 v4; // r9
  unsigned __int8 CurrentIrql; // bl
  __int64 v9; // rsi
  _DWORD *SchedulerAssist; // r10
  __int64 v11; // rax
  unsigned __int8 v12; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v14; // r8
  int v15; // eax
  bool v16; // zf

  v3 = 0;
  v4 = _InterlockedExchange64(a1, 0LL);
  CurrentIrql = 2;
  if ( v4 )
  {
    if ( *(_QWORD *)(v4 + 24) )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (_DWORD)KiIrqlFlags )
      {
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          LODWORD(v11) = 4;
          if ( CurrentIrql != 2 )
            v11 = (-1LL << (CurrentIrql + 1)) & 4;
          SchedulerAssist[5] |= v11;
        }
      }
    }
    do
    {
      v9 = *(_QWORD *)(v4 + 24);
      if ( (void *)v4 == a2 )
        v3 = 1;
      if ( !_interlockedbittestandreset((volatile signed __int32 *)(v4 + 52), 1u) )
        KeSetEvent((PRKEVENT)v4, 1, 0);
      v4 = v9;
    }
    while ( v9 );
    if ( CurrentIrql != 2 )
    {
      if ( (_DWORD)KiIrqlFlags )
      {
        v12 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v14 = CurrentPrcb->SchedulerAssist;
          v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v16 = (v15 & v14[5]) == 0;
          v14[5] &= v15;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(CurrentIrql);
    }
  }
  if ( a2 && !v3 )
  {
    if ( a3 )
      KeWaitForSingleObject(a2, WrPushLock, 0, 0, 0LL);
    else
      ExTimedWaitForUnblockPushLock(a1, a2, 0LL);
  }
}
