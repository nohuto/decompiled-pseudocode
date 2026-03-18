/*
 * XREFs of GetWindowNCMetricsForDpi @ 0x1C00654D8
 * Callers:
 *     _SystemParametersInfoForDpi @ 0x1C00F8C8C (_SystemParametersInfoForDpi.c)
 * Callees:
 *     GetScaledLogFontForDpi @ 0x1C0063C80 (GetScaledLogFontForDpi.c)
 *     GetDpiDependentMetric @ 0x1C006718C (GetDpiDependentMetric.c)
 */

__int64 __fastcall GetWindowNCMetricsForDpi(_DWORD *a1, __int64 a2)
{
  unsigned int v3; // esi
  __int64 v4; // rax
  BOOL ScaledLogFontForDpi; // ebx
  BOOL v6; // ebx
  BOOL v7; // ebx
  BOOL v8; // ebx

  v3 = a2;
  a1[5] = GetDpiDependentMetric(13LL, a2);
  a1[55] = GetDpiDependentMetric(26LL, v3);
  v4 = Get96DpiServerInfo();
  a1[1] = EngMulDiv(*(_DWORD *)(v4 + 4), v3, 96);
  a1[2] = GetDpiDependentMetric(0LL, v3);
  a1[3] = GetDpiDependentMetric(10LL, v3);
  a1[4] = GetDpiDependentMetric(12LL, v3);
  a1[29] = GetDpiDependentMetric(23LL, v3);
  a1[30] = GetDpiDependentMetric(24LL, v3);
  a1[54] = GetDpiDependentMetric(25LL, v3);
  a1[125] = GetDpiDependentMetric(29LL, v3);
  ScaledLogFontForDpi = GetScaledLogFontForDpi(4u, v3, (__int64)(a1 + 6));
  v6 = GetScaledLogFontForDpi(1u, v3, (__int64)(a1 + 31)) && ScaledLogFontForDpi;
  v7 = GetScaledLogFontForDpi(2u, v3, (__int64)(a1 + 56)) && v6;
  v8 = GetScaledLogFontForDpi(3u, v3, (__int64)(a1 + 79)) && v7;
  return v8 & (unsigned int)GetScaledLogFontForDpi(5u, v3, (__int64)(a1 + 102));
}
