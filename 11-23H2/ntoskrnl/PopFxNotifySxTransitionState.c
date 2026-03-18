/*
 * XREFs of PopFxNotifySxTransitionState @ 0x1409855D4
 * Callers:
 *     PoBroadcastSystemState @ 0x140AA6A68 (PoBroadcastSystemState.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     KeWaitForSingleObject @ 0x140243CE0 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x1402B7C30 (ExQueueWorkItem.c)
 *     ExfTryToWakePushLock @ 0x1402BD960 (ExfTryToWakePushLock.c)
 */

NTSTATUS __fastcall PopFxNotifySxTransitionState(char a1)
{
  struct _WORK_QUEUE_ITEM *v2; // rcx
  __int64 v3; // rax

  if ( a1 )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxUpdateDripsConstraintContext, 0LL);
    byte_140C3ED58 = 1;
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&PopFxUpdateDripsConstraintContext,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopFxUpdateDripsConstraintContext);
    KeAbPostRelease((ULONG_PTR)&PopFxUpdateDripsConstraintContext);
    return KeWaitForSingleObject(&stru_140C3ED60, Executive, 0, 0, 0LL);
  }
  else
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxUpdateDripsConstraintContext, 0LL);
    byte_140C3ED58 = 0;
    while ( 1 )
    {
      v2 = (struct _WORK_QUEUE_ITEM *)qword_140C3ED48;
      if ( (__int64 *)qword_140C3ED48 == &qword_140C3ED48 )
        break;
      if ( *(__int64 **)(qword_140C3ED48 + 8) != &qword_140C3ED48
        || (v3 = *(_QWORD *)qword_140C3ED48, *(_QWORD *)(*(_QWORD *)qword_140C3ED48 + 8LL) != qword_140C3ED48) )
      {
        __fastfail(3u);
      }
      qword_140C3ED48 = *(_QWORD *)qword_140C3ED48;
      *(_QWORD *)(v3 + 8) = &qword_140C3ED48;
      ExQueueWorkItem(v2 + 1, DelayedWorkQueue);
    }
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&PopFxUpdateDripsConstraintContext,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopFxUpdateDripsConstraintContext);
    return KeAbPostRelease((ULONG_PTR)&PopFxUpdateDripsConstraintContext);
  }
}
