/*
 * XREFs of ?CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x1800B7748
 * Callers:
 *     ?CaptureExistingExtendedDisplays@CDisplayAnimatedVisual@@IEAAJ_KPEBVCDWMDisplay@@AEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800B79EC (-CaptureExistingExtendedDisplays@CDisplayAnimatedVisual@@IEAAJ_KPEBVCDWMDisplay@@AEAV-$vector@V-.c)
 *     ?CapturePrimary@CDisplayAnimatedVisual@@IEAAJ_KPEAPEAVCAnimatedTransitionVisual@@@Z @ 0x1800B7BBC (-CapturePrimary@CDisplayAnimatedVisual@@IEAAJ_KPEAPEAVCAnimatedTransitionVisual@@@Z.c)
 *     ?CaptureAndPositionToExtendedDisplay@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ @ 0x1800B9C88 (-CaptureAndPositionToExtendedDisplay@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ.c)
 *     ?ScheduleEntranceAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ @ 0x1800BC558 (-ScheduleEntranceAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ.c)
 *     ?StartImpl@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@EEAAJXZ @ 0x1800BE9F0 (-StartImpl@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@EEAAJXZ.c)
 *     ?OnGlobalTimeUpdatedImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ @ 0x1800BEF40 (-OnGlobalTimeUpdatedImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ.c)
 *     ?StartImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ @ 0x1800BF5F0 (-StartImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180022C70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x18002E42C (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x1800360BC (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180037860 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x1800412B8 (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180042BB8 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x1800430E4 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180043514 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180054398 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800B7544 (--1-$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SetCenter@CVisual@@QEAAXNN@Z @ 0x180105918 (-SetCenter@CVisual@@QEAAXNN@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDisplayAnimatedVisual::CaptureAndAddVisual(
        CDisplayAnimatedVisual *this,
        __int64 a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4,
        struct CAnimatedTransitionVisual **a5)
{
  struct CAnimatedTransitionVisual **v9; // r15
  int v10; // eax
  unsigned int v11; // ebx
  struct CVisual *RootVisualForDesktop; // rax
  CAnimatedTransitionVisual *v13; // rbx
  int inserted; // esi
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // ebp
  unsigned __int64 v22; // r14
  int v23; // eax
  int v24; // r8d
  int v25; // eax
  int v26; // eax
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  int v29; // [rsp+20h] [rbp-58h]
  int v30; // [rsp+20h] [rbp-58h]
  CAnimatedTransitionVisual *v31; // [rsp+30h] [rbp-48h] BYREF
  _DWORD v32[2]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v33; // [rsp+40h] [rbp-38h]
  CWindowList *v34; // [rsp+48h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v9 = a5;
  *a5 = 0LL;
  v31 = 0LL;
  v10 = CAnimatedTransitionVisual::Create(&v31);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x252,
      (__int64)"clientcore\\windows\\dwm\\udwm\\displayanimatedvisual.cpp",
      (const char *)(unsigned int)v10);
LABEL_26:
    wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>::~com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>((__int64 *)&v31);
    return v11;
  }
  v34 = (CWindowList *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 54);
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(v34, a2);
  v13 = v31;
  inserted = CAnimatedTransitionVisual::SetVisual((struct CBaseImageProxy **)v31, RootVisualForDesktop, 1, a3);
  if ( inserted < 0 )
  {
    v15 = 602LL;
LABEL_25:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"clientcore\\windows\\dwm\\udwm\\displayanimatedvisual.cpp",
      (const char *)(unsigned int)inserted);
    v11 = inserted;
    goto LABEL_26;
  }
  v16 = a3->right - a3->left;
  v17 = v16;
  if ( v16 < 0 )
    v17 = 0;
  LODWORD(v33) = v17;
  v18 = 0;
  if ( v16 >= 0 )
    v18 = v16;
  LODWORD(a5) = v18;
  v19 = a3->bottom - a3->top;
  v20 = v19;
  if ( v19 < 0 )
    v20 = 0;
  HIDWORD(v33) = v20;
  v21 = 0;
  if ( v19 >= 0 )
    v21 = v19;
  CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)v13, a4);
  *(struct tagRECT *)((char *)v13 + 872) = *a4;
  v22 = (unsigned __int64)v13 + 8;
  v23 = *((_DWORD *)v13 + 24);
  if ( (v23 & 0x1000) == 0 )
  {
    *((_DWORD *)v13 + 24) = v23 | 0x1000;
    CVisual::PropagateDirtyChildren((CAnimatedTransitionVisual *)((char *)v13 + 8));
  }
  v24 = a4->bottom - a4->top;
  v25 = 0;
  if ( a4->right - a4->left >= 0 )
    v25 = a4->right - a4->left;
  v32[0] = v25;
  v26 = 0;
  if ( v24 >= 0 )
    v26 = v24;
  v32[1] = v26;
  (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v22 + 104LL))((__int64)v13 + 8, v32);
  *((_QWORD *)v13 + 119) = v33;
  CVisual::SetInterpolationMode((unsigned int *)v13 + 2, 1u);
  RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(v34, a2);
  inserted = VisualCollection::InsertRelative(
               (struct CVisual *)((char *)RenderTargetRootVisualForDesktop + 32),
               (unsigned __int64)this,
               0LL,
               0,
               v29);
  if ( inserted < 0 )
  {
    v15 = 616LL;
    goto LABEL_25;
  }
  inserted = CVisual::MoveToFront(this, 0);
  if ( inserted < 0 )
  {
    v15 = 617LL;
    goto LABEL_25;
  }
  inserted = VisualCollection::InsertRelative(
               (CDisplayAnimatedVisual *)((char *)this + 32),
               v22 & ((unsigned __int128)-(__int128)(unsigned __int64)v13 >> 64),
               0LL,
               0,
               v30);
  if ( inserted < 0 )
  {
    v15 = 619LL;
    goto LABEL_25;
  }
  HIDWORD(a5) = v21;
  (*(void (__fastcall **)(CDisplayAnimatedVisual *, struct CAnimatedTransitionVisual ***))(*(_QWORD *)this + 104LL))(
    this,
    &a5);
  CVisual::SetCenter(this, (double)(*((_DWORD *)this + 32) / 2), (double)(*((_DWORD *)this + 33) / 2));
  *v9 = v13;
  return 0LL;
}
