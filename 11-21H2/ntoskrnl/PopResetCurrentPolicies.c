/*
 * XREFs of PopResetCurrentPolicies @ 0x1408193F4
 * Callers:
 *     NtPowerInformation @ 0x14074F950 (NtPowerInformation.c)
 *     PopCreateHiberFile @ 0x140801108 (PopCreateHiberFile.c)
 *     PopEnableHiberFile @ 0x140818E88 (PopEnableHiberFile.c)
 *     PopThermalZoneAdd @ 0x1408292C0 (PopThermalZoneAdd.c)
 *     PdcPoReportButton @ 0x140862D20 (PdcPoReportButton.c)
 *     PopChangeCapability @ 0x1409895EC (PopChangeCapability.c)
 *     PopThermalZoneRemove @ 0x140990740 (PopThermalZoneRemove.c)
 *     PopBatteryAdd @ 0x140994860 (PopBatteryAdd.c)
 *     PopBatteryRemove @ 0x140995040 (PopBatteryRemove.c)
 *     PopBatteryUpdateCompositeInformation @ 0x1409952B8 (PopBatteryUpdateCompositeInformation.c)
 *     PoInitSystem @ 0x140B026CC (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     PopOpenPowerKey @ 0x1403B1A2C (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PopApplyPolicy @ 0x1408194D8 (PopApplyPolicy.c)
 *     PopDefaultPolicy @ 0x1408626B8 (PopDefaultPolicy.c)
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
