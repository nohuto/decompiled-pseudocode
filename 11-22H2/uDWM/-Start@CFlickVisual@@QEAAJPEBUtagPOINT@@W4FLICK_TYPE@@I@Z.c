/*
 * XREFs of ?Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z @ 0x1800C0170
 * Callers:
 *     ?OnFlick@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERFLICK@@@Z @ 0x1800B07F8 (-OnFlick@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERFLICK@@@Z.c)
 * Callees:
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x18000A44C (McTemplateU0q_EtwEventWriteTransfer.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x18001B570 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180020544 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x18002A780 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x180039718 (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x18003ACD0 (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 *     ?MonitorDpiFromPoint@CDesktopManager@@SAIUtagPOINT@@@Z @ 0x180046FE0 (-MonitorDpiFromPoint@CDesktopManager@@SAIUtagPOINT@@@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x18004734C (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x180047388 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x18004A8AC (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18006EBBE (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?PostFlickFeedbackUpdate@CContactManager@@QEAAJIW4FLICK_TYPE@@PEBUtagPOINT@@_N@Z @ 0x1800B1984 (-PostFlickFeedbackUpdate@CContactManager@@QEAAJIW4FLICK_TYPE@@PEBUtagPOINT@@_N@Z.c)
 *     ?Stop@CFlickVisual@@UEAAXXZ @ 0x1800C05F0 (-Stop@CFlickVisual@@UEAAXXZ.c)
 */

