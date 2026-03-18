/*
 * XREFs of PopHaltDeviceIdle @ 0x1405874C0
 * Callers:
 *     PoInitializeBroadcast @ 0x14098BBE4 (PoInitializeBroadcast.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CE0 (KeWaitForSingleObject.c)
 *     KxReleaseSpinLock @ 0x140250500 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250E80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 */

NTSTATUS PopHaltDeviceIdle()
{
  __int128 *v0; // rbx
  unsigned __int64 v1; // rdi
  NTSTATUS result; // eax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v5; // zf
  __int128 v6; // [rsp+30h] [rbp-20h] BYREF
  char *v7; // [rsp+40h] [rbp-10h]

  v0 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v1 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
  byte_140D17B4C = 1;
  if ( dword_140D17B48 )
  {
    DWORD1(v6) = 0;
    v7 = (char *)&v6 + 8;
    v0 = &v6;
    LOWORD(v6) = 1;
    *((_QWORD *)&v6 + 1) = (char *)&v6 + 8;
    PopDeviceIdleSync = (PRKEVENT)&v6;
    BYTE2(v6) = 6;
  }
  result = KxReleaseSpinLock((volatile signed __int64 *)&PopDopeGlobalLock);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v1 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v1 + 1));
      v5 = (result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v5 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v1);
  if ( v0 )
    return KeWaitForSingleObject(v0, Executive, 0, 0, 0LL);
  return result;
}
