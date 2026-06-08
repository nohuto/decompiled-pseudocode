/*
 * XREFs of ProcLibGlobalInit @ 0x1C0048C54
 * Callers:
 *     DriverEntry @ 0x1C00482F8 (DriverEntry.c)
 * Callees:
 *     HviGetHypervisorFeatures @ 0x1C0002898 (HviGetHypervisorFeatures.c)
 *     HviIsAnyHypervisorPresent @ 0x1C00028F8 (HviIsAnyHypervisorPresent.c)
 *     WPP_RECORDER_SF_s @ 0x1C000316C (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_D @ 0x1C000325C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C000331C (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0003770 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00045C0 (memset.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0005484 (WPP_RECORDER_SF_DD.c)
 *     HwDebugInitializeRegistryDebugRegisters @ 0x1C0026428 (HwDebugInitializeRegistryDebugRegisters.c)
 *     GetRegistryQwordValue @ 0x1C0026FA4 (GetRegistryQwordValue.c)
 *     GetRegistryDwordValue @ 0x1C00270C8 (GetRegistryDwordValue.c)
 *     ProcLibTraceIdleStatesErrata @ 0x1C0035AA0 (ProcLibTraceIdleStatesErrata.c)
 *     ProcLibTracePccErrata @ 0x1C0035BD4 (ProcLibTracePccErrata.c)
 *     ProcLibTracePerfStatesErrata @ 0x1C0036230 (ProcLibTracePerfStatesErrata.c)
 *     ProcLibTraceThrottleStatesErrata @ 0x1C00370A4 (ProcLibTraceThrottleStatesErrata.c)
 *     GetHiddenProcessorPresence @ 0x1C0039924 (GetHiddenProcessorPresence.c)
 *     GetHvPpmCapabilities @ 0x1C003998C (GetHvPpmCapabilities.c)
 *     InitializeHvProcessorInfo @ 0x1C00481BC (InitializeHvProcessorInfo.c)
 *     CollectAcpiBiosInfo @ 0x1C00484AC (CollectAcpiBiosInfo.c)
 *     InitDriver @ 0x1C00485AC (InitDriver.c)
 *     ProcLibRegisterEtw @ 0x1C00489B8 (ProcLibRegisterEtw.c)
 *     PopulateEnergyEstimationModel @ 0x1C0048B64 (PopulateEnergyEstimationModel.c)
 *     DisplayPPMFlags @ 0x1C0049B4C (DisplayPPMFlags.c)
 */

