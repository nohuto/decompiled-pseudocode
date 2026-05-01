/*
 * XREFs of ?_ComputeApplicationViewData@CFrameApplicationPresentation@@AEAAJAEBUtagRECT@@PEAUAPPLICATION_VIEW_DATA@@@Z @ 0x180022924
 * Callers:
 *     ?ReconcileApplicationViewState@CFrameApplicationPresentation@@UEAAJPEAUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x1800225F0 (-ReconcileApplicationViewState@CFrameApplicationPresentation@@UEAAJPEAUAPPLICATION_VIEW_DATA_UPD.c)
 * Callees:
 *     ?ComputeAppViewData@ImmersiveApplicationLayout@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@PEBUtagRECT@@1PEAUAPPLICATION_VIEW_DATA@@@Z @ 0x180022ADC (-ComputeAppViewData@ImmersiveApplicationLayout@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@PEBUtagRECT@@.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18004EB90 (-ResultFromKnownLastError@@YAJXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall CFrameApplicationPresentation::_ComputeApplicationViewData(
        HWND *this,
        const struct tagRECT *a2,
        struct APPLICATION_VIEW_DATA *a3)
{
  HMONITOR v5; // rax
  int ScaleFactorForWindow; // ecx
  bool v7; // zf
  int v8; // eax
  __int128 v9; // xmm1
  __int64 v10; // xmm0_8
  struct APPLICATION_VIEW_DATA *v12; // [rsp+20h] [rbp-E0h] BYREF
  struct tagRECT v13; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v14; // [rsp+38h] [rbp-C8h]
  __int64 v15; // [rsp+48h] [rbp-B8h]
  int v16; // [rsp+50h] [rbp-B0h]
  RECT rcWork; // [rsp+58h] [rbp-A8h] BYREF
  int v18; // [rsp+68h] [rbp-98h]
  int v19; // [rsp+6Ch] [rbp-94h]
  RECT rcMonitor; // [rsp+70h] [rbp-90h]
  struct tagPOINT Points[2]; // [rsp+80h] [rbp-80h] BYREF
  struct tagRECT Rect; // [rsp+90h] [rbp-70h] BYREF
  struct tagMONITORINFO mi; // [rsp+A0h] [rbp-60h] BYREF

  *(_OWORD *)a3 = 0LL;
  *((_OWORD *)a3 + 1) = 0LL;
  *((_QWORD *)a3 + 4) = 0LL;
  *((_DWORD *)a3 + 10) = 0;
  *(struct tagRECT *)&Points[0].x = *a2;
  SetLastError(0);
  if ( MapWindowPoints(this[16], 0LL, Points, 2u)
    || !GetLastError()
    || (ScaleFactorForWindow = ResultFromKnownLastError(), ScaleFactorForWindow >= 0) )
  {
    if ( GetWindowRect(this[16], &Rect)
      || (ScaleFactorForWindow = ResultFromKnownLastError(), ScaleFactorForWindow >= 0) )
    {
      v5 = MonitorFromWindow(this[16], 1u);
      mi.cbSize = 104;
      if ( GetMonitorInfoW(v5, &mi) || (ScaleFactorForWindow = ResultFromKnownLastError(), ScaleFactorForWindow >= 0) )
      {
        ScaleFactorForWindow = GetScaleFactorForWindow(*(_QWORD *)this[14], &v12);
        if ( ScaleFactorForWindow >= 0 )
        {
          v19 = 0;
          v18 = (int)v12;
          rcWork = mi.rcWork;
          rcMonitor = mi.rcMonitor;
          ScaleFactorForWindow = ImmersiveApplicationLayout::ComputeAppViewData(
                                   (ImmersiveApplicationLayout *)&rcWork,
                                   (struct tagRECT *)Points,
                                   &Rect,
                                   &v13,
                                   v12);
          if ( ScaleFactorForWindow >= 0 )
          {
            v7 = *((_BYTE *)this + 600) == 0;
            HIDWORD(v15) = 1;
            if ( !v7 )
            {
              if ( *((_BYTE *)this + 566) || *((_BYTE *)this + 567) )
                HIDWORD(v15) = 2;
              else
                HIDWORD(v15) = 0;
            }
            v8 = v16;
            v9 = v14;
            *(struct tagRECT *)a3 = v13;
            v10 = v15;
            *((_OWORD *)a3 + 1) = v9;
            *((_QWORD *)a3 + 4) = v10;
            *((_DWORD *)a3 + 10) = v8;
          }
        }
      }
    }
  }
  return (unsigned int)ScaleFactorForWindow;
}
