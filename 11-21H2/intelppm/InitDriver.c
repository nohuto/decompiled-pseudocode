/*
 * XREFs of InitDriver @ 0x1C0047234
 * Callers:
 *     ProcLibGlobalInit @ 0x1C00462E4 (ProcLibGlobalInit.c)
 * Callees:
 *     PctGetIntelEsuType @ 0x1C00022C0 (PctGetIntelEsuType.c)
 *     IsPerformanceEnergyBiasSupported @ 0x1C0002C98 (IsPerformanceEnergyBiasSupported.c)
 *     IsHwpSupported @ 0x1C0002D34 (IsHwpSupported.c)
 *     IsTurboModeSupported @ 0x1C0003280 (IsTurboModeSupported.c)
 *     __security_check_cookie @ 0x1C0003340 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C00036D0 (GetCpuIdInfo.c)
 *     _guard_dispatch_icall_nop @ 0x1C0003700 (_guard_dispatch_icall_nop.c)
 *     GetRegistryDwordValue @ 0x1C002A9A0 (GetRegistryDwordValue.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C002AC80 (GetRegistryDwordValueNoDefault.c)
 *     IsHgsInterruptSupported @ 0x1C002B654 (IsHgsInterruptSupported.c)
 *     IsHwpNativeInterruptSupported @ 0x1C002B748 (IsHwpNativeInterruptSupported.c)
 *     IsMonitorMWaitSupported @ 0x1C002B8CC (IsMonitorMWaitSupported.c)
 *     IsNonwrappingACountMCountSupported @ 0x1C002B938 (IsNonwrappingACountMCountSupported.c)
 *     GetHvPpmCapabilities @ 0x1C00385A4 (GetHvPpmCapabilities.c)
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
  if ( v9 || (GetHvPpmCapabilities(0LL, &v9), v9) )
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
      if ( qword_1C001E0D0 && (unsigned __int8)qword_1C001E0D0() )
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
  *(_QWORD *)(a1 + 288) = 0LL;
  *(_DWORD *)(a1 + 264) = 409;
  *(_QWORD *)(a1 + 272) = -65536LL;
  *(_DWORD *)(a1 + 280) = 410;
  if ( qword_1C001E0A0 && (_QWORD)xmmword_1C001E0A8 && *((_QWORD *)&xmmword_1C001E0A8 + 1) && qword_1C001E0B8 )
    v6 |= 0x200000000000uLL;
  if ( dword_1C001E5A8 == 2 )
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
  *(_QWORD *)(a1 + 192) = InitEnergyCounters;
  *(_QWORD *)(a1 + 200) = UnInitEnergyCounters;
  *(_QWORD *)(a1 + 296) = GetHwDebugRegisters;
  *(_QWORD *)(a1 + 304) = InitMeasRegisters;
  *(_QWORD *)(a1 + 312) = QueryProcMeasValues;
  v7 = v6 | 0x1000000000000LL;
  if ( (unsigned int)PctGetIntelEsuType() != 2 )
  {
    v7 |= 0x800000000000uLL;
    *(_QWORD *)(a1 + 224) = PctDiscoverPlatformCtrs;
    *(_QWORD *)(a1 + 232) = PctSnapPlatformCtrs;
    *(_QWORD *)(a1 + 240) = PctEnumPlatfromCtr;
    *(_QWORD *)(a1 + 248) = PctGetPlatformCtr;
    *(_QWORD *)(a1 + 256) = PctGetPlatformCtrInfo;
  }
  *a2 |= v7;
  return 0LL;
}
