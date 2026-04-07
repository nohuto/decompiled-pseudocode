/*
 * XREFs of ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x180023BB8
 * Callers:
 *     ?InvalidateBitmaps@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@K@Z @ 0x180003C84 (-InvalidateBitmaps@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@K@Z.c)
 *     ?AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x180003E64 (-AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180022660 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?WindowCanHaveIconicBitmapChanged@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@@Z @ 0x180023AEC (-WindowCanHaveIconicBitmapChanged@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PEAW4IconicRepresentationType@@@Z @ 0x18004B894 (-_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PE.c)
 *     ?LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK@Z @ 0x1800BEA08 (-LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK.c)
 *     ?OnLivePreviewDismissed@CIconicBitmapRegistry@@QEAAXXZ @ 0x1800BED30 (-OnLivePreviewDismissed@CIconicBitmapRegistry@@QEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x180004E98 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?UpdateIconicBitmapTimerEnabled@CIconicBitmapRegistry@@AEAAXXZ @ 0x180007B74 (-UpdateIconicBitmapTimerEnabled@CIconicBitmapRegistry@@AEAAXXZ.c)
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x180010FC0 (McTemplateU0qp_EtwEventWriteTransfer.c)
 *     ?RegisterBitmapPending@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z @ 0x180011214 (-RegisterBitmapPending@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z.c)
 *     ?IsWindowTab@@YA_NPEAVCWindowData@@@Z @ 0x180011268 (-IsWindowTab@@YA_NPEAVCWindowData@@@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001DA74 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180035AB8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?PostStartAnimations@CDesktopManager@@QEAAJXZ @ 0x1800481B0 (-PostStartAnimations@CDesktopManager@@QEAAJXZ.c)
 *     ?DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z @ 0x18004B1A4 (-DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z.c)
 *     ?RemoveAt@?$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z @ 0x1800ADAFC (-RemoveAt@-$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z.c)
 *     ?GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z @ 0x180103F44 (-GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z.c)
 */

__int64 __fastcall CIconicBitmapRegistry::RequestBitmap(CIconicBitmapRegistry *this, struct CWindowData *a2, char a3)
{
  unsigned int v3; // edi
  char v4; // r15
  unsigned int v8; // edx
  struct CWindowData **v10; // rax
  int v11; // eax
  __int64 v12; // rax
  unsigned int v13; // edx
  unsigned int v14; // eax
  HWND v15; // r14
  __int64 v16; // rcx
  __int64 WindowDpiAwarenessContext; // rax
  int AwarenessFromDpiAwarenessContext; // eax
  HWND v19; // rdx
  CWindowData *WindowDataByHwnd; // rax
  int started; // eax
  HMONITOR v22; // rax
  LONG v23; // eax
  int v24; // r8d
  int v25; // edx
  LPARAM v26; // rsi
  WPARAM v27; // r8
  LPARAM v28; // r9
  UINT v29; // edx
  CDesktopManager *v30; // rcx
  unsigned int v31; // [rsp+20h] [rbp-20h]
  struct tagRECT v32; // [rsp+30h] [rbp-10h] BYREF
  char v33; // [rsp+78h] [rbp+38h] BYREF
  int nNumerator; // [rsp+80h] [rbp+40h] BYREF
  struct tagSIZE v35; // [rsp+88h] [rbp+48h] BYREF

  v3 = 0;
  v4 = 0;
  if ( a2 != (struct CWindowData *)-2LL )
  {
    v8 = 0;
    if ( *((_DWORD *)this + 18) )
    {
      v10 = (struct CWindowData **)(*((_QWORD *)this + 6) + 8LL);
      while ( *v10 != a2 )
      {
        ++v8;
        v10 += 2;
        if ( v8 >= *((_DWORD *)this + 18) )
          goto LABEL_3;
      }
      v4 = 1;
      v11 = DynArray<CIconicBitmapPending,0>::RemoveAt();
      v3 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x160u);
    }
  }
