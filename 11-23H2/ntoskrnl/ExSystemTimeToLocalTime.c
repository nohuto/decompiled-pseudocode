/*
 * XREFs of ExSystemTimeToLocalTime @ 0x14033B2F0
 * Callers:
 *     HalQueryRealTimeClock @ 0x14033B130 (HalQueryRealTimeClock.c)
 *     HalEfiSetTime @ 0x14050D2E0 (HalEfiSetTime.c)
 *     ExpRefreshSystemTime @ 0x14083EAF4 (ExpRefreshSystemTime.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x14085DB84 (CmpUpdateReorganizeRegistryValues.c)
 *     IopCopyBootLogRegistryToFile @ 0x1408655B8 (IopCopyBootLogRegistryToFile.c)
 *     HalpUtcTimeToAcpiRealTime @ 0x140933018 (HalpUtcTimeToAcpiRealTime.c)
 *     PopDiagTraceActiveCooling @ 0x14098C298 (PopDiagTraceActiveCooling.c)
 *     PopDiagTracePassiveCooling @ 0x14098FF00 (PopDiagTracePassiveCooling.c)
 *     PopNetGetNextDueRefreshTime @ 0x1409967B8 (PopNetGetNextDueRefreshTime.c)
 *     NtSetSystemTime @ 0x1409F8290 (NtSetSystemTime.c)
 *     ExpSetSystemTime @ 0x140AAAC64 (ExpSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x140B4FFBC (Phase1InitializationDiscard.c)
 *     GetBootSystemTime @ 0x140B7333C (GetBootSystemTime.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140289F90 (PsGetCurrentServerSilo.c)
 */

void __stdcall ExSystemTimeToLocalTime(PLARGE_INTEGER SystemTime, PLARGE_INTEGER LocalTime)
{
  __int64 CurrentServerSilo; // rax
  _QWORD *v5; // rax

  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( CurrentServerSilo )
    v5 = *(_QWORD **)(CurrentServerSilo + 1488);
  else
    v5 = &PspHostSiloGlobals;
  LocalTime->QuadPart = SystemTime->QuadPart - *(_QWORD *)(v5[157] + 440LL);
}
