/*
 * XREFs of ?Capture@CScreenRotation@@QEAAJXZ @ 0x1800D2248
 * Callers:
 *     ?HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z @ 0x1801042B0 (-HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Scale2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x180006970 (-Scale2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z.c)
 *     ?Translate2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x180007640 (-Translate2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x180014FC4 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18001E184 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180034B10 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180036354 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x18003FD6C (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180045570 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180045F18 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180045FEC (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180047160 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180048534 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Stop@CScreenRotation@@QEAAX_N0@Z @ 0x1800D3484 (-Stop@CScreenRotation@@QEAAX_N0@Z.c)
 *     ?UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z @ 0x1800D3950 (-UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z.c)
 *     ?SetRotation@CVisual@@QEAAXN@Z @ 0x1801007DC (-SetRotation@CVisual@@QEAAXN@Z.c)
 */

__int64 __fastcall CScreenRotation::Capture(CScreenRotation *this, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  void *v5; // rdx
  CWindowList *v6; // r13
  bool v7; // dl
  LONG v8; // r15d
  LONG v9; // r12d
  CAnimatedTransitionVisual **v10; // r14
  struct CVisual *RootVisualForDesktop; // r15
  int inserted; // eax
  CAnimatedTransitionVisual *v13; // rcx
  __int64 v14; // rcx
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  CAnimatedTransitionVisual *v16; // rcx
  CAnimatedTransitionVisual *v17; // rcx
  CAnimatedTransitionVisual *v18; // rcx
  unsigned int v20; // [rsp+20h] [rbp-49h]
  struct tagSIZE v21; // [rsp+30h] [rbp-39h] BYREF
  unsigned __int64 v22; // [rsp+38h] [rbp-31h] BYREF
  _BYTE v23[20]; // [rsp+40h] [rbp-29h] BYREF
  int v24; // [rsp+54h] [rbp-15h]
  int v25; // [rsp+58h] [rbp-11h]
  int v26; // [rsp+64h] [rbp-5h]
  int v27; // [rsp+68h] [rbp-1h]
  struct tagRECT v28; // [rsp+70h] [rbp+7h] BYREF
  _QWORD v29[2]; // [rsp+80h] [rbp+17h] BYREF

  v4 = 0;
  if ( *((_BYTE *)this + 388) )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      v5 = &UdwmHardwareExpression_Capture_Info;
LABEL_6:
      McGenEventWrite_EtwEventWriteTransfer(
        Microsoft_Windows_Dwm_Udwm_Provider_Context,
        (__int64)v5,
        a3,
        1,
        (__int64)v29);
    }
  }
  else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
  {
    v5 = &UdwmScreenRotation_Capture_Info;
    goto LABEL_6;
  }
  GetDesktopID(1LL, &v22);
  v28.left = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 93);
  v28.right = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 95) + v28.left;
  v28.top = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 94);
  v28.bottom = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 96) + v28.top;
  v6 = (CWindowList *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 52);
  if ( !*((_BYTE *)this + 336) || (v7 = 1, *((_DWORD *)this + 92) != -1) )
    v7 = 0;
  CScreenRotation::Stop(this, v7, 1);
  v8 = v28.right - v28.left;
  if ( v28.right - v28.left < 0 )
    v8 = 0;
  v9 = v28.bottom - v28.top;
  v21.cx = v8;
  if ( v28.bottom - v28.top < 0 )
    v9 = 0;
  v10 = (CAnimatedTransitionVisual **)((char *)this + 320);
  v21.cy = v9;
  if ( *((_QWORD *)this + 40) )
  {
    if ( *((_BYTE *)this + 339) )
    {
      CVisual::SetRotation(this, (double)*((int *)this + 86));
      CVisual::SetOffset((struct tagPOINT *)this, (const struct tagPOINT *)((char *)this + 356));
      v16 = *v10;
      v24 = 0;
      v25 = 0;
      CAnimatedTransitionVisual::Translate2D(v16, (const struct TA_TRANSFORM_2D *)v23);
      v17 = *v10;
      v24 = 1065353216;
      v25 = 1065353216;
      v26 = 1056964608;
      v27 = 1056964608;
      CAnimatedTransitionVisual::Scale2D(v17, (const struct TA_TRANSFORM_2D *)v23);
      CAnimatedTransitionVisual::SetBeginAlpha(*v10, 0.0);
      *((_DWORD *)*v10 + 235) = 0;
    }
    if ( abs32(*((_DWORD *)this + 85)) == 90 )
    {
      v21.cy = v8;
      v21.cx = v9;
    }
    else
    {
      CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)*v10, &v28);
      v18 = *v10;
      *(struct tagRECT *)((char *)v18 + 872) = v28;
      CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)v18 + 8), 4096);
    }
LABEL_32:
    VisualCollection::InsertRelative(
      (CScreenRotation *)((char *)this + 32),
      (struct CVisual *)(((unsigned __int64)*v10 + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)*v10 >> 64)),
      0LL,
      0,
      1);
    CScreenRotation::UpdateBackgroundInstructionsAndSize(this, &v21, 1);
    return v4;
  }
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(v6, v22);
  inserted = CAnimatedTransitionVisual::Create((struct CAnimatedTransitionVisual **)this + 40);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v20 = 90;
LABEL_17:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, v20);
    return v4;
  }
  if ( *v10 )
  {
    inserted = CAnimatedTransitionVisual::SetVisual((struct CBaseImageProxy **)*v10, RootVisualForDesktop, 1, &v28);
    v4 = inserted;
    if ( inserted < 0 )
    {
      v20 = 92;
      goto LABEL_17;
    }
    CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)*v10, &v28);
    v13 = *v10;
    *(struct tagRECT *)((char *)v13 + 872) = v28;
    CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)v13 + 8), 4096);
    v14 = (__int64)*v10 + 8;
    v29[0] = v21;
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v14 + 96LL))(v14, v29);
    *((struct tagSIZE *)*v10 + 119) = v21;
    CVisual::SetInterpolationMode((unsigned int *)*v10 + 2, 1u);
    RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(v6, v22);
    inserted = VisualCollection::InsertRelative(
                 (struct CVisual *)((char *)RenderTargetRootVisualForDesktop + 32),
                 this,
                 0LL,
                 0,
                 1);
    v4 = inserted;
    if ( inserted < 0 )
    {
      v20 = 104;
      goto LABEL_17;
    }
    inserted = CVisual::MoveToFront(this, 1);
    v4 = inserted;
    if ( inserted < 0 )
    {
      v20 = 105;
      goto LABEL_17;
    }
    goto LABEL_32;
  }
  v4 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x5Bu);
  return v4;
}
