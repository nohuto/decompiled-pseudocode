/*
 * XREFs of ProcLibGlobalInit @ 0x1C003D384
 * Callers:
 *     DriverEntry @ 0x1C003C178 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00029DC (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0002C70 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_d @ 0x1C00045A0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_s @ 0x1C000514C (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_DD @ 0x1C000536C (WPP_RECORDER_SF_DD.c)
 *     HviGetHypervisorFeatures @ 0x1C000B938 (HviGetHypervisorFeatures.c)
 *     HviIsAnyHypervisorPresent @ 0x1C000B978 (HviIsAnyHypervisorPresent.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BB10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000BE00 (memset.c)
 *     InitDriver @ 0x1C00200A8 (InitDriver.c)
 *     GetRegistryDwordValue @ 0x1C00203E4 (GetRegistryDwordValue.c)
 *     GetRegistryQwordValue @ 0x1C0020488 (GetRegistryQwordValue.c)
 *     ProcLibTraceIdleStatesErrata @ 0x1C002113C (ProcLibTraceIdleStatesErrata.c)
 *     ProcLibTracePccErrata @ 0x1C0021270 (ProcLibTracePccErrata.c)
 *     ProcLibTracePerfStatesErrata @ 0x1C00217C8 (ProcLibTracePerfStatesErrata.c)
 *     ProcLibTraceThrottleStatesErrata @ 0x1C0021EBC (ProcLibTraceThrottleStatesErrata.c)
 *     GetHiddenProcessorPresence @ 0x1C0023C44 (GetHiddenProcessorPresence.c)
 *     GetHvPpmCapabilities @ 0x1C0023DB4 (GetHvPpmCapabilities.c)
 *     HwDebugInitializeRegistryDebugRegisters @ 0x1C0038430 (HwDebugInitializeRegistryDebugRegisters.c)
 *     ProcLibRegisterEtw @ 0x1C003C03C (ProcLibRegisterEtw.c)
 *     CollectAcpiBiosInfo @ 0x1C003C460 (CollectAcpiBiosInfo.c)
 *     DisplayPPMFlags @ 0x1C003C5C8 (DisplayPPMFlags.c)
 *     PopulateEnergyEstimationModel @ 0x1C003E080 (PopulateEnergyEstimationModel.c)
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
  char v16; // r14
  __int64 v17; // rbx
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
  int v36; // [rsp+4Ch] [rbp-25h] BYREF
  int v37; // [rsp+50h] [rbp-21h] BYREF
  int v38; // [rsp+54h] [rbp-1Dh] BYREF
  int v39; // [rsp+58h] [rbp-19h] BYREF
  int v40; // [rsp+5Ch] [rbp-15h] BYREF
  __int128 v41; // [rsp+60h] [rbp-11h] BYREF
  __int128 v42; // [rsp+70h] [rbp-1h]
  __int64 v43; // [rsp+80h] [rbp+Fh]
  __int128 InputBuffer; // [rsp+88h] [rbp+17h] BYREF

  v40 = 0;
  v38 = 0;
  v39 = 0;
  v35 = 0;
  LODWORD(v43) = 0;
  InputBuffer = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v2 = ZwPowerInformation(ProcessorStateHandler, 0LL, (ULONG)0, &dword_1C0011730, (ULONG)272);
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
        (__int64)&WPP_16f78f6d0ba536165795625b2ea94e7d_Traceguids,
        v33);
      return v3;
    }
    return v3;
  }
  v6 = dword_1C0011730;
  if ( dword_1C0011730 != 69 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741735;
    v7 = 11;
    v34 = 69;
LABEL_10:
    WPP_RECORDER_SF_DD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      v7,
      (__int64)&WPP_16f78f6d0ba536165795625b2ea94e7d_Traceguids,
      v6,
      v34);
    return (unsigned int)-1073741735;
  }
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
         WdfDriverGlobals,
         0LL,
         &qword_1C0011458);
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
         &qword_1C0011468);
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
         &qword_1C0011460);
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
         &qword_1C0011A48);
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
         &qword_1C0011470);
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
         &qword_1C0011A68);
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
         &qword_1C0011A40);
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
  word_1C0011A7C = 0;
  v10 = 2LL;
  qword_1C0011A70 = WorkItem;
  qword_1C00114A0 = (__int64)&qword_1C0011498;
  qword_1C0011498 = (__int64)&qword_1C0011498;
  qword_1C00114B0 = (__int64)&qword_1C00114A8;
  qword_1C00114A8 = (__int64)&qword_1C00114A8;
  qword_1C00114C0 = (__int64)&qword_1C00114B8;
  qword_1C00114B8 = (__int64)&qword_1C00114B8;
  qword_1C00114D0 = (__int64)&qword_1C00114C8;
  qword_1C00114C8 = (__int64)&qword_1C00114C8;
  qword_1C00114E0 = (__int64)&qword_1C00114D8;
  qword_1C00114D8 = (__int64)&qword_1C00114D8;
  qword_1C0011A58 = (__int64)&qword_1C0011A50;
  qword_1C0011A50 = (__int64)&qword_1C0011A50;
  qword_1C0011D48 = (__int64)&qword_1C0011D40;
  qword_1C0011D40 = (__int64)&qword_1C0011D40;
  v11 = &unk_1C0011478;
  qword_1C0011D38 = 0LL;
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
    &v40);
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"Overrides",
    &dword_1C0011450);
  GetRegistryQwordValue(v13, v12, &qword_1C0011448);
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"DisableAsserts",
    &v38);
  if ( v38 )
    byte_1C0011A98 = 1;
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Throttle",
    (__int64)L"PerfEnablePackageIdle",
    &v39);
  qword_1C0011948 = (__int64)RegisterKernelIdleStates;
  byte_1C0011D11 = 0;
  qword_1C0011990 = (__int64)RegisterHiddenIdleStates;
  byte_1C0011998 = v39 == 0;
  dword_1C001199C = 0;
  qword_1C0011950 = (__int64)RegisterKernelPerfStates;
  v14 = 0;
  v37 = 0;
  qword_1C0011960 = (__int64)RegisterKernelPerfFeedback;
  qword_1C0011968 = (__int64)RegisterKernelLegacyPcc;
  qword_1C0011958 = (__int64)RegisterKernelCap;
  qword_1C0011970 = (__int64)RegisterKernelCpc;
  qword_1C0011978 = (__int64)RegisterKernelPepPerf;
  qword_1C0011980 = (__int64)GetNtProcessorNumber;
  qword_1C0011988 = (__int64)RegisterKernelPackage;
  HviGetHypervisorFeatures();
  v15 = 0;
  byte_1C00119A0 = 0;
  v16 = 0;
  if ( HviIsAnyHypervisorPresent() )
  {
    v15 = (BYTE8(InputBuffer) & 0x20) != 0;
    byte_1C0011D11 = 1;
    v14 = 1;
    InputBuffer = 0LL;
    HviGetHypervisorFeatures();
    if ( (InputBuffer & 0x100000000000LL) != 0 )
    {
      GetHvPpmCapabilities(&v35, 0LL);
      v17 = 2048LL;
      if ( v35 )
      {
        dword_1C001199C = 1;
        qword_1C0011950 = (__int64)RegisterHvPerfStatesCounters;
        qword_1C0011990 = (__int64)RegisterHvIdleStates;
        qword_1C0011960 = (__int64)RegisterHvPerfFeedbackCounters;
        v17 = 1024LL;
        qword_1C0011948 = (__int64)RegisterHvIdleStates;
        qword_1C0011968 = (__int64)RegisterHvLegacyPccCounters;
        qword_1C0011970 = (__int64)RegisterHvCpcCounters;
        qword_1C0011980 = (__int64)GetLpIndex;
        qword_1C0011988 = (__int64)RegisterHvPackage;
      }
      goto LABEL_47;
    }
    qword_1C0011948 = (__int64)RegisterGuestIdleStates;
    v16 = 1;
    GetRegistryDwordValue(
      (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
      (__int64)L"AllowGuestPerfStates",
      &v37);
    if ( !v37 )
    {
      v17 = 2048LL;
      qword_1C0011950 = (__int64)RegisterNoop;
      qword_1C0011968 = (__int64)RegisterNoop;
      qword_1C0011958 = (__int64)RegisterNoop;
      qword_1C0011970 = (__int64)RegisterNoop;
      qword_1C0011978 = (__int64)RegisterNoop;
      if ( v15 )
      {
        byte_1C00119A0 = 1;
      }
      else
      {
        qword_1C0011960 = (__int64)RegisterNoop;
        qword_1C0011988 = (__int64)RegisterNoop;
      }
      goto LABEL_47;
    }
  }
  v16 = v14;
  v17 = 2048LL;
  if ( v14 )
  {
LABEL_47:
    dword_1C0011D08 = GetHiddenProcessorPresence();
    goto LABEL_54;
  }
  if ( (int)HalPrivateDispatchTable[143]((__int64)&v41) >= 0 )
  {
    v6 = v41;
    if ( (_DWORD)v41 != 1 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1073741735;
      v7 = 19;
      v34 = 1;
      goto LABEL_10;
    }
    qword_1C0011800 = *((_QWORD *)&v41 + 1);
    xmmword_1C0011808 = v42;
    qword_1C0011818 = v43;
  }
  dword_1C0011D0C = dword_1C0011454 + HalPrivateDispatchTable[145](0xFFFFFFFFLL);
  dword_1C0011D08 = 2;
LABEL_54:
  WPP_MAIN_CB.Queue.ListEntry.Blink = (_LIST_ENTRY *)ExAllocatePool2(64LL, 8 * v17, 1919119952LL);
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
  v36 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PSTATES, &v36);
  v22 = v36 == 2;
  v36 = 1;
  v23 = 0;
  if ( v22 )
    v23 = 1879048192;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_ACPI1_CSTATE_C2, &v36);
  if ( v36 == 2 )
    v23 |= 2u;
  v36 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_TSTATES, &v36);
  if ( v36 == 2 )
    v23 |= 0x3300000u;
  v36 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PCC, &v36);
  if ( v36 == 2 )
    v23 |= 0x80000000;
  v24 = v23;
  v25 = 0x180899900377LL;
  qword_1C0011448 = v23 | (unsigned __int64)qword_1C0011448;
  dword_1C00119A4 = v23;
  dword_1C00115F0 = 1;
  dword_1C00115F4 = 320;
  if ( v40 )
    v25 = 0x181899D00377LL;
  Globals[0] = v25 | 0x10400000400LL;
  if ( (unsigned __int8)PoEnergyEstimationEnabled() )
  {
    v27 = (char *)&unk_1C0011AF0;
    Globals[0] |= 0x2000000000uLL;
    for ( i = 0; i < 2u; ++i )
    {
      LOBYTE(v26) = i;
      PopulateEnergyEstimationModel(v26, v27);
      v27 += 256;
    }
  }
  *(_QWORD *)&InputBuffer = 0LL;
  inited = InitDriver((__int64)&dword_1C00115F0, &InputBuffer);
  v3 = inited;
  if ( inited >= 0 )
  {
    v30 = InputBuffer | Globals[0];
    Globals[0] |= InputBuffer;
    if ( v16 )
    {
      qword_1C0011618 = 0LL;
      qword_1C0011630 = 0LL;
      qword_1C0011638 = 0LL;
      qword_1C0011640 = 0LL;
      qword_1C0011660 = 0LL;
      qword_1C0011648 = 0LL;
      qword_1C0011650 = 0LL;
      qword_1C0011670 = 0LL;
      qword_1C0011678 = 0LL;
      qword_1C0011680 = 0LL;
      qword_1C00116B0 = 0LL;
      qword_1C00116B8 = 0LL;
      if ( !v15 )
        qword_1C0011668 = 0LL;
      v30 &= 0xFFFE5FFFFFFFFFFFuLL;
      Globals[0] = v30;
      if ( !v37 )
      {
        v30 &= ~0x800000000uLL;
        Globals[0] = v30;
      }
    }
    if ( dword_1C001199C )
    {
      v30 &= 0xFFFFFFFCFFFFFEFFuLL;
      Globals[0] = v30;
    }
    if ( dword_1C001199C != 1 )
      Globals[0] = v30 & 0xFFFFBFFFFFFFFFFFuLL;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v31 = "Disabled";
      if ( dword_1C001199C )
        v31 = "Enabled";
      WPP_RECORDER_SF_s(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        2u,
        0x19u,
        (__int64)&WPP_16f78f6d0ba536165795625b2ea94e7d_Traceguids,
        v31);
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
    if ( (v24 & Globals[0] & 0x7F077) != 0 )
      ProcLibTraceIdleStatesErrata(0);
    if ( (v24 & Globals[0] & 0x70000000) != 0 )
      ProcLibTracePerfStatesErrata(0);
    if ( (v24 & Globals[0] & 0x3300000) != 0 )
      ProcLibTraceThrottleStatesErrata(0);
    if ( (v24 & Globals[0] & 0x80000000LL) != 0 )
      ProcLibTracePccErrata(0);
    if ( qword_1C0011448 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0x1Cu,
          (__int64)&WPP_16f78f6d0ba536165795625b2ea94e7d_Traceguids);
      DisplayPPMFlags(~qword_1C0011448, 5u);
      Globals[0] &= ~qword_1C0011448;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        2u,
        0x1Du,
        (__int64)&WPP_16f78f6d0ba536165795625b2ea94e7d_Traceguids);
    DisplayPPMFlags(Globals[0], 4u);
    if ( qword_1C0011630 && (dword_1C0011450 & 0x70000000) != 0 )
      qword_1C0011630 = 0LL;
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
        (__int64)&WPP_16f78f6d0ba536165795625b2ea94e7d_Traceguids,
        inited);
    memset(&dword_1C00115F0, 0, 0x140uLL);
  }
  return v3;
}
