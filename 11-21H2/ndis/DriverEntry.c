/*
 * XREFs of DriverEntry @ 0x1C0153778
 * Callers:
 *     GsDriverEntry @ 0x1C0153010 (GsDriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00088CC (WPP_RECORDER_SF_.c)
 *     NdisAllocateNetBufferListPool @ 0x1C0021140 (NdisAllocateNetBufferListPool.c)
 *     WPP_RECORDER_SF_d @ 0x1C002B684 (WPP_RECORDER_SF_d.c)
 *     NdisAllocatePacketPoolEx @ 0x1C002D880 (NdisAllocatePacketPoolEx.c)
 *     McGenEventRegister_EtwRegister @ 0x1C002DE5C (McGenEventRegister_EtwRegister.c)
 *     ?ndisDoesSystemSupportSriov@@YAXXZ @ 0x1C002EF78 (-ndisDoesSystemSupportSriov@@YAXXZ.c)
 *     NdisDllInitialize @ 0x1C0031100 (NdisDllInitialize.c)
 *     ndisDmaTelemetryUpdateBucketSchema @ 0x1C0031F28 (ndisDmaTelemetryUpdateBucketSchema.c)
 *     NdisAllocateNetBufferPool @ 0x1C00320C0 (NdisAllocateNetBufferPool.c)
 *     InitializeTelemetryAssertsKM @ 0x1C0032AF4 (InitializeTelemetryAssertsKM.c)
 *     ?ndisRegisterPDCounterSets@@YAXXZ @ 0x1C00333CC (-ndisRegisterPDCounterSets@@YAXXZ.c)
 *     ?ndisWppInitTracingEx@@YAXPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@@Z @ 0x1C0033594 (-ndisWppInitTracingEx@@YAXPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@@Z.c)
 *     ?ndisVerifierInitialization@@YAEXZ @ 0x1C00343B0 (-ndisVerifierInitialization@@YAEXZ.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ?Initialize@KPushLockManualConstruct@@QEAAXXZ @ 0x1C0101134 (-Initialize@KPushLockManualConstruct@@QEAAXXZ.c)
 *     TlgRegisterAggregateProviderEx @ 0x1C0114830 (TlgRegisterAggregateProviderEx.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C0114924 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     ?ndisReinitializeHistograms@@YAJXZ @ 0x1C0114D58 (-ndisReinitializeHistograms@@YAJXZ.c)
 *     ?ndisAllocateEventLog@@YAPEAUNDIS_EVENT_LOG_HANDLE__@@W4_NDIS_EVENT_LOG_SIZE@@G@Z @ 0x1C0114F98 (-ndisAllocateEventLog@@YAPEAUNDIS_EVENT_LOG_HANDLE__@@W4_NDIS_EVENT_LOG_SIZE@@G@Z.c)
 *     ??0KnobNamespace@@QEAA@PEAU_DRIVER_OBJECT@@PEBU_CONFIG_KNOB_NAMESPACE@@@Z @ 0x1C011554C (--0KnobNamespace@@QEAA@PEAU_DRIVER_OBJECT@@PEBU_CONFIG_KNOB_NAMESPACE@@@Z.c)
 *     ?ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z @ 0x1C0115810 (-ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z.c)
 *     ?ndisInitializeStackTraces@@YAXXZ @ 0x1C0115E6C (-ndisInitializeStackTraces@@YAXXZ.c)
 *     ??0KLoader@@QEAA@XZ @ 0x1C0116034 (--0KLoader@@QEAA@XZ.c)
 *     ?InitializeSubsystem@KnobNamespace@@SAXXZ @ 0x1C0153078 (-InitializeSubsystem@KnobNamespace@@SAXXZ.c)
 *     ?ndisInitializeWatchdogSubsystem@@YAXXZ @ 0x1C01530AC (-ndisInitializeWatchdogSubsystem@@YAXXZ.c)
 *     ?ndisBindInitialize@@YAJXZ @ 0x1C01530E0 (-ndisBindInitialize@@YAJXZ.c)
 *     ?ndisLwmInitializeSubsystem@@YAJXZ @ 0x1C01532FC (-ndisLwmInitializeSubsystem@@YAJXZ.c)
 *     ?ndisIfInitializePhase1@@YAJXZ @ 0x1C01535AC (-ndisIfInitializePhase1@@YAJXZ.c)
 *     ?ndisCreateGenericSD@@YAJPEAU_ACL@@PEAD@Z @ 0x1C01541B4 (-ndisCreateGenericSD@@YAJPEAU_ACL@@PEAD@Z.c)
 *     ?ndisCreateAcl@@YAPEAU_ACL@@EEEEEEK@Z @ 0x1C0154284 (-ndisCreateAcl@@YAPEAU_ACL@@EEEEEEK@Z.c)
 *     ?ndisNblTrackerInitialize@@YAXXZ @ 0x1C0154B10 (-ndisNblTrackerInitialize@@YAXXZ.c)
 *     ?ndisCpuInitializeSubsystemPhase2@@YAJXZ @ 0x1C0154E4C (-ndisCpuInitializeSubsystemPhase2@@YAJXZ.c)
 *     ?ndisFdoInitializeSubsystem@@YAJXZ @ 0x1C0155598 (-ndisFdoInitializeSubsystem@@YAJXZ.c)
 *     ?ndisInitializePeriodicReceives@@YAHXZ @ 0x1C0155C5C (-ndisInitializePeriodicReceives@@YAHXZ.c)
 *     ?ndisReadRegistry@@YAXXZ @ 0x1C0155F70 (-ndisReadRegistry@@YAXXZ.c)
 *     ?ndisStackExpansionInitializeSubsystem@@YAJXZ @ 0x1C01561B4 (-ndisStackExpansionInitializeSubsystem@@YAJXZ.c)
 *     ?ndisDpcTimeoutInitializeSubsystem@@YAXXZ @ 0x1C01562D8 (-ndisDpcTimeoutInitializeSubsystem@@YAXXZ.c)
 *     ?wil_InitializeFeatureStaging@@YAJXZ @ 0x1C01563A8 (-wil_InitializeFeatureStaging@@YAJXZ.c)
 *     ?ndisPcwInitialize@@YAJXZ @ 0x1C015645C (-ndisPcwInitialize@@YAJXZ.c)
 *     ?ndisMpHookNmrInitializeClient@@YAJXZ @ 0x1C01565C4 (-ndisMpHookNmrInitializeClient@@YAJXZ.c)
 *     ?ndisPDInitialize@@YAJXZ @ 0x1C0156680 (-ndisPDInitialize@@YAJXZ.c)
 *     ?ndisVBusNmrInitializeClient@@YAJXZ @ 0x1C01566D4 (-ndisVBusNmrInitializeClient@@YAJXZ.c)
 *     ?ndisAoAcInitializeSubsystem@@YAJXZ @ 0x1C01567B4 (-ndisAoAcInitializeSubsystem@@YAJXZ.c)
 *     ?ndisMiniportFdoInitializeSubsystem@@YAJXZ @ 0x1C01568AC (-ndisMiniportFdoInitializeSubsystem@@YAJXZ.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  NTSTATUS v9; // ebx
  struct _DRIVER_OBJECT *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  ULONG v14; // r9d
  char *v15; // rbx
  __int64 v16; // rdi
  NTSTATUS v17; // eax
  bool v18; // zf
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
  unsigned __int8 (*v39)(void *, const struct KnobDescriptor *, unsigned __int64 *); // r8
  unsigned __int8 Handle; // [rsp+20h] [rbp-E0h]
  unsigned __int8 Handlea; // [rsp+20h] [rbp-E0h]
  unsigned __int8 Handleb; // [rsp+20h] [rbp-E0h]
  unsigned __int8 Handlec; // [rsp+20h] [rbp-E0h]
  __int64 Tag; // [rsp+28h] [rbp-D8h]
  int Status; // [rsp+40h] [rbp-C0h] BYREF
  struct _CONFIG_KNOB_NAMESPACE Parameters; // [rsp+48h] [rbp-B8h] BYREF
  struct _NET_BUFFER_POOL_PARAMETERS v48; // [rsp+60h] [rbp-A0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  struct _PCW_REGISTRATION_INFORMATION Info; // [rsp+80h] [rbp-80h] BYREF
  __int64 v51; // [rsp+B0h] [rbp-50h]
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
      (struct _GUID *)&WPP_e8de539a0b3a325987ea25a41bd9244b_Traceguids);
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
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_1C00EB1D8, 0LL, 0LL);
  InitializeTelemetryAssertsKM((const void **)RegistryPath);
  v8 = TlgRegisterAggregateProviderEx(v7, v6);
  if ( v8 && *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      3u,
      1u,
      0xBu,
      (struct _GUID *)&WPP_e8de539a0b3a325987ea25a41bd9244b_Traceguids,
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
  v10 = (struct _DRIVER_OBJECT *)ndisDriverObject;
  KnobNamespace::InitializeSubsystem();
  memset((void *)&Parameters, 0, sizeof(Parameters));
  KnobNamespace::KnobNamespace(&stru_1C00ECD50, v10, &Parameters);
  ndisNblTrackerInitialize();
  v9 = ndisFdoInitializeSubsystem();
  if ( v9 >= 0 )
  {
    v9 = ndisLwmInitializeSubsystem(v12, v11, v13, v14);
    if ( v9 >= 0 )
    {
      v9 = ndisStackExpansionInitializeSubsystem();
      if ( v9 >= 0 )
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
        *((_QWORD *)ndisDriverObject + 10) = &unk_1C00D0050;
        ndisInitializeStackTraces();
        ndisWorkItemLog = (struct NDIS_EVENT_LOG_HANDLE__ *)ndisAllocateEventLog(0, 7);
        imp_WppRecorderIsDefaultLogAvailable(WPP_GLOBAL_Control);
        if ( (ndisFlags & 0x100) == 0 )
          ndisVerifierInitialization();
        v15 = (char *)&ndisAbortedRequests;
        v16 = 16LL;
        do
        {
          memset(v15, 0, 0xB0uLL);
          v15 += 248;
          --v16;
        }
        while ( v16 );
        RtlInitUnicodeString(&DestinationString, L"\\CallBack\\NdisBindUnbind");
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 592;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v17 = ExCreateCallback((PCALLBACK_OBJECT *)&ndisBindUnbindCallbackObject, &ObjectAttributes, 1u, 1u);
        if ( v17 < 0 )
          DbgPrint("Ndis: failed to create a Callback object. Status %lx\n", v17);
        if ( PoRegisterPowerSettingCallback(
               0LL,
               &GUID_ACDC_POWER_SOURCE,
               (PPOWER_SETTING_CALLBACK)ndisPowerStateCallback,
               0LL,
               &ndisPowerStateCallbackHandle) < 0 )
          DbgPrint("Ndis: failed to register a power state Callback routine\n");
        if ( ZwPowerInformation(SystemBatteryState, 0LL, 0, OutputBuffer, 0x20u) >= 0 )
        {
          if ( LOBYTE(OutputBuffer[0]) )
            v18 = LOBYTE(OutputBuffer[0]) == 1;
          else
            v18 = BYTE1(OutputBuffer[0]) == 0;
          ndisAcOnLine = v18;
        }
        ndisAoAcInitializeSubsystem();
        KeInitializeSpinLock(&qword_1C00EE0F8);
        qword_1C00EE2C8 = (__int64)&qword_1C00EE2C0;
        qword_1C00EE2C0 = (__int64)&qword_1C00EE2C0;
        KeInitializeSpinLock(&qword_1C00ECE48);
        qword_1C00ECEA0 = (__int64)&qword_1C00ECE98;
        qword_1C00ECE98 = (__int64)&qword_1C00ECE98;
        qword_1C00EE208 = (__int64)&ndisGlobalPacketPoolList;
        ndisGlobalPacketPoolList.Flink = &ndisGlobalPacketPoolList;
        qword_1C00ECE20 = (__int64)&ndisGlobalTimerList;
        ndisGlobalTimerList.Flink = &ndisGlobalTimerList;
        KeInitializeMutex(&ndisPnPMutex, 0xFFFFu);
        KeInitializeMutex(&ndisPeriodicReceivesMutex, 0xFFFFu);
        ndisPcwInitialize();
        ndisInitializeWatchdogSubsystem();
        *(_QWORD *)&Parameters.ObjectId.Data2 = 1684948046LL;
        Parameters.NamespaceType = 1048960;
        Parameters.ObjectId.Data1 = 256;
        ndisNetBufferListPool = NdisAllocateNetBufferListPool(0LL, (PNET_BUFFER_LIST_POOL_PARAMETERS)&Parameters);
        if ( !ndisNetBufferListPool )
          DbgPrint("NDIS: failed to create ndis net buffer list special pool.\n");
        *(_QWORD *)&v48.PoolTag = 1684948046LL;
        v48.Header = (_NDIS_OBJECT_HEADER)786816;
        ndisNetBufferPool = NdisAllocateNetBufferPool(0LL, &v48);
        if ( !ndisNetBufferPool )
          DbgPrint("NDIS: failed to create ndis net buffer special pool.\n");
        v19 = ndisInitializePeriodicReceives();
        if ( v19 < 0 && *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LODWORD(Tag) = v19;
          WPP_RECORDER_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            1u,
            1u,
            0xCu,
            (struct _GUID *)&WPP_e8de539a0b3a325987ea25a41bd9244b_Traceguids,
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
            (struct _GUID *)&WPP_b73066c8574e3d1b9eeedc46f4c32798_Traceguids);
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
        v9 = ndisBindInitialize();
        if ( v9 >= 0 )
        {
          ndisIfInitializePhase1();
          v9 = ndisPDInitialize();
          if ( v9 >= 0 )
          {
            ndisVBusNmrInitializeClient();
            ndisMiniportFdoInitializeSubsystem();
            *(_QWORD *)&Info.Version = 512LL;
            Info.Name = (PCUNICODE_STRING)&`ndisInitRegistrationInformationNetworkDirectCounterSet'::`2'::Name;
            *(_QWORD *)&Info.CounterCount = 10LL;
            Info.Counters = (PPCW_COUNTER_DESCRIPTOR)&`ndisInitRegistrationInformationNetworkDirectCounterSet'::`2'::Descriptors;
            v51 = 0LL;
            Info.Callback = (PPCW_CALLBACK)ndisNdkPcwProviderCallback;
            Info.CallbackContext = 0LL;
            PcwRegister(&ndisNetworkDirectCounterSet, &Info);
            KeInitializeMutex(&PktMonCompMutex, 0);
            qword_1C00EC0A8 = (__int64)&PktMonCompList;
            PktMonCompList = (__int64)&PktMonCompList;
            PktMonClientNotify.ClientRegistrationInstance.ModuleId = &NPI_MS_NDIS_MODULEID;
            qword_1C00EC218 = (__int64)ndisPktMonRegisterComponentsCallback;
            NmrRegisterClient(&PktMonClientNotify, &PktMon, &PktMon);
            ndisRegisterPDCounterSets();
            word_1C00EB9CE = *(_WORD *)ndisNblTrackerMode;
            word_1C00EB9D0 = ndisMaxNumberOfProcessors;
            qword_1C00EB9D8 = (__int64)&qword_1C00ECE98;
            NetioSetTriageBlock(0LL, &ndisGlobalTriageBlock);
            ndisDoesSystemSupportSriov();
            ndisReinitializeHistograms();
            KPushLockManualConstruct::Initialize((KPushLockManualConstruct *)&unk_1C00ECDF8);
            ndisDmaTelemetryUpdateBucketSchema(0x4210900080204uLL);
            ndisRegisterKnobs(
              &stru_1C00CE1E8,
              1LL,
              v38,
              (int (*)(void *, const struct KnobDescriptor *, unsigned __int64))ndisDmaTelemetryKnobsUpdateRoutine);
            qword_1C00EC1F0 = KLoader::KLoader((KLoader *)&unk_1C00ECC48);
            ndisRegisterKnobs(&stru_1C00CE910, 2LL, v39, 0LL);
            KeInitializeEvent(&g_WdiLoadInProgress, NotificationEvent, 0);
            KPushLockManualConstruct::Initialize((KPushLockManualConstruct *)&g_WdiLoadLock);
            ndisMpHookNmrInitializeClient();
          }
        }
      }
    }
  }
  return v9;
}
