/*
 * XREFs of DllInitialize @ 0x1C0063C00
 * Callers:
 *     <none>
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     StorpWatchForRegistryChanges @ 0x1C0019E30 (StorpWatchForRegistryChanges.c)
 *     StorpInitRegistryWatch @ 0x1C0021044 (StorpInitRegistryWatch.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     Feature_Servicing_ScsiPassthroughRobustness__private_IsEnabledDeviceUsage @ 0x1C00228A8 (Feature_Servicing_ScsiPassthroughRobustness__private_IsEnabledDeviceUsage.c)
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 *     RaidLoadATADeviceIdMappings @ 0x1C0041B80 (RaidLoadATADeviceIdMappings.c)
 *     RaidLoadEnclosureIdMappings @ 0x1C0041D90 (RaidLoadEnclosureIdMappings.c)
 *     StorpUpdateDynamicRegistrySettings @ 0x1C0042950 (StorpUpdateDynamicRegistrySettings.c)
 *     RaDetectHeterogeneousCPU @ 0x1C0056F38 (RaDetectHeterogeneousCPU.c)
 *     RaidpIsControlledUpdateOSEnvironment @ 0x1C0064DFC (RaidpIsControlledUpdateOSEnvironment.c)
 *     RaidpIsControlledWinPEEnvironment @ 0x1C0064FE0 (RaidpIsControlledWinPEEnvironment.c)
 *     RaidpIsCurrentOsInstallationUpgrade @ 0x1C006507C (RaidpIsCurrentOsInstallationUpgrade.c)
 *     RaidDecodeSmRegistryBlob @ 0x1C00740F4 (RaidDecodeSmRegistryBlob.c)
 *     StorpWheaAddErrorSource @ 0x1C00A9490 (StorpWheaAddErrorSource.c)
 *     SpVerifierInitialization @ 0x1C00AAA34 (SpVerifierInitialization.c)
 *     StorpRegisterShim @ 0x1C00AB12C (StorpRegisterShim.c)
 *     wil_InitializeFeatureStaging @ 0x1C00B4078 (wil_InitializeFeatureStaging.c)
 */

