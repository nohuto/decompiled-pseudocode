/*
 * XREFs of ?VmBusOpmRequest@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0372010
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005C634 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGC.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005DE78 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkpProcessOpmVmBusRequest@@YAJU_LUID@@IKPEAXK1PEAK@Z @ 0x1C02C4D80 (-DxgkpProcessOpmVmBusRequest@@YAJU_LUID@@IKPEAXK1PEAK@Z.c)
 */

char __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusOpmRequest(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // bl
  struct _LUID *v3; // rdi
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  const wchar_t *v10; // r9
  unsigned int HighPart; // eax
  __int64 v12; // r9
  __int64 v13; // rax
  _DWORD *v14; // r14
  int *v15; // rbx
  int v16; // eax
  int v17; // r8d

  v2 = 0;
  v3 = (struct _LUID *)CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((__int64)a1);
  if ( !v3 )
    return 0;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_VAIL_Opm_Projection__private_reporting,
    0x13CB1C4u,
    v4,
    v5,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_SupportComputeOnlyAdapters_logged_traits,
    1);
  if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 12) + 608LL) + 336LL) )
  {
    v9 = 7937LL;
    WdLogSingleEntry1(2LL, 7937LL);
    v10 = L"OPM requests not allowed from secure VM's";
LABEL_5:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v10, v9, 0LL, 0LL, 0LL, 0LL);
    return 0;
  }
  if ( *((_DWORD *)a1 + 36) - 48 < v3[5].LowPart )
  {
    v9 = 7944LL;
    WdLogSingleEntry1(2LL, 7944LL);
    v10 = L"Input buffer size is too big";
    goto LABEL_5;
  }
  HighPart = v3[5].HighPart;
  if ( HighPart > 0x20000 )
  {
    WdLogSingleEntry1(2LL, HighPart);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"OutputBufSize (0x%I64x) too big",
      (unsigned int)v3[5].HighPart,
      0LL,
      0LL,
      0LL,
      0LL);
    return 0;
  }
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_VAIL_Fake_Monitor_Projection__private_reporting,
    0x146C4AAu,
    v7,
    v8,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_ForceEnhancedMultiSessionRemoteVsyncEmulation_logged_traits,
    0);
  v13 = operator new[]((unsigned int)(v3[5].HighPart + 12), 0x4B677844u, 64LL, v12);
  v14 = (_DWORD *)v13;
  if ( v13 )
  {
    v15 = (int *)(v13 + 4);
    *(_DWORD *)(v13 + 4) = v3[5].HighPart;
    v16 = DxgkpProcessOpmVmBusRequest(
            v3[3],
            v3[4].LowPart,
            v3[4].HighPart,
            (__int64)&v3[6],
            v3[5].LowPart,
            (void **)(v13 + 8),
            (unsigned int *)(v13 + 4));
    v17 = *v15;
    *v14 = v16;
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v14, v17 + 8);
    v2 = 1;
    operator delete[](v14);
  }
  else
  {
    WdLogSingleEntry1(6LL, 7975LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate memory for output buffer",
      7975LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return v2;
}
