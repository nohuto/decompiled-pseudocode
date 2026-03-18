/*
 * XREFs of IopCancelAlertedRequest @ 0x140661B8C
 * Callers:
 *     IopWaitForSynchronousIo @ 0x1402A41A4 (IopWaitForSynchronousIo.c)
 *     NtSetInformationFile @ 0x1402F72B0 (NtSetInformationFile.c)
 *     IopWaitForSynchronousIoEvent @ 0x140417B94 (IopWaitForSynchronousIoEvent.c)
 *     IopSynchronousApiServiceTail @ 0x1406BF8BC (IopSynchronousApiServiceTail.c)
 *     IopParseDevice @ 0x14072B8B0 (IopParseDevice.c)
 *     IopSynchronousServiceTail @ 0x140731680 (IopSynchronousServiceTail.c)
 *     NtQueryInformationFile @ 0x1407AFEF0 (NtQueryInformationFile.c)
 *     IoSetInformation @ 0x14080AE60 (IoSetInformation.c)
 * Callees:
 *     IoCancelIrp @ 0x14022D160 (IoCancelIrp.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

NTSTATUS __fastcall IopCancelAlertedRequest(_DWORD *Object, PIRP Irp)
{
  unsigned __int8 CurrentIrql; // bl
  BOOLEAN v4; // si
  NTSTATUS result; // eax
  unsigned __int8 v6; // cl
  struct _KPRCB *v7; // r10
  _DWORD *v8; // r8
  int v9; // eax
  bool v10; // zf
  unsigned __int8 v11; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v14; // eax
  LARGE_INTEGER Interval; // [rsp+40h] [rbp+8h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( Object[1] )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v11 = KeGetCurrentIrql();
        if ( v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v10 = (v14 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v14;
          if ( v10 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  else
  {
    v4 = IoCancelIrp(Irp);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v6 = KeGetCurrentIrql();
        if ( v6 <= 0xFu && CurrentIrql <= 0xFu && v6 >= 2u )
        {
          v7 = KeGetCurrentPrcb();
          v8 = v7->SchedulerAssist;
          v9 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v10 = (v9 & v8[5]) == 0;
          v8[5] &= v9;
          if ( v10 )
            KiRemoveSystemWorkPriorityKick((__int64)v7);
        }
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
    if ( v4 )
    {
      Interval.QuadPart = -100000LL;
      while ( !Object[1] )
        result = KeDelayExecutionThread(0, 0, &Interval);
    }
    else
    {
      return KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
    }
  }
  return result;
}
