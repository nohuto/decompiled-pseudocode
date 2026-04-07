/*
 * XREFs of ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18004ABB8
 * Callers:
 *     ?OnWindowSizeUpdated@CWindowData@@QEAAJXZ @ 0x18001EEB4 (-OnWindowSizeUpdated@CWindowData@@QEAAJXZ.c)
 *     ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180021188 (-OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180030C00 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x18004A8F4 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x18004B4FC (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x18004B790 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x180004E98 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x18001C2D0 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ @ 0x18001EC08 (-OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     ?NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z @ 0x18001EF48 (-NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z.c)
 *     ?OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180036290 (-OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?UpdateClientArea@CWindowIconic@@AEAAJXZ @ 0x18004AE70 (-UpdateClientArea@CWindowIconic@@AEAAJXZ.c)
 *     ?DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z @ 0x18004B1A4 (-DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetWindowRectForLivePreview@CWindowIconic@@AEAAJPEAUtagRECT@@@Z @ 0x1801011E8 (-GetWindowRectForLivePreview@CWindowIconic@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z @ 0x180103F44 (-GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z.c)
 */

__int64 __fastcall CWindowIconic::UpdateSizeOrMargins(CWindowIconic *this, char a2)
{
  __int64 v2; // rax
  char v3; // r15
  __int64 v5; // rcx
  __m128i v6; // xmm6
  unsigned int v7; // ebx
  struct tagRECT v8; // xmm0
  LONG v9; // esi
  LONG right; // r12d
  LONG cx; // r14d
  LONG bottom; // r13d
  char v13; // al
  HWND v14; // rdx
  int v15; // edx
  int v16; // r8d
  int v17; // ecx
  int v18; // edx
  int v19; // eax
  bool v20; // si
  int v21; // eax
  int updated; // eax
  int v23; // eax
  int v24; // eax
  CWindowData *WindowDataByHwnd; // rax
  int WindowRestoreRect; // eax
  HMONITOR v28; // rax
  LONG v29; // eax
  int v30; // r8d
  int v31; // edx
  struct tagSIZE *v32; // rax
  int WindowRectForLivePreview; // eax
  int v34; // ecx
  int v35; // eax
  char v36; // [rsp+38h] [rbp-49h]
  struct tagSIZE v38[2]; // [rsp+40h] [rbp-41h] BYREF
  int nNumerator; // [rsp+50h] [rbp-31h] BYREF
  __int128 v40; // [rsp+58h] [rbp-29h]
  __int128 v41; // [rsp+68h] [rbp-19h]
  _BYTE v42[8]; // [rsp+78h] [rbp-9h] BYREF
  struct tagRECT v43; // [rsp+80h] [rbp-1h] BYREF
  struct tagRECT Rect; // [rsp+90h] [rbp+Fh] BYREF

  v2 = *((_QWORD *)this + 9);
  v3 = 0;
  v5 = *((_QWORD *)this + 10);
  v6 = 0LL;
  v7 = 0;
  v8 = *(struct tagRECT *)(v2 + 48);
  *(_OWORD *)&v38[0].cx = 0LL;
  v43 = v8;
  v40 = *(_OWORD *)(v5 + 48);
  v41 = *(_OWORD *)(v5 + 64);
  if ( !*(_QWORD *)(v2 + 832) || (v13 = *((_BYTE *)this + 20)) != 0 )
  {
    Rect = 0LL;
    AdjustWindowRectEx(&Rect, *(_DWORD *)(v5 + 116), 0, 0);
    v9 = -Rect.left;
    right = Rect.right;
    cx = -Rect.top;
    bottom = Rect.bottom;
    v13 = *((_BYTE *)this + 20);
    v38[1].cx = -Rect.top;
    v38[0].cx = -Rect.left;
    v38[0].cy = Rect.right;
    v38[1].cy = Rect.bottom;
    v6 = _mm_loadu_si128((const __m128i *)v38);
  }
  else
  {
    bottom = v38[1].cy;
    cx = v38[1].cx;
    right = v38[0].cy;
    v9 = v38[0].cx;
  }
  if ( v13 )
  {
    WindowRectForLivePreview = CWindowIconic::GetWindowRectForLivePreview(this, &v43);
    v7 = WindowRectForLivePreview;
    if ( WindowRectForLivePreview < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, WindowRectForLivePreview, 0x181u);
      return v7;
    }
  }
  else
  {
    DwmGetIdealIconicThumbnailSize(1, v38);
    v14 = *(HWND *)(*((_QWORD *)this + 9) + 832LL);
    if ( v14 )
    {
      WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52),
                           v14);
      if ( WindowDataByHwnd )
      {
        WindowRestoreRect = CWindowData::GetWindowRestoreRect(WindowDataByHwnd, &Rect, 1);
        v7 = WindowRestoreRect;
        if ( WindowRestoreRect < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, WindowRestoreRect, 0x16Bu);
          return v7;
        }
        v28 = MonitorFromWindow(0LL, 1u);
        if ( (unsigned int)GetDpiForMonitorInternal(v28, 0LL, &nNumerator, v42) )
        {
          v29 = MulDiv(375, nNumerator, 96);
          v30 = 0;
          v31 = 0;
          if ( Rect.bottom - Rect.top >= 0 )
            v30 = Rect.bottom - Rect.top;
          v38[0].cy = v29;
          if ( Rect.right - Rect.left >= 0 )
            v31 = Rect.right - Rect.left;
          v38[0].cx = MulDiv(v29, v31, v30);
        }
      }
    }
    else if ( *((_DWORD *)this + 4) == 2 )
    {
      v32 = (struct tagSIZE *)*((_QWORD *)this + 3);
      if ( v32 )
        v38[0] = v32[3];
    }
    v43.right = v9 + right + v38[0].cx + v43.left;
    v43.bottom = cx + bottom + v43.top + v38[0].cy;
  }
  v15 = DWORD2(v40);
  v16 = DWORD1(v40);
  *(__m128i *)(*((_QWORD *)this + 10) + 64LL) = v6;
  *(_OWORD *)(*((_QWORD *)this + 10) + 264LL) = *(_OWORD *)(*((_QWORD *)this + 10) + 64LL);
  *(struct tagRECT *)(*((_QWORD *)this + 10) + 48LL) = v43;
  *(_OWORD *)(*((_QWORD *)this + 10) + 216LL) = *(_OWORD *)(*((_QWORD *)this + 10) + 48LL);
  *(_DWORD *)(*((_QWORD *)this + 10) + 332LL) = 1065353216;
  *(_DWORD *)(*((_QWORD *)this + 10) + 208LL) = 1065353216;
  *(_DWORD *)(*((_QWORD *)this + 10) + 212LL) = 1065353216;
  *(_QWORD *)(*((_QWORD *)this + 10) + 336LL) = 0x3FF0000000000000LL;
  v17 = 0;
  if ( v43.right - v43.left >= 0 )
    v17 = v43.right - v43.left;
  v18 = v15 - v40;
  v19 = 0;
  if ( v18 >= 0 )
    v19 = v18;
  if ( v19 != v17 )
    goto LABEL_12;
  v34 = 0;
  if ( v43.bottom - v43.top >= 0 )
    v34 = v43.bottom - v43.top;
  v35 = 0;
  if ( HIDWORD(v40) - v16 >= 0 )
    v35 = HIDWORD(v40) - v16;
  if ( v35 != v34 )
