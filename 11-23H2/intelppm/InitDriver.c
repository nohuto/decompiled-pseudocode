/*
 * XREFs of InitDriver @ 0x1C00485AC
 * Callers:
 *     ProcLibGlobalInit @ 0x1C0048C54 (ProcLibGlobalInit.c)
 * Callees:
 *     IsHwpSupported @ 0x1C0002824 (IsHwpSupported.c)
 *     PctGetIntelEsuType @ 0x1C0002B40 (PctGetIntelEsuType.c)
 *     IsPerformanceEnergyBiasSupported @ 0x1C0002F50 (IsPerformanceEnergyBiasSupported.c)
 *     IsTurboModeSupported @ 0x1C00036F4 (IsTurboModeSupported.c)
 *     __security_check_cookie @ 0x1C0003770 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C0004200 (GetCpuIdInfo.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
 *     IsNonwrappingACountMCountSupported @ 0x1C0025CCC (IsNonwrappingACountMCountSupported.c)
 *     IsMonitorMWaitSupported @ 0x1C0025EBC (IsMonitorMWaitSupported.c)
 *     IsHgsInterruptSupported @ 0x1C0026E34 (IsHgsInterruptSupported.c)
 *     IsHwpNativeInterruptSupported @ 0x1C0026F28 (IsHwpNativeInterruptSupported.c)
 *     GetRegistryDwordValue @ 0x1C00270C8 (GetRegistryDwordValue.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C00270EC (GetRegistryDwordValueNoDefault.c)
 *     GetHvPpmCapabilities @ 0x1C003998C (GetHvPpmCapabilities.c)
 */

