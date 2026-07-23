/*
 * XREFs of KeReleaseGuardedMutex @ 0x1402285D0
 * Callers:
 *     CcPinFileData @ 0x140263B20 (CcPinFileData.c)
 *     EtwpSetProviderTraitsCommon @ 0x1406BE574 (EtwpSetProviderTraitsCommon.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExpReleaseFastMutexContended @ 0x1402BC1F0 (ExpReleaseFastMutexContended.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

void __stdcall KeReleaseGuardedMutex(PKGUARDED_MUTEX Mutex)
{
  unsigned __int64 OldIrql_low; // rdi
  unsigned __int32 v3; // eax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v7; // eax
  bool v8; // zf

  OldIrql_low = LOBYTE(Mutex->OldIrql);
  Mutex->Owner = 0LL;
  v3 = _InterlockedCompareExchange(&Mutex->Count, 1, 0);
  if ( v3 )
    ExpReleaseFastMutexContended(Mutex, v3);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)OldIrql_low <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v7 = ~(unsigned __int16)(-1LL << ((unsigned __int8)OldIrql_low + 1));
      v8 = (v7 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v7;
      if ( v8 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql_low);
  KeAbPostRelease((ULONG_PTR)Mutex);
}
