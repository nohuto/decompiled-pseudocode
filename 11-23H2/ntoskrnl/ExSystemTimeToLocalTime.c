/*
 * XREFs of ExSystemTimeToLocalTime @ 0x14033B580
 * Callers:
 *     HalQueryRealTimeClock @ 0x14033B3C0 (HalQueryRealTimeClock.c)
 *     HalEfiSetTime @ 0x14050D830 (HalEfiSetTime.c)
 *     ExpRefreshSystemTime @ 0x14083EDF4 (ExpRefreshSystemTime.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x14085DDC4 (CmpUpdateReorganizeRegistryValues.c)
 *     IopCopyBootLogRegistryToFile @ 0x1408657F8 (IopCopyBootLogRegistryToFile.c)
 *     HalpUtcTimeToAcpiRealTime @ 0x140933218 (HalpUtcTimeToAcpiRealTime.c)
 *     PopDiagTraceActiveCooling @ 0x14098C498 (PopDiagTraceActiveCooling.c)
 *     PopDiagTracePassiveCooling @ 0x140990100 (PopDiagTracePassiveCooling.c)
 *     PopNetGetNextDueRefreshTime @ 0x1409969B8 (PopNetGetNextDueRefreshTime.c)
 *     NtSetSystemTime @ 0x1409F8520 (NtSetSystemTime.c)
 *     ExpSetSystemTime @ 0x140AAAAD4 (ExpSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x140B4FFBC (Phase1InitializationDiscard.c)
 *     GetBootSystemTime @ 0x140B7333C (GetBootSystemTime.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x14028A220 (PsGetCurrentServerSilo.c)
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
