/*
 * XREFs of ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x180107A2C
 * Callers:
 *     ?OnWindowSizeUpdated@CWindowData@@QEAAJXZ @ 0x18001A954 (-OnWindowSizeUpdated@CWindowData@@QEAAJXZ.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x1800278D0 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18003A440 (-OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180106A68 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x180107510 (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x180107634 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 * Callees:
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x18000D0CC (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ @ 0x18001AA44 (-OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     ?OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18002FE94 (-OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180037860 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x180047520 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetWindowRectForLivePreview@CWindowIconic@@AEAAJPEAUtagRECT@@@Z @ 0x180106910 (-GetWindowRectForLivePreview@CWindowIconic@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?UpdateClientArea@CWindowIconic@@AEAAJXZ @ 0x180107808 (-UpdateClientArea@CWindowIconic@@AEAAJXZ.c)
 *     ?GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z @ 0x1801081A0 (-GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z.c)
 *     ?NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z @ 0x180108464 (-NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z.c)
 *     ?DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z @ 0x180110158 (-DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z.c)
 */

__int64 __fastcall CWindowIconic::UpdateSizeOrMargins(CWindowIconic *this, char a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __m128i v6; // xmm6
  int v7; // r15d
  LONG right; // r13d
  int v9; // r14d
  LONG bottom; // r12d
  __int64 v11; // rax
  int left; // ecx
  LONG top; // esi
  int v14; // edx
  int v15; // r8d
  int v16; // ecx
  int v17; // eax
  int v18; // edx
  int v19; // ecx
  int v20; // eax
  char v21; // r12
  HWND v22; // rdx
  CWindowData *WindowDataByHwnd; // rax
  int WindowRestoreRect; // eax
  HMONITOR v25; // rax
  int v26; // eax
  int v27; // r8d
  int v28; // edx
  int WindowRectForLivePreview; // eax
  bool v30; // si
  int v31; // eax
  CVisual *v32; // rcx
  int v33; // eax
  int updated; // eax
  int v35; // eax
  int v36; // eax
  char v38; // [rsp+38h] [rbp-59h]
  __m128i v40; // [rsp+40h] [rbp-51h] BYREF
  int nNumerator; // [rsp+50h] [rbp-41h] BYREF
  __int128 v42; // [rsp+58h] [rbp-39h]
  struct tagRECT v43; // [rsp+68h] [rbp-29h] BYREF
  __int128 v44; // [rsp+78h] [rbp-19h]
  _BYTE v45[8]; // [rsp+88h] [rbp-9h] BYREF
  struct tagRECT Rect; // [rsp+90h] [rbp-1h] BYREF
  struct tagRECT v47; // [rsp+A0h] [rbp+Fh] BYREF

  v2 = *((_QWORD *)this + 9);
  v4 = *((_QWORD *)this + 10);
  v5 = 0;
  v6 = 0LL;
  v40 = 0LL;
  v47 = *(struct tagRECT *)(v2 + 48);
  v42 = *(_OWORD *)(v4 + 48);
  v44 = *(_OWORD *)(v4 + 64);
  if ( !*(_QWORD *)(v2 + 856) || *((_BYTE *)this + 20) )
  {
    Rect = 0LL;
    AdjustWindowRectEx(&Rect, *(_DWORD *)(v4 + 116), 0, 0);
    v9 = -Rect.left;
    right = Rect.right;
    v7 = -Rect.top;
    bottom = Rect.bottom;
    v40.m128i_i32[2] = -Rect.top;
    v40.m128i_i32[0] = -Rect.left;
    v40.m128i_i32[1] = Rect.right;
    v40.m128i_i32[3] = Rect.bottom;
    v6 = _mm_loadu_si128(&v40);
  }
  else
  {
    v7 = v40.m128i_i32[2];
    right = v40.m128i_i32[1];
    v9 = v40.m128i_i32[0];
    bottom = v40.m128i_i32[3];
  }
  if ( !*((_BYTE *)this + 20) )
  {
    DwmGetIdealIconicThumbnailSize(1, (struct tagSIZE *)&Rect);
    if ( *((_DWORD *)this + 4) == 2 && (v11 = *((_QWORD *)this + 3)) != 0 )
    {
      *(_QWORD *)&Rect.left = *(_QWORD *)(v11 + 24);
    }
    else
    {
      v22 = *(HWND *)(*((_QWORD *)this + 9) + 856LL);
      if ( v22 )
      {
        WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                             v22);
        if ( WindowDataByHwnd )
        {
          WindowRestoreRect = CWindowData::GetWindowRestoreRect(WindowDataByHwnd, &v43, 1);
          v5 = WindowRestoreRect;
          if ( WindowRestoreRect < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, WindowRestoreRect, 0x16Eu);
            return v5;
          }
          v25 = MonitorFromWindow(0LL, 1u);
          if ( (unsigned int)GetDpiForMonitorInternal(v25, 0LL, &nNumerator, v45) )
          {
            v26 = MulDiv(375, nNumerator, 96);
            v27 = 0;
            top = v26;
            if ( v43.bottom - v43.top >= 0 )
              v27 = v43.bottom - v43.top;
            v28 = 0;
            if ( v43.right - v43.left >= 0 )
              v28 = v43.right - v43.left;
            left = MulDiv(v26, v28, v27);
            goto LABEL_10;
          }
        }
      }
    }
    left = Rect.left;
    top = Rect.top;
