/*
 * XREFs of InitDriver @ 0x1C0020BC0
 * Callers:
 *     ProcLibGlobalInit @ 0x1C004052C (ProcLibGlobalInit.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002BE0 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C000C4C0 (GetCpuIdInfo.c)
 *     IsEnergyMsrSupported @ 0x1C0020058 (IsEnergyMsrSupported.c)
 *     IsPackageEnergyMsrSupported @ 0x1C002009C (IsPackageEnergyMsrSupported.c)
 *     IsRaplSupported @ 0x1C00200E0 (IsRaplSupported.c)
 *     IsMonitorMWaitSupported @ 0x1C0020414 (IsMonitorMWaitSupported.c)
 *     IsACountMCountSupported @ 0x1C0020E58 (IsACountMCountSupported.c)
 *     GetHvPpmCapabilities @ 0x1C002524C (GetHvPpmCapabilities.c)
 */

__int64 __fastcall InitDriver(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdi
  bool v6[8]; // [rsp+20h] [rbp-30h] BYREF
  __int128 v7; // [rsp+28h] [rbp-28h] BYREF
  __int128 v8; // [rsp+38h] [rbp-18h] BYREF

  *(_QWORD *)(a1 + 64) = ValidatePStateCapability;
  v4 = 0x20000000LL;
  *(_QWORD *)(a1 + 72) = SetFFHPState;
  *(_QWORD *)(a1 + 88) = SetFFHPStateHidden;
  byte_1C0012DC0 = 1;
  *(_QWORD *)(a1 + 40) = AmdPpmDeviceStart;
  if ( (unsigned __int8)IsACountMCountSupported() )
  {
    v4 = 0x8024000000LL;
    *(_QWORD *)(a1 + 120) = ACountMCountHardwareFeedback;
  }
  v8 = 0LL;
  v7 = 0LL;
  GetCpuIdInfo(0x80000000, &v8);
  if ( (unsigned int)v8 >= 7 )
  {
    GetCpuIdInfo(0x80000007, &v7);
    if ( (WORD6(v7) & 0x200) != 0 )
      *(_QWORD *)(a1 + 144) = SetPerformanceBoostMode;
  }
  if ( (unsigned __int8)IsACountMCountSupported() )
  {
    v7 = 0LL;
    GetCpuIdInfo(1u, &v7);
    if ( (v7 & 0xF00) == 0xF00 && (unsigned int)(unsigned __int8)((unsigned int)v7 >> 20) + 15 >= 0x17 )
      v4 |= 0x400000uLL;
  }
  v6[0] = IsMonitorMWaitSupported();
  if ( v6[0] || (GetHvPpmCapabilities(0LL, v6, 0LL), v6[0]) )
  {
    *(_QWORD *)(a1 + 48) = InitAcpiIdleStateSupport;
    *(_QWORD *)(a1 + 56) = DecodeMWaitIdleState;
    v4 |= 0x2000007F000uLL;
  }
  v7 = 0LL;
  v8 = 0LL;
  GetCpuIdInfo(0x80000000, &v7);
  if ( (unsigned int)v7 >= 8 )
  {
    GetCpuIdInfo(0x80000008, &v8);
    if ( (DWORD1(v8) & 0x8000000) != 0 )
      *(_QWORD *)(a1 + 176) = GetCppcRequestMsrPerfControlHandler;
  }
  if ( qword_1C0012890 && qword_1C0012898 && qword_1C00128A0 && qword_1C00128A8 )
    v4 |= 0x200000000000uLL;
  *(_DWORD *)(a1 + 272) = -1073676190;
  *(_QWORD *)(a1 + 200) = InitEnergyCountersOnCurrentProcessor;
  *(_QWORD *)(a1 + 208) = UnInitEnergyCountersOnCurrentProcessor;
  *(_QWORD *)(a1 + 280) = -16LL;
  if ( IsRaplSupported() && IsEnergyMsrSupported() && IsPackageEnergyMsrSupported() )
  {
    v4 |= 0x800000000000uLL;
    *(_QWORD *)(a1 + 232) = AmdPctDiscoverPlatformCtrs;
    *(_QWORD *)(a1 + 240) = AmdPctSnapPlatformCtrs;
    *(_QWORD *)(a1 + 248) = AmdPctEnumPlatfromCtr;
    *(_QWORD *)(a1 + 256) = AmdPctGetPlatformCtr;
    *(_QWORD *)(a1 + 264) = AmdPctGetPlatformCtrInfo;
    *(_QWORD *)(a1 + 328) = AmdResetCountersOnD0;
  }
  *a2 |= v4;
  return 0LL;
}