LABEL_12:
    v3 = 1;
  if ( (_DWORD)v40 != v43.left || (v36 = 0, v16 != v43.top) )
    v36 = 1;
  v20 = bottom != HIDWORD(v41) || v9 != (_DWORD)v41 || __PAIR64__(cx, right) != *(_QWORD *)((char *)&v41 + 4);
  if ( v3 && (v21 = CTopLevelWindow::OnWindowSizeUpdated(*((CTopLevelWindow **)this + 11)), v7 = v21, v21 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0x18Eu);
  }
  else
  {
    if ( v20 )
      CVisual::SetDirtyFlags(*((CVisual **)this + 11), 0x2000);
    if ( v36 )
      CTopLevelWindow::OnOffsetUpdated(*((CTopLevelWindow **)this + 11));
    if ( v3 || v20 )
    {
      updated = CWindowIconic::UpdateClientArea(this);
      v7 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x19Du);
      }
      else
      {
        v23 = CVisual::RenderRecursive(*((CVisual **)this + 11));
        v7 = v23;
        if ( v23 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v23, 0x19Eu);
        }
        else
        {
          v24 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 64LL))(*((_QWORD *)this + 13));
          v7 = v24;
          if ( v24 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v24, 0x19Fu);
          }
          else if ( a2 )
          {
            CWindowData::NotifySWROfMarginOrSizeChange(*((CWindowData **)this + 9), 1, 1);
          }
        }
      }
    }
  }
  return v7;
}
