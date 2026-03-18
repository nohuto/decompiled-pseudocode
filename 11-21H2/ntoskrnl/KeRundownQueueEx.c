/*
 * XREFs of KeRundownQueueEx @ 0x140234764
 * Callers:
 *     KeRundownQueue @ 0x140234660 (KeRundownQueue.c)
 *     IopDeleteIoCompletionInternal @ 0x140234678 (IopDeleteIoCompletionInternal.c)
 *     EtwpDeleteRegistrationObject @ 0x140796530 (EtwpDeleteRegistrationObject.c)
 * Callees:
 *     KeRundownQueueCommon @ 0x140234888 (KeRundownQueueCommon.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x140234D1C (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     KiExitDispatcher @ 0x1402B0820 (KiExitDispatcher.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F3290 (KiAcquireKobjectLockSafe.c)
 */

_QWORD *__fastcall KeRundownQueueEx(_QWORD *SystemArgument1, char a2)
{
  char CurrentIrql; // si
  _QWORD *v5; // rax
  _QWORD *v6; // rdi
  _DWORD *SchedulerAssist; // r9
  _QWORD *v9; // rcx
  int v10; // [rsp+20h] [rbp-18h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  KiAcquireKobjectLockSafe(SystemArgument1);
  v5 = SystemArgument1 + 3;
  v6 = (_QWORD *)SystemArgument1[3];
  if ( v6 == SystemArgument1 + 3 )
  {
    v6 = 0LL;
  }
  else
  {
    *((_DWORD *)SystemArgument1 + 1) = 0;
    v9 = (_QWORD *)SystemArgument1[4];
    if ( (_QWORD *)v6[1] != v5 || (_QWORD *)*v9 != v5 )
      __fastfail(3u);
    *v9 = v6;
    v6[1] = v9;
    SystemArgument1[4] = SystemArgument1 + 3;
    *v5 = v5;
  }
  LOBYTE(v10) = a2;
  KeRundownQueueCommon(SystemArgument1, v10);
  _InterlockedAnd((volatile signed __int32 *)SystemArgument1, 0xFFFFFF7F);
  if ( a2 )
    KiAcquireReleaseObjectRundownLockExclusive(SystemArgument1);
  KiExitDispatcher((unsigned int)KeGetCurrentPrcb(), 0, 1, 0, CurrentIrql);
  return v6;
}
