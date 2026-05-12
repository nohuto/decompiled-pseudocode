/*
 * XREFs of ?PmQueryGlobalSettings@@YAJPEAU_CONTROL_EXTENSION@@@Z @ 0x1C002A404
 * Callers:
 *     DriverEntry @ 0x1C002A078 (DriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000B3D0 (__security_check_cookie.c)
 */

__int64 __fastcall PmQueryGlobalSettings(struct _CONTROL_EXTENSION *a1)
{
  NTSTATUS BootDiskInformationLite; // ebx
  NTSTATUS v3; // ebx
  int v4; // eax
  int v5; // edx
  NTSTATUS v6; // eax
  HANDLE KeyHandle; // [rsp+30h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-28h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+40h] [rbp-20h] BYREF
  int v11; // [rsp+44h] [rbp-1Ch]
  int v12; // [rsp+48h] [rbp-18h]
  int v13; // [rsp+4Ch] [rbp-14h]

  ResultLength = 0;
  KeyHandle = 0LL;
  BootDiskInformationLite = IoOpenDriverRegistryKey(*((_QWORD *)a1 + 1), 1LL, 1LL, 0LL, &KeyHandle);
  if ( BootDiskInformationLite >= 0 )
  {
    v3 = ZwQueryValueKey(KeyHandle, &SanPolicy, KeyValuePartialInformation, KeyValueInformation, 0x10u, &ResultLength);
    ZwClose(KeyHandle);
    if ( v3 == -1073741772 )
    {
      BootDiskInformationLite = IoOpenDriverRegistryKey(*((_QWORD *)a1 + 1), 0LL, 1LL, 0LL, &KeyHandle);
      if ( BootDiskInformationLite < 0 )
        return (unsigned int)BootDiskInformationLite;
      v3 = ZwQueryValueKey(KeyHandle, &SanPolicy, KeyValuePartialInformation, KeyValueInformation, 0x10u, &ResultLength);
      ZwClose(KeyHandle);
    }
    if ( v3 >= 0 && v11 == 4 && v12 == 4 )
    {
      v4 = v13;
    }
    else
    {
      v4 = 1;
      v13 = 1;
    }
    *((_DWORD *)a1 + 40) = v4;
    v5 = *((_DWORD *)a1 + 40);
    if ( (unsigned int)(v4 - 1) > 3 )
      v5 = 1;
    *((_DWORD *)a1 + 40) = v5;
    v6 = RtlCheckRegistryKey(2u, (PWSTR)L"MiniNT");
    BootDiskInformationLite = v6;
    if ( v6 >= 0 )
    {
      *((_BYTE *)a1 + 164) = 1;
    }
    else if ( v6 != -1073741772 )
    {
      return (unsigned int)BootDiskInformationLite;
    }
    *((_BYTE *)a1 + 165) = ExIsSoftBoot();
    BootDiskInformationLite = IoGetBootDiskInformationLite((PBOOTDISK_INFORMATION_LITE *)a1 + 23);
    if ( BootDiskInformationLite >= 0 )
      KeQueryPerformanceCounter((PLARGE_INTEGER)a1 + 53);
  }
  return (unsigned int)BootDiskInformationLite;
}
