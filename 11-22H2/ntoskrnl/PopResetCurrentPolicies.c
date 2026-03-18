/*
 * XREFs of PopResetCurrentPolicies @ 0x140825058
 * Callers:
 *     NtPowerInformation @ 0x140784430 (NtPowerInformation.c)
 *     PopCreateHiberFile @ 0x140800B90 (PopCreateHiberFile.c)
 *     PopEnableHiberFile @ 0x140803C60 (PopEnableHiberFile.c)
 *     PopThermalZoneAdd @ 0x1408247B0 (PopThermalZoneAdd.c)
 *     PdcPoReportButton @ 0x140824B80 (PdcPoReportButton.c)
 *     PopThermalZoneRemove @ 0x14098B0C0 (PopThermalZoneRemove.c)
 *     PopPolicyDeviceHandleWakeAlarmNotification @ 0x140994684 (PopPolicyDeviceHandleWakeAlarmNotification.c)
 *     PopBatteryAdd @ 0x140995030 (PopBatteryAdd.c)
 *     PopBatteryRemove @ 0x1409957F0 (PopBatteryRemove.c)
 *     PopBatteryUpdateCompositeInformation @ 0x140995A68 (PopBatteryUpdateCompositeInformation.c)
 *     PoInitSystem @ 0x140B50B30 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     PopOpenPowerKey @ 0x140387CEC (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     ZwQueryValueKey @ 0x14041A980 (ZwQueryValueKey.c)
 *     memset @ 0x140435400 (memset.c)
 *     PopApplyPolicy @ 0x14082513C (PopApplyPolicy.c)
 *     PopDefaultPolicy @ 0x1408628A0 (PopDefaultPolicy.c)
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
