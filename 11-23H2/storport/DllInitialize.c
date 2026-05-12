/*
 * XREFs of DllInitialize @ 0x1C0064410
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     sub_1C001AAE0 @ 0x1C001AAE0 (sub_1C001AAE0.c)
 *     sub_1C0021E44 @ 0x1C0021E44 (sub_1C0021E44.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C00230AC @ 0x1C00230AC (sub_1C00230AC.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C0042150 @ 0x1C0042150 (sub_1C0042150.c)
 *     sub_1C0042360 @ 0x1C0042360 (sub_1C0042360.c)
 *     sub_1C0042F20 @ 0x1C0042F20 (sub_1C0042F20.c)
 *     sub_1C00575A8 @ 0x1C00575A8 (sub_1C00575A8.c)
 *     sub_1C006562C @ 0x1C006562C (sub_1C006562C.c)
 *     sub_1C0065810 @ 0x1C0065810 (sub_1C0065810.c)
 *     sub_1C00658AC @ 0x1C00658AC (sub_1C00658AC.c)
 *     sub_1C0074924 @ 0x1C0074924 (sub_1C0074924.c)
 *     sub_1C00AA660 @ 0x1C00AA660 (sub_1C00AA660.c)
 *     sub_1C00ABC34 @ 0x1C00ABC34 (sub_1C00ABC34.c)
 *     sub_1C00AC32C @ 0x1C00AC32C (sub_1C00AC32C.c)
 *     sub_1C00B5078 @ 0x1C00B5078 (sub_1C00B5078.c)
 */

