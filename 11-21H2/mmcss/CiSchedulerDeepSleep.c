/*
 * XREFs of CiSchedulerDeepSleep @ 0x1C0001190
 * Callers:
 *     CiSchedulerThreadFunction @ 0x1C0002F80 (CiSchedulerThreadFunction.c)
 * Callees:
 *     CiSchedulerProcessDeadlines @ 0x1C00013B0 (CiSchedulerProcessDeadlines.c)
 *     CiLogSchedulerSleep @ 0x1C0003FFC (CiLogSchedulerSleep.c)
 *     WPP_SF_ @ 0x1C00046A8 (WPP_SF_.c)
 */

__int64 __fastcall CiSchedulerDeepSleep(__int32 *a1)
{
  __int32 v2; // eax
  __int64 result; // rax
  int v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 14LL, &WPP_aa99675662263b3850e759e243765244_Traceguids);
  if ( byte_1C00073C0 )
    CiLogSchedulerSleep(5LL);
  v2 = _InterlockedExchange(&CiSchedulerWakeupReason, 0x8000);
  *a1 = v2;
  if ( !v2 )
    CiSchedulerWaitStatus = KeWaitForSingleObject(KeGetCurrentThread(), Executive, 0, 1u, 0LL);
  result = CiSchedulerProcessDeadlines(&v4);
  *a1 |= _InterlockedExchange(&CiSchedulerWakeupReason, 0);
  return result;
}
