/*
 * XREFs of ?GetCpuSpeed@GamingOverlayExperienceManager@@AEAAJPEAN@Z @ 0x1803FC6E8
 * Callers:
 *     ?PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x180404644 (-PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ?_Buy_nonzero@?$vector@U_PROCESSOR_POWER_INFORMATION@@V?$allocator@U_PROCESSOR_POWER_INFORMATION@@@std@@@std@@AEAAX_K@Z @ 0x1802D3640 (-_Buy_nonzero@-$vector@U_PROCESSOR_POWER_INFORMATION@@V-$allocator@U_PROCESSOR_POWER_INFORMATION.c)
 *     ?_Tidy@?$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@std@@@std@@AEAAXXZ @ 0x1802D36E4 (-_Tidy@-$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V-$allocator@UClassIdAndI.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::GetCpuSpeed(GamingOverlayExperienceManager *this, double *a2)
{
  unsigned int v3; // ebx
  __int64 dwNumberOfProcessors; // rsi
  int *v6; // rbp
  PVOID v7; // r14
  NTSTATUS v8; // eax
  int *v9; // rbp
  __int64 v10; // rcx
  int v11; // eax
  double v12; // xmm1_8
  PVOID OutputBuffer[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v14; // [rsp+40h] [rbp-48h]
  _SYSTEM_INFO SystemInfo; // [rsp+48h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  if ( !a2 )
  {
    v3 = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x56E,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)0x80004003LL);
    return v3;
  }
  *a2 = 0.0;
  GetSystemInfo(&SystemInfo);
  dwNumberOfProcessors = SystemInfo.dwNumberOfProcessors;
  if ( SystemInfo.dwNumberOfProcessors )
  {
    v14 = 0LL;
    *(_OWORD *)OutputBuffer = 0LL;
    std::vector<_PROCESSOR_POWER_INFORMATION>::_Buy_nonzero(OutputBuffer, SystemInfo.dwNumberOfProcessors);
    v6 = (int *)OutputBuffer[0];
    v7 = OutputBuffer[0];
    memset_0(OutputBuffer[0], 0, 24 * dwNumberOfProcessors);
    OutputBuffer[1] = &v6[6 * dwNumberOfProcessors];
    v8 = CallNtPowerInformation(ProcessorInformation, 0LL, 0, v6, 8 * (((char *)OutputBuffer[1] - (char *)v7) >> 3));
    v3 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x57C,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
      std::vector<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>::_Tidy((__int64)OutputBuffer);
      return v3;
    }
    v9 = v6 + 2;
    v10 = dwNumberOfProcessors;
    do
    {
      v11 = *v9;
      v9 += 6;
      v12 = (double)v11 / 1000.0 + *a2;
      *a2 = v12;
      --v10;
    }
    while ( v10 );
    *a2 = v12 / (double)(int)dwNumberOfProcessors;
    std::vector<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>::_Tidy((__int64)OutputBuffer);
  }
  return 0LL;
}
