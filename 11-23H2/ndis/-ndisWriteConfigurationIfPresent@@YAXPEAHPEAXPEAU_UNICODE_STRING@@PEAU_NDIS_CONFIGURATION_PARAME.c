/*
 * XREFs of ?ndisWriteConfigurationIfPresent@@YAXPEAHPEAXPEAU_UNICODE_STRING@@PEAU_NDIS_CONFIGURATION_PARAMETER@@@Z @ 0x1C00632D4
 * Callers:
 *     ?ndisUpdateOffloadKeywords@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD_PARAMETERS@@@Z @ 0x1C00A76FC (-ndisUpdateOffloadKeywords@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD_PARAMETERS@@@Z.c)
 * Callees:
 *     NdisWriteConfiguration @ 0x1C001C950 (NdisWriteConfiguration.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 */

void __fastcall ndisWriteConfigurationIfPresent(
        PNDIS_STATUS Status,
        _QWORD *ConfigurationHandle,
        PNDIS_STRING Keyword,
        PNDIS_CONFIGURATION_PARAMETER ParameterValue)
{
  void *v8; // rcx
  NTSTATUS v9; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-48h] BYREF
  __int128 KeyValueInformation; // [rsp+38h] [rbp-40h] BYREF

  ResultLength = 0;
  v8 = (void *)ConfigurationHandle[4];
  KeyValueInformation = 0LL;
  v9 = ZwQueryValueKey(v8, Keyword, KeyValueBasicInformation, &KeyValueInformation, 0x10u, &ResultLength);
  if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
    NdisWriteConfiguration(Status, ConfigurationHandle, Keyword, ParameterValue);
  else
    *Status = -1073741823;
}
