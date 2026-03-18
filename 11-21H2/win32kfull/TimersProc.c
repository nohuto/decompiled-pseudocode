/*
 * XREFs of TimersProc @ 0x1C005D710
 * Callers:
 *     RawInputThread @ 0x1C005CC60 (RawInputThread.c)
 * Callees:
 *     ?TimerStatistics@@YAXPEBUtagTIMER@@@Z @ 0x1C005C1E4 (-TimerStatistics@@YAXPEBUtagTIMER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     ?CoalescableDueTime@@YAKPEBUtagTIMER@@@Z @ 0x1C01E5D30 (-CoalescableDueTime@@YAKPEBUtagTIMER@@@Z.c)
 *     ?ReadyTimer@@YAXPEAUtagTIMER@@K@Z @ 0x1C01E5DD4 (-ReadyTimer@@YAXPEAUtagTIMER@@K@Z.c)
 *     ThreadLockExchangeWorker @ 0x1C01E6068 (ThreadLockExchangeWorker.c)
 */

// write access to const memory has been detected, the output may be wrong!
BOOLEAN __fastcall TimersProc(__int64 a1, __int64 a2, __int64 a3)
{
  BOOLEAN result; // al
  _QWORD v4[11]; // [rsp+30h] [rbp-58h] BYREF

  v4[2] = 0LL;
  WORD2(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) = 1;
  do
  {
    *((_BYTE *)&WPP_MAIN_CB.DeviceQueue.Size + 2) = 0;
    gcmsLastTimer = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v4[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v4;
    v4[1] = 0LL;
    ThreadUnlockWorker1(gptiCurrent, a2, a3);
  }
  while ( *((_BYTE *)&WPP_MAIN_CB.DeviceQueue.Size + 2) );
  LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) = 0x7FFFFFFF;
  *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type = 0x7FFFFFFF;
  result = KeSetTimer(gptmrMaster, (LARGE_INTEGER)-21474836470000LL, 0LL);
  BYTE4(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) = 0;
  return result;
}
