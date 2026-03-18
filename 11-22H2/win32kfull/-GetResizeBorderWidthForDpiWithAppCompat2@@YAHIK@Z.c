/*
 * XREFs of ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x1C00A2B74
 * Callers:
 *     GetResizeBorderWidthForDpi @ 0x1C00A2B34 (GetResizeBorderWidthForDpi.c)
 *     xxxCalcClientRect @ 0x1C010ACC0 (xxxCalcClientRect.c)
 * Callees:
 *     GetDpiCacheSlot @ 0x1C00EDB50 (GetDpiCacheSlot.c)
 *     GetDpiDependentMetric @ 0x1C00F0DA0 (GetDpiDependentMetric.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01BF620 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

__int64 __fastcall GetResizeBorderWidthForDpiWithAppCompat2(unsigned int a1, int a2)
{
  unsigned int v4; // ebx
  int DpiDependentMetric; // eax

  if ( (a2 & 0x10000000) != 0 )
  {
    return 1;
  }
  else
  {
    v4 = (int)(*(_DWORD *)(Get96DpiServerInfo() + 4) * a1 + 48) / 96;
    if ( (a2 & 0x20000000) != 0 )
    {
      if ( a1 == *(unsigned __int16 *)(gpsi + 6998LL) )
      {
        DpiDependentMetric = *(_DWORD *)(gpsi + 2400LL);
      }
      else if ( a1 == 96 )
      {
        DpiDependentMetric = *(_DWORD *)(gpsi + 2520LL);
      }
      else if ( (unsigned int)GetDpiCacheSlot(a1) == -1 )
      {
        DpiDependentMetric = ScaleSystemMetricForDPIWithoutCache(29LL, a1);
      }
      else
      {
        DpiDependentMetric = GetDpiDependentMetric(29LL, a1);
      }
      v4 += DpiDependentMetric;
    }
  }
  return v4;
}