__int64 __fastcall CFlickVisual::Start(__int64 a1, POINT *a2, int a3, int a4)
{
  __int64 v7; // rax
  bool v8; // zf
  char v9; // al
  __int64 v10; // rax
  _QWORD *v11; // r8
  int v12; // eax
  int BitmapFromAtlas; // r14d
  int v14; // r9d
  unsigned int v15; // eax
  __int64 v16; // rcx
  int *v17; // rax
  int v18; // r14d
  CBaseObject **v19; // r15
  void *Theme; // rax
  _DWORD *v21; // r13
  LONG left; // r12d
  LONG top; // r15d
  HMONITOR v24; // rax
  int v25; // ecx
  int v26; // eax
  CDesktopManager *v27; // rcx
  unsigned int v28; // r8d
  unsigned int v29; // edx
  unsigned int nNumerator; // [rsp+30h] [rbp-D0h]
  struct tagMONITORINFO mi; // [rsp+38h] [rbp-C8h] BYREF
  int v33; // [rsp+60h] [rbp-A0h]
  _DWORD v34[43]; // [rsp+64h] [rbp-9Ch] BYREF

  *(POINT *)(a1 + 312) = *a2;
  *(_DWORD *)(a1 + 308) = a3;
  *(_DWORD *)(a1 + 304) = a4;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) != 0 )
    McTemplateU0q_EtwEventWriteTransfer(a1, (int)&UdwmFlickVisual_Start, a3);
  v7 = *(_QWORD *)(a1 + 360);
  if ( v7 )
  {
    v8 = (*(_DWORD *)(v7 + 8))-- == 1;
    v9 = CDesktopManager::s_fTimelineDirty;
    if ( v8 )
      v9 = 1;
    CDesktopManager::s_fTimelineDirty = v9;
  }
  v10 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          120LL);
  if ( !v10 )
  {
    *(_QWORD *)(a1 + 360) = 0LL;
    goto LABEL_35;
  }
  CTimelineBase::CTimelineBase(v10, *(float *)(a1 + 356), 0.0, 1.0, 0);
  *v11 = &CTimeline<float>::`vftable';
  *(_QWORD *)(a1 + 360) = v11;
  if ( !v11 )
  {
LABEL_35:
    BitmapFromAtlas = -2147024882;
    v15 = 64;
    v14 = -2147024882;
    goto LABEL_36;
  }
  v12 = CTouchVisual::RegisterGlobalTimer((CTouchVisual *)a1);
  BitmapFromAtlas = v12;
  if ( v12 < 0 )
  {
    v14 = v12;
    v15 = 66;
LABEL_36:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, v15);
    CFlickVisual::Stop((CFlickVisual *)a1);
    return (unsigned int)BitmapFromAtlas;
  }
  v34[3] = 2;
  v34[0] = 6;
  v34[11] = 6;
  v33 = 0;
  v34[1] = 1;
  v34[6] = 9;
  v34[2] = 7;
  v34[13] = 7;
  v34[8] = 10;
  v34[12] = 12;
  v34[23] = 12;
  v34[19] = 10;
  v34[17] = 9;
  v34[14] = 13;
  v34[25] = 13;
  v34[20] = 16;
  v34[26] = 19;
  v16 = 21LL;
  v34[37] = 19;
  v34[31] = 16;
  v17 = v34;
  v34[30] = 21;
  v18 = 0;
  v34[32] = 21;
  v34[38] = 21;
  v34[4] = 8;
  v34[5] = 3;
  v34[7] = 4;
  v34[9] = 5;
  v34[10] = 11;
  v34[15] = 8;
  v34[16] = 14;
  v34[18] = 15;
  v34[21] = 11;
  v34[22] = 17;
  v34[24] = 18;
  v34[27] = 14;
  v34[28] = 20;
  v34[29] = 15;
  v34[33] = 17;
  v34[34] = 22;
  v34[35] = 18;
  v34[36] = 23;
  v34[39] = 20;
  v34[40] = 24;
  do
  {
    if ( *(v17 - 1) == a3 )
      v18 = *v17;
    v17 += 2;
    --v16;
  }
  while ( v16 );
  if ( !v18 )
  {
    BitmapFromAtlas = -2147467259;
    v15 = 110;
    v14 = -2147467259;
    goto LABEL_36;
  }
  v19 = (CBaseObject **)(a1 + 328);
  if ( *(_QWORD *)(a1 + 328) )
    CBaseObject::Release(*v19);
  Theme = (void *)CDesktopManager::GetTheme(2);
  BitmapFromAtlas = CTopLevelWindow::CreateBitmapFromAtlas(Theme, v18, 0LL, (struct CBitmapSource **)(a1 + 328));
  v14 = BitmapFromAtlas;
  if ( BitmapFromAtlas < 0 )
  {
    v15 = 117;
    goto LABEL_36;
  }
  v21 = (_DWORD *)(a1 + 344);
  *(_QWORD *)(a1 + 344) = *((_QWORD *)*v19 + 3);
  nNumerator = CDesktopManager::MonitorDpiFromPoint(*a2);
  if ( nNumerator < 0x90 )
  {
    *v21 = 32;
    *(_DWORD *)(a1 + 348) = 32;
  }
  CVisual::SetSize(*(CVisual **)(a1 + 336), (const struct tagSIZE *)(a1 + 344));
  left = *(_DWORD *)(a1 + 312) - *v21 / 2;
  top = *(_DWORD *)(a1 + 316) - *(_DWORD *)(a1 + 348) / 2;
  v24 = MonitorFromPoint(*(POINT *)(a1 + 312), 0);
  if ( v24 )
  {
    mi.cbSize = 40;
    if ( GetMonitorInfoW(v24, &mi) )
    {
      if ( left >= mi.rcMonitor.left )
      {
        if ( *v21 + left > mi.rcMonitor.right )
          left = mi.rcMonitor.right - *v21;
      }
      else
      {
        left = mi.rcMonitor.left;
      }
      if ( top >= mi.rcMonitor.top )
      {
        v25 = *(_DWORD *)(a1 + 348);
        if ( v25 + top > mi.rcMonitor.bottom )
          top = mi.rcMonitor.bottom - v25;
      }
      else
      {
        top = mi.rcMonitor.top;
      }
    }
  }
  CVisual::SetInsetFromParentLeft(*(CVisual **)(a1 + 336), left);
  CVisual::SetInsetFromParentTop(*(CVisual **)(a1 + 336), top);
  CImage::SetBitmapSource(*(CImage **)(a1 + 336), *(struct CBitmapSource **)(a1 + 328));
  CVisual::SetOpacity((CVisual *)a1, 1.0);
  *(_DWORD *)(a1 + 320) = left + *v21 / 2;
  v26 = MulDiv(20, nNumerator, 96);
  v27 = CDesktopManager::s_pDesktopManagerInstance;
  v28 = *(_DWORD *)(a1 + 308);
  v29 = *(_DWORD *)(a1 + 304);
  *(_DWORD *)(a1 + 324) = top + *(_DWORD *)(a1 + 348) + v26;
  CContactManager::PostFlickFeedbackUpdate(*((_QWORD *)v27 + 20), v29, v28, (_QWORD *)(a1 + 320), 1u);
  return (unsigned int)BitmapFromAtlas;
}
