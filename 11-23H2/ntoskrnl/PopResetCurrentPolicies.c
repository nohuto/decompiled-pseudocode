/*
 * XREFs of PopResetCurrentPolicies @ 0x1408243F8
 * Callers:
 *     NtPowerInformation @ 0x140784110 (NtPowerInformation.c)
 *     PopCreateHiberFile @ 0x1408007B0 (PopCreateHiberFile.c)
 *     PopEnableHiberFile @ 0x1408019AC (PopEnableHiberFile.c)
 *     PopThermalZoneAdd @ 0x140823B50 (PopThermalZoneAdd.c)
 *     PdcPoReportButton @ 0x140823F20 (PdcPoReportButton.c)
 *     PopThermalZoneRemove @ 0x14098B210 (PopThermalZoneRemove.c)
 *     PopPolicyDeviceHandleWakeAlarmNotification @ 0x1409947D4 (PopPolicyDeviceHandleWakeAlarmNotification.c)
 *     PopBatteryAdd @ 0x140995180 (PopBatteryAdd.c)
 *     PopBatteryRemove @ 0x140995940 (PopBatteryRemove.c)
 *     PopBatteryUpdateCompositeInformation @ 0x140995BB8 (PopBatteryUpdateCompositeInformation.c)
 *     PoInitSystem @ 0x140B50BBC (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     PopOpenPowerKey @ 0x14038A170 (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x14041B3D0 (ZwQueryValueKey.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PopApplyPolicy @ 0x1408244DC (PopApplyPolicy.c)
 *     PopDefaultPolicy @ 0x1408628B8 (PopDefaultPolicy.c)
 */

__int64 PopResetCurrentPolicies()
{
  __int64 result; // rax
  NTSTATUS v1; // ebx
  __int64 v2; // r9
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+50h] [rbp-B0h] BYREF

  KeyHandle = 0LL;
  ResultLength = 0;
  DestinationString = 0LL;
  memset(KeyValueInformation, 0, 0xF8uLL);
  result = PopOpenPowerKey((__int64)&KeyHandle);
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"SystemPowerPolicy");
    v1 = ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0xF8u,
           &ResultLength);
    if ( v1 < 0 )
    {
      PopDefaultPolicy(&KeyValueInformation[12]);
      v2 = 232LL;
    }
    else
    {
      v2 = ResultLength - 12;
    }
    ResultLength = v2;
    PopApplyPolicy(0LL, 0LL, &KeyValueInformation[12], v2);
    ZwClose(KeyHandle);
    return (unsigned int)v1;
  }
  return result;
}
