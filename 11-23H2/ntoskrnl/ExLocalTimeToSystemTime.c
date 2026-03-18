/*
 * XREFs of ExLocalTimeToSystemTime @ 0x14033B2A0
 * Callers:
 *     HalQueryRealTimeClock @ 0x14033B130 (HalQueryRealTimeClock.c)
 *     HalSetRealTimeClock @ 0x1404FEC10 (HalSetRealTimeClock.c)
 *     HalEfiGetTime @ 0x14050CE4C (HalEfiGetTime.c)
 *     HalpSetResumeTime @ 0x14051C6C8 (HalpSetResumeTime.c)
 *     ExpRefreshSystemTime @ 0x14083EAF4 (ExpRefreshSystemTime.c)
 *     ExpRefreshTimeZoneInformation @ 0x14083EB98 (ExpRefreshTimeZoneInformation.c)
 *     HalpAcpiRealTimeToUtcTime @ 0x140932D40 (HalpAcpiRealTimeToUtcTime.c)
 *     PopNetGetNextDueRefreshTime @ 0x1409967B8 (PopNetGetNextDueRefreshTime.c)
 *     NtSetSystemTime @ 0x1409F8290 (NtSetSystemTime.c)
 *     ExUpdateSystemTimeFromCmos @ 0x140A88304 (ExUpdateSystemTimeFromCmos.c)
 *     Phase1InitializationDiscard @ 0x140B4FFBC (Phase1InitializationDiscard.c)
 *     GetBootSystemTime @ 0x140B7333C (GetBootSystemTime.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140289F90 (PsGetCurrentServerSilo.c)
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
