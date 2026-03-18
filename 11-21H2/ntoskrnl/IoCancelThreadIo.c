/*
 * XREFs of IoCancelThreadIo @ 0x14079FC78
 * Callers:
 *     PspExitThread @ 0x1407A0088 (PspExitThread.c)
 * Callees:
 *     IoCancelIrp @ 0x14022D160 (IoCancelIrp.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     IopDisassociateThreadIrp @ 0x1405566C0 (IopDisassociateThreadIrp.c)
 */

struct _KTHREAD *__fastcall IoCancelThreadIo(LARGE_INTEGER a1)
{
  struct _KTHREAD *result; // rax
  unsigned int *p_SystemCallNumber; // rbx
  unsigned __int8 CurrentIrql; // si
  unsigned int *i; // rdi
  unsigned int v5; // r15d
  unsigned int v6; // r14d
  unsigned __int8 v7; // di
  unsigned __int8 v8; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r10
  _DWORD *v15; // r9
  int v16; // eax
  unsigned int v17; // eax
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r9
  _DWORD *v20; // r8
  int v21; // eax
  LARGE_INTEGER Interval; // [rsp+50h] [rbp+8h] BYREF

  Interval = a1;
  result = KeGetCurrentThread();
  p_SystemCallNumber = &result[1].SystemCallNumber;
  if ( *(unsigned int **)p_SystemCallNumber != p_SystemCallNumber )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    for ( i = *(unsigned int **)p_SystemCallNumber; p_SystemCallNumber != i; i = *(unsigned int **)i )
      IoCancelIrp((PIRP)(i - 8));
    v5 = 100 * IopIrpCompletionTimeoutInSeconds;
    v6 = 0;
    Interval.QuadPart = -100000LL;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v8 = KeGetCurrentIrql();
        if ( v8 <= 0xFu && CurrentIrql <= 0xFu && v8 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v11 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v12 = (v11 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v11;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    while ( 1 )
    {
      v7 = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( *(unsigned int **)p_SystemCallNumber == p_SystemCallNumber )
        break;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v13 = KeGetCurrentIrql();
          if ( v13 <= 0xFu && v7 <= 0xFu && v13 >= 2u )
          {
            v14 = KeGetCurrentPrcb();
            v15 = v14->SchedulerAssist;
            v16 = ~(unsigned __int16)(-1LL << (v7 + 1));
            v12 = (v16 & v15[5]) == 0;
            v15[5] &= v16;
            if ( v12 )
              KiRemoveSystemWorkPriorityKick((__int64)v14);
          }
        }
      }
      __writecr8(v7);
      KeDelayExecutionThread(0, 0, &Interval);
      v17 = v6++;
      if ( v17 > v5 )
        IopDisassociateThreadIrp();
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v18 = KeGetCurrentIrql();
        if ( v18 <= 0xFu && v7 <= 0xFu && v18 >= 2u )
        {
          v19 = KeGetCurrentPrcb();
          v20 = v19->SchedulerAssist;
          v21 = ~(unsigned __int16)(-1LL << (v7 + 1));
          v12 = (v21 & v20[5]) == 0;
          v20[5] &= v21;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick((__int64)v19);
        }
      }
    }
    result = (struct _KTHREAD *)v7;
    __writecr8(v7);
  }
  return result;
}
