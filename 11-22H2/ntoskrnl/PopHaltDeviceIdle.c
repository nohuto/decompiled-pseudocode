/*
 * XREFs of PopHaltDeviceIdle @ 0x140587550
 * Callers:
 *     PoInitializeBroadcast @ 0x14098BC94 (PoInitializeBroadcast.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

void PopHaltDeviceIdle()
{
  __int128 *v0; // rbx
  unsigned __int64 v1; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v5; // eax
  bool v6; // zf
  __int128 v7; // [rsp+30h] [rbp-20h] BYREF
  char *v8; // [rsp+40h] [rbp-10h]

  v0 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v1 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
  byte_140D17BEC = 1;
  if ( dword_140D17BE8 )
  {
    DWORD1(v7) = 0;
    v8 = (char *)&v7 + 8;
    v0 = &v7;
    LOWORD(v7) = 1;
    *((_QWORD *)&v7 + 1) = (char *)&v7 + 8;
    PopDeviceIdleSync = (PRKEVENT)&v7;
    BYTE2(v7) = 6;
  }
  KxReleaseSpinLock((volatile signed __int64 *)&PopDopeGlobalLock);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v1 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v5 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v1 + 1));
      v6 = (v5 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v5;
      if ( v6 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v1);
  if ( v0 )
    KeWaitForSingleObject(v0, Executive, 0, 0, 0LL);
}