__int64 __fastcall ProcLibGlobalInit(PDEVICE_OBJECT DeviceObject)
{
  int v2; // eax
  unsigned int v3; // edi
  unsigned __int16 v4; // r9
  unsigned int v5; // r8d
  int v6; // eax
  unsigned __int16 v7; // r9
  int v8; // eax
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  char v14; // di
  bool v15; // si
  __int64 v16; // rbx
  char v17; // r14
  __int64 v18; // rdx
  ULONG v19; // ecx
  const CHAR *v20; // r8
  const CHAR *v21; // r9
  bool v22; // zf
  unsigned int v23; // ebx
  __int64 v24; // r15
  __int64 v25; // rax
  int *v26; // rdi
  unsigned __int8 i; // bl
  int inited; // eax
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  const char *v31; // rax
  __int64 v32; // rdx
  int v34; // [rsp+30h] [rbp-41h]
  int v35; // [rsp+38h] [rbp-39h]
  bool v36; // [rsp+48h] [rbp-29h] BYREF
  bool v37; // [rsp+49h] [rbp-28h] BYREF
  int v38; // [rsp+4Ch] [rbp-25h] BYREF
  int v39; // [rsp+50h] [rbp-21h] BYREF
  int v40; // [rsp+54h] [rbp-1Dh] BYREF
  int v41; // [rsp+58h] [rbp-19h] BYREF
  int v42; // [rsp+5Ch] [rbp-15h] BYREF
  int v43; // [rsp+60h] [rbp-11h] BYREF
  __int128 v44; // [rsp+68h] [rbp-9h] BYREF
  __int128 v45; // [rsp+78h] [rbp+7h]
  __int64 v46; // [rsp+88h] [rbp+17h]
  __int128 InputBuffer; // [rsp+90h] [rbp+1Fh] BYREF

  v43 = 0;
  v42 = 0;
  v40 = 0;
  v41 = 0;
  v37 = 0;
  v36 = 0;
  LODWORD(v46) = 0;
  InputBuffer = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v2 = ZwPowerInformation(ProcessorStateHandler, 0LL, (ULONG)0, &dword_1C001F300, (ULONG)288);
  v3 = v2;
  if ( v2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = 10;
LABEL_4:
      v34 = v2;
LABEL_5:
      v5 = 3;
LABEL_6:
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        v5,
        v4,
        (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
        v34);
      return v3;
    }
    return v3;
  }
  v6 = dword_1C001F300;
  if ( dword_1C001F300 != 72 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741735;
    v7 = 11;
    v35 = 72;
LABEL_10:
    WPP_RECORDER_SF_DD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      v7,
      (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
      v6,
      v35);
    return (unsigned int)-1073741735;
  }
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
         WdfDriverGlobals,
         0LL,
         &qword_1C001F018);
  v3 = v8;
  if ( v8 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v3;
    v4 = 12;
    goto LABEL_15;
  }
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
         WdfDriverGlobals,
         0LL,
         &qword_1C001F028);
  v3 = v8;
  if ( v8 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v3;
    v4 = 13;
    goto LABEL_15;
  }
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
         WdfDriverGlobals,
         0LL,
         &qword_1C001F020);
  v3 = v8;
  if ( v8 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v3;
    v4 = 14;
    goto LABEL_15;
  }
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
         WdfDriverGlobals,
         0LL,
         &qword_1C001F638);
  v3 = v8;
  if ( v8 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v3;
    v4 = 15;
    goto LABEL_15;
  }
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
         WdfDriverGlobals,
         0LL,
         &qword_1C001F030);
  v3 = v8;
  if ( v8 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v3;
    v4 = 16;
    goto LABEL_15;
  }
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2520))(
         WdfDriverGlobals,
         0LL,
         &qword_1C001F658);
  v3 = v8;
  if ( v8 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v3;
    v4 = 17;
    goto LABEL_15;
  }
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2520))(
         WdfDriverGlobals,
         0LL,
         &qword_1C001F630);
  v3 = v8;
  if ( v8 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v3;
    v4 = 18;
LABEL_15:
    v34 = v8;
    v5 = 4;
    goto LABEL_6;
  }
  KeInitializeEvent(&Event, NotificationEvent, 1u);
  WorkItem = IoAllocateWorkItem(DeviceObject);
  word_1C001F66C = 0;
  v10 = 2LL;
  qword_1C001F660 = WorkItem;
  qword_1C001F060 = (__int64)&qword_1C001F058;
  qword_1C001F058 = (__int64)&qword_1C001F058;
  qword_1C001F070 = (__int64)&qword_1C001F068;
  qword_1C001F068 = (__int64)&qword_1C001F068;
  qword_1C001F080 = (__int64)&qword_1C001F078;
  qword_1C001F078 = (__int64)&qword_1C001F078;
  qword_1C001F090 = (__int64)&qword_1C001F088;
  qword_1C001F088 = (__int64)&qword_1C001F088;
  qword_1C001F0A0 = (__int64)&qword_1C001F098;
  qword_1C001F098 = (__int64)&qword_1C001F098;
  qword_1C001F648 = (__int64)&qword_1C001F640;
  qword_1C001F640 = (__int64)&qword_1C001F640;
  qword_1C001F938 = (__int64)&qword_1C001F930;
  qword_1C001F930 = (__int64)&qword_1C001F930;
  v11 = &unk_1C001F038;
  qword_1C001F928 = 0LL;
  do
  {
    v11[1] = v11;
    *v11 = v11;
    v11 += 2;
    --v10;
  }
  while ( v10 );
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"AllowPepPerfStates",
    &v42);
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"Overrides",
    &dword_1C001F010);
  GetRegistryQwordValue(v13, v12, &qword_1C001F008);
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"DisableAsserts",
    &v40);
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"AllowLegacyPepIdle",
    &v43);
  if ( v40 )
    byte_1C001F688 = 1;
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Throttle",
    (__int64)L"PerfEnablePackageIdle",
    &v41);
  qword_1C001F528 = (__int64)RegisterKernelIdleStates;
  word_1C001F901 = 0;
  qword_1C001F570 = (__int64)RegisterHiddenIdleStates;
  byte_1C001F578 = v41 == 0;
  dword_1C001F57C = 0;
  qword_1C001F530 = (__int64)RegisterKernelPerfStates;
  v14 = 0;
  v39 = 0;
  qword_1C001F540 = (__int64)RegisterKernelPerfFeedback;
  qword_1C001F548 = (__int64)RegisterKernelLegacyPcc;
  qword_1C001F538 = (__int64)RegisterKernelCap;
  qword_1C001F550 = (__int64)RegisterKernelCpc;
  qword_1C001F558 = (__int64)RegisterKernelPepPerf;
  qword_1C001F560 = (__int64)GetNtProcessorNumber;
  qword_1C001F568 = (__int64)RegisterKernelPackage;
  HviGetHypervisorFeatures();
  v15 = 0;
  byte_1C001F580 = 0;
  if ( !HviIsAnyHypervisorPresent() )
    goto LABEL_51;
  v15 = (BYTE8(InputBuffer) & 0x20) != 0;
  LOBYTE(word_1C001F901) = 1;
  v14 = 1;
  InputBuffer = 0LL;
  HviGetHypervisorFeatures();
  if ( (InputBuffer & 0x100000000000LL) != 0 )
  {
    GetHvPpmCapabilities(&v36, 0LL, &v37);
    v16 = 2048LL;
    if ( v36 )
    {
      v3 = InitializeHvProcessorInfo();
      if ( (v3 & 0x80000000) != 0 )
        return v3;
      dword_1C001F57C = 1;
      qword_1C001F530 = (__int64)RegisterHvPerfStatesCounters;
      qword_1C001F570 = (__int64)RegisterHvIdleStates;
      qword_1C001F540 = (__int64)RegisterHvPerfFeedbackCounters;
      qword_1C001F548 = (__int64)RegisterHvLegacyPccCounters;
      qword_1C001F550 = (__int64)RegisterHvCpcCounters;
      if ( v37 )
        word_1C001F901 = 256;
      else
        qword_1C001F528 = (__int64)RegisterHvIdleStates;
      v16 = 1024LL;
      qword_1C001F560 = (__int64)GetLpIndex;
      qword_1C001F568 = (__int64)RegisterHvPackage;
    }
    dword_1C001F8F8 = GetHiddenProcessorPresence();
    v17 = 0;
    goto LABEL_58;
  }
  qword_1C001F528 = (__int64)RegisterGuestIdleStates;
  v17 = 1;
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"AllowGuestPerfStates",
    &v39);
  if ( v39 )
  {
LABEL_51:
    v17 = v14;
    v16 = 2048LL;
  }
  else
  {
    v16 = 2048LL;
    qword_1C001F530 = (__int64)RegisterNoop;
    qword_1C001F548 = (__int64)RegisterNoop;
    qword_1C001F538 = (__int64)RegisterNoop;
    qword_1C001F550 = (__int64)RegisterNoop;
    qword_1C001F558 = (__int64)RegisterNoop;
    if ( v15 )
    {
      byte_1C001F580 = 1;
    }
    else
    {
      qword_1C001F540 = (__int64)RegisterNoop;
      qword_1C001F568 = (__int64)RegisterNoop;
    }
  }
  if ( (int)HalPrivateDispatchTable[143]((__int64)&v44) >= 0 )
  {
    v6 = v44;
    if ( (_DWORD)v44 != 1 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1073741735;
      v7 = 19;
      v35 = 1;
      goto LABEL_10;
    }
    qword_1C001F3D0 = *((_QWORD *)&v44 + 1);
    xmmword_1C001F3D8 = v45;
    qword_1C001F3E8 = v46;
  }
  dword_1C001F8FC = dword_1C001F014 + HalPrivateDispatchTable[145](0xFFFFFFFFLL);
  dword_1C001F8F8 = 2;
