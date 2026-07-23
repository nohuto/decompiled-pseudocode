/*
 * XREFs of ExLocalTimeToSystemTime @ 0x14033B530
 * Callers:
 *     HalQueryRealTimeClock @ 0x14033B3C0 (HalQueryRealTimeClock.c)
 *     HalSetRealTimeClock @ 0x1404FF160 (HalSetRealTimeClock.c)
 *     HalEfiGetTime @ 0x14050D39C (HalEfiGetTime.c)
 *     HalpSetResumeTime @ 0x14051CC18 (HalpSetResumeTime.c)
 *     ExpRefreshSystemTime @ 0x14083EDF4 (ExpRefreshSystemTime.c)
 *     ExpRefreshTimeZoneInformation @ 0x14083EE98 (ExpRefreshTimeZoneInformation.c)
 *     HalpAcpiRealTimeToUtcTime @ 0x140932F40 (HalpAcpiRealTimeToUtcTime.c)
 *     PopNetGetNextDueRefreshTime @ 0x1409969B8 (PopNetGetNextDueRefreshTime.c)
 *     NtSetSystemTime @ 0x1409F8520 (NtSetSystemTime.c)
 *     ExUpdateSystemTimeFromCmos @ 0x140A88304 (ExUpdateSystemTimeFromCmos.c)
 *     Phase1InitializationDiscard @ 0x140B4FFBC (Phase1InitializationDiscard.c)
 *     GetBootSystemTime @ 0x140B7333C (GetBootSystemTime.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x14028A220 (PsGetCurrentServerSilo.c)
 */

void __stdcall ExLocalTimeToSystemTime(PLARGE_INTEGER LocalTime, PLARGE_INTEGER SystemTime)
{
  __int64 CurrentServerSilo; // rax
  _QWORD *v5; // rax

  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( CurrentServerSilo )
    v5 = *(_QWORD **)(CurrentServerSilo + 1488);
  else
    v5 = &PspHostSiloGlobals;
  SystemTime->QuadPart = LocalTime->QuadPart + *(_QWORD *)(v5[157] + 440LL);
}
