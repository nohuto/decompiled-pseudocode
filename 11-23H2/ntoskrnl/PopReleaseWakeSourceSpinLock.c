/*
 * XREFs of PopReleaseWakeSourceSpinLock @ 0x14058EB90
 * Callers:
 *     PopHandleWakeSources @ 0x140AA0CCC (PopHandleWakeSources.c)
 *     PopNewWakeInfo @ 0x140AA0F18 (PopNewWakeInfo.c)
 *     PopProcessDeviceWakeSource @ 0x140AA0FF4 (PopProcessDeviceWakeSource.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopReleaseWakeSourceSpinLock(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v6; // zf

  result = KxReleaseQueuedSpinLock((volatile signed __int64 **)a1);
  v3 = *(unsigned __int8 *)(a1 + 16);
  if ( (_DWORD)KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v3 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
      v6 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v6 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v3);
  return result;
}
