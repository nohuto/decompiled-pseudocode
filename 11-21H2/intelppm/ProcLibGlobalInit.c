/*
 * XREFs of ProcLibGlobalInit @ 0x1C00462E4
 * Callers:
 *     DriverEntry @ 0x1C0047770 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1C0002544 (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002630 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C00026F0 (WPP_RECORDER_SF_.c)
 *     HviGetHypervisorFeatures @ 0x1C0002DA8 (HviGetHypervisorFeatures.c)
 *     HviIsAnyHypervisorPresent @ 0x1C0002E08 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x1C0003340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0003700 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0003A00 (memset.c)
 *     WPP_RECORDER_SF_DD @ 0x1C000414C (WPP_RECORDER_SF_DD.c)
 *     GetRegistryDwordValue @ 0x1C002A9A0 (GetRegistryDwordValue.c)
 *     GetRegistryQwordValue @ 0x1C002AD00 (GetRegistryQwordValue.c)
 *     HwDebugInitializeRegistryDebugRegisters @ 0x1C002AE6C (HwDebugInitializeRegistryDebugRegisters.c)
 *     ProcLibTraceIdleStatesErrata @ 0x1C0034920 (ProcLibTraceIdleStatesErrata.c)
 *     ProcLibTracePccErrata @ 0x1C0034A54 (ProcLibTracePccErrata.c)
 *     ProcLibTracePerfStatesErrata @ 0x1C003509C (ProcLibTracePerfStatesErrata.c)
 *     ProcLibTraceThrottleStatesErrata @ 0x1C0035F04 (ProcLibTraceThrottleStatesErrata.c)
 *     GetHiddenProcessorPresence @ 0x1C0038434 (GetHiddenProcessorPresence.c)
 *     GetHvPpmCapabilities @ 0x1C00385A4 (GetHvPpmCapabilities.c)
 *     DisplayPPMFlags @ 0x1C0045174 (DisplayPPMFlags.c)
 *     PopulateEnergyEstimationModel @ 0x1C00470B8 (PopulateEnergyEstimationModel.c)
 *     InitDriver @ 0x1C0047234 (InitDriver.c)
 *     CollectAcpiBiosInfo @ 0x1C0047628 (CollectAcpiBiosInfo.c)
 *     ProcLibRegisterEtw @ 0x1C0047728 (ProcLibRegisterEtw.c)
 */