__int64 DllInitialize()
{
  __int64 v0; // rax
  __int64 v1; // rax
  _QWORD *v2; // rax
  void *v3; // rcx
  ULONG ResultLength[2]; // [rsp+38h] [rbp-D0h] BYREF
  void *DestinationString[3]; // [rsp+40h] [rbp-C8h] BYREF
  int OutputBuffer; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v8; // [rsp+5Ch] [rbp-ACh] BYREF
  int v9; // [rsp+60h] [rbp-A8h] BYREF
  int v10; // [rsp+64h] [rbp-A4h] BYREF
  int v11; // [rsp+68h] [rbp-A0h] BYREF
  int v12; // [rsp+6Ch] [rbp-9Ch] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-98h] BYREF
  struct _UNICODE_STRING v14; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE SystemInformation[12]; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int v16; // [rsp+C4h] [rbp-44h]
  unsigned int v17; // [rsp+CCh] [rbp-3Ch]
  _OSVERSIONINFOW VersionInformation; // [rsp+F8h] [rbp-10h] BYREF
  char v19; // [rsp+212h] [rbp+10Ah]
  _BYTE KeyValueInformation[4]; // [rsp+218h] [rbp+110h] BYREF
  int v21; // [rsp+21Ch] [rbp+114h]
  unsigned int Buffer[65]; // [rsp+224h] [rbp+11Ch] BYREF

  memset(DestinationString, 0, sizeof(DestinationString));
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  ResultLength[0] = 0;
  v14 = 0LL;
  memset_0(&VersionInformation.dwMajorVersion, 0, 0x118uLL);
  LOBYTE(OutputBuffer) = 0;
  memset_0(SystemInformation, 0, 0x40uLL);
  v11 = 0;
  v8 = 4;
  v9 = 0;
  v12 = 0;
  if ( ZwPowerInformation((POWER_INFORMATION_LEVEL)66, 0LL, 0, &OutputBuffer, 1u) >= 0 && (_BYTE)OutputBuffer )
    byte_1C0093ADD = 1;
  byte_1C0093B04 = sub_1C00575A8();
  byte_1C0093B06 = sub_1C0065810();
  sub_1C006562C();
  byte_1C0093B05 = sub_1C00658AC();
  VersionInformation.dwOSVersionInfoSize = 284;
  RtlGetVersion(&VersionInformation);
  if ( (unsigned __int8)(v19 - 2) > 1u )
    byte_1C0093B07 = 1;
  RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"SMR-HostManaged-Enabled");
  if ( (int)ZwQueryLicenseValue(&DestinationString[1], &v11, &v9, v8, &v8) >= 0 && v9 == 1 )
    byte_1C0093AEB = 1;
  if ( !_InterlockedExchangeAdd(&dword_1C0093B68, 1u) )
  {
    sub_1C00AC32C();
    qword_1C00939F8 = (__int64)&qword_1C00939F0;
    qword_1C00939F0 = &qword_1C00939F0;
    ExInitializeResourceLite((PERESOURCE)&stru_1C0093880.Dpc.DpcData);
    sub_1C0042360();
    stru_1C0093880.DeviceQueue.Lock = (KSPIN_LOCK)&stru_1C0093880.DeviceQueue.DeviceListHead.Blink;
    stru_1C0093880.DeviceQueue.DeviceListHead.Blink = (struct _LIST_ENTRY *)&stru_1C0093880.DeviceQueue.DeviceListHead.Blink;
    ExInitializeResourceLite((PERESOURCE)&stru_1C0093880.DeviceExtension);
    sub_1C0042150();
    sub_1C00AA660();
    sub_1C00B5078();
  }
  if ( (unsigned int)sub_1C00230AC() )
    dword_1C0093AE0 = KeQueryMaximumProcessorCountEx(0xFFFFu);
  RtlInitUnicodeString(&v14, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\StorPort\\");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &v14;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(DestinationString, 0x20019u, &ObjectAttributes) >= 0 )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"DpcCompletionLimit");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v21 == 4
      && ResultLength[0] >= 4 )
    {
      dword_1C00933D0 = Buffer[0];
      if ( !Buffer[0] )
        dword_1C00933D0 = -1;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"HiberFileHybridPriority");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v21 == 3 )
    {
      word_1C00933DC = sub_1C0074924((PUCHAR)Buffer);
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"HmbAllocationPolicy");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v21 == 4 )
    {
      dword_1C00933F0 = Buffer[0];
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"HmbMaximumSizeInBytes");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v21 == 4 )
    {
      dword_1C00933F8 = Buffer[0];
      if ( Buffer[0] <= 0x4000000 )
      {
        if ( (Buffer[0] & 0xFFF) != 0 )
          dword_1C00933F8 = Buffer[0] & 0x7FFF000;
      }
      else
      {
        dword_1C00933F8 = 0x4000000;
      }
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"MiniportBugActionPolicy");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v21 == 4 )
    {
      dword_1C00933E0 = Buffer[0];
      if ( Buffer[0] >= 3 )
        dword_1C00933E0 = 1;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"AsyncStart");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v21 == 4 )
    {
      byte_1C0093ADC = Buffer[0] != 0;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"TelemetryPerformanceHighResolutionTimer");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v21 == 4
      && ResultLength[0] >= 4 )
    {
      dword_1C0093404 = Buffer[0];
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"TelemetryPerformanceEnabled");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v21 == 4
      && ResultLength[0] >= 4 )
    {
      dword_1C0093400 = Buffer[0];
    }
    if ( dword_1C0093400 )
    {
      RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"TelemetryIoSizeDistributionEnabled");
      if ( ZwQueryValueKey(
             DestinationString[0],
             (PUNICODE_STRING)&DestinationString[1],
             KeyValuePartialInformation,
             KeyValueInformation,
             0x110u,
             ResultLength) >= 0
        && v21 == 4
        && ResultLength[0] >= 4 )
      {
        dword_1C0093B14 = Buffer[0];
      }
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"TelemetryPerformancePeriod");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v21 == 4
      && ResultLength[0] >= 4 )
    {
      v0 = Buffer[0];
      if ( Buffer[0] )
      {
        if ( Buffer[0] >= 0x18uLL )
          v0 = 24LL;
        qword_1C0093410 = 36000000000LL * v0;
      }
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"TelemetryErrorDataEnabled");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v21 == 4
      && ResultLength[0] >= 4 )
    {
      dword_1C0093408 = Buffer[0];
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"TelemetryDeviceHealthEnabled");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v21 == 4
      && ResultLength[0] >= 4 )
    {
      dword_1C0093428 = Buffer[0];
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"TelemetryDeviceHealthPeriod");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v21 == 4
      && ResultLength[0] >= 4 )
    {
      v1 = Buffer[0];
      if ( Buffer[0] )
      {
        if ( Buffer[0] >= 0x18uLL )
          v1 = 24LL;
        dword_1C009342C = v1;
        qword_1C0093420 = 36000000000LL * v1;
      }
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"TelemetryCriticalEventEnabled");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v21 == 4
      && ResultLength[0] >= 4 )
    {
      dword_1C0093B1C = Buffer[0];
      byte_1C0093B18 = 1;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"TelemetryCriticalEventMaximum");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v21 == 4
      && ResultLength[0] >= 4 )
    {
      dword_1C0093418 = Buffer[0];
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"ExtendedDSMCommandsSupported");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v21 == 4
      && ResultLength[0] >= 4 )
    {
      byte_1C0093AE9 = Buffer[0] != 0;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"FUAEnable");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v21 == 4
      && ResultLength[0] >= 4 )
    {
      byte_1C0093AE7 = Buffer[0] != 0;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"QoSFlags");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v21 == 4
      && ResultLength[0] >= 4 )
    {
      dword_1C0093878 = Buffer[0];
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"MaxPreAllocatedIoResourceCount");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v21 == 4
      && ResultLength[0] >= 4
      && Buffer[0] )
    {
      dword_1C00933FC = Buffer[0];
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"DFxEnable");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v21 == 4
      && ResultLength[0] >= 4 )
    {
      byte_1C00933D4 = Buffer[0] != 0;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"OverrideDeviceUniqueIDCapability");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v21 == 4
      && ResultLength[0] >= 4 )
    {
      byte_1C00933F4 = Buffer[0] != 0;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"DisableRuntimePower");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v21 == 4
      && ResultLength[0] >= 4 )
    {
      byte_1C0093AEC = Buffer[0] != 0;
    }
    dword_1C0093AD8 = 8;
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"ProcsPerGateway");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v21 == 4
      && ResultLength[0] >= 4 )
    {
      dword_1C0093AD8 = Buffer[0];
      if ( Buffer[0] >= 4 )
      {
        if ( Buffer[0] > 0x10 )
          dword_1C0093AD8 = 16;
      }
      else
      {
        dword_1C0093AD8 = 4;
      }
    }
    if ( !(unsigned int)sub_1C00230AC() )
      dword_1C0093AE0 = KeQueryMaximumProcessorCountEx(0xFFFFu);
    if ( dword_1C0093AD8 > (unsigned int)dword_1C0093AE0 )
      dword_1C0093AD8 = dword_1C0093AE0;
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"MFNDEnable");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v21 == 4
      && ResultLength[0] >= 4 )
    {
      byte_1C0093AE6 = Buffer[0] != 0;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"CreateControlObject");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v21 == 4
      && ResultLength[0] >= 4 )
    {
      byte_1C0093AEA = Buffer[0] != 0;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"DisableIEEE1667");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v21 == 4
      && ResultLength[0] >= 4 )
    {
      byte_1C0093AE4 = Buffer[0] != 0;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"EnableNativeTcg");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v21 == 4
      && ResultLength[0] >= 4 )
    {
      byte_1C0093AE8 = Buffer[0] != 0;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"EnableRegistryWatch");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v21 == 4
      && ResultLength[0] >= 4 )
    {
      byte_1C0093AED = Buffer[0] != 0;
    }
    sub_1C0042F20(DestinationString[0]);
    if ( byte_1C0093AED && (v2 = (_QWORD *)sub_1C0007CF4(64LL, 192LL, 1465016658LL, 0LL), (qword_1C0093AF0 = v2) != 0LL) )
    {
      *v2 = DestinationString[0];
      v2[1] = sub_1C0042F20;
      sub_1C0021E44((__int64)DestinationString[0], (__int64)v2);
      sub_1C001AAE0((__int64)qword_1C0093AF0);
      v3 = 0LL;
      DestinationString[0] = 0LL;
    }
    else
    {
      v3 = DestinationString[0];
    }
    if ( v3 )
      ZwClose(v3);
  }
  if ( dword_1C0093B10 != -1 )
  {
    RtlInitUnicodeString(
      (PUNICODE_STRING)&DestinationString[1],
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\StorPort\\Verifier");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&DestinationString[1];
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(DestinationString, 0x20019u, &ObjectAttributes) >= 0 )
    {
      RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"VerifyLevel");
      if ( ZwQueryValueKey(
             DestinationString[0],
             (PUNICODE_STRING)&DestinationString[1],
             KeyValuePartialInformation,
             KeyValueInformation,
             0x110u,
             ResultLength) >= 0
        && v21 == 4
        && ResultLength[0] >= 4 )
      {
        dword_1C0093B10 |= Buffer[0];
        if ( dword_1C0093B10 != -1 && !dword_1C0093B0C && (unsigned __int8)sub_1C00ABC34() )
        {
          dword_1C0093B0C = 1;
          dword_1C0093B08 = 1;
        }
      }
      ZwClose(DestinationString[0]);
    }
    v10 = 1;
    EmClientQueryRuleState(&unk_1C008B040, &v10);
    if ( v10 == 2 && byte_1C0093B07 )
      byte_1C0093AE5 = 1;
    RtlInitUnicodeString(
      (PUNICODE_STRING)&DestinationString[1],
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Storage");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&DestinationString[1];
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(DestinationString, 0x20019u, &ObjectAttributes) >= 0 )
    {
      RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"StorageD3InModernStandby");
      if ( ZwQueryValueKey(
             DestinationString[0],
             (PUNICODE_STRING)&DestinationString[1],
             KeyValuePartialInformation,
             KeyValueInformation,
             0x110u,
             ResultLength) >= 0
        && v21 == 4
        && ResultLength[0] >= 4 )
      {
        dword_1C00933D8 = Buffer[0] != 0;
      }
      ZwClose(DestinationString[0]);
    }
    if ( ZwQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL) >= 0 )
    {
      qword_1C00933E8 = (unsigned __int64)v17 << 12;
      qword_1C0093AF8 = (unsigned __int64)v16 << 12;
    }
    ExQueryTimerResolution(&dword_1C0093B60, &dword_1C0093B64, &v12);
  }
  return 0LL;
}
