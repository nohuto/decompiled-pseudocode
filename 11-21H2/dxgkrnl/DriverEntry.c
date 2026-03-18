/*
 * XREFs of DriverEntry @ 0x1C03C7238
 * Callers:
 *     GsDriverEntry @ 0x1C03C7010 (GsDriverEntry.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?DxgkInitializeTelemetry@@YAXXZ @ 0x1C0025EFC (-DxgkInitializeTelemetry@@YAXXZ.c)
 *     McGenEventRegister_EtwRegister @ 0x1C0025FC0 (McGenEventRegister_EtwRegister.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     MonitorCleanupGlobal @ 0x1C006B194 (MonitorCleanupGlobal.c)
 *     ?DxgkInitTest@@YAXXZ @ 0x1C01EA054 (-DxgkInitTest@@YAXXZ.c)
 *     ?CreateGlobal@CCD_BTL@@SAJXZ @ 0x1C01F4944 (-CreateGlobal@CCD_BTL@@SAJXZ.c)
 *     DxgkInitialPower @ 0x1C01F4E8C (DxgkInitialPower.c)
 *     ?SysMmInitializeGlobal@@YAXXZ @ 0x1C01F4F64 (-SysMmInitializeGlobal@@YAXXZ.c)
 *     ?DxgDbgInit@@YAXXZ @ 0x1C01F6030 (-DxgDbgInit@@YAXXZ.c)
 *     ?TdrInit@@YAXXZ @ 0x1C01F63B8 (-TdrInit@@YAXXZ.c)
 *     WdmlibIoCreateDeviceSecure @ 0x1C0204C58 (WdmlibIoCreateDeviceSecure.c)
 *     MonitorInitializeGlobal @ 0x1C020D64C (MonitorInitializeGlobal.c)
 *     ?CreateGlobal@DXGGLOBAL@@SAJXZ @ 0x1C020F2D0 (-CreateGlobal@DXGGLOBAL@@SAJXZ.c)
 *     ?DestroyGlobal@DXGGLOBAL@@SAXXZ @ 0x1C0309A24 (-DestroyGlobal@DXGGLOBAL@@SAXXZ.c)
 *     DxgkCleanupPower @ 0x1C0388458 (DxgkCleanupPower.c)
 *     ?wil_InitializeFeatureStaging@@YAJXZ @ 0x1C03C7078 (-wil_InitializeFeatureStaging@@YAJXZ.c)
 *     DpiInitializeGlobalState @ 0x1C03C7648 (DpiInitializeGlobalState.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  int v3; // eax
  __int64 v4; // rbx
  NTSTATUS v5; // eax
  int ProcessNotifyRoutineEx2; // eax
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int8 v9; // al
  NTSTATUS result; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  NTSTATUS v23; // eax
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // eax
  NTSTATUS v31; // eax
  __int64 v32; // rcx
  __int64 v33; // r8
  int v34; // edx
  int v35; // ecx
  int v36; // r8d
  const wchar_t *v37; // rax
  __int64 v38; // rbx
  int v39; // edx
  int v40; // ecx
  int v41; // r8d
  int v42; // ecx
  int v43; // r8d
  int v44; // edx
  int v45; // r8d
  int v46; // edx
  int v47; // r8d
  __int64 v48; // rdx
  __int64 v49; // rcx
  BOOLEAN Size; // [rsp+28h] [rbp-D8h]
  __int64 v51; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v52; // [rsp+68h] [rbp-98h]
  char v53; // [rsp+70h] [rbp-90h]
  _QWORD v54[2]; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING DefaultSDDLString; // [rsp+88h] [rbp-78h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+98h] [rbp-68h] BYREF
  __int64 v57; // [rsp+B0h] [rbp-50h] BYREF
  int v58; // [rsp+B8h] [rbp-48h]
  const wchar_t *v59; // [rsp+C0h] [rbp-40h]
  unsigned __int8 *v60; // [rsp+C8h] [rbp-38h]
  int v61; // [rsp+D0h] [rbp-30h]
  unsigned __int8 *v62; // [rsp+D8h] [rbp-28h]
  int v63; // [rsp+E0h] [rbp-20h]
  __int64 v64; // [rsp+E8h] [rbp-18h]
  int v65; // [rsp+F0h] [rbp-10h]
  __int128 v66; // [rsp+F8h] [rbp-8h]
  __int128 v67; // [rsp+108h] [rbp+8h]
  __int64 v68; // [rsp+118h] [rbp+18h]
  __int64 SystemInformation; // [rsp+140h] [rbp+40h] BYREF

  g_pDriverObject = DriverObject;
  v3 = PsTlsAlloc(DxgkThreadPsTslCallback, 0LL, &g_DxgkThreadTlsId);
  v4 = v3;
  if ( v3 < 0 )
  {
    WdLogSingleEntry1(2LL, v3);
    if ( !bTracingEnabled )
      return v4;
    LOBYTE(v35) = BYTE3(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) == 0 )
      return v4;
    v37 = L"Failed to allocate a PsTls slot for DxgkThread, returning 0x%I64x.";
    goto LABEL_24;
  }
  v5 = ExInitializeLookasideListEx(
         (PLOOKASIDE_LIST_EX)&g_DxgkThreadLookasideList,
         0LL,
         0LL,
         (POOL_TYPE)512,
         0,
         0x40uLL,
         0x54677844u,
         0);
  v4 = v5;
  if ( v5 < 0 )
  {
    PsTlsFree(g_DxgkThreadTlsId);
    WdLogSingleEntry1(2LL, v4);
    if ( !bTracingEnabled || (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) == 0 )
      return v4;
    v37 = L"Failed to initialize the lookaside list for DXGTHREAD, returning 0x%I64x";
LABEL_24:
    McTemplateK0zqqzxxxxx_EtwWriteTransfer(v35, v34, v36, 0LL, 0, -1, v37, v4, 0LL, 0LL, 0LL, 0LL);
    return v4;
  }
  ProcessNotifyRoutineEx2 = PsSetCreateProcessNotifyRoutineEx2(0LL, DxgkProcessNotify, 0LL);
  if ( ProcessNotifyRoutineEx2 < 0 )
  {
    v38 = ProcessNotifyRoutineEx2;
    WdLogSingleEntry1(2LL, ProcessNotifyRoutineEx2);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v40,
          v39,
          v41,
          0LL,
          0,
          -1,
          L"PsSetCreateProcessNotifyRoutineEx failed 0x%I64x",
          v38,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  SystemInformation = 8LL;
  if ( ZwQuerySystemInformation(MaxSystemInfoClass|SystemProcessInformation, &SystemInformation, 8u, 0LL) < 0
    || (v9 = 1, (SystemInformation & 0x200000000LL) == 0) )
  {
    v9 = 0;
  }
  g_OSTestSigningEnabled = v9;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_DxgkrnlPrereleaseDiagnostic__private_reporting,
    0x89825Fu,
    v7,
    v8,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_MockDriverValidation_logged_traits,
    0);
  v57 = 0LL;
  v58 = 288;
  v59 = L"IsInternalRelease";
  v61 = 67108868;
  v60 = &g_IsInternalRelease;
  v62 = &g_IsInternalRelease;
  v63 = 4;
  v64 = 0LL;
  v65 = 0;
  v66 = 0LL;
  v68 = 0LL;
  v67 = 0LL;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v57, 0LL, 0LL);
  g_IsInternalRelease = g_IsInternalRelease != 0;
  g_IsInternalReleaseOrDbg = g_IsInternalRelease;
  g_bSkuSupportMultipleUsers = (RtlGetSuiteMask() & 0x110) == 16;
  wil_InitializeFeatureStaging();
  WdInitialize();
  result = DpiInitializeGlobalState();
  if ( result >= 0 )
  {
    result = DXGGLOBAL::CreateGlobal(v12, v11, v13, v14);
    if ( result >= 0 )
    {
      result = CCD_BTL::CreateGlobal(v16, v15, v17, v18);
      if ( result >= 0 )
      {
        DxgkInitializeTelemetry();
        Size = 0;
        v19 = ExSubscribeWnfStateChange(&gScreenStudyEventSubscription, &WNF_SRUM_SCREENONSTUDY_SESSION, 1LL);
        if ( v19 < 0 )
        {
          WdLogSingleEntry1(2LL, v19);
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
            McTemplateK0zqqzxxxxx_EtwWriteTransfer(
              v42,
              v20,
              v43,
              0LL,
              0,
              -1,
              L"ExSubscribeWnfStateChange failed, returing 0x%I64x");
          gScreenStudyEventSubscription = 0LL;
        }
        bTracingEnabled = 0;
        McGenEventRegister_EtwRegister(
          &DxgkControlGuid,
          v20,
          &DxgkControlGuid_Context,
          (ULONGLONG *)&DxgkControlGuid_Context);
        LODWORD(v51) = -1;
        v52 = 0LL;
        if ( (qword_1C012F870 & 2) != 0 )
        {
          v53 = 1;
          LODWORD(v51) = 0;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v21, &EventProfilerEnter, v22, 0);
        }
        else
        {
          v53 = 0;
        }
        DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v51, 0);
        v54[0] = &DxgkControlGuid;
        v54[1] = &Dxgk_WDI_NotifyUser;
        WdDiagInit(v54);
        DestinationString = 0LL;
        RtlInitUnicodeString(&DestinationString, L"\\Device\\DxgKrnl");
        DriverObject->MajorFunction[0] = (PDRIVER_DISPATCH)DxgkCreateClose;
        DriverObject->MajorFunction[2] = (PDRIVER_DISPATCH)DxgkCreateClose;
        DriverObject->MajorFunction[14] = (PDRIVER_DISPATCH)DxgkDeviceIoctl;
        DriverObject->MajorFunction[15] = (PDRIVER_DISPATCH)DxgkInternalDeviceIoctl;
        DriverObject->MajorFunction[16] = (PDRIVER_DISPATCH)DxgkShutdown;
        DriverObject->DriverUnload = (PDRIVER_UNLOAD)DxgkUnload;
        DefaultSDDLString = 0LL;
        RtlInitUnicodeString(
          &DefaultSDDLString,
          L"D:P(A;;GRGW;;;S-1-5-83-0)(A;;GRGW;;;S-1-15-3-1024-2268835264-3721307629-241982045-173645152-1490879176-1046434"
           "41-2915960892-1612460704)");
        v23 = WdmlibIoCreateDeviceSecure(
                DriverObject,
                0,
                &DestinationString,
                0x22u,
                0x100u,
                Size,
                &DefaultSDDLString,
                &GUID_SD_DXGKRNL_DRIVER_OBJECT,
                (PDEVICE_OBJECT *)&g_pDeviceObject);
        v4 = v23;
        if ( v23 < 0
          || (v24 = DxgkInitialPower(), v4 = v24, v24 < 0)
          || (v27 = MonitorInitializeGlobal(v26, v25), v4 = v27, v27 < 0) )
        {
          WdLogSingleEntry1(3LL, v4);
        }
        else
        {
          SysMmInitializeGlobal(v29, v28);
          DxgkInitTest();
          DxgDbgInit();
          TdrInit();
          v30 = SMgrRegisterSessionChangeCallout(DxgkNotifySessionStateChange);
          v4 = v30;
          if ( v30 < 0 )
          {
            WdLogSingleEntry1(2LL, v30);
            if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
              McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                0,
                v44,
                v45,
                0LL,
                0,
                -1,
                L"Could not register session change callout with session manager, returning 0x%I64x.",
                v4,
                0LL,
                0LL,
                0LL,
                0LL,
                v51,
                v52);
          }
          else
          {
            v31 = IoRegisterShutdownNotification((PDEVICE_OBJECT)g_pDeviceObject);
            v4 = v31;
            if ( v31 >= 0 )
            {
              LODWORD(v4) = 0;
LABEL_18:
              DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
              if ( v53 )
              {
                LOBYTE(v32) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
                  McTemplateK0q_EtwWriteTransfer(v32, &EventProfilerExit, v33, v51);
              }
              return v4;
            }
            WdLogSingleEntry1(2LL, v31);
            if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
              McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                0,
                v46,
                v47,
                0LL,
                0,
                -1,
                L"Could not register for shutdown notification, returning 0x%I64x.",
                v4,
                0LL,
                0LL,
                0LL,
                0LL,
                v51,
                v52);
            SMgrUnregisterSessionChangeCallout(DxgkNotifySessionStateChange);
          }
        }
        DxgkCleanupPower();
        MonitorCleanupGlobal(v49, v48);
        if ( g_pDeviceObject )
        {
          IoDeleteDevice((PDEVICE_OBJECT)g_pDeviceObject);
          g_pDeviceObject = 0LL;
        }
        DXGGLOBAL::DestroyGlobal();
        PsTlsFree(g_DxgkThreadTlsId);
        ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)&g_DxgkThreadLookasideList);
        goto LABEL_18;
      }
    }
  }
  return result;
}