__int64 __fastcall ProcLibGlobalInit(PDEVICE_OBJECT DeviceObject)
{
  NTSTATUS v2; // eax
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
  char v16; // r14
  __int64 v17; // rbx
  bool v18; // zf
  unsigned int v19; // ebx
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // rcx
  int *v23; // rdi
  unsigned __int8 i; // bl
  int inited; // eax
  __int64 v26; // rax
  const char *v27; // rax
  int v29; // [rsp+30h] [rbp-41h]
  int v30; // [rsp+38h] [rbp-39h]
  bool v31; // [rsp+48h] [rbp-29h] BYREF
  int v32; // [rsp+4Ch] [rbp-25h] BYREF
  int v33; // [rsp+50h] [rbp-21h] BYREF
  int v34; // [rsp+54h] [rbp-1Dh] BYREF
  int v35; // [rsp+58h] [rbp-19h] BYREF
  int v36; // [rsp+5Ch] [rbp-15h] BYREF
  __int128 v37; // [rsp+60h] [rbp-11h] BYREF
  __int128 v38; // [rsp+70h] [rbp-1h]
  __int64 v39; // [rsp+80h] [rbp+Fh]
  __int128 InputBuffer; // [rsp+88h] [rbp+17h] BYREF

  v36 = 0;
  v34 = 0;
  v35 = 0;
  v31 = 0;
  LODWORD(v39) = 0;
  InputBuffer = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v2 = ZwPowerInformation(ProcessorStateHandler, 0LL, (ULONG)0, &dword_1C001DFD0, (ULONG)272);
  v3 = v2;
  if ( v2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = 10;
LABEL_4:
      v29 = v2;
LABEL_5:
      v5 = 3;
LABEL_6:
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        v5,
        v4,
        (__int64)&WPP_16f78f6d0ba536165795625b2ea94e7d_Traceguids,
        v29);
      return v3;
    }
    return v3;
  }
  v6 = dword_1C001DFD0;
  if ( dword_1C001DFD0 != 69 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741735;
    v7 = 11;
    v30 = 69;
LABEL_10:
    WPP_RECORDER_SF_DD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      v7,
      (__int64)&WPP_16f78f6d0ba536165795625b2ea94e7d_Traceguids,
      v6,
      v30);
    return (unsigned int)-1073741735;
  }
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
         WdfDriverGlobals,
         0LL,
         &qword_1C001DCF8);
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
         &qword_1C001DD08);
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
         &qword_1C001DD00);
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
         &qword_1C001E2E8);
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
         &qword_1C001DD10);
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
         &qword_1C001E308);
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
         &qword_1C001E2E0);
  v3 = v8;
  if ( v8 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v3;
    v4 = 18;
LABEL_15:
    v29 = v8;
    v5 = 4;
    goto LABEL_6;
  }
  KeInitializeEvent(&Event, NotificationEvent, 1u);
  WorkItem = IoAllocateWorkItem(DeviceObject);
  word_1C001E31C = 0;
  v10 = 2LL;
  qword_1C001E310 = WorkItem;
  qword_1C001DD40 = (__int64)&qword_1C001DD38;
  qword_1C001DD38 = (__int64)&qword_1C001DD38;
  qword_1C001DD50 = (__int64)&qword_1C001DD48;
  qword_1C001DD48 = (__int64)&qword_1C001DD48;
  qword_1C001DD60 = (__int64)&qword_1C001DD58;
  qword_1C001DD58 = (__int64)&qword_1C001DD58;
  qword_1C001DD70 = (__int64)&qword_1C001DD68;
  qword_1C001DD68 = (__int64)&qword_1C001DD68;
  qword_1C001DD80 = (__int64)&qword_1C001DD78;
  qword_1C001DD78 = (__int64)&qword_1C001DD78;
  qword_1C001E2F8 = (__int64)&qword_1C001E2F0;
  qword_1C001E2F0 = (__int64)&qword_1C001E2F0;
  qword_1C001E5E8 = (__int64)&qword_1C001E5E0;
  qword_1C001E5E0 = (__int64)&qword_1C001E5E0;
  v11 = &unk_1C001DD18;
  qword_1C001E5D8 = 0LL;
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
    &v36);
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"Overrides",
    &dword_1C001DCF0);
  GetRegistryQwordValue(v13, v12, &qword_1C001DCE8);
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"DisableAsserts",
    &v34);
  if ( v34 )
    byte_1C001E338 = 1;
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Throttle",
    (__int64)L"PerfEnablePackageIdle",
    &v35);
  qword_1C001E1E8 = (__int64)RegisterKernelIdleStates;
  byte_1C001E5B1 = 0;
  qword_1C001E230 = (__int64)RegisterHiddenIdleStates;
  byte_1C001E238 = v35 == 0;
  dword_1C001E23C = 0;
  qword_1C001E1F0 = (__int64)RegisterKernelPerfStates;
  v14 = 0;
  v33 = 0;
  qword_1C001E200 = (__int64)RegisterKernelPerfFeedback;
  qword_1C001E208 = (__int64)RegisterKernelLegacyPcc;
  qword_1C001E1F8 = (__int64)RegisterKernelCap;
  qword_1C001E210 = (__int64)RegisterKernelCpc;
  qword_1C001E218 = (__int64)RegisterKernelPepPerf;
  qword_1C001E220 = (__int64)GetNtProcessorNumber;
  qword_1C001E228 = (__int64)RegisterKernelPackage;
  HviGetHypervisorFeatures();
  v15 = 0;
  byte_1C001E240 = 0;
  v16 = 0;
  if ( HviIsAnyHypervisorPresent() )
  {
    v15 = (BYTE8(InputBuffer) & 0x20) != 0;
    byte_1C001E5B1 = 1;
    v14 = 1;
    InputBuffer = 0LL;
    HviGetHypervisorFeatures();
    if ( (InputBuffer & 0x100000000000LL) != 0 )
    {
      GetHvPpmCapabilities(&v31, 0LL);
      v17 = 2048LL;
      if ( v31 )
      {
        dword_1C001E23C = 1;
        qword_1C001E1F0 = (__int64)RegisterHvPerfStatesCounters;
        qword_1C001E230 = (__int64)RegisterHvIdleStates;
        qword_1C001E200 = (__int64)RegisterHvPerfFeedbackCounters;
        v17 = 1024LL;
        qword_1C001E1E8 = (__int64)RegisterHvIdleStates;
        qword_1C001E208 = (__int64)RegisterHvLegacyPccCounters;
        qword_1C001E210 = (__int64)RegisterHvCpcCounters;
        qword_1C001E220 = (__int64)GetLpIndex;
        qword_1C001E228 = (__int64)RegisterHvPackage;
      }
      goto LABEL_47;
    }
    qword_1C001E1E8 = (__int64)RegisterGuestIdleStates;
    v16 = 1;
    GetRegistryDwordValue(
      (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
      (__int64)L"AllowGuestPerfStates",
      &v33);
    if ( !v33 )
    {
      v17 = 2048LL;
      qword_1C001E1F0 = (__int64)RegisterNoop;
      qword_1C001E208 = (__int64)RegisterNoop;
      qword_1C001E1F8 = (__int64)RegisterNoop;
      qword_1C001E210 = (__int64)RegisterNoop;
      qword_1C001E218 = (__int64)RegisterNoop;
      if ( v15 )
      {
        byte_1C001E240 = 1;
      }
      else
      {
        qword_1C001E200 = (__int64)RegisterNoop;
        qword_1C001E228 = (__int64)RegisterNoop;
      }
      goto LABEL_47;
    }
  }
  v16 = v14;
  v17 = 2048LL;
  if ( v14 )
  {
LABEL_47:
    dword_1C001E5A8 = GetHiddenProcessorPresence();
    goto LABEL_54;
  }
  if ( (int)HalPrivateDispatchTable[143]((__int64)&v37) >= 0 )
  {
    v6 = v37;
    if ( (_DWORD)v37 != 1 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1073741735;
      v7 = 19;
      v30 = 1;
      goto LABEL_10;
    }
    qword_1C001E0A0 = *((_QWORD *)&v37 + 1);
    xmmword_1C001E0A8 = v38;
    qword_1C001E0B8 = v39;
  }
  dword_1C001E5AC = dword_1C001DCF4 + HalPrivateDispatchTable[145](0xFFFFFFFFLL);
  dword_1C001E5A8 = 2;
LABEL_54:
  WPP_MAIN_CB.Queue.ListEntry.Flink = (_LIST_ENTRY *)ExAllocatePool2(64LL, 8 * v17, 1919119952LL);
  if ( !WPP_MAIN_CB.Queue.ListEntry.Flink )
  {
    v3 = -1073741670;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v3;
    v4 = 20;
    v29 = -1073741670;
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
  v2 = CollectAcpiBiosInfo();
  v3 = v2;
  if ( v2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v3;
    v4 = 23;
    goto LABEL_4;
  }
  v32 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PSTATES, &v32);
  v18 = v32 == 2;
  v32 = 1;
  v19 = 0;
  if ( v18 )
    v19 = 1879048192;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_ACPI1_CSTATE_C2, &v32);
  if ( v32 == 2 )
    v19 |= 2u;
  v32 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_TSTATES, &v32);
  if ( v32 == 2 )
    v19 |= 0x3300000u;
  v32 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PCC, &v32);
  if ( v32 == 2 )
    v19 |= 0x80000000;
  v20 = v19;
  v21 = 0x180899900377LL;
  qword_1C001DCE8 = v19 | (unsigned __int64)qword_1C001DCE8;
  dword_1C001E244 = v19;
  dword_1C001DE90 = 1;
  dword_1C001DE94 = 320;
  if ( v36 )
    v21 = 0x181899D00377LL;
  Globals[0] = v21 | 0x10400000400LL;
  if ( (unsigned __int8)PoEnergyEstimationEnabled() )
  {
    v23 = dword_1C001E390;
    Globals[0] |= 0x2000000000uLL;
    for ( i = 0; i < 2u; ++i )
    {
      LOBYTE(v22) = i;
      PopulateEnergyEstimationModel(v22, v23);
      v23 += 64;
    }
  }
  *(_QWORD *)&InputBuffer = 0LL;
  inited = InitDriver(&dword_1C001DE90, &InputBuffer);
  v3 = inited;
  if ( inited >= 0 )
  {
    v26 = InputBuffer | Globals[0];
    Globals[0] |= InputBuffer;
    if ( v16 )
    {
      qword_1C001DEB8 = 0LL;
      qword_1C001DED0 = 0LL;
      qword_1C001DED8 = 0LL;
      qword_1C001DEE0 = 0LL;
      qword_1C001DF00 = 0LL;
      qword_1C001DEE8 = 0LL;
      qword_1C001DEF0 = 0LL;
      qword_1C001DF10 = 0LL;
      qword_1C001DF18 = 0LL;
      qword_1C001DF20 = 0LL;
      qword_1C001DF50 = 0LL;
      qword_1C001DF58 = 0LL;
      if ( !v15 )
        qword_1C001DF08 = 0LL;
      v26 &= 0xFFFE5FFFFFFFFFFFuLL;
      Globals[0] = v26;
      if ( !v33 )
      {
        v26 &= ~0x800000000uLL;
        Globals[0] = v26;
      }
    }
    if ( dword_1C001E23C )
    {
      v26 &= 0xFFFFFFFCFFFFFEFFuLL;
      Globals[0] = v26;
    }
    if ( dword_1C001E23C != 1 )
      Globals[0] = v26 & 0xFFFFBFFFFFFFFFFFuLL;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v27 = "Disabled";
      if ( dword_1C001E23C )
        v27 = "Enabled";
      WPP_RECORDER_SF_s(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        2u,
        0x19u,
        (__int64)&WPP_16f78f6d0ba536165795625b2ea94e7d_Traceguids,
        v27);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            5u,
            2u,
            0x1Au,
            (__int64)&WPP_16f78f6d0ba536165795625b2ea94e7d_Traceguids);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            5u,
            2u,
            0x1Bu,
            (__int64)&WPP_16f78f6d0ba536165795625b2ea94e7d_Traceguids);
      }
    }
    DisplayPPMFlags(Globals[0], 5u);
    if ( (v20 & Globals[0] & 0x7F077) != 0 )
      ProcLibTraceIdleStatesErrata(0);
    if ( (v20 & Globals[0] & 0x70000000) != 0 )
      ProcLibTracePerfStatesErrata(0);
    if ( (v20 & Globals[0] & 0x3300000) != 0 )
      ProcLibTraceThrottleStatesErrata(0);
    if ( (v20 & Globals[0] & 0x80000000LL) != 0 )
      ProcLibTracePccErrata(0);
    if ( qword_1C001DCE8 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0x1Cu,
          (__int64)&WPP_16f78f6d0ba536165795625b2ea94e7d_Traceguids);
      DisplayPPMFlags(~qword_1C001DCE8, 5u);
      Globals[0] &= ~qword_1C001DCE8;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        2u,
        0x1Du,
        (__int64)&WPP_16f78f6d0ba536165795625b2ea94e7d_Traceguids);
    DisplayPPMFlags(Globals[0], 4u);
    if ( qword_1C001DED0 && (dword_1C001DCF0 & 0x70000000) != 0 )
      qword_1C001DED0 = 0LL;
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
        (__int64)&WPP_16f78f6d0ba536165795625b2ea94e7d_Traceguids,
        inited);
    memset(&dword_1C001DE90, 0, 0x140uLL);
  }
  return v3;
}
