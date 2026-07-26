/*
 * XREFs of DriverEntry @ 0x1C01608CC
 * Callers:
 *     GsDriverEntry @ 0x1C0160010 (GsDriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0006820 (WPP_RECORDER_SF_.c)
 *     NdisAllocateNetBufferListPool @ 0x1C001ABE0 (NdisAllocateNetBufferListPool.c)
 *     WPP_RECORDER_SF_D @ 0x1C002A228 (WPP_RECORDER_SF_D.c)
 *     ?ndisDoesSystemSupportSriov@@YAXXZ @ 0x1C002EB04 (-ndisDoesSystemSupportSriov@@YAXXZ.c)
 *     McGenEventRegister_EtwRegister @ 0x1C003118C (McGenEventRegister_EtwRegister.c)
 *     NdisAllocatePacketPoolEx @ 0x1C00311C0 (NdisAllocatePacketPoolEx.c)
 *     NdisAllocateNetBufferPool @ 0x1C00317C0 (NdisAllocateNetBufferPool.c)
 *     NdisDllInitialize @ 0x1C0031B90 (NdisDllInitialize.c)
 *     InitializeTelemetryAssertsKMByDriverObject @ 0x1C0031C78 (InitializeTelemetryAssertsKMByDriverObject.c)
 *     WPP_RECORDER_SF_d @ 0x1C003338C (WPP_RECORDER_SF_d_ea_1C003338C.c)
 *     ?ndisRegisterPDCounterSets@@YAXXZ @ 0x1C0034E34 (-ndisRegisterPDCounterSets@@YAXXZ.c)
 *     ?ndisWppInitTracingEx@@YAXPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@@Z @ 0x1C0034FFC (-ndisWppInitTracingEx@@YAXPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@@Z.c)
 *     ?ndisVerifierInitialization@@YAEXZ @ 0x1C0035EE0 (-ndisVerifierInitialization@@YAEXZ.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     ?Initialize@KPushLockManualConstruct@@QEAAXXZ @ 0x1C010C694 (-Initialize@KPushLockManualConstruct@@QEAAXXZ.c)
 *     ??0KnobNamespace@@QEAA@PEAU_DRIVER_OBJECT@@PEBU_CONFIG_KNOB_NAMESPACE@@@Z @ 0x1C0118D50 (--0KnobNamespace@@QEAA@PEAU_DRIVER_OBJECT@@PEBU_CONFIG_KNOB_NAMESPACE@@@Z.c)
 *     ??0KLoader@@QEAA@XZ @ 0x1C011F454 (--0KLoader@@QEAA@XZ.c)
 *     ?ndisAllocateEventLog@@YAPEAUNDIS_EVENT_LOG_HANDLE__@@W4_NDIS_EVENT_LOG_SIZE@@G@Z @ 0x1C011F470 (-ndisAllocateEventLog@@YAPEAUNDIS_EVENT_LOG_HANDLE__@@W4_NDIS_EVENT_LOG_SIZE@@G@Z.c)
 *     TlgRegisterAggregateProviderEx @ 0x1C011F868 (TlgRegisterAggregateProviderEx.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C011F95C (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     ?ndisReinitializeHistograms@@YAJXZ @ 0x1C012081C (-ndisReinitializeHistograms@@YAJXZ.c)
 *     ?ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z @ 0x1C0120F0C (-ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z.c)
 *     ?ndisInitializeStackTraces@@YAXXZ @ 0x1C0121518 (-ndisInitializeStackTraces@@YAXXZ.c)
 *     wil_InitializeFeatureStaging @ 0x1C0160078 (wil_InitializeFeatureStaging.c)
 *     ?ndisInitializeWatchdogSubsystem@@YAXXZ @ 0x1C01601F8 (-ndisInitializeWatchdogSubsystem@@YAXXZ.c)
 *     ?InitializeSubsystem@KnobNamespace@@SAXXZ @ 0x1C016022C (-InitializeSubsystem@KnobNamespace@@SAXXZ.c)
 *     ?ndisMiniportFdoInitializeSubsystem@@YAJXZ @ 0x1C0160260 (-ndisMiniportFdoInitializeSubsystem@@YAJXZ.c)
 *     ?ndisLwmInitializeSubsystem@@YAJXZ @ 0x1C01602B8 (-ndisLwmInitializeSubsystem@@YAJXZ.c)
 *     ?ndisNblTrackerInitialize@@YAXXZ @ 0x1C0160468 (-ndisNblTrackerInitialize@@YAXXZ.c)
 *     ?ndisIfInitializePhase1@@YAJXZ @ 0x1C01607AC (-ndisIfInitializePhase1@@YAJXZ.c)
 *     ?ndisCreateAcl@@YAPEAU_ACL@@EEEEEEK@Z @ 0x1C0161218 (-ndisCreateAcl@@YAPEAU_ACL@@EEEEEEK@Z.c)
 *     ?ndisCreateGenericSD@@YAJPEAU_ACL@@PEAD@Z @ 0x1C0161514 (-ndisCreateGenericSD@@YAJPEAU_ACL@@PEAD@Z.c)
 *     ?ndisPDInitialize@@YAJXZ @ 0x1C01615E4 (-ndisPDInitialize@@YAJXZ.c)
 *     ?ndisCpuInitializeSubsystemPhase2@@YAJXZ @ 0x1C0161634 (-ndisCpuInitializeSubsystemPhase2@@YAJXZ.c)
 *     ?ndisBindInitialize@@YAJXZ @ 0x1C01616A8 (-ndisBindInitialize@@YAJXZ.c)
 *     ?ndisAoAcInitializeSubsystem@@YAJXZ @ 0x1C01617C0 (-ndisAoAcInitializeSubsystem@@YAJXZ.c)
 *     ?ndisMpHookNmrInitializeClient@@YAJXZ @ 0x1C0161848 (-ndisMpHookNmrInitializeClient@@YAJXZ.c)
 *     ?ndisVBusNmrInitializeClient@@YAJXZ @ 0x1C0161904 (-ndisVBusNmrInitializeClient@@YAJXZ.c)
 *     ?ndisStackExpansionInitializeSubsystem@@YAJXZ @ 0x1C01619E4 (-ndisStackExpansionInitializeSubsystem@@YAJXZ.c)
 *     ?ndisFdoInitializeSubsystem@@YAJXZ @ 0x1C0161B08 (-ndisFdoInitializeSubsystem@@YAJXZ.c)
 *     ?ndisPcwInitialize@@YAJXZ @ 0x1C01621B0 (-ndisPcwInitialize@@YAJXZ.c)
 *     ?ndisInitializeDmaSubsystem@@YAXXZ @ 0x1C0162AA4 (-ndisInitializeDmaSubsystem@@YAXXZ.c)
 *     ?ndisInitializePeriodicReceives@@YAHXZ @ 0x1C0163044 (-ndisInitializePeriodicReceives@@YAHXZ.c)
 *     ?ndisReadRegistry@@YAXXZ @ 0x1C0163360 (-ndisReadRegistry@@YAXXZ.c)
 *     ?ndisDpcTimeoutInitializeSubsystem@@YAXXZ @ 0x1C0163624 (-ndisDpcTimeoutInitializeSubsystem@@YAXXZ.c)
 *     ?ndisInitializeNblPoolGlobal@@YAXXZ @ 0x1C016393C (-ndisInitializeNblPoolGlobal@@YAXXZ.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  struct _DRIVER_OBJECT *v9; // rbx
  unsigned __int8 (*v10)(void *, const struct KnobDescriptor *, unsigned __int64 *); // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  NTSTATUS v13; // ebx
  __int64 v14; // r8
  ULONG v15; // r9d
  char *v16; // rbx
  __int64 v17; // rsi
  NTSTATUS v18; // eax
  int v19; // eax
  SIZE_T v20; // rax
  SIZE_T v21; // rax
  unsigned __int8 v22; // dl
  unsigned __int8 v23; // cl
  unsigned __int8 v24; // r8
  unsigned __int8 v25; // r9
  unsigned __int8 v26; // dl
  unsigned __int8 v27; // cl
  unsigned __int8 v28; // r8
  unsigned __int8 v29; // r9
  unsigned __int8 v30; // dl
  unsigned __int8 v31; // cl
  unsigned __int8 v32; // r8
  unsigned __int8 v33; // r9
  unsigned __int8 v34; // dl
  unsigned __int8 v35; // cl
  unsigned __int8 v36; // r8
  unsigned __int8 v37; // r9
  unsigned __int8 (*v38)(void *, const struct KnobDescriptor *, unsigned __int64 *); // r8
  unsigned __int8 Handle; // [rsp+20h] [rbp-E0h]
  unsigned __int8 Handlea; // [rsp+20h] [rbp-E0h]
  unsigned __int8 Handleb; // [rsp+20h] [rbp-E0h]
  unsigned __int8 Handlec; // [rsp+20h] [rbp-E0h]
  __int64 Tag; // [rsp+28h] [rbp-D8h]
  int Status; // [rsp+40h] [rbp-C0h] BYREF
  struct _NET_BUFFER_LIST_POOL_PARAMETERS Parameters; // [rsp+48h] [rbp-B8h] BYREF
  struct _NET_BUFFER_POOL_PARAMETERS v47; // [rsp+60h] [rbp-A0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  struct _PCW_REGISTRATION_INFORMATION Info; // [rsp+80h] [rbp-80h] BYREF
  __int64 v50; // [rsp+B0h] [rbp-50h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp-48h] BYREF
  _OWORD OutputBuffer[2]; // [rsp+E8h] [rbp-18h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  memset(OutputBuffer, 0, sizeof(OutputBuffer));
  ndisWppInitTracingEx(DriverObject, RegistryPath);
  traceInited = 1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xAu,
      (struct _GUID *)&WPP_fb317eeef9633c6fdc03619c7424905f_Traceguids);
  McGenEventRegister_EtwRegister(
    (const GUID *)&NDIS_PROVIDER_ID,
    v4,
    NDIS_PROVIDER_ID_Context,
    NDIS_PROVIDER_ID_Context);
  McGenEventRegister_EtwRegister(
    &SLEEPSTUDY_ETW_PROVIDER,
    v5,
    SLEEPSTUDY_ETW_PROVIDER_Context,
    SLEEPSTUDY_ETW_PROVIDER_Context);
  if ( Microsoft_Windows_Networking_CorrelationHandle
    || !EtwRegister(
          &Microsoft_Windows_Networking_CorrelationId,
          (PETWENABLECALLBACK)Microsoft_Windows_Networking_Correlation_EtwEnableCallback,
          0LL,
          &Microsoft_Windows_Networking_CorrelationHandle) )
  {
    Microsoft_Windows_Networking_ProviderId = NDIS_PROVIDER_ID;
  }
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_1C00F4210, 0LL, 0LL);
  InitializeTelemetryAssertsKMByDriverObject((__int64)DriverObject);
  v8 = TlgRegisterAggregateProviderEx(v7, v6);
  if ( v8 && *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      3u,
      1u,
      0xBu,
      (struct _GUID *)&WPP_fb317eeef9633c6fdc03619c7424905f_Traceguids,
      v8);
  DbgSetDebugFilterState(0x78u, 0xFFFFFFFF, 1u);
  ndisRegistryPath.Length = 0;
  ndisRegistryPath.MaximumLength = RegistryPath->Length;
  ndisRegistryPath.Buffer = (wchar_t *)ExAllocatePool2(258LL, RegistryPath->Length + 2LL, 538985550);
  if ( !ndisRegistryPath.Buffer )
    return -1073741670;
  RtlCopyUnicodeString(&ndisRegistryPath, RegistryPath);
  ndisDriverObject = DriverObject;
  wil_InitializeFeatureStaging();
  NdisDllInitialize();
  v9 = (struct _DRIVER_OBJECT *)ndisDriverObject;
  KnobNamespace::InitializeSubsystem();
  memset(&Parameters, 0, sizeof(Parameters));
  KnobNamespace::KnobNamespace(&stru_1C00F5D38, v9, (const struct _CONFIG_KNOB_NAMESPACE *)&Parameters);
  ndisNblTrackerInitialize();
  ndisRegisterKnobs(&stru_1C00D5270, 17LL, v10, 0LL);
  v13 = ndisFdoInitializeSubsystem();
  if ( v13 >= 0 )
  {
    v13 = ndisLwmInitializeSubsystem(v12, v11, v14, v15);
    if ( v13 >= 0 )
    {
      v13 = ndisStackExpansionInitializeSubsystem();
      if ( v13 >= 0 )
      {
        DriverObject->DriverUnload = 0LL;
        KeInitializeSpinLock(&ndisGlobalLock);
        KeInitializeSpinLock(&ndisMiniDriverListLock);
        KeInitializeSpinLock(&ndisProtocolListLock);
        KeInitializeSpinLock(&ndisMiniportListLock);
        KeInitializeSpinLock(&ndisGlobalPacketPoolListLock);
        KeInitializeSpinLock(&ndisGlobalOpenListLock);
        KeInitializeSpinLock(&ndisGlobalFilterListLock);
        KeInitializeSpinLock(&ndisFilterDriverListLock);
        KeInitializeSpinLock(&ndisAbortedRequestsListLock);
        KeInitializeSpinLock(&ndisGlobalTimerListLock);
        ndisDmaAlignment = 8;
        ndisTimeIncrement = KeQueryTimeIncrement();
        ExInitializeResourceLite(&SharedMemoryResource);
        ndisReadRegistry();
        ndisFlags &= ~0x400u;
        KeBootTime.QuadPart = MEMORY[0xFFFFF78000000014];
        PoolAgingTicks.HighPart = 0;
        PoolAgingTicks.LowPart = 0x23C34600 / KeQueryTimeIncrement();
        *((_QWORD *)ndisDriverObject + 10) = &unk_1C00D7390;
        ndisInitializeStackTraces();
        ndisWorkItemLog = (struct NDIS_EVENT_LOG_HANDLE__ *)ndisAllocateEventLog(0, 7);
        imp_WppRecorderIsDefaultLogAvailable(WPP_GLOBAL_Control);
        if ( (ndisFlags & 0x100) == 0 )
          ndisVerifierInitialization();
        v16 = (char *)&ndisAbortedRequests;
        v17 = 16LL;
        do
        {
          memset(v16, 0, 0xB0uLL);
          v16 += 248;
          --v17;
        }
        while ( v17 );
        RtlInitUnicodeString(&DestinationString, L"\\CallBack\\NdisBindUnbind");
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 592;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v18 = ExCreateCallback((PCALLBACK_OBJECT *)&ndisBindUnbindCallbackObject, &ObjectAttributes, 1u, 1u);
        if ( v18 < 0 )
          DbgPrint("Ndis: failed to create a Callback object. Status %lx\n", v18);
        if ( PoRegisterPowerSettingCallback(
               0LL,
               &GUID_ACDC_POWER_SOURCE,
               (PPOWER_SETTING_CALLBACK)ndisPowerStateCallback,
               0LL,
               &ndisPowerStateCallbackHandle) < 0 )
          DbgPrint("Ndis: failed to register a power state Callback routine\n");
        if ( ZwPowerInformation(SystemBatteryState, 0LL, 0, OutputBuffer, 0x20u) < 0 )
          goto LABEL_23;
        if ( LOBYTE(OutputBuffer[0]) )
        {
          if ( LOBYTE(OutputBuffer[0]) == 1 )
          {
LABEL_22:
            ndisAcOnLine = 1;
LABEL_23:
            ndisAoAcInitializeSubsystem();
            KeInitializeSpinLock(&qword_1C00F7140);
            qword_1C00F7318 = (__int64)&qword_1C00F7310;
            qword_1C00F7310 = (__int64)&qword_1C00F7310;
            ndisInitializeNblPoolGlobal();
            qword_1C00F7260 = (__int64)&ndisGlobalPacketPoolList;
            ndisGlobalPacketPoolList.Flink = &ndisGlobalPacketPoolList;
            qword_1C00F5E18 = (__int64)&ndisGlobalTimerList;
            ndisGlobalTimerList.Flink = &ndisGlobalTimerList;
            KeInitializeMutex(&ndisPnPMutex, 0xFFFFu);
            KeInitializeMutex(&ndisPeriodicReceivesMutex, 0xFFFFu);
            ndisPcwInitialize();
            ndisInitializeWatchdogSubsystem();
            *(_QWORD *)&Parameters.DataSize = 0LL;
            Parameters.PoolTag = 1684948046;
            Parameters.Header = (_NDIS_OBJECT_HEADER)1311104;
            *(_DWORD *)&Parameters.ProtocolId = 256;
            ndisNetBufferListPool = NdisAllocateNetBufferListPool(0LL, &Parameters);
            if ( !ndisNetBufferListPool )
              DbgPrint("NDIS: failed to create ndis net buffer list special pool.\n");
            *(_QWORD *)&v47.DataSize = 0LL;
            v47.Header = (_NDIS_OBJECT_HEADER)1048960;
            v47.PoolTag = 1684948046;
            ndisNetBufferPool = NdisAllocateNetBufferPool(0LL, &v47);
            if ( !ndisNetBufferPool )
              DbgPrint("NDIS: failed to create ndis net buffer special pool.\n");
            v19 = ndisInitializePeriodicReceives();
            if ( v19 < 0 && *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              LODWORD(Tag) = v19;
              WPP_RECORDER_SF_D(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                1u,
                1u,
                0xCu,
                (struct _GUID *)&WPP_fb317eeef9633c6fdc03619c7424905f_Traceguids,
                Tag);
            }
            ndisPerProcRcvTrackers = (struct _NDIS_RCV_TRACKER_ARRAY *)ExAllocatePool2(
                                                                         64LL,
                                                                         2096 * ndisMaxNumberOfProcessors,
                                                                         538985550);
            if ( !ndisPerProcRcvTrackers && *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                2u,
                1u,
                0xAu,
                (struct _GUID *)&WPP_36f24d049e8d3fc3e46fb027110f7201_Traceguids);
            Status = 0;
            NdisAllocatePacketPoolEx(&Status, &ndisSendPacketPool, 0xFFFFu, 0, 0x20u);
            NdisAllocatePacketPoolEx(&Status, &ndisRecvPacketPool, 0xFFFFu, 0, 0x30u);
            v20 = MmSizeOfMdl((PVOID)0xFFF, 0x64uLL);
            ExInitializeNPagedLookasideList(
              &ndisRcv100BytesLL,
              0LL,
              0LL,
              0x200u,
              ((v20 + 7) & 0xFFFFFFFFFFFFFFF8uLL) + 100,
              0x7254444Eu,
              0);
            v21 = MmSizeOfMdl((PVOID)0xFFF, 0x5EAuLL);
            ExInitializeNPagedLookasideList(
              &ndisRcv1514BytesLL,
              0LL,
              0LL,
              0x200u,
              ((v21 + 7) & 0xFFFFFFFFFFFFFFF8uLL) + 1514,
              0x7254444Eu,
              0);
            AllUsersAclRead = ndisCreateAcl(v23, v22, v24, v25, Handle, 1, 0x80000001);
            AllUsersAclWrite = ndisCreateAcl(v27, v26, v28, v29, Handlea, 1, 0x40000002u);
            AllUsersAclReadWrite = ndisCreateAcl(v31, v30, v32, v33, Handleb, 1, 0xC0000013);
            AdminsAcl = ndisCreateAcl(v35, v34, v36, v37, Handlec, 0, 0xC0000013);
            ndisCreateGenericSD(AllUsersAclRead, &AllUsersReadSecurityDescriptor);
            ndisCreateGenericSD(AllUsersAclWrite, &AllUsersWriteSecurityDescriptor);
            ndisCreateGenericSD(AllUsersAclReadWrite, &AllUsersReadWriteSecurityDescriptor);
            ndisCreateGenericSD(AdminsAcl, &AdminsSecurityDescriptor);
            IoRegisterBootDriverReinitialization(DriverObject, (PDRIVER_REINITIALIZE)ndisBootDriverReinit, 0LL);
            ndisDpcTimeoutInitializeSubsystem();
            ndisCpuInitializeSubsystemPhase2();
            v13 = ndisBindInitialize();
            if ( v13 >= 0 )
            {
              ndisIfInitializePhase1();
              v13 = ndisPDInitialize();
              if ( v13 >= 0 )
              {
                ndisVBusNmrInitializeClient();
                ndisMiniportFdoInitializeSubsystem();
                *(_QWORD *)&Info.Version = 512LL;
                Info.Name = (PCUNICODE_STRING)&`ndisInitRegistrationInformationNetworkDirectCounterSet'::`2'::Name;
                *(_QWORD *)&Info.CounterCount = 10LL;
                Info.Counters = (PPCW_COUNTER_DESCRIPTOR)&`ndisInitRegistrationInformationNetworkDirectCounterSet'::`2'::Descriptors;
                v50 = 0LL;
                Info.Callback = (PPCW_CALLBACK)ndisNdkPcwProviderCallback;
                Info.CallbackContext = 0LL;
                PcwRegister(&ndisNetworkDirectCounterSet, &Info);
                qword_1C00F53A0 = 0LL;
                qword_1C00F53A8 = (__int64 (__fastcall *)(_QWORD))ndisPktMonComponentNotify;
                KeInitializeMutex(&PktMonCompMutex, 0);
                qword_1C00F50A8 = &PktMonCompList;
                PktMonCompList = (__int64)&PktMonCompList;
                PktMonClientNotify.ClientRegistrationInstance.ModuleId = &NPI_MS_NDIS_MODULEID;
                qword_1C00F5398 = (__int64)ndisPktMonRegisterComponentsCallback;
                NmrRegisterClient(&PktMonClientNotify, &PktMon, &PktMon);
                ndisRegisterPDCounterSets();
                word_1C00F49DE = *(_WORD *)ndisNblTrackerMode;
                word_1C00F49E0 = ndisMaxNumberOfProcessors;
                qword_1C00F49E8 = (__int64)&qword_1C00F5EA0;
                NetioSetTriageBlock(0LL, &ndisGlobalTriageBlock);
                ndisDoesSystemSupportSriov();
                ndisReinitializeHistograms();
                ndisInitializeDmaSubsystem();
                qword_1C00F51E0 = KLoader::KLoader((KLoader *)&unk_1C00F5DE0);
                ndisRegisterKnobs(&stru_1C00D5210, 2LL, v38, 0LL);
                KeInitializeEvent(&g_WdiLoadInProgress, NotificationEvent, 0);
                KPushLockManualConstruct::Initialize((KPushLockManualConstruct *)&g_WdiLoadLock);
                ndisMpHookNmrInitializeClient();
              }
            }
            return v13;
          }
        }
        else if ( !BYTE1(OutputBuffer[0]) )
        {
          goto LABEL_22;
        }
        ndisAcOnLine = 0;
        goto LABEL_23;
      }
    }
  }
  return v13;
}
