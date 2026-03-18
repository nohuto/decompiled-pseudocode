/*
 * XREFs of KiInitializeVelocity @ 0x140B29BDC
 * Callers:
 *     KeInitSystem @ 0x140B03800 (KeInitSystem.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1402D6B0C (wil_details_FeatureReporting_ReportUsageToService.c)
 */

__int64 (__fastcall *KiInitializeVelocity())(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rax
  int v1; // [rsp+30h] [rbp-18h]
  int v2; // [rsp+30h] [rbp-18h]
  int v3; // [rsp+30h] [rbp-18h]
  int v4; // [rsp+30h] [rbp-18h]
  int v5; // [rsp+30h] [rbp-18h]
  int v6; // [rsp+30h] [rbp-18h]
  int v7; // [rsp+30h] [rbp-18h]
  int v8; // [rsp+30h] [rbp-18h]
  int v9; // [rsp+30h] [rbp-18h]

  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_SchedulerAssistPreemptionPriorityKick__private_reporting,
    0xD245DCu,
    0,
    0,
    (__int64)&Feature_HgsPlusParkingSupportRequired_logged_traits,
    1u,
    v1);
  KiVelocityFlags |= 2u;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_SchedulerAssistThreadFlag__private_reporting,
    0xCE8A33u,
    0,
    0,
    (__int64)&Feature_HgsPlusParkingSupportRequired_logged_traits,
    1u,
    v2);
  KiVelocityFlags |= 4u;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_SchedulerAssistEnableBAM__private_reporting,
    0xDE148Cu,
    0,
    0,
    (__int64)&Feature_HgsPlusParkingSupportRequired_logged_traits,
    1u,
    v3);
  KiVelocityFlags |= 0x10u;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_SchedulerAssistSystemIrql__private_reporting,
    0xFDEFC5u,
    0,
    0,
    (__int64)&Feature_HgsPlusParkingSupportRequired_logged_traits,
    1u,
    v4);
  KiVelocityFlags |= 0x200u;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_SchedulerAssistHRTimer__private_reporting,
    0xDF826Fu,
    0,
    0,
    (__int64)&Feature_HgsPlusParkingSupportRequired_logged_traits,
    1u,
    v5);
  KiVelocityFlags |= 0x40u;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_SchedulerAggressiveForegroundBoost__private_reporting,
    0xDEF75Cu,
    0,
    0,
    (__int64)&Feature_HgsPlusParkingSupportRequired_logged_traits,
    1u,
    v6);
  KiForegroundBoostTicks = 1;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_SchedulerAssistAllowRealTime__private_reporting,
    0xE4A238u,
    0,
    0,
    (__int64)&Feature_HgsPlusParkingSupportRequired_logged_traits,
    1u,
    v7);
  KiVelocityFlags |= 0x80u;
  result = wil_details_FeatureReporting_ReportUsageToService(
             (__int64)&Feature_SchedulerAssistLongSpinWait__private_reporting,
             0xFDEFDFu,
             0,
             0,
             (__int64)&Feature_HgsPlusParkingSupportRequired_logged_traits,
             1u,
             v8);
  KiVelocityFlags |= 0x400u;
  if ( KiSchedulerForegroundBoostDecayPolicy != 1 )
  {
    result = wil_details_FeatureReporting_ReportUsageToService(
               (__int64)&Feature_SchedulerRemoveForegroundBoostDecay__private_reporting,
               0x122938Eu,
               0,
               0,
               (__int64)&Feature_HgsPlusParkingSupportRequired_logged_traits,
               1u,
               v9);
    KiVelocityFlags |= 0x8000u;
  }
  return result;
}
