/*
 * XREFs of KiDoesThreadDominateRescheduleContextEntry @ 0x1402438E0
 * Callers:
 *     KiDeferredReadySingleThread @ 0x14023A3A0 (KiDeferredReadySingleThread.c)
 *     KiCanLocalReadyThreadBeScheduledToRescheduleContext @ 0x140243810 (KiCanLocalReadyThreadBeScheduledToRescheduleContext.c)
 *     KiExecuteAllDpcs @ 0x140244590 (KiExecuteAllDpcs.c)
 *     KiDirectSwitchThread @ 0x1402B1B30 (KiDirectSwitchThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x140307814 (KiDeferGroupSchedulingPreemption.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140308538 (KiGroupSchedulingGenerationEnd.c)
 * Callees:
 *     KiEvaluateGroupSchedulingPreemption @ 0x1402B3290 (KiEvaluateGroupSchedulingPreemption.c)
 */

char __fastcall KiDoesThreadDominateRescheduleContextEntry(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v6; // r9
  char v7; // dl
  char result; // al
  char v9; // r10
  __int64 v10; // rax
  __int64 v11; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  v11 = 0LL;
  if ( KiGroupSchedulingEnabled )
  {
    result = KiEvaluateGroupSchedulingPreemption(a1, a2, a3, &v11);
    v6 = v11;
  }
  else
  {
    v7 = *(_BYTE *)(a1 + 32);
    if ( (v7 & 1) != 0 )
    {
      result = 1;
    }
    else
    {
      v9 = *(_BYTE *)(a2 + 195);
      v10 = *(_QWORD *)(a1 + 16);
      result = v9 > *(char *)(v10 + 195)
            || v9 == *(_BYTE *)(v10 + 195) && ((v7 & 0x18) != 0 || (a3 & 1) != 0)
            || (v7 & 0x10) != 0 && v9;
    }
  }
  if ( a4 )
    *a4 = v6;
  return result;
}