LABEL_3:
  if ( !a3 )
  {
    if ( v4 || a2 == (struct CWindowData *)-2LL || a2 != (struct CWindowData *)-1LL && *((_QWORD *)a2 + 104) )
    {
      if ( (unsigned __int64)a2 > 0xFFFFFFFFFFFFFFFDuLL )
        *((_BYTE *)this + 89) = 0;
      else
        CIconicBitmapRegistry::RegisterBitmapPending(this, a2, 0);
      CIconicBitmapRegistry::UpdateIconicBitmapTimerEnabled(this);
    }
    return v3;
  }
  if ( a2 != (struct CWindowData *)-2LL )
  {
    *(_QWORD *)&v32.right = a2;
    v12 = *((unsigned int *)this + 18);
    v13 = v12 + 1;
    *(double *)&v32.left = *((double *)CDesktopManager::s_pDesktopManagerInstance + 31) + 10.0;
    if ( (int)v12 + 1 < (unsigned int)v12 )
    {
      v3 = -2147024362;
      v14 = 181;
LABEL_32:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, v14);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x16Cu);
      return v3;
    }
    if ( v13 > *((_DWORD *)this + 17) )
    {
      v3 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 48, 16LL, 1LL, &v32);
      if ( (v3 & 0x80000000) != 0 )
      {
        v14 = 192;
        goto LABEL_32;
      }
    }
    else
    {
      v3 = 0;
      *(struct tagRECT *)(*((_QWORD *)this + 6) + 16 * v12) = v32;
      *((_DWORD *)this + 18) = v13;
    }
  }
  if ( !IsWindowTab(a2) )
  {
    if ( a2 != (struct CWindowData *)-2LL && a2 != (struct CWindowData *)-1LL )
      goto LABEL_38;
LABEL_54:
    v16 = *(_QWORD *)(*((_QWORD *)this + 12) + 72LL);
    v15 = *(HWND *)(v16 + 40);
    *((_BYTE *)this + 89) = 1;
    if ( v4 )
    {
LABEL_57:
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0qp_EtwEventWriteTransfer(v16, (int)&UdwmManageIconicThumbnail_Info, 3, v15);
      if ( IsWindowTab(a2) )
        return v3;
      v30 = CDesktopManager::s_pDesktopManagerInstance;
      if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 23) )
        return v3;
      *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 23) = 1;
      started = CDesktopManager::PostStartAnimations(v30);
      v3 = started;
      if ( started >= 0 )
        return v3;
      v31 = 435;
      goto LABEL_34;
    }
    v28 = 0LL;
    v29 = 806;
    v27 = 0LL;
LABEL_56:
    PostMessageW(v15, v29, v27, v28);
    goto LABEL_57;
  }
  if ( a2 == (struct CWindowData *)-2LL || a2 == (struct CWindowData *)-1LL )
    goto LABEL_54;
  if ( !*((_DWORD *)a2 + 148) || !*(_DWORD *)(**((_QWORD **)a2 + 71) + 73LL) )
  {
LABEL_38:
    v15 = (HWND)*((_QWORD *)a2 + 5);
    CIconicBitmapRegistry::RegisterBitmapPending(this, a2, 1);
    if ( v4 )
      goto LABEL_57;
    if ( !v15 )
      goto LABEL_57;
    v35 = 0LL;
    WindowDpiAwarenessContext = GetWindowDpiAwarenessContext(v15);
    AwarenessFromDpiAwarenessContext = GetAwarenessFromDpiAwarenessContext(WindowDpiAwarenessContext);
    if ( !(unsigned int)DwmGetIdealIconicThumbnailSize(AwarenessFromDpiAwarenessContext != 0, &v35) )
      goto LABEL_57;
    v19 = (HWND)*((_QWORD *)a2 + 104);
    if ( v19 )
    {
      WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52),
                           v19);
      if ( WindowDataByHwnd )
      {
        started = CWindowData::GetWindowRestoreRect(WindowDataByHwnd, &v32, 1);
        v3 = started;
        if ( started < 0 )
        {
          v31 = 411;
LABEL_34:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, v31);
          return v3;
        }
        v22 = MonitorFromWindow(0LL, 1u);
        if ( (unsigned int)GetDpiForMonitorInternal(v22, 0LL, &nNumerator, &v33) )
        {
          v23 = MulDiv(375, nNumerator, 96);
          v24 = 0;
          if ( v32.bottom - v32.top >= 0 )
            v24 = v32.bottom - v32.top;
          v35.cy = v23;
          v25 = 0;
          if ( v32.right - v32.left >= 0 )
            v25 = v32.right - v32.left;
          v35.cx = MulDiv(v23, v25, v24);
        }
      }
    }
    v26 = LOWORD(v35.cy) | (LOWORD(v35.cx) << 16);
    if ( CWindowData::IsImmersiveWindow(a2) )
      v27 = *((_QWORD *)a2 + 5);
    else
      v27 = 0LL;
    v28 = v26;
    v29 = 803;
    goto LABEL_56;
  }
  return 0LL;
}
