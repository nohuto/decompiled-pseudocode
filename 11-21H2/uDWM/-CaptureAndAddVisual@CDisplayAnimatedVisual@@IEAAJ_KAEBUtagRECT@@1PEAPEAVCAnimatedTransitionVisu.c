/*
 * XREFs of ?CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x1800B4618
 * Callers:
 *     ?CaptureExistingExtendedDisplays@CDisplayAnimatedVisual@@IEAAJ_KPEBVCDWMDisplay@@AEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800B48A4 (-CaptureExistingExtendedDisplays@CDisplayAnimatedVisual@@IEAAJ_KPEBVCDWMDisplay@@AEAV-$vector@V-.c)
 *     ?CapturePrimary@CDisplayAnimatedVisual@@IEAAJ_KPEAPEAVCAnimatedTransitionVisual@@@Z @ 0x1800B4A60 (-CapturePrimary@CDisplayAnimatedVisual@@IEAAJ_KPEAPEAVCAnimatedTransitionVisual@@@Z.c)
 *     ?CaptureAndPositionToExtendedDisplay@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ @ 0x1800B6508 (-CaptureAndPositionToExtendedDisplay@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ.c)
 *     ?ScheduleEntranceAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ @ 0x1800B8D38 (-ScheduleEntranceAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ.c)
 *     ?StartImpl@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@EEAAJXZ @ 0x1800BA940 (-StartImpl@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@EEAAJXZ.c)
 *     ?OnGlobalTimeUpdatedImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ @ 0x1800BAE80 (-OnGlobalTimeUpdatedImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ.c)
 *     ?StartImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ @ 0x1800BB530 (-StartImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x180014FC4 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18001E184 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x18003FD6C (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180045570 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180045F18 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180045FEC (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180047160 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetCenter@CVisual@@QEAAXNN@Z @ 0x18005CDC4 (-SetCenter@CVisual@@QEAAXNN@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDisplayAnimatedVisual::CaptureAndAddVisual(
        CDisplayAnimatedVisual *this,
        __int64 a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4,
        struct CAnimatedTransitionVisual **a5)
{
  struct CAnimatedTransitionVisual **v9; // r14
  int inserted; // eax
  unsigned int v11; // edi
  CAnimatedTransitionVisual *v12; // rbx
  __int64 v13; // rdx
  CWindowList *v14; // r12
  struct CVisual *RootVisualForDesktop; // rax
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  int v22; // edx
  int v23; // eax
  int v24; // eax
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  struct CAnimatedTransitionVisual *v26; // rax
  int v28; // [rsp+30h] [rbp-48h]
  CAnimatedTransitionVisual *v29; // [rsp+38h] [rbp-40h] BYREF
  _DWORD v30[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v31; // [rsp+48h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v9 = a5;
  *a5 = 0LL;
  v29 = 0LL;
  inserted = CAnimatedTransitionVisual::Create(&v29);
  v11 = inserted;
  v12 = v29;
  if ( inserted < 0 )
  {
    v13 = 657LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"clientcore\\windows\\dwm\\udwm\\displayanimatedvisual.cpp",
      (const char *)(unsigned int)inserted);
    goto LABEL_25;
  }
  v14 = (CWindowList *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 52);
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(v14, a2);
  inserted = CAnimatedTransitionVisual::SetVisual((struct CBaseImageProxy **)v12, RootVisualForDesktop, 1, a3);
  v11 = inserted;
  if ( inserted < 0 )
  {
    v13 = 665LL;
    goto LABEL_23;
  }
  v16 = a3->right - a3->left;
  v17 = v16;
  if ( v16 < 0 )
    v17 = 0;
  LODWORD(v31) = v17;
  v18 = 0;
  if ( v16 >= 0 )
    v18 = v16;
  LODWORD(a5) = v18;
  v19 = a3->bottom - a3->top;
  v20 = v19;
  if ( v19 < 0 )
    v20 = 0;
  HIDWORD(v31) = v20;
  v21 = 0;
  if ( v19 >= 0 )
    v21 = v19;
  v28 = v21;
  CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)v12, a4);
  *(struct tagRECT *)((char *)v12 + 872) = *a4;
  CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)v12 + 8), 4096);
  v22 = a4->bottom - a4->top;
  v23 = 0;
  if ( a4->right - a4->left >= 0 )
    v23 = a4->right - a4->left;
  v30[0] = v23;
  v24 = 0;
  if ( v22 >= 0 )
    v24 = v22;
  v30[1] = v24;
  (*(void (__fastcall **)(__int64, _DWORD *))(*((_QWORD *)v12 + 1) + 96LL))((__int64)v12 + 8, v30);
  *((_QWORD *)v12 + 119) = v31;
  CVisual::SetInterpolationMode((unsigned int *)v12 + 2, 1u);
  RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(v14, a2);
  inserted = VisualCollection::InsertRelative(
               (struct CVisual *)((char *)RenderTargetRootVisualForDesktop + 32),
               this,
               0LL,
               0,
               1);
  v11 = inserted;
  if ( inserted < 0 )
  {
    v13 = 679LL;
    goto LABEL_23;
  }
  inserted = CVisual::MoveToFront(this, this != 0LL);
  v11 = inserted;
  if ( inserted < 0 )
  {
    v13 = 680LL;
    goto LABEL_23;
  }
  inserted = VisualCollection::InsertRelative(
               (CDisplayAnimatedVisual *)((char *)this + 32),
               (CAnimatedTransitionVisual *)((char *)v12 + 8),
               0LL,
               0,
               1);
  v11 = inserted;
  if ( inserted < 0 )
  {
    v13 = 682LL;
    goto LABEL_23;
  }
  HIDWORD(a5) = v28;
  (*(void (__fastcall **)(CDisplayAnimatedVisual *, struct CAnimatedTransitionVisual ***))(*(_QWORD *)this + 96LL))(
    this,
    &a5);
  CVisual::SetCenter(this, (double)(*((_DWORD *)this + 32) / 2), (double)(*((_DWORD *)this + 33) / 2));
  v26 = v12;
  v12 = 0LL;
  *v9 = v26;
  v11 = 0;
LABEL_25:
  if ( v12 )
    CBaseObject::Release((CAnimatedTransitionVisual *)((char *)v12 + 8));
  return v11;
}
