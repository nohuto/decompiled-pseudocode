/*
 * XREFs of ?GetCpuSpeed@GamingOverlayExperienceManager@@AEAAJPEAN@Z @ 0x18032F34C
 * Callers:
 *     ?PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x1803368A4 (-PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     ?_Buy_nonzero@?$vector@U_PROCESSOR_POWER_INFORMATION@@V?$allocator@U_PROCESSOR_POWER_INFORMATION@@@std@@@std@@AEAAX_K@Z @ 0x18022BCDA (-_Buy_nonzero@-$vector@U_PROCESSOR_POWER_INFORMATION@@V-$allocator@U_PROCESSOR_POWER_INFORMATION.c)
 *     ?_Tidy@?$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@std@@@std@@AEAAXXZ @ 0x18022BD9C (-_Tidy@-$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V-$allocator@UClassIdAndI.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::GetCpuSpeed(GamingOverlayExperienceManager *this, double *a2)
{
  unsigned int v3; // ebx
  __int64 dwNumberOfProcessors; // rbp
  __int64 v6; // rsi
  char *v7; // r15
  int *v8; // r14
  NTSTATUS v9; // eax
  int *v10; // r14
  int v11; // eax
  double v12; // xmm1_8
  PVOID OutputBuffer[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v14; // [rsp+40h] [rbp-58h]
  _SYSTEM_INFO SystemInfo; // [rsp+48h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  if ( !a2 )
  {
    v3 = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x55A,
      (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)0x80004003LL);
    return v3;
  }
  *a2 = 0.0;
  GetSystemInfo(&SystemInfo);
  dwNumberOfProcessors = SystemInfo.dwNumberOfProcessors;
  if ( SystemInfo.dwNumberOfProcessors )
  {
    v14 = 0LL;
    v6 = SystemInfo.dwNumberOfProcessors;
    *(_OWORD *)OutputBuffer = 0LL;
    std::vector<_PROCESSOR_POWER_INFORMATION>::_Buy_nonzero(OutputBuffer, SystemInfo.dwNumberOfProcessors);
    v7 = (char *)OutputBuffer[0];
    v8 = (int *)OutputBuffer[0];
    memset_0(OutputBuffer[0], 0, 24 * dwNumberOfProcessors);
    OutputBuffer[1] = &v7[24 * dwNumberOfProcessors];
    v9 = CallNtPowerInformation(ProcessorInformation, 0LL, 0, v7, 8 * (((char *)OutputBuffer[1] - (char *)v8) >> 3));
    v3 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x568,
        (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
      std::vector<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>::_Tidy((__int64)OutputBuffer);
      return v3;
    }
    if ( (_DWORD)dwNumberOfProcessors )
    {
      v10 = v8 + 2;
      do
      {
        v11 = *v10;
        v10 += 6;
        v12 = (double)v11 / 1000.0 + *a2;
        *a2 = v12;
        --v6;
      }
      while ( v6 );
    }
    else
    {
      v12 = *a2;
    }
    *a2 = v12 / (double)(int)dwNumberOfProcessors;
    std::vector<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>::_Tidy((__int64)OutputBuffer);
  }
  return 0LL;
}
