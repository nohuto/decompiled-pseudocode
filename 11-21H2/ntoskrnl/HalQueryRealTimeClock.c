/*
 * XREFs of HalQueryRealTimeClock @ 0x14022D360
 * Callers:
 *     HalpCheckWakeupTimeAndAdjust @ 0x14051F6C4 (HalpCheckWakeupTimeAndAdjust.c)
 *     ExpRefreshSystemTime @ 0x1408357A0 (ExpRefreshSystemTime.c)
 *     NtSetSystemTime @ 0x1409F8350 (NtSetSystemTime.c)
 *     ExUpdateSystemTimeFromCmos @ 0x140A47884 (ExUpdateSystemTimeFromCmos.c)
 *     HaliSetWakeAlarm @ 0x140A523B0 (HaliSetWakeAlarm.c)
 *     GetBootSystemTime @ 0x140B2EBF4 (GetBootSystemTime.c)
 * Callees:
 *     RtlpTimeFieldsToTimeNoLeapSeconds @ 0x14022D554 (RtlpTimeFieldsToTimeNoLeapSeconds.c)
 *     ExSystemTimeToLocalTime @ 0x14022D770 (ExSystemTimeToLocalTime.c)
 *     ExLocalTimeToSystemTime @ 0x14022D7D0 (ExLocalTimeToSystemTime.c)
 *     HalpReadCmosTime @ 0x14022D82C (HalpReadCmosTime.c)
 *     HalpSetVirtualRtc @ 0x14022DA40 (HalpSetVirtualRtc.c)
 *     RtlpTimeToTimeFields @ 0x1402D1A48 (RtlpTimeToTimeFields.c)
 *     HalpQueryVirtualRtc @ 0x14038B7AC (HalpQueryVirtualRtc.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     HalEfiGetTime @ 0x14050FD3C (HalEfiGetTime.c)
 *     HalpAcpiRealTimeToUtcTime @ 0x14090805C (HalpAcpiRealTimeToUtcTime.c)
 *     HalpQueryAcpiRealTimeClock @ 0x140908124 (HalpQueryAcpiRealTimeClock.c)
 */

char __fastcall HalQueryRealTimeClock(__int64 a1)
{
  char *v2; // rdi
  char v3; // bl
  unsigned int v4; // esi
  LARGE_INTEGER v5; // rax
  unsigned int v6; // r8d
  __int64 *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rdx
  int v11; // ebx
  int AcpiRealTimeClock; // eax
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  int Time; // edi
  unsigned __int8 v16; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v18; // r8
  int v19; // eax
  bool v20; // zf
  signed __int32 v21[8]; // [rsp+0h] [rbp-70h] BYREF
  char v22[8]; // [rsp+20h] [rbp-50h] BYREF
  LARGE_INTEGER LocalTime; // [rsp+28h] [rbp-48h] BYREF
  LARGE_INTEGER v24; // [rsp+30h] [rbp-40h] BYREF
  _OWORD v25[2]; // [rsp+38h] [rbp-38h] BYREF
  LARGE_INTEGER Timeout[2]; // [rsp+58h] [rbp-18h] BYREF

  LocalTime.QuadPart = 0LL;
  v22[0] = 0;
  *(_OWORD *)&Timeout[0].LowPart = 0LL;
  v25[0] = 0LL;
  HalpSetVirtualRtc(0LL);
  if ( (HalpPlatformFlags & 4) == 0 )
    goto LABEL_29;
  HalpReadCmosTime(v25);
  v24.QuadPart = 0LL;
  v2 = (char *)ExLeapSecondData;
  v3 = 1;
  v25[1] = 0LL;
  if ( !ExLeapSecondData || !*(_BYTE *)ExLeapSecondData )
  {
    if ( (unsigned __int8)RtlpTimeFieldsToTimeNoLeapSeconds(v25, &LocalTime) )
      goto LABEL_7;
    goto LABEL_29;
  }
  v4 = *((_DWORD *)ExLeapSecondData + 1);
  _InterlockedOr(v21, 0);
  if ( !(unsigned __int8)RtlpTimeFieldsToTimeNoLeapSeconds(v25, &v24) )
    goto LABEL_29;
  v5 = v24;
  v6 = 0;
  if ( !v4 )
    goto LABEL_6;
  v8 = (__int64 *)(v2 + 8);
  while ( 1 )
  {
    v9 = *v8;
    if ( *v8 >= 0 )
    {
      if ( v5.QuadPart < v9 + 10000000 )
      {
        if ( v5.QuadPart < v9 )
          goto LABEL_6;
        v5.QuadPart = 2 * v5.QuadPart - v9;
      }
      else
      {
        v5.QuadPart += 10000000LL;
      }
      goto LABEL_23;
    }
    v10 = v9 & 0x7FFFFFFFFFFFFFFFLL;
    if ( v5.QuadPart < v10 + 10000000 )
      break;
    v5.QuadPart -= 10000000LL;
LABEL_23:
    ++v6;
    v24 = v5;
    ++v8;
    if ( v6 >= v4 )
      goto LABEL_6;
  }
  if ( v5.QuadPart < v10 || v5.QuadPart >= v10 + 10000000 )
  {
LABEL_6:
    LocalTime = v5;
LABEL_7:
    if ( !ExpRealTimeIsUniversal )
      ExLocalTimeToSystemTime(&LocalTime, &LocalTime);
LABEL_9:
    if ( MEMORY[0xFFFFF78000000014] > LocalTime.QuadPart + 864000000000LL )
    {
      LocalTime.QuadPart = MEMORY[0xFFFFF78000000014];
      _InterlockedOr(&HalpTimerRtcErrorCode, 1u);
    }
    if ( !ExpRealTimeIsUniversal )
      ExSystemTimeToLocalTime(&LocalTime, &LocalTime);
    RtlpTimeToTimeFields(&LocalTime, a1);
    return v3;
  }
LABEL_29:
  v11 = SystemPowerPhase;
  if ( KeGetCurrentIrql() < 2u && !SystemPowerPhase )
  {
    AcpiRealTimeClock = HalpQueryAcpiRealTimeClock(Timeout);
    if ( AcpiRealTimeClock < 0 )
    {
      if ( AcpiRealTimeClock != -1073741822 )
        _InterlockedOr(&HalpTimerRtcErrorCode, 2u);
    }
    else if ( (int)HalpAcpiRealTimeToUtcTime(Timeout, &LocalTime) >= 0 )
    {
LABEL_33:
      v3 = 1;
      goto LABEL_9;
    }
  }
  if ( HalFirmwareTypeEfi && v11 && (HalpPlatformFlags & 8) == 0 )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      Time = HalEfiGetTime(&LocalTime);
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
      }
      Time = HalEfiGetTime(&LocalTime);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v16 = KeGetCurrentIrql();
          if ( v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v18 = CurrentPrcb->SchedulerAssist;
            v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v20 = (v19 & v18[5]) == 0;
            v18[5] &= v19;
            if ( v20 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
    if ( Time >= 0 )
      goto LABEL_33;
    if ( Time != -1073741822 )
      _InterlockedOr(&HalpTimerRtcErrorCode, 4u);
  }
  v3 = HalpQueryVirtualRtc(&LocalTime, v22);
  if ( v3 )
  {
    if ( !v22[0] )
      _InterlockedOr(&HalpTimerRtcErrorCode, 8u);
    goto LABEL_9;
  }
  _InterlockedOr(&HalpTimerRtcErrorCode, 0x10u);
  return v3;
}
