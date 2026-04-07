/*
 * XREFs of ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800B3F70
 * Callers:
 *     ?NotifyTouchDragVisualComplete@CContactManager@@QEAAJPEBVCTouchDragVisual@@@Z @ 0x1800AB57C (-NotifyTouchDragVisualComplete@CContactManager@@QEAAJPEBVCTouchDragVisual@@@Z.c)
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x1800AB8F0 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 *     ?OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z @ 0x1800AC744 (-OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z.c)
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x1800ACD7C (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x18000EDE4 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x18001B4D8 (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x18002A190 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180034B10 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z @ 0x18004F280 (-UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z.c)
 *     ?StopTimer@CDirectTouchVisual@@MEAAJXZ @ 0x18004F430 (-StopTimer@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?StopDownTimeline@CDirectTouchVisual@@IEAAXXZ @ 0x18004F480 (-StopDownTimeline@CDirectTouchVisual@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x1800E9150 (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CDirectTouchVisual::StartDown(
        __int64 a1,
        const struct tagPOINT *a2,
        const struct tagRECT *a3,
        int a4)
{
  __int64 v7; // rax
  bool v8; // zf
  char v9; // al
  __int64 v10; // rax
  char v11; // al
  __int64 v12; // rax
  double v13; // xmm6_8
  _QWORD *v14; // r8
  int v15; // esi
  unsigned int v16; // eax
  __int64 v18; // [rsp+30h] [rbp-58h] BYREF

  *(_DWORD *)(a1 + 376) = a4;
  *(_BYTE *)(a1 + 408) = 0;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (__int64)&UdwmDirectTouchDownAnimation_BeginDraw_Info,
      (__int64)a3,
      1,
      (__int64)&v18);
  v7 = *(_QWORD *)(a1 + 392);
  if ( v7 )
  {
    v8 = (*(_DWORD *)(v7 + 8))-- == 1;
    v9 = CDesktopManager::s_fTimelineDirty;
    if ( v8 )
      v9 = 1;
    *(_QWORD *)(a1 + 392) = 0LL;
    CDesktopManager::s_fTimelineDirty = v9;
  }
  CDirectTouchVisual::StopDownTimeline((CDirectTouchVisual *)a1, (__int64)a2, (__int64)a3);
  v10 = *(_QWORD *)(a1 + 400);
  if ( v10 )
  {
    v8 = (*(_DWORD *)(v10 + 8))-- == 1;
    v11 = CDesktopManager::s_fTimelineDirty;
    if ( v8 )
      v11 = 1;
    *(_QWORD *)(a1 + 400) = 0LL;
    CDesktopManager::s_fTimelineDirty = v11;
  }
  v12 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          112LL);
  v18 = v12;
  v13 = 0.0;
  if ( !v12 )
  {
    *(_QWORD *)(a1 + 400) = 0LL;
    goto LABEL_18;
  }
  CTimelineBase::CTimelineBase(v12, *(float *)(a1 + 372), 0.0, 0.0, 0);
  *v14 = &CTimeline<float>::`vftable';
  *(_QWORD *)(a1 + 400) = v14;
  if ( !v14 )
  {
LABEL_18:
    v15 = -2147024882;
    v16 = 103;
    goto LABEL_19;
  }
  v15 = CTouchVisual::RegisterGlobalTimer((CTouchVisual *)a1);
  if ( v15 < 0 )
  {
    v16 = 105;
LABEL_19:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, v16);
    CDirectTouchVisual::StopTimer((CDirectTouchVisual *)a1);
    goto LABEL_20;
  }
  CDirectTouchVisual::UpdateLocationWithScalar((CDirectTouchVisual *)a1, a2, a3, *(float *)(a1 + 360));
  CImage::SetBitmapSource(*(CImage **)(a1 + 416), *(struct CBitmapSource **)(a1 + 424));
  if ( (*(_BYTE *)(a1 + 376) & 1) != 0 )
    v13 = *(float *)(a1 + 352);
LABEL_20:
  CVisual::SetOpacity((CVisual *)a1, v13);
  return (unsigned int)v15;
}
