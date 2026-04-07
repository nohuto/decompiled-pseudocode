/*
 * XREFs of ?StartImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ @ 0x1800BE3F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180022C70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x18002E42C (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x18002F690 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x1800412B8 (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetupDelayBeforeEntranceAnimation@CDisplaySecondaryOnlyAnimatedVisual@@AEAAJXZ @ 0x1800BE324 (-SetupDelayBeforeEntranceAnimation@CDisplaySecondaryOnlyAnimatedVisual@@AEAAJXZ.c)
 *     ?SetCenter@CVisual@@QEAAXNN@Z @ 0x180105918 (-SetCenter@CVisual@@QEAAXNN@Z.c)
 */

__int64 __fastcall CDisplaySecondaryOnlyAnimatedVisual::StartImpl(
        CDisplaySecondaryOnlyAnimatedVisual *this,
        __int64 a2,
        __int64 a3)
{
  CWindowList *v4; // rsi
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  int inserted; // ebx
  __int64 v7; // rdx
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned __int64 v14; // [rsp+48h] [rbp+10h] BYREF
  int v15; // [rsp+50h] [rbp+18h] BYREF
  int v16; // [rsp+54h] [rbp+1Ch]

  v14 = 0LL;
  GetDesktopID(1LL, &v14, a3);
  v4 = (CWindowList *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 54);
  RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(v4, v14);
  inserted = VisualCollection::InsertRelative(
               (struct CVisual *)((char *)RenderTargetRootVisualForDesktop + 32),
               (unsigned __int64)this,
               0LL,
               0,
               v12);
  if ( inserted < 0 )
  {
    v7 = 59LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"clientcore\\windows\\dwm\\udwm\\displaysecondaryonlyanimatedvisual.cpp",
      (const char *)(unsigned int)inserted);
    return (unsigned int)inserted;
  }
  inserted = CVisual::MoveToFront(this, 0);
  if ( inserted < 0 )
  {
    v7 = 60LL;
    goto LABEL_3;
  }
  v9 = 0;
  v10 = *((_DWORD *)this + 77) - *((_DWORD *)this + 75);
  if ( *((_DWORD *)this + 76) - *((_DWORD *)this + 74) >= 0 )
    v9 = *((_DWORD *)this + 76) - *((_DWORD *)this + 74);
  v15 = v9;
  v11 = 0;
  if ( v10 >= 0 )
    v11 = v10;
  v16 = v11;
  (*(void (__fastcall **)(CDisplaySecondaryOnlyAnimatedVisual *, int *))(*(_QWORD *)this + 104LL))(this, &v15);
  CVisual::SetCenter(this, (double)(*((_DWORD *)this + 32) / 2), (double)(*((_DWORD *)this + 33) / 2));
  inserted = CDisplaySecondaryOnlyAnimatedVisual::SetupDelayBeforeEntranceAnimation(this);
  if ( inserted < 0 )
  {
    v7 = 68LL;
    goto LABEL_3;
  }
  inserted = CWindowList::ForceUpdateScene(v4);
  if ( inserted < 0 )
  {
    v7 = 75LL;
    goto LABEL_3;
  }
  return 0LL;
}
