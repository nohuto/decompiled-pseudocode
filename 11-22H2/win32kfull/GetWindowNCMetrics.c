/*
 * XREFs of GetWindowNCMetrics @ 0x1C00F0894
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C0043D70 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C002E520 (GreExtGetObjectW.c)
 *     GetDPIMetrics @ 0x1C0041140 (GetDPIMetrics.c)
 *     GetResizeBorderWidthForDpi @ 0x1C00A2B34 (GetResizeBorderWidthForDpi.c)
 *     GetWindowFrameMetricForDpi @ 0x1C00AB1E4 (GetWindowFrameMetricForDpi.c)
 *     GetDPIServerInfo @ 0x1C00AB4C8 (GetDPIServerInfo.c)
 *     GetDpiForSystem @ 0x1C00EDB80 (GetDpiForSystem.c)
 *     GetDpiDependentMetric @ 0x1C00F0DA0 (GetDpiDependentMetric.c)
 *     GetScaledLogFontForDpi @ 0x1C00F0E0C (GetScaledLogFontForDpi.c)
 */

__int64 __fastcall GetWindowNCMetrics(_DWORD *a1)
{
  unsigned int DpiForSystem; // esi
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 DPIServerInfo; // rbx
  __int64 v6; // rcx
  HBRUSH *DPIMetrics; // rdi

  DpiForSystem = GetDpiForSystem((__int64)a1);
  a1[5] = GetDpiDependentMetric(13LL, DpiForSystem);
  a1[55] = GetDpiDependentMetric(26LL, DpiForSystem);
  a1[1] = GetResizeBorderWidthForDpi(DpiForSystem);
  a1[2] = GetDpiDependentMetric(0LL, DpiForSystem);
  a1[3] = GetDpiDependentMetric(10LL, DpiForSystem);
  a1[4] = GetDpiDependentMetric(12LL, DpiForSystem);
  a1[29] = GetDpiDependentMetric(23LL, DpiForSystem);
  a1[30] = GetDpiDependentMetric(24LL, DpiForSystem);
  a1[54] = GetDpiDependentMetric(25LL, DpiForSystem);
  a1[125] = GetWindowFrameMetricForDpi(v3, DpiForSystem);
  DPIServerInfo = GetDPIServerInfo(v4);
  DPIMetrics = (HBRUSH *)GetDPIMetrics(v6);
  GreExtGetObjectW(*(HBRUSH *)(DPIServerInfo + 8), 92LL, (__int64)(a1 + 6));
  GreExtGetObjectW(DPIMetrics[4], 92LL, (__int64)(a1 + 31));
  GreExtGetObjectW(*DPIMetrics, 92LL, (__int64)(a1 + 56));
  GreExtGetObjectW(DPIMetrics[7], 92LL, (__int64)(a1 + 79));
  return GetScaledLogFontForDpi(5LL, DpiForSystem);
}
