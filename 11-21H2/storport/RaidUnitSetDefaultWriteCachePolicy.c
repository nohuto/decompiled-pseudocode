/*
 * XREFs of RaidUnitSetDefaultWriteCachePolicy @ 0x1C0055DE0
 * Callers:
 *     RaUnitQueryCapabilitiesIrp @ 0x1C0089094 (RaUnitQueryCapabilitiesIrp.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     memset @ 0x1C0024340 (memset.c)
 */

__int64 __fastcall RaidUnitSetDefaultWriteCachePolicy(__int64 a1)
{
  unsigned int v1; // ebx
  NTSTATUS RegistryValues; // eax
  __int64 ValueData; // [rsp+48h] [rbp-C0h] BYREF
  void *KeyHandle; // [rsp+50h] [rbp-B8h] BYREF
  void *DeviceRegKey; // [rsp+58h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES DeviceRegKey_8; // [rsp+60h] [rbp-A8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v10[42]; // [rsp+A8h] [rbp-60h] BYREF

  v1 = 0;
  LODWORD(ValueData) = 0;
  DeviceRegKey = 0LL;
  KeyHandle = 0LL;
  memset(&DeviceRegKey_8, 0, sizeof(DeviceRegKey_8));
  DestinationString = 0LL;
  if ( !a1 || (*(_DWORD *)(a1 + 1824) & 0x10) == 0 )
  {
    v1 = -1056964601;
    goto LABEL_15;
  }
  if ( KeGetCurrentIrql() )
  {
    v1 = -1056964600;
    goto LABEL_15;
  }
  if ( IoOpenDeviceRegistryKey(*(PDEVICE_OBJECT *)(a1 + 8), 1u, 0x2001Fu, &DeviceRegKey) < 0 )
    goto LABEL_6;
  RtlInitUnicodeString(&DestinationString, L"Disk");
  DeviceRegKey_8.RootDirectory = DeviceRegKey;
  DeviceRegKey_8.Length = 48;
  DeviceRegKey_8.ObjectName = &DestinationString;
  DeviceRegKey_8.Attributes = 576;
  *(_OWORD *)&DeviceRegKey_8.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x2001Fu, &DeviceRegKey_8) >= 0 )
  {
    memset(v10, 0, sizeof(v10));
    v10[3] = &ValueData;
    LODWORD(v10[1]) = 288;
    v10[5] = &ValueData;
    v10[2] = L"UserWriteCacheSetting";
    LODWORD(v10[4]) = 67108868;
    LODWORD(v10[6]) = 4;
    RegistryValues = RtlQueryRegistryValuesEx(1073741828LL, KeyHandle, v10, 0LL, 0LL);
    goto LABEL_10;
  }
  RegistryValues = ZwCreateKey(&KeyHandle, 0x2001Fu, &DeviceRegKey_8, 0, 0LL, 0, 0LL);
  if ( RegistryValues < 0 )
  {
LABEL_10:
    if ( RegistryValues != -1073741772 )
      goto LABEL_12;
  }
  LODWORD(ValueData) = 1;
  RegistryValues = RtlWriteRegistryValue(0x40000000u, (PCWSTR)KeyHandle, L"UserWriteCacheSetting", 4u, &ValueData, 4u);
LABEL_12:
  if ( RegistryValues < 0 )
LABEL_6:
    v1 = -1056964607;
LABEL_15:
  if ( DeviceRegKey )
    ZwClose(DeviceRegKey);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v1;
}
