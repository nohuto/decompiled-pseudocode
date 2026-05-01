/*
 * XREFs of ?_ComputeApplicationViewData@CFrameApplicationPresentation@@AEAAJAEBUtagRECT@@PEAUAPPLICATION_VIEW_DATA@@@Z @ 0x18007A9B0
 * Callers:
 *     ?ReconcileApplicationViewState@CFrameApplicationPresentation@@UEAAJPEAUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x18007ACC0 (-ReconcileApplicationViewState@CFrameApplicationPresentation@@UEAAJPEAUAPPLICATION_VIEW_DATA_UPD.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1800E7D10 (-ResultFromKnownLastError@@YAJXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

__int64 __fastcall CFrameApplicationPresentation::_ComputeApplicationViewData(
        HWND *this,
        const struct tagRECT *a2,
        struct APPLICATION_VIEW_DATA *a3)
{
  HMONITOR v5; // rax
  __int64 result; // rax
  int v7; // r10d
  char v8; // dl
  char v9; // al
  char v10; // cl
  char v11; // al
  __int128 v12; // xmm1
  __int64 v13; // xmm0_8
  int v14; // [rsp+20h] [rbp-99h] BYREF
  __int128 v15; // [rsp+28h] [rbp-91h]
  __int128 v16; // [rsp+38h] [rbp-81h]
  __int64 v17; // [rsp+48h] [rbp-71h]
  struct tagPOINT Points[2]; // [rsp+58h] [rbp-61h] BYREF
  struct tagRECT Rect; // [rsp+68h] [rbp-51h] BYREF
  struct tagMONITORINFO mi; // [rsp+80h] [rbp-39h] BYREF

  *(_OWORD *)a3 = 0LL;
  *((_OWORD *)a3 + 1) = 0LL;
  *((_QWORD *)a3 + 4) = 0LL;
  *((_DWORD *)a3 + 10) = 0;
  *(struct tagRECT *)&Points[0].x = *a2;
  SetLastError(0);
  if ( MapWindowPoints(this[16], 0LL, Points, 2u)
    || !GetLastError()
    || (result = ResultFromKnownLastError(), (int)result >= 0) )
  {
    if ( GetWindowRect(this[16], &Rect) || (result = ResultFromKnownLastError(), (int)result >= 0) )
    {
      v5 = MonitorFromWindow(this[16], 1u);
      mi.cbSize = 104;
      if ( GetMonitorInfoW(v5, &mi) || (result = ResultFromKnownLastError(), (int)result >= 0) )
      {
        result = GetScaleFactorForWindow(*(_QWORD *)this[14], &v14);
        if ( (int)result >= 0 )
        {
          v7 = Points[1].x - Points[0].x;
          v16 = 0uLL;
          LODWORD(v17) = 3;
          if ( Points[1].x - Points[0].x < 320 * v14 / 100 || v7 >= 5 * v14 )
          {
            if ( v7 < Points[1].y - Points[0].y )
            {
              LODWORD(v15) = 3;
            }
            else
            {
              if ( Rect.left > mi.rcWork.left || (v8 = 1, mi.rcWork.left > Points[0].x) )
                v8 = 0;
              if ( Points[1].x > mi.rcWork.right || (v9 = 1, mi.rcWork.right > Rect.right) )
                v9 = 0;
              if ( !v8 || (LODWORD(v15) = 0, !v9) )
                LODWORD(v15) = 1;
            }
          }
          else
          {
            LODWORD(v15) = 2;
          }
          *(_QWORD *)((char *)&v15 + 4) = v7 < Points[1].y - Points[0].y;
          if ( Rect.left > mi.rcWork.left || (v10 = 1, mi.rcWork.left > Points[0].x) )
            v10 = 0;
          if ( Points[1].x > mi.rcWork.right || (v11 = 1, mi.rcWork.right > Rect.right) )
            v11 = 0;
          if ( v10 )
          {
            if ( v11 )
              DWORD2(v15) = 3;
            else
              DWORD2(v15) = 1;
          }
          else if ( v11 )
          {
            DWORD2(v15) = 2;
          }
          result = 0LL;
          HIDWORD(v15) = 0;
          HIDWORD(v17) = 1;
          if ( *((_BYTE *)this + 600) )
          {
            if ( *((_BYTE *)this + 566) || (HIDWORD(v17) = 0, *((_BYTE *)this + 567)) )
              HIDWORD(v17) = 2;
          }
          v12 = v16;
          *(_OWORD *)a3 = v15;
          v13 = v17;
          *((_OWORD *)a3 + 1) = v12;
          *((_QWORD *)a3 + 4) = v13;
          *((_DWORD *)a3 + 10) = 0;
        }
      }
    }
  }
  return result;
}
