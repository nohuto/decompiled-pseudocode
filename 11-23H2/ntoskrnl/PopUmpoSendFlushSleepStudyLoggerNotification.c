/*
 * XREFs of PopUmpoSendFlushSleepStudyLoggerNotification @ 0x14059974C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA90F0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402C3270 (KeQueryPerformanceCounter.c)
 *     PopUmpoSendPowerMessage @ 0x14032D1A0 (PopUmpoSendPowerMessage.c)
 *     memset @ 0x140435A00 (memset.c)
 *     PopDiagTraceFlushSleepStudyLogger @ 0x140AA7E2C (PopDiagTraceFlushSleepStudyLogger.c)
 *     PopDiagTraceFlushSleepStudyLoggerEnd @ 0x140AA7E48 (PopDiagTraceFlushSleepStudyLoggerEnd.c)
 */

__int64 PopUmpoSendFlushSleepStudyLoggerNotification()
{
  _DWORD Src[22]; // [rsp+20h] [rbp-58h] BYREF

  qword_140C3D2D8 = KeQueryPerformanceCounter(0LL).QuadPart;
  PopDiagTraceFlushSleepStudyLogger();
  memset(Src, 0, 0x48uLL);
  Src[0] = 13;
  PopUmpoSendPowerMessage(Src, 0x48uLL, 1);
  qword_140C3D2E0 = KeQueryPerformanceCounter(0LL).QuadPart;
  return PopDiagTraceFlushSleepStudyLoggerEnd();
}
