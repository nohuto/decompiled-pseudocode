/*
 * XREFs of PoNotifySystemTimeSet @ 0x1403B66A8
 * Callers:
 *     ExpRefreshSystemTime @ 0x14083EDF4 (ExpRefreshSystemTime.c)
 *     NtSetSystemTime @ 0x1409F8520 (NtSetSystemTime.c)
 *     ExpSetSystemTime @ 0x140AAAAD4 (ExpSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x140B4FFBC (Phase1InitializationDiscard.c)
 * Callees:
 *     PpmConvertTime @ 0x1402555D0 (PpmConvertTime.c)
 *     PopGetPolicyWorker @ 0x14032CDF4 (PopGetPolicyWorker.c)
 *     PopCheckForWork @ 0x14032CE48 (PopCheckForWork.c)
 *     ExNotifyWithProcessing @ 0x14033C1F0 (ExNotifyWithProcessing.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     PopSstDiagAddResumeTimestampAdjustment @ 0x140AAA4C4 (PopSstDiagAddResumeTimestampAdjustment.c)
 *     EtwTraceSystemTimeChange @ 0x140AAA5E0 (EtwTraceSystemTimeChange.c)
 */

__int64 __fastcall PoNotifySystemTimeSet(__int64 *a1, __int64 *a2, int a3, int a4, int a5, int a6, unsigned __int8 a7)
{
  __int64 result; // rax
  int v8; // ebp
  __int64 *v11; // r11
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  unsigned __int8 v18; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v20; // r8
  int v21; // eax
  bool v22; // zf
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v8 = ExpRealTimeIsUniversal;
  v11 = a2;
  if ( a3 == 2 )
  {
    v13 = *a1;
    result = *a2;
    if ( v13 > *a2 )
    {
      v14 = PpmConvertTime(v13 - result, 0x989680uLL, PopQpcFrequency);
      result = PopSstDiagAddResumeTimestampAdjustment(v14);
    }
  }
  if ( PsWin32CalloutsEstablished )
  {
    PopTimeChangeInfo = *a1;
    qword_140C3F668 = *v11;
    EtwTraceSystemTimeChange((_DWORD)a1, (_DWORD)v11, a3, a4, a5, v8, a7);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      v17 = 4;
      if ( CurrentIrql != 2 )
        v17 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v17;
    }
    ExNotifyWithProcessing(ExCbSetSystemTime, 0LL, 0LL, 0LL);
    PopGetPolicyWorker(16);
    PopCheckForWork();
    if ( (_DWORD)KiIrqlFlags )
    {
      v18 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v20 = CurrentPrcb->SchedulerAssist;
        v21 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v22 = (v21 & v20[5]) == 0;
        v20[5] &= v21;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
