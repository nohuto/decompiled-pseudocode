/*
 * XREFs of ProcLibGlobalInit @ 0x1C004052C
 * Callers:
 *     DriverEntry @ 0x1C003F178 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000262C (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0002BC0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004950 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_s @ 0x1C00054FC (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0005818 (WPP_RECORDER_SF_DD.c)
 *     HviGetHypervisorFeatures @ 0x1C000C27C (HviGetHypervisorFeatures.c)
 *     HviIsAnyHypervisorPresent @ 0x1C000C2BC (HviIsAnyHypervisorPresent.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000C7C0 (memset.c)
 *     InitDriver @ 0x1C0020BC0 (InitDriver.c)
 *     GetRegistryDwordValue @ 0x1C0020F74 (GetRegistryDwordValue.c)
 *     GetRegistryQwordValue @ 0x1C0021018 (GetRegistryQwordValue.c)
 *     ProcLibTraceIdleStatesErrata @ 0x1C0021D70 (ProcLibTraceIdleStatesErrata.c)
 *     ProcLibTracePccErrata @ 0x1C0021EA4 (ProcLibTracePccErrata.c)
 *     ProcLibTracePerfStatesErrata @ 0x1C0022410 (ProcLibTracePerfStatesErrata.c)
 *     ProcLibTraceThrottleStatesErrata @ 0x1C0022AE4 (ProcLibTraceThrottleStatesErrata.c)
 *     GetHiddenProcessorPresence @ 0x1C00248F4 (GetHiddenProcessorPresence.c)
 *     GetHvPpmCapabilities @ 0x1C002499C (GetHvPpmCapabilities.c)
 *     HwDebugInitializeRegistryDebugRegisters @ 0x1C0039374 (HwDebugInitializeRegistryDebugRegisters.c)
 *     ProcLibRegisterEtw @ 0x1C003F03C (ProcLibRegisterEtw.c)
 *     InitializeHvProcessorInfo @ 0x1C003F4CC (InitializeHvProcessorInfo.c)
 *     CollectAcpiBiosInfo @ 0x1C003F608 (CollectAcpiBiosInfo.c)
 *     DisplayPPMFlags @ 0x1C003F770 (DisplayPPMFlags.c)
 *     PopulateEnergyEstimationModel @ 0x1C004127C (PopulateEnergyEstimationModel.c)
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
  __int64 v26; // rcx
  char *v27; // rdi
  unsigned __int8 i; // bl
  int inited; // eax
  __int64 v30; // rax
  const char *v31; // rax
  int v33; // [rsp+30h] [rbp-41h]
  int v34; // [rsp+38h] [rbp-39h]
  bool v35; // [rsp+48h] [rbp-29h] BYREF
  bool v36; // [rsp+49h] [rbp-28h] BYREF
  int v37; // [rsp+4Ch] [rbp-25h] BYREF
  int v38; // [rsp+50h] [rbp-21h] BYREF
  int v39; // [rsp+54h] [rbp-1Dh] BYREF
  int v40; // [rsp+58h] [rbp-19h] BYREF
  int v41; // [rsp+5Ch] [rbp-15h] BYREF
  int v42; // [rsp+60h] [rbp-11h] BYREF
  __int128 v43; // [rsp+68h] [rbp-9h] BYREF
  __int128 v44; // [rsp+78h] [rbp+7h]
  __int64 v45; // [rsp+88h] [rbp+17h]
  __int128 InputBuffer; // [rsp+90h] [rbp+1Fh] BYREF

  v42 = 0;
  v41 = 0;
  v39 = 0;
  v40 = 0;
  v36 = 0;
  v35 = 0;
  LODWORD(v45) = 0;
  InputBuffer = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v2 = ZwPowerInformation(ProcessorStateHandler, 0LL, (ULONG)0, &dword_1C00127C0, (ULONG)288);
  v3 = v2;
  if ( v2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = 10;
LABEL_4:
      v33 = v2;
LABEL_5:
      v5 = 3;
LABEL_6:
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        v5,
        v4,
        (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
        v33);
      return v3;
    }
    return v3;
  }
  v6 = dword_1C00127C0;
  if ( dword_1C00127C0 != 72 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741735;
    v7 = 11;
    v34 = 72;
LABEL_10:
    WPP_RECORDER_SF_DD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      v7,
      (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
      v6,
      v34);
    return (unsigned int)-1073741735;
  }
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
         WdfDriverGlobals,
         0LL,
         &qword_1C00124D8);
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
         &qword_1C00124E8);
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
         &qword_1C00124E0);
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
         &qword_1C0012AF8);
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
         &qword_1C00124F0);
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
         &qword_1C0012B18);
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
         &qword_1C0012AF0);
  v3 = v8;
  if ( v8 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v3;
    v4 = 18;
LABEL_15:
    v33 = v8;
    v5 = 4;
    goto LABEL_6;
  }
  KeInitializeEvent(&Event, NotificationEvent, 1u);
  WorkItem = IoAllocateWorkItem(DeviceObject);
  word_1C0012B2C = 0;
  v10 = 2LL;
  qword_1C0012B20 = WorkItem;
  qword_1C0012520 = (__int64)&qword_1C0012518;
  qword_1C0012518 = (__int64)&qword_1C0012518;
  qword_1C0012530 = (__int64)&qword_1C0012528;
  qword_1C0012528 = (__int64)&qword_1C0012528;
  qword_1C0012540 = (__int64)&qword_1C0012538;
  qword_1C0012538 = (__int64)&qword_1C0012538;
  qword_1C0012550 = (__int64)&qword_1C0012548;
  qword_1C0012548 = (__int64)&qword_1C0012548;
  qword_1C0012560 = (__int64)&qword_1C0012558;
  qword_1C0012558 = (__int64)&qword_1C0012558;
  qword_1C0012B08 = (__int64)&qword_1C0012B00;
  qword_1C0012B00 = (__int64)&qword_1C0012B00;
  qword_1C0012DF8 = (__int64)&qword_1C0012DF0;
  qword_1C0012DF0 = (__int64)&qword_1C0012DF0;
  v11 = &unk_1C00124F8;
  qword_1C0012DE8 = 0LL;
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
    &v41);
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"Overrides",
    &dword_1C00124D0);
  GetRegistryQwordValue(v13, v12, &qword_1C00124C8);
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"DisableAsserts",
    &v39);
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"AllowLegacyPepIdle",
    &v42);
  if ( v39 )
    byte_1C0012B48 = 1;
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Throttle",
    (__int64)L"PerfEnablePackageIdle",
    &v40);
  qword_1C00129E8 = (__int64)RegisterKernelIdleStates;
  word_1C0012DC1 = 0;
  qword_1C0012A30 = (__int64)RegisterHiddenIdleStates;
  byte_1C0012A38 = v40 == 0;
  dword_1C0012A3C = 0;
  qword_1C00129F0 = (__int64)RegisterKernelPerfStates;
  v14 = 0;
  v38 = 0;
  qword_1C0012A00 = (__int64)RegisterKernelPerfFeedback;
  qword_1C0012A08 = (__int64)RegisterKernelLegacyPcc;
  qword_1C00129F8 = (__int64)RegisterKernelCap;
  qword_1C0012A10 = (__int64)RegisterKernelCpc;
  qword_1C0012A18 = (__int64)RegisterKernelPepPerf;
  qword_1C0012A20 = (__int64)GetNtProcessorNumber;
  qword_1C0012A28 = (__int64)RegisterKernelPackage;
  HviGetHypervisorFeatures();
  v15 = 0;
  byte_1C0012A40 = 0;
  if ( !HviIsAnyHypervisorPresent() )
    goto LABEL_51;
  v15 = (BYTE8(InputBuffer) & 0x20) != 0;
  LOBYTE(word_1C0012DC1) = 1;
  v14 = 1;
  InputBuffer = 0LL;
  HviGetHypervisorFeatures();
  if ( (InputBuffer & 0x100000000000LL) != 0 )
  {
    GetHvPpmCapabilities(&v35, 0LL, &v36);
    v16 = 2048LL;
    if ( v35 )
    {
      v3 = InitializeHvProcessorInfo();
      if ( (v3 & 0x80000000) != 0 )
        return v3;
      dword_1C0012A3C = 1;
      qword_1C00129F0 = (__int64)RegisterHvPerfStatesCounters;
      qword_1C0012A30 = (__int64)RegisterHvIdleStates;
      qword_1C0012A00 = (__int64)RegisterHvPerfFeedbackCounters;
      qword_1C0012A08 = (__int64)RegisterHvLegacyPccCounters;
      qword_1C0012A10 = (__int64)RegisterHvCpcCounters;
      if ( v36 )
        word_1C0012DC1 = 256;
      else
        qword_1C00129E8 = (__int64)RegisterHvIdleStates;
      v16 = 1024LL;
      qword_1C0012A20 = (__int64)GetLpIndex;
      qword_1C0012A28 = (__int64)RegisterHvPackage;
    }
    dword_1C0012DB8 = GetHiddenProcessorPresence();
    v17 = 0;
    goto LABEL_58;
  }
  qword_1C00129E8 = (__int64)RegisterGuestIdleStates;
  v17 = 1;
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"AllowGuestPerfStates",
    &v38);
  if ( v38 )
  {
LABEL_51:
    v17 = v14;
    v16 = 2048LL;
  }
  else
  {
    v16 = 2048LL;
    qword_1C00129F0 = (__int64)RegisterNoop;
    qword_1C0012A08 = (__int64)RegisterNoop;
    qword_1C00129F8 = (__int64)RegisterNoop;
    qword_1C0012A10 = (__int64)RegisterNoop;
    qword_1C0012A18 = (__int64)RegisterNoop;
    if ( v15 )
    {
      byte_1C0012A40 = 1;
    }
    else
    {
      qword_1C0012A00 = (__int64)RegisterNoop;
      qword_1C0012A28 = (__int64)RegisterNoop;
    }
  }
  if ( (int)HalPrivateDispatchTable[143]((__int64)&v43) >= 0 )
  {
    v6 = v43;
    if ( (_DWORD)v43 != 1 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1073741735;
      v7 = 19;
      v34 = 1;
      goto LABEL_10;
    }
    qword_1C0012890 = *((_QWORD *)&v43 + 1);
    xmmword_1C0012898 = v44;
    qword_1C00128A8 = v45;
  }
  dword_1C0012DBC = dword_1C00124D4 + HalPrivateDispatchTable[145](0xFFFFFFFFLL);
  dword_1C0012DB8 = 2;
LABEL_58:
  WPP_MAIN_CB.Queue.ListEntry.Blink = (_LIST_ENTRY *)ExAllocatePool2(64LL, 8 * v16, 1919119952LL);
  if ( !WPP_MAIN_CB.Queue.ListEntry.Blink )
  {
    v3 = -1073741670;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v3;
    v4 = 20;
    v33 = -1073741670;
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
  v37 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PSTATES, &v37);
  v22 = v37 == 2;
  v37 = 1;
  v23 = 0;
  if ( v22 )
    v23 = 1879048192;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_ACPI1_CSTATE_C2, &v37);
  if ( v37 == 2 )
    v23 |= 2u;
  v37 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_TSTATES, &v37);
  if ( v37 == 2 )
    v23 |= 0x3300000u;
  v37 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PCC, &v37);
  if ( v37 == 2 )
    v23 |= 0x80000000;
  v24 = v23;
  v25 = 0x180899900377LL;
  qword_1C00124C8 = v23 | (unsigned __int64)qword_1C00124C8;
  dword_1C0012A54 = v23;
  dword_1C0012670 = 1;
  dword_1C0012674 = 336;
  if ( v41 )
    v25 = 0x181899D00377LL;
  Globals[0] = v25 | 0x10400000400LL;
  if ( (unsigned __int8)PoEnergyEstimationEnabled() )
  {
    v27 = (char *)&unk_1C0012B98;
    Globals[0] |= 0x2000000000uLL;
    for ( i = 0; i < 2u; ++i )
    {
      LOBYTE(v26) = i;
      PopulateEnergyEstimationModel(v26, v27);
      v27 += 256;
    }
  }
  *(_QWORD *)&InputBuffer = 0LL;
  inited = InitDriver((__int64)&dword_1C0012670, &InputBuffer);
  v3 = inited;
  if ( inited >= 0 )
  {
    v30 = Globals[0] | InputBuffer;
    Globals[0] |= InputBuffer;
    if ( v17 )
    {
      qword_1C0012698 = 0LL;
      qword_1C00126B0 = 0LL;
      qword_1C00126B8 = 0LL;
      qword_1C00126C0 = 0LL;
      qword_1C00126E0 = 0LL;
      qword_1C00126C8 = 0LL;
      qword_1C00126D0 = 0LL;
      qword_1C00126F0 = 0LL;
      qword_1C00126F8 = 0LL;
      qword_1C0012700 = 0LL;
      byte_1C0012730 = 0;
      qword_1C0012738 = 0LL;
      qword_1C0012740 = 0LL;
      if ( !v15 )
        qword_1C00126E8 = 0LL;
      v30 &= 0xFFFE5FFFFFFFFFFFuLL;
      Globals[0] = v30;
      if ( !v38 )
      {
        v30 &= ~0x800000000uLL;
        Globals[0] = v30;
      }
    }
    if ( dword_1C0012A3C )
    {
      v30 &= 0xFFFFFFFCFFFFFEFFuLL;
      Globals[0] = v30;
    }
    if ( dword_1C0012A3C != 1 )
    {
      v30 &= ~0x400000000000uLL;
      Globals[0] = v30;
    }
    if ( !v42 )
      Globals[0] = v30 & 0xFFFFFFFEFFFFFEFFuLL;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v31 = "Disabled";
      if ( dword_1C0012A3C )
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
    DisplayPPMFlags(Globals[0], 5u);
    if ( (v24 & Globals[0] & 0x7F077) != 0 )
      ProcLibTraceIdleStatesErrata(0);
    if ( (v24 & Globals[0] & 0x70000000) != 0 )
      ProcLibTracePerfStatesErrata(0);
    if ( (v24 & Globals[0] & 0x3300000) != 0 )
      ProcLibTraceThrottleStatesErrata(0);
    if ( (v24 & Globals[0] & 0x80000000LL) != 0 )
      ProcLibTracePccErrata(0);
    if ( qword_1C00124C8 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0x1Cu,
          (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids);
      DisplayPPMFlags(~qword_1C00124C8, 5u);
      Globals[0] &= ~qword_1C00124C8;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        2u,
        0x1Du,
        (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids);
    DisplayPPMFlags(Globals[0], 4u);
    if ( qword_1C00126B0 && (dword_1C00124D0 & 0x70000000) != 0 )
      qword_1C00126B0 = 0LL;
    if ( _bittest64(Globals, 0x23u) )
      HwDebugInitializeRegistryDebugRegisters(0);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0x18u,
        (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
        inited);
    memset(&dword_1C0012670, 0, 0x150uLL);
  }
  return v3;
}
