/*
 * XREFs of PfPowerActionNotify @ 0x140A49250
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x1407EFD2C (PopUmpoProcessPowerMessage.c)
 *     PopUmpoSendLegacyEvent @ 0x1407FE938 (PopUmpoSendLegacyEvent.c)
 *     PopIssueActionRequest @ 0x1407FF888 (PopIssueActionRequest.c)
 *     PopDispatchSuperfetchNotification @ 0x1407FFE58 (PopDispatchSuperfetchNotification.c)
 *     PfpProcessScenarioPhase @ 0x14081BB14 (PfpProcessScenarioPhase.c)
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PfLogEvent @ 0x14036044C (PfLogEvent.c)
 *     PfpServiceMainThreadUnboost @ 0x14038B6C0 (PfpServiceMainThreadUnboost.c)
 *     PfTAccessTracingCheck @ 0x14038BAF0 (PfTAccessTracingCheck.c)
 *     PfTSetTraceWorkerPriority @ 0x1405C6380 (PfTSetTraceWorkerPriority.c)
 *     PfpLogScenarioEvent @ 0x140986F94 (PfpLogScenarioEvent.c)
 *     PfGenerateTrace @ 0x140988074 (PfGenerateTrace.c)
 *     PfpStartLoggingHardFaultEvents @ 0x140A48D9C (PfpStartLoggingHardFaultEvents.c)
 *     PfpScenCtxScenarioSet @ 0x140A540E0 (PfpScenCtxScenarioSet.c)
 *     PfSnBeginBootPhase @ 0x140A544B0 (PfSnBeginBootPhase.c)
 *     MmPerformMemoryListCommand @ 0x140A5B810 (MmPerformMemoryListCommand.c)
 *     PfpPowerActionStartScenarioTracing @ 0x140A6AA08 (PfpPowerActionStartScenarioTracing.c)
 *     PfpScenCtxPrefetchWait @ 0x140A6AACC (PfpScenCtxPrefetchWait.c)
 */

__int64 __fastcall PfPowerActionNotify(int a1, char a2, int a3)
{
  int v3; // ecx
  int v4; // ecx
  __int64 result; // rax
  signed int v6; // ebx
  int v7; // [rsp+58h] [rbp+20h] BYREF
  int v8; // [rsp+5Ch] [rbp+24h]

  v8 = 0;
  v7 = 2 * a1;
  if ( (a2 & 1) != 0 )
    v7 = (2 * a1) | 1;
  if ( a1 )
  {
    v3 = a1 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( v4 == 5 && (unsigned int)(a3 - 2) <= 2 )
          PfpLogScenarioEvent(1, 2, 1, dword_140C54554, 0);
LABEL_7:
        v8 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
           + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
        return PfLogEvent(
                 28,
                 dword_140C5451C
               + (unsigned int)((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
                               + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10),
                 &v7,
                 8u);
      }
      if ( !(unsigned int)PfTAccessTracingCheck((__int64)&PfTGlobals) )
        PfpPowerActionStartScenarioTracing(&qword_140C54520);
      if ( dword_140C54550 == 5 )
        PfSnBeginBootPhase(4LL);
      PfpScenCtxScenarioSet((ULONG_PTR)&qword_140C54520);
      PfpScenCtxScenarioSet((ULONG_PTR)&qword_140C54520);
      PfpScenCtxScenarioSet((ULONG_PTR)&qword_140C54520);
      result = PfpStartLoggingHardFaultEvents();
      if ( (int)result >= 0 )
        goto LABEL_7;
    }
    else
    {
      result = (unsigned int)(a3 - 2);
      if ( (unsigned int)result <= 3 )
      {
        if ( !(unsigned int)PfTAccessTracingCheck((__int64)&PfTGlobals) )
        {
          MmPerformMemoryListCommand(1LL);
          v6 = PfTSetTraceWorkerPriority(0x10u);
          PfGenerateTrace((__int64)&Thread, 1);
          if ( v6 <= 31 )
            PfTSetTraceWorkerPriority(v6);
          v8 = PfpScenCtxPrefetchWait((ULONG_PTR)&qword_140C54520);
        }
        PfpServiceMainThreadUnboost(0LL);
        return PfLogEvent(
                 28,
                 dword_140C5451C
               + (unsigned int)((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
                               + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10),
                 &v7,
                 8u);
      }
    }
  }
  else
  {
    result = (unsigned int)(a3 - 2);
    if ( (unsigned int)result <= 2 || a3 == 5 )
      return PfpScenCtxScenarioSet((ULONG_PTR)&qword_140C54520);
  }
  return result;
}
