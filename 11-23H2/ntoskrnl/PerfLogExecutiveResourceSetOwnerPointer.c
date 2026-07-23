/*
 * XREFs of PerfLogExecutiveResourceSetOwnerPointer @ 0x140600FB8
 * Callers:
 *     ExpSetResourceOwnerPointerEx @ 0x14031A400 (ExpSetResourceOwnerPointerEx.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140211EDC (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     EtwpGetTrackingLockSlotForThread @ 0x140600ADC (EtwpGetTrackingLockSlotForThread.c)
 */

struct _KTHREAD *__fastcall PerfLogExecutiveResourceSetOwnerPointer(int a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rdi
  struct _KTHREAD *result; // rax
  _QWORD v6[3]; // [rsp+30h] [rbp-50h] BYREF
  int v7; // [rsp+48h] [rbp-38h]
  unsigned int CurrentRunTime; // [rsp+4Ch] [rbp-34h]
  __int64 v9; // [rsp+50h] [rbp-30h]
  int v10; // [rsp+58h] [rbp-28h]
  int v11; // [rsp+5Ch] [rbp-24h]
  _QWORD v12[2]; // [rsp+60h] [rbp-20h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  ++CurrentPrcb->SynchCounters.ExEtwSynchTrackingNotificationsCount;
  v10 = a1;
  v9 = a2;
  memset(v6, 0, sizeof(v6));
  v7 = 0;
  v11 = 0;
  v12[1] = 48LL;
  CurrentRunTime = KeGetCurrentThread()[1].CurrentRunTime;
  v12[0] = v6;
  EtwTraceKernelEvent((int)v12, 1, 0x20020000u, 1323, 22026242);
  result = KeGetCurrentThread();
  if ( result[1].WaitBlock[0].Object )
  {
    result = (struct _KTHREAD *)EtwpGetTrackingLockSlotForThread(a2, a1 & 0xFFFF0000);
    if ( result )
    {
      if ( LODWORD(result->QuantumTarget) )
      {
        ++CurrentPrcb->SynchCounters.ExEtwSynchTrackingNotificationsAccountedCount;
        result->Header.WaitListHead.Blink = 0LL;
        *(void **)((char *)&result->SListFaultAddress + 4) = 0LL;
        HIDWORD(result->QuantumTarget) = 0;
        *(_QWORD *)&result->Header.Lock = 0LL;
        result->Header.WaitListHead.Flink = 0LL;
        LODWORD(result->SListFaultAddress) = 0;
        HIDWORD(result->InitialStack) = 0;
      }
      else
      {
        HIDWORD(result->SListFaultAddress) = 0;
      }
    }
  }
  return result;
}