LABEL_10:
    v47.right = v9 + right + v47.left + left;
    v47.bottom = v7 + bottom + top + v47.top;
    goto LABEL_11;
  }
  WindowRectForLivePreview = CWindowIconic::GetWindowRectForLivePreview(this, &v47);
  v5 = WindowRectForLivePreview;
  if ( WindowRectForLivePreview < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, WindowRectForLivePreview, 0x180u);
    return v5;
  }
LABEL_11:
  v14 = DWORD2(v42);
  v15 = DWORD1(v42);
  *(__m128i *)(*((_QWORD *)this + 10) + 64LL) = v6;
  *(_OWORD *)(*((_QWORD *)this + 10) + 264LL) = *(_OWORD *)(*((_QWORD *)this + 10) + 64LL);
  *(struct tagRECT *)(*((_QWORD *)this + 10) + 48LL) = v47;
  *(_OWORD *)(*((_QWORD *)this + 10) + 216LL) = *(_OWORD *)(*((_QWORD *)this + 10) + 48LL);
  *(_DWORD *)(*((_QWORD *)this + 10) + 332LL) = 1065353216;
  *(_DWORD *)(*((_QWORD *)this + 10) + 208LL) = 1065353216;
  *(_DWORD *)(*((_QWORD *)this + 10) + 212LL) = 1065353216;
  *(_QWORD *)(*((_QWORD *)this + 10) + 336LL) = 0x3FF0000000000000LL;
  v16 = 0;
  if ( v47.right - v47.left >= 0 )
    v16 = v47.right - v47.left;
  v17 = 0;
  v18 = v14 - v42;
  if ( v18 >= 0 )
    v17 = v18;
  if ( v17 != v16 )
    goto LABEL_35;
  v19 = 0;
  if ( v47.bottom - v47.top >= 0 )
    v19 = v47.bottom - v47.top;
  v20 = 0;
  if ( HIDWORD(v42) - v15 >= 0 )
    v20 = HIDWORD(v42) - v15;
  if ( v20 == v19 )
    v21 = 0;
  else
LABEL_35:
    v21 = 1;
  if ( (_DWORD)v42 != v47.left || (v38 = 0, v15 != v47.top) )
    v38 = 1;
  v30 = v9 != (_DWORD)v44 || __PAIR64__(v7, right) != *(_QWORD *)((char *)&v44 + 4) || v40.m128i_i32[3] != HIDWORD(v44);
  if ( v21 && (v31 = CTopLevelWindow::OnWindowSizeUpdated(*((CTopLevelWindow **)this + 11)), v5 = v31, v31 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v31, 0x18Du);
  }
  else
  {
    if ( v30 )
    {
      v32 = (CVisual *)*((_QWORD *)this + 11);
      v33 = *((_DWORD *)v32 + 22);
      if ( (v33 & 0x2000) == 0 )
      {
        *((_DWORD *)v32 + 22) = v33 | 0x2000;
        CVisual::PropagateDirtyChildren(v32);
      }
    }
    if ( v38 )
      CTopLevelWindow::OnOffsetUpdated(*((CTopLevelWindow **)this + 11));
    if ( v21 || v30 )
    {
      updated = CWindowIconic::UpdateClientArea(this);
      v5 = updated;
      if ( updated >= 0 )
      {
        v35 = CVisual::RenderRecursive(*((CVisual **)this + 11));
        v5 = v35;
        if ( v35 >= 0 )
        {
          v36 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 64LL))(*((_QWORD *)this + 13));
          v5 = v36;
          if ( v36 >= 0 )
          {
            if ( a2 )
              CWindowData::NotifySWROfMarginOrSizeChange(*((CWindowData **)this + 9), 1, 1);
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v36, 0x19Eu);
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v35, 0x19Du);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x19Cu);
      }
    }
  }
  return v5;
}