LABEL_58:
  WPP_MAIN_CB.Queue.ListEntry.Flink = (_LIST_ENTRY *)ExAllocatePool2(64LL, 8 * v16, 1919119952LL);
  if ( !WPP_MAIN_CB.Queue.ListEntry.Flink )
  {
    v3 = -1073741670;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v3;
    v4 = 20;
    v34 = -1073741670;
    goto LABEL_5;
  }
  v2 = ProcLibRegisterEtw();
  v3 = v2;
  if ( v2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v3;
    v4 = 21;
    goto LABEL_4;
  }
  *((_QWORD *)&InputBuffer + 1) = 0LL;
  *(_QWORD *)&InputBuffer = ProcessSystemSleepStateNotify;
  v2 = ZwPowerInformation(SystemPowerStateNotifyHandler, &InputBuffer, (ULONG)16, 0LL, (ULONG)0);
  v3 = v2;
  if ( v2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v3;
    v4 = 22;
    goto LABEL_4;
  }
  v2 = CollectAcpiBiosInfo(v19, v18, v20, v21);
  v3 = v2;
  if ( v2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v3;
    v4 = 23;
    goto LABEL_4;
  }
  v38 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PSTATES, &v38);
  v22 = v38 == 2;
  v38 = 1;
  v23 = 0;
  if ( v22 )
    v23 = 1879048192;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_ACPI1_CSTATE_C2, &v38);
  if ( v38 == 2 )
    v23 |= 2u;
  v38 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_TSTATES, &v38);
  if ( v38 == 2 )
    v23 |= 0x3300000u;
  v38 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PCC, &v38);
  if ( v38 == 2 )
    v23 |= 0x80000000;
  v24 = v23;
  v25 = 0x180899900377LL;
  qword_1C001F008 = v23 | (unsigned __int64)qword_1C001F008;
  dword_1C001F594 = v23;
  dword_1C001F1B0 = 1;
  dword_1C001F1B4 = 336;
  if ( v42 )
    v25 = 0x181899D00377LL;
  Globals[0] = v25 | 0x10400000400LL;
  if ( (unsigned __int8)PoEnergyEstimationEnabled() )
  {
    v26 = dword_1C001F6D8;
    Globals[0] |= 0x2000000000uLL;
    for ( i = 0; i < 2u; ++i )
    {
      PopulateEnergyEstimationModel(i, v26);
      v26 += 64;
    }
  }
  *(_QWORD *)&InputBuffer = 0LL;
  inited = InitDriver((__int64)&dword_1C001F1B0, &InputBuffer);
  v3 = inited;
  if ( inited >= 0 )
  {
    v30 = Globals[0] | InputBuffer;
    Globals[0] |= InputBuffer;
    if ( v17 )
    {
      qword_1C001F1D8 = 0LL;
      qword_1C001F1F0 = 0LL;
      qword_1C001F1F8 = 0LL;
      qword_1C001F200 = 0LL;
      qword_1C001F220 = 0LL;
      qword_1C001F208 = 0LL;
      qword_1C001F210 = 0LL;
      qword_1C001F230 = 0LL;
      qword_1C001F238 = 0LL;
      qword_1C001F240 = 0LL;
      byte_1C001F270 = 0;
      qword_1C001F278 = 0LL;
      qword_1C001F280 = 0LL;
      if ( !v15 )
        qword_1C001F228 = 0LL;
      v30 &= 0xFFFE5FFFFFFFFFFFuLL;
      Globals[0] = v30;
      if ( !v39 )
      {
        v30 &= ~0x800000000uLL;
        Globals[0] = v30;
      }
    }
    if ( dword_1C001F57C )
    {
      v29 = 0xFFFFFFFCFFFFFEFFuLL;
      v30 &= 0xFFFFFFFCFFFFFEFFuLL;
      Globals[0] = v30;
    }
    if ( dword_1C001F57C != 1 )
    {
      v29 = 0xFFFFBFFFFFFFFFFFuLL;
      v30 &= ~0x400000000000uLL;
      Globals[0] = v30;
    }
    if ( !v43 )
    {
      v29 = 0xFFFFFFFEFFFFFEFFuLL;
      Globals[0] = v30 & 0xFFFFFFFEFFFFFEFFuLL;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v31 = "Disabled";
      if ( dword_1C001F57C )
        v31 = "Enabled";
      WPP_RECORDER_SF_s(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        2u,
        0x19u,
        (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
        v31);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            5u,
            2u,
            0x1Au,
            (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            5u,
            2u,
            0x1Bu,
            (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids);
      }
    }
    LOBYTE(v29) = 5;
    DisplayPPMFlags(Globals[0], v29);
    if ( (v24 & Globals[0] & 0x7F077) != 0 )
      ProcLibTraceIdleStatesErrata(0);
    if ( (v24 & Globals[0] & 0x70000000) != 0 )
      ProcLibTracePerfStatesErrata(0);
    if ( (v24 & Globals[0] & 0x3300000) != 0 )
      ProcLibTraceThrottleStatesErrata(0);
    if ( (v24 & Globals[0] & 0x80000000LL) != 0 )
      ProcLibTracePccErrata(0);
    if ( qword_1C001F008 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0x1Cu,
          (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids);
      LOBYTE(v32) = 5;
      DisplayPPMFlags(~qword_1C001F008, v32);
      Globals[0] &= ~qword_1C001F008;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        2u,
        0x1Du,
        (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids);
    LOBYTE(v32) = 4;
    DisplayPPMFlags(Globals[0], v32);
    if ( qword_1C001F1F0 && (dword_1C001F010 & 0x70000000) != 0 )
      qword_1C001F1F0 = 0LL;
    if ( _bittest64(Globals, 0x23u) )
      HwDebugInitializeRegistryDebugRegisters(0);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0x18u,
        (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
        inited);
    memset(&dword_1C001F1B0, 0, 0x150uLL);
  }
  return v3;
}
