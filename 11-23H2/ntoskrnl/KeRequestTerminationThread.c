/*
 * XREFs of KeRequestTerminationThread @ 0x140309C8C
 * Callers:
 *     PspInsertThread @ 0x14073F08C (PspInsertThread.c)
 *     PspTerminateThreadByPointer @ 0x14076DB70 (PspTerminateThreadByPointer.c)
 *     KeRequestTerminationProcess @ 0x1409744B4 (KeRequestTerminationProcess.c)
 * Callees:
 *     KiExitDispatcher @ 0x14023CE40 (KiExitDispatcher.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     KeAlertThread @ 0x140309AE0 (KeAlertThread.c)
 *     KiInsertQueueApc @ 0x14030A3FC (KiInsertQueueApc.c)
 *     KeForceResumeThread @ 0x14030AE6C (KeForceResumeThread.c)
 *     KiSignalThreadForApc @ 0x14030B598 (KiSignalThreadForApc.c)
 *     VslpEnterIumSecureMode @ 0x14033FF80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall KeRequestTerminationThread(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  char v5; // r14
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v8; // r8
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  __int64 v11; // rcx
  _DWORD v12[4]; // [rsp+30h] [rbp-A8h] BYREF
  _QWORD v13[14]; // [rsp+40h] [rbp-98h] BYREF

  result = *(_QWORD *)(a1 + 544);
  if ( (*(_BYTE *)(result + 992) & 1) != 0 )
  {
    memset(v13, 0, 0x68uLL);
    v13[1] = *(unsigned int *)(a1 + 796);
    v13[2] = a1;
    LOBYTE(v11) = 2;
    result = VslpEnterIumSecureMode(v11, 9LL, 0LL, v13);
  }
  if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0xFu) )
  {
    v5 = 0;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      v10 = 4;
      if ( CurrentIrql != 2 )
      {
        a2 = -1LL << (CurrentIrql + 1);
        v10 = a2 & 4;
      }
      a3 = (unsigned int)v10 | SchedulerAssist[5];
      SchedulerAssist[5] = a3;
    }
    v12[0] = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(v12);
      while ( *(_QWORD *)(a1 + 64) );
    }
    CurrentPrcb = KeGetCurrentPrcb();
    if ( (*(_DWORD *)(a1 + 116) & 0x4000) != 0 )
    {
      v5 = 1;
      if ( !*(_BYTE *)(a1 + 730) )
      {
        *(_BYTE *)(a1 + 730) = 1;
        KiInsertQueueApc(a1 + 648, a2, a3);
        LOBYTE(v8) = CurrentIrql;
        KiSignalThreadForApc(CurrentPrcb, a1 + 648, v8);
      }
    }
    *(_QWORD *)(a1 + 64) = 0LL;
    result = KiExitDispatcher((__int64)CurrentPrcb, 0, (_PROCESSOR_NUMBER)1, 0, CurrentIrql);
    if ( v5 )
    {
      KeAlertThread(a1, 0);
      return KeForceResumeThread(a1);
    }
  }
  return result;
}