__int64 __fastcall InitDriver(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // edi
  char v5; // si
  __int64 v6; // rdi
  __int64 v7; // rdi
  bool v9; // [rsp+20h] [rbp-40h] BYREF
  int v10; // [rsp+24h] [rbp-3Ch] BYREF
  int v11; // [rsp+28h] [rbp-38h] BYREF
  __int128 v12; // [rsp+30h] [rbp-30h] BYREF
  __int128 v13; // [rsp+40h] [rbp-20h] BYREF

  v10 = 0;
  v4 = 12223;
  if ( IsHwpNativeInterruptSupported() || IsHgsInterruptSupported() )
    v4 = 32703;
  LODWORD(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) = v4;
  WPP_MAIN_CB.Queue.Wcb.DeviceObject = (void *)0x100000001LL;
  *(_QWORD *)(a1 + 16) = &WPP_MAIN_CB.Queue.Wcb.DeviceObject;
  v5 = 0;
  *(_WORD *)(a1 + 32) = 12;
  *(_OWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = ACPI_OSC_INTEL_GUID;
  *(&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters + 1) = v4;
  v6 = 572522496LL;
  LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) = 1;
  *(void **)((char *)&WPP_MAIN_CB.Queue.Wcb.DeviceContext + 4) = (void *)2;
  *(_QWORD *)(a1 + 24) = &WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  *(_WORD *)(a1 + 34) = 32;
  *(_QWORD *)(a1 + 64) = ValidatePStateCapability;
  *(_QWORD *)(a1 + 72) = SetGV3PerfState;
  *(_QWORD *)(a1 + 80) = SetFFHThrottleState;
  *(_QWORD *)(a1 + 88) = SetGV3PerfStateHidden;
  *(_QWORD *)(a1 + 96) = SetFFHThrottleStateHidden;
  v13 = 0LL;
  v12 = 0LL;
  GetCpuIdInfo(0, &v13);
  if ( (unsigned int)v13 >= 6 )
  {
    GetCpuIdInfo(6u, &v12);
    if ( (BYTE8(v12) & 1) != 0 )
    {
      v6 = 639631360LL;
      *(_QWORD *)(a1 + 120) = GV3HardwareFeedback;
      if ( IsNonwrappingACountMCountSupported() )
      {
        v5 = 1;
        v6 = 0x8026200000LL;
      }
    }
  }
  v12 = 0LL;
  GetCpuIdInfo(1u, &v12);
  if ( (HIDWORD(v12) & 0x400000) != 0 )
    *(_QWORD *)(a1 + 128) = GetFFHThrottleState;
  if ( IsPerformanceEnergyBiasSupported() )
    *(_QWORD *)(a1 + 136) = SetPerformanceEnergyBiasPolicy;
  if ( IsTurboModeSupported() )
  {
    if ( !IsPerformanceEnergyBiasSupported() )
    {
      *(_QWORD *)(a1 + 144) = SetTurboDisablePolicy;
      goto LABEL_16;
    }
    *(_QWORD *)(a1 + 72) = SetGV3PerfStateAndTurbo;
    *(_QWORD *)(a1 + 112) = GetGV3PerfStateFlags;
    *(_QWORD *)(a1 + 88) = SetGV3PerfStateAndTurboHidden;
  }
  if ( v5 )
    v6 |= 0x400000uLL;
LABEL_16:
  v9 = IsMonitorMWaitSupported();
  if ( v9 || (GetHvPpmCapabilities(0LL, &v9, 0LL), v9) )
  {
    *(_QWORD *)(a1 + 48) = InitAcpiIdleStateSupport;
    *(_QWORD *)(a1 + 56) = DecodeMWaitIdleState;
    v6 |= 0x12000007F000uLL;
  }
  if ( IsHwpSupported() )
  {
    *(_QWORD *)(a1 + 152) = IsCppcThrottleEfficient;
    *(_QWORD *)(a1 + 176) = GetHwpPerfControlHandler;
    GetRegistryDwordValue(
      (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
      (__int64)L"AllowVmPerfControl",
      &v10);
    if ( v10 )
    {
      if ( qword_1C001F400 && (unsigned __int8)qword_1C001F400() )
        v6 |= 0x400000000000uLL;
    }
  }
  if ( IsHwpNativeInterruptSupported() || IsHgsInterruptSupported() )
  {
    v6 |= 0x4000000000uLL;
    *(_QWORD *)(a1 + 160) = ConnectHwpInterrupt;
    *(_QWORD *)(a1 + 168) = ReConnectHwpInterrupt;
    *(_QWORD *)(a1 + 184) = EnableHwpInterrupt;
  }
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_DWORD *)(a1 + 272) = 409;
  *(_QWORD *)(a1 + 280) = -65536LL;
  *(_DWORD *)(a1 + 288) = 410;
  if ( qword_1C001F3D0 && qword_1C001F3D8 && qword_1C001F3E0 && qword_1C001F3E8 )
    v6 |= 0x200000000000uLL;
  if ( dword_1C001F8F8 == 2 )
  {
    v11 = 0;
    if ( (int)GetRegistryDwordValueNoDefault(
                (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\IntelHswPcc\\Enum",
                (__int64)L"Count",
                (__int64)&v11) >= 0 )
    {
      if ( v11 )
        *(_QWORD *)(a1 + 104) = PerfControlIntelPccWorkaround;
    }
  }
  *(_BYTE *)(a1 + 192) = 1;
  *(_QWORD *)(a1 + 200) = InitEnergyCounters;
  *(_QWORD *)(a1 + 208) = UnInitEnergyCounters;
  *(_QWORD *)(a1 + 304) = GetHwDebugRegisters;
  *(_QWORD *)(a1 + 312) = InitMeasRegisters;
  *(_QWORD *)(a1 + 320) = QueryProcMeasValues;
  v7 = v6 | 0x1000000000000LL;
  if ( (unsigned int)PctGetIntelEsuType() != 2 )
  {
    v7 |= 0x800000000000uLL;
    *(_QWORD *)(a1 + 232) = PctDiscoverPlatformCtrs;
    *(_QWORD *)(a1 + 240) = PctSnapPlatformCtrs;
    *(_QWORD *)(a1 + 248) = PctEnumPlatfromCtr;
    *(_QWORD *)(a1 + 256) = PctGetPlatformCtr;
    *(_QWORD *)(a1 + 264) = PctGetPlatformCtrInfo;
    *(_QWORD *)(a1 + 328) = PctResetCountersOnD0;
  }
  *a2 |= v7;
  return 0LL;
}