__int64 DllInitialize()
{
  __int64 v0; // rax
  __int64 v1; // rax
  ULONG MaximumProcessorCount; // eax
  _QWORD *Pool; // rax
  void *v4; // rcx
  ULONG ResultLength[2]; // [rsp+38h] [rbp-D0h] BYREF
  void *DestinationString[3]; // [rsp+40h] [rbp-C8h] BYREF
  int OutputBuffer; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v9; // [rsp+5Ch] [rbp-ACh] BYREF
  int v10; // [rsp+60h] [rbp-A8h] BYREF
  int v11; // [rsp+64h] [rbp-A4h] BYREF
  int v12; // [rsp+68h] [rbp-A0h] BYREF
  int v13; // [rsp+6Ch] [rbp-9Ch] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-98h] BYREF
  struct _UNICODE_STRING v15; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE SystemInformation[12]; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int v17; // [rsp+C4h] [rbp-44h]
  unsigned int v18; // [rsp+CCh] [rbp-3Ch]
  _OSVERSIONINFOW VersionInformation; // [rsp+F8h] [rbp-10h] BYREF
  char v20; // [rsp+212h] [rbp+10Ah]
  _BYTE KeyValueInformation[4]; // [rsp+218h] [rbp+110h] BYREF
  int v22; // [rsp+21Ch] [rbp+114h]
  unsigned int Buffer[65]; // [rsp+224h] [rbp+11Ch] BYREF

  memset(DestinationString, 0, sizeof(DestinationString));
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  ResultLength[0] = 0;
  v15 = 0LL;
  memset_0(&VersionInformation.dwMajorVersion, 0, 0x118uLL);
  LOBYTE(OutputBuffer) = 0;
  memset_0(SystemInformation, 0, 0x40uLL);
  v12 = 0;
  v9 = 4;
  v10 = 0;
  v13 = 0;
  if ( ZwPowerInformation((POWER_INFORMATION_LEVEL)66, 0LL, 0, &OutputBuffer, 1u) >= 0 && (_BYTE)OutputBuffer )
    IsSystemAoAC = 1;
  g_HeterogenousCPU = RaDetectHeterogeneousCPU();
  g_InWinPE = RaidpIsControlledWinPEEnvironment();
  RaidpIsControlledUpdateOSEnvironment();
  g_OSisUpgrade = RaidpIsCurrentOsInstallationUpgrade();
  VersionInformation.dwOSVersionInfoSize = 284;
  RtlGetVersion(&VersionInformation);
  if ( (unsigned __int8)(v20 - 2) > 1u )
    g_OSisClient = 1;
  RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"SMR-HostManaged-Enabled");
  if ( (int)ZwQueryLicenseValue(&DestinationString[1], &v12, &v10, v9, &v9) >= 0 && v10 == 1 )
    IsSMREnabled = 1;
  if ( !_InterlockedExchangeAdd(&NumDllInitialize, 1u) )
  {
    StorpRegisterShim();
    qword_1C00929F8 = (__int64)&EnclosureIdList;
    EnclosureIdList = &EnclosureIdList;
    ExInitializeResourceLite((PERESOURCE)&WPP_MAIN_CB.Dpc.DpcData);
    RaidLoadEnclosureIdMappings();
    WPP_MAIN_CB.DeviceQueue.Lock = (unsigned __int64)&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink;
    WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink = (_LIST_ENTRY *)&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink;
    ExInitializeResourceLite((PERESOURCE)&WPP_MAIN_CB.DeviceExtension);
    RaidLoadATADeviceIdMappings();
    StorpWheaAddErrorSource();
    wil_InitializeFeatureStaging();
    FeatureServicingScsiPassthroughRobustness = (unsigned int)Feature_Servicing_ScsiPassthroughRobustness__private_IsEnabledDeviceUsage() != 0;
  }
  RtlInitUnicodeString(&v15, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\StorPort\\");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &v15;
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
      && v22 == 4
      && ResultLength[0] >= 4 )
    {
      DpcCompletionLimit = Buffer[0];
      if ( !Buffer[0] )
        DpcCompletionLimit = -1;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"HiberFileHybridPriority");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v22 == 3 )
    {
      HiberFileHybridPriority = RaidDecodeSmRegistryBlob((PUCHAR)Buffer);
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"HmbAllocationPolicy");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v22 == 4 )
    {
      HmbAllocationPolicy = Buffer[0];
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"HmbMaximumSizeInBytes");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v22 == 4 )
    {
      HmbMaximumSize = Buffer[0];
      if ( Buffer[0] <= 0x4000000 )
      {
        if ( (Buffer[0] & 0xFFF) != 0 )
          HmbMaximumSize = Buffer[0] & 0x7FFF000;
      }
      else
      {
        HmbMaximumSize = 0x4000000;
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
      && v22 == 4 )
    {
      MiniportBugActionPolicy = Buffer[0];
      if ( Buffer[0] >= 3 )
        MiniportBugActionPolicy = 1;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"AsyncStart");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v22 == 4 )
    {
      StorageAsyncStart = Buffer[0] != 0;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"TelemetryPerformanceHighResolutionTimer");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v22 == 4
      && ResultLength[0] >= 4 )
    {
      g_StorpTraceLoggingPerformanceHighResolutionTimer = Buffer[0];
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"TelemetryPerformanceEnabled");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v22 == 4
      && ResultLength[0] >= 4 )
    {
      g_StorpTraceLoggingPerformanceEnabled = Buffer[0];
    }
    if ( g_StorpTraceLoggingPerformanceEnabled )
    {
      RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"TelemetryIoSizeDistributionEnabled");
      if ( ZwQueryValueKey(
             DestinationString[0],
             (PUNICODE_STRING)&DestinationString[1],
             KeyValuePartialInformation,
             KeyValueInformation,
             0x110u,
             ResultLength) >= 0
        && v22 == 4
        && ResultLength[0] >= 4 )
      {
        g_StorpTraceLoggingIoSizeDistributionEnabled = Buffer[0];
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
      && v22 == 4
      && ResultLength[0] >= 4 )
    {
      v0 = Buffer[0];
      if ( Buffer[0] )
      {
        if ( Buffer[0] >= 0x18uLL )
          v0 = 24LL;
        g_StorpTraceLoggingPerformancePeriod = 36000000000LL * v0;
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
      && v22 == 4
      && ResultLength[0] >= 4 )
    {
      g_StorpTraceLoggingErrorDataEnabled = Buffer[0];
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"TelemetryDeviceHealthEnabled");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v22 == 4
      && ResultLength[0] >= 4 )
    {
      g_StorpTraceLoggingDeviceHealthEnabled = Buffer[0];
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"TelemetryDeviceHealthPeriod");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v22 == 4
      && ResultLength[0] >= 4 )
    {
      v1 = Buffer[0];
      if ( Buffer[0] )
      {
        if ( Buffer[0] >= 0x18uLL )
          v1 = 24LL;
        g_StorpTraceLoggingDeviceHealthTick = v1;
        g_StorpTraceLoggingDeviceHealthPeriod = 36000000000LL * v1;
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
      && v22 == 4
      && ResultLength[0] >= 4 )
    {
      g_StorpTraceLoggingCriticalEventEnabled = Buffer[0];
      g_StorpTraceLoggingCriticalEventEnabledSetByRegistry = 1;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"TelemetryCriticalEventMaximum");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v22 == 4
      && ResultLength[0] >= 4 )
    {
      g_StorpTraceLoggingCriticalEventMaximum = Buffer[0];
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"ExtendedDSMCommandsSupported");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v22 == 4
      && ResultLength[0] >= 4 )
    {
      ExtendedDSMCommandsSupported = Buffer[0] != 0;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"FUAEnable");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v22 == 4
      && ResultLength[0] >= 4 )
    {
      FUAEnabled = Buffer[0] != 0;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"QoSFlags");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v22 == 4
      && ResultLength[0] >= 4 )
    {
      g_QosFlags = Buffer[0];
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"MaxPreAllocatedIoResourceCount");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v22 == 4
      && ResultLength[0] >= 4
      && Buffer[0] )
    {
      StorPreAllocatedMaxIoResourceCount = Buffer[0];
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"DFxEnable");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v22 == 4
      && ResultLength[0] >= 4 )
    {
      DFxEnabled = Buffer[0] != 0;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"OverrideDeviceUniqueIDCapability");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v22 == 4
      && ResultLength[0] >= 4 )
    {
      OverrideDeviceUniqueIDCapability = Buffer[0] != 0;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"DisableRuntimePower");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v22 == 4
      && ResultLength[0] >= 4 )
    {
      RuntimePowerDisabled = Buffer[0] != 0;
    }
    g_ProcessorCountPerGateway = 8;
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"ProcsPerGateway");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v22 == 4
      && ResultLength[0] >= 4 )
    {
      g_ProcessorCountPerGateway = Buffer[0];
      if ( Buffer[0] >= 4 )
      {
        if ( Buffer[0] > 0x10 )
          g_ProcessorCountPerGateway = 16;
      }
      else
      {
        g_ProcessorCountPerGateway = 4;
      }
    }
    MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
    g_MaximumProcessorCount = MaximumProcessorCount;
    if ( g_ProcessorCountPerGateway > MaximumProcessorCount )
      g_ProcessorCountPerGateway = MaximumProcessorCount;
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"MFNDEnable");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v22 == 4
      && ResultLength[0] >= 4 )
    {
      MFNDEnabled = Buffer[0] != 0;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"CreateControlObject");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v22 == 4
      && ResultLength[0] >= 4 )
    {
      CreateControlObject = Buffer[0] != 0;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"DisableIEEE1667");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v22 == 4
      && ResultLength[0] >= 4 )
    {
      DisableIEEE1667 = Buffer[0] != 0;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"EnableNativeTcg");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v22 == 4
      && ResultLength[0] >= 4 )
    {
      EnableNativeTcg = Buffer[0] != 0;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"EnableRegistryWatch");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v22 == 4
      && ResultLength[0] >= 4 )
    {
      EnableRegistryWatch = Buffer[0] != 0;
    }
    StorpUpdateDynamicRegistrySettings(DestinationString[0]);
    if ( EnableRegistryWatch
      && (Pool = (_QWORD *)RaidAllocatePool(64LL, 192LL, 1465016658LL, 0LL), (RegWatchContext = Pool) != 0LL) )
    {
      *Pool = DestinationString[0];
      Pool[1] = StorpUpdateDynamicRegistrySettings;
      StorpInitRegistryWatch((__int64)DestinationString[0], (__int64)Pool);
      StorpWatchForRegistryChanges((__int64)RegWatchContext);
      v4 = 0LL;
      DestinationString[0] = 0LL;
    }
    else
    {
      v4 = DestinationString[0];
    }
    if ( v4 )
      ZwClose(v4);
  }
  if ( SpVrfyLevel != -1 )
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
        && v22 == 4
        && ResultLength[0] >= 4 )
      {
        SpVrfyLevel |= Buffer[0];
        if ( SpVrfyLevel != -1 && !StorPortVerifierInitialized && (unsigned __int8)SpVerifierInitialization() )
        {
          StorPortVerifierInitialized = 1;
          RaidVerifierEnabled = 1;
        }
      }
      ZwClose(DestinationString[0]);
    }
    v11 = 1;
    EmClientQueryRuleState(&GUID_STORAGE_DEVICE_D3_ALLOWED_RULE, &v11);
    if ( v11 == 2 && g_OSisClient )
      StorageD3AllowedOnCurrentPlatform = 1;
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
        && v22 == 4
        && ResultLength[0] >= 4 )
      {
        StorageD3RegistryState = Buffer[0] != 0;
      }
      ZwClose(DestinationString[0]);
    }
    if ( ZwQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL) >= 0 )
    {
      HighestPhysicalAddress = (unsigned __int64)v18 << 12;
      PhysicalMemorySize = (unsigned __int64)v17 << 12;
    }
    ExQueryTimerResolution(&StorMaximumTimeInterval, &StorMinimumTimeInterval, &v13);
  }
  return 0LL;
}
