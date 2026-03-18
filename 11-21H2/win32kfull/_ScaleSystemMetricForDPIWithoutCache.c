/*
 * XREFs of _ScaleSystemMetricForDPIWithoutCache @ 0x1C01E4D60
 * Callers:
 *     ?GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z @ 0x1C004CE04 (-GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C0066D38 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     _AdjustWindowRectExForDpi @ 0x1C006DA8C (_AdjustWindowRectExForDpi.c)
 *     ?GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z @ 0x1C00BBD38 (-GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z.c)
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x1C00BBD80 (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01E4CEC (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01E4D60 (_ScaleSystemMetricForDPIWithoutCache.c)
 *     NtUserScaleSystemMetricForDPIWithoutCache @ 0x1C01FC360 (NtUserScaleSystemMetricForDPIWithoutCache.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C006718C (GetDpiDependentMetric.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     GetCursorSizeFromIndex @ 0x1C009AAF8 (GetCursorSizeFromIndex.c)
 *     GetDPIMETRICSForDpi @ 0x1C00BF104 (GetDPIMETRICSForDpi.c)
 *     GetDPIServerInfoForDpi @ 0x1C00C76E0 (GetDPIServerInfoForDpi.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01E4D60 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

__int64 __fastcall ScaleSystemMetricForDPIWithoutCache(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  int v4; // ebx
  int v5; // r14d
  __int64 v6; // rax
  INT v7; // edi
  __int64 v8; // rcx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // edi
  __int64 DPIMETRICSForDpi; // rax
  INT DpiDependentMetric; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  int v23; // edi
  int v24; // ebx
  int v25; // ebx
  int v26; // ebx
  int v27; // ebx
  int v28; // ebx
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rcx
  int v33; // ebx
  int v34; // eax
  int v35; // ebx
  int v36; // eax

  v3 = a2;
  v4 = a1;
  if ( (unsigned int)a1 <= 0x1D )
  {
    v5 = 0;
    if ( (int)a2 > 0 )
    {
      if ( (int)a1 <= 16 )
      {
        if ( (_DWORD)a1 != 16 )
        {
          if ( (_DWORD)a1 == 2 )
          {
            v8 = 13LL;
          }
          else
          {
            if ( (int)a1 <= 6 )
              goto LABEL_29;
            if ( (int)a1 <= 8 )
            {
              if ( (unsigned int)a2 >= 0x90 )
              {
                if ( (unsigned int)a2 >= 0xC0 )
                {
                  if ( (unsigned int)a2 >= 0x120 )
                    v5 = 4 - ((unsigned int)a2 < 0x180);
                  else
                    v5 = 2;
                }
                else
                {
                  v5 = 1;
                }
              }
              return (unsigned int)GetCursorSizeFromIndex(v5);
            }
            if ( (_DWORD)a1 != 9 )
            {
              if ( (_DWORD)a1 == 14 || (_DWORD)a1 == 15 )
              {
                v6 = Get96DpiServerInfo(a1, a2, a3);
                return (unsigned int)(EngMulDiv(*(_DWORD *)(v6 + 4), v3, 96) + 3);
              }
LABEL_29:
              DpiDependentMetric = GetDpiDependentMetric(a1, 0x60u);
              v7 = EngMulDiv(DpiDependentMetric, v3, 96);
              if ( v4 > 19 )
              {
                v24 = v4 - 23;
                if ( v24 )
                {
                  v25 = v24 - 1;
                  if ( !v25 )
                  {
                    if ( v7 > *(_DWORD *)(GetDPIMETRICSForDpi(v3) + 44) + 2 )
                      return (unsigned int)v7;
                    v23 = *(_DWORD *)(GetDPIMETRICSForDpi(v3) + 44);
                    return (unsigned int)(v23 + 2);
                  }
                  v26 = v25 - 1;
                  if ( v26 )
                  {
                    v27 = v26 - 1;
                    if ( v27 )
                    {
                      if ( v27 == 3 )
                      {
                        if ( v7 >= 100 )
                        {
                          return 100;
                        }
                        else if ( v7 <= 0 )
                        {
                          return 0;
                        }
                      }
                    }
                    else if ( v7 <= *(_DWORD *)(GetDPIMETRICSForDpi(v3) + 28) )
                    {
                      return *(unsigned int *)(GetDPIMETRICSForDpi(v3) + 28);
                    }
                    return (unsigned int)v7;
                  }
                }
              }
              else
              {
                if ( v4 == 19 )
                {
                  if ( v7 > (int)ScaleSystemMetricForDPIWithoutCache(6LL, v3) )
                    return (unsigned int)v7;
                  v20 = 6LL;
                  return (unsigned int)ScaleSystemMetricForDPIWithoutCache(v20, v3);
                }
                if ( v4 > 1 )
                {
                  if ( v4 <= 2 )
                    return (unsigned int)v7;
                  if ( v4 > 4 )
                  {
                    if ( v4 <= 9 )
                      return (unsigned int)v7;
                    if ( v4 > 12 )
                    {
                      if ( v4 != 13 )
                      {
                        if ( v4 != 18 || v7 > (int)ScaleSystemMetricForDPIWithoutCache(5LL, v3) )
                          return (unsigned int)v7;
                        v20 = 5LL;
                        return (unsigned int)ScaleSystemMetricForDPIWithoutCache(v20, v3);
                      }
                      if ( v7 > *(_DWORD *)(GetDPIServerInfoForDpi(v3, v18, v19) + 20) + 2 )
                        return (unsigned int)v7;
                      v23 = *(_DWORD *)(GetDPIServerInfoForDpi(v3, v21, v22) + 20);
                      return (unsigned int)(v23 + 2);
                    }
                  }
                }
              }
              if ( v7 <= 8 )
                return 8;
              return (unsigned int)v7;
            }
            v8 = 26LL;
          }
          return (unsigned int)(ScaleSystemMetricForDPIWithoutCache(v8, a2) + 1);
        }
        v10 = 2 * *(_DWORD *)(GetDPIServerInfoForDpi((unsigned int)a2, a2, a3) + 16);
        v11 = ScaleSystemMetricForDPIWithoutCache(29LL, v3) + v10;
        v12 = 2 * (v11 + ScaleSystemMetricForDPIWithoutCache(14LL, v3));
        v13 = ScaleSystemMetricForDPIWithoutCache(12LL, v3);
        v14 = 13LL;
        v15 = v13 + 4 + v12 + 2 * v13;
        return (unsigned int)(ScaleSystemMetricForDPIWithoutCache(v14, v3) + v15);
      }
      switch ( (_DWORD)a1 )
      {
        case 0x11:
          v35 = ScaleSystemMetricForDPIWithoutCache(29LL, a2);
          v36 = ScaleSystemMetricForDPIWithoutCache(15LL, v3);
          v14 = 2LL;
          v15 = 2 * (v36 + v35);
          return (unsigned int)(ScaleSystemMetricForDPIWithoutCache(v14, v3) + v15);
        case 0x14:
          v33 = ScaleSystemMetricForDPIWithoutCache(12LL, a2) - 2;
          v34 = ScaleSystemMetricForDPIWithoutCache(5LL, v3);
          v30 = v3;
          if ( v33 < v34 / 2 )
          {
            v31 = 12LL;
            return (unsigned int)(ScaleSystemMetricForDPIWithoutCache(v31, v30) - 2);
          }
          v32 = 5LL;
          break;
        case 0x15:
          v28 = ScaleSystemMetricForDPIWithoutCache(13LL, a2) - 2;
          v29 = ScaleSystemMetricForDPIWithoutCache(6LL, v3);
          v30 = v3;
          if ( v28 < v29 / 2 )
          {
            v31 = 13LL;
            return (unsigned int)(ScaleSystemMetricForDPIWithoutCache(v31, v30) - 2);
          }
          v32 = 6LL;
          break;
        case 0x16:
          v8 = 24LL;
          return (unsigned int)(ScaleSystemMetricForDPIWithoutCache(v8, a2) + 1);
        default:
          if ( (unsigned int)(a1 - 27) <= 1 )
          {
            DPIMETRICSForDpi = GetDPIMETRICSForDpi((unsigned int)a2);
            return (unsigned int)(((*(_DWORD *)(DPIMETRICSForDpi + 20) + *(_DWORD *)(DPIMETRICSForDpi + 12) + 1) & 0xFFFE)
                                - 1);
          }
          goto LABEL_29;
      }
      return (unsigned int)((int)ScaleSystemMetricForDPIWithoutCache(v32, v30) / 2);
    }
  }
  UserSetLastError(87LL, a2);
  return 0LL;
}
