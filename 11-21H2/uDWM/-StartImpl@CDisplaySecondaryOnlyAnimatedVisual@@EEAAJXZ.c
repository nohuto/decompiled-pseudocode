/*
 * XREFs of ?StartImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ @ 0x18005CBB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x180014FC4 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x18003FD6C (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x1800407B0 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 *     ?SetupDelayBeforeEntranceAnimation@CDisplaySecondaryOnlyAnimatedVisual@@AEAAJXZ @ 0x18005CCEC (-SetupDelayBeforeEntranceAnimation@CDisplaySecondaryOnlyAnimatedVisual@@AEAAJXZ.c)
 *     ?SetCenter@CVisual@@QEAAXNN@Z @ 0x18005CDC4 (-SetCenter@CVisual@@QEAAXNN@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDisplaySecondaryOnlyAnimatedVisual::StartImpl(CDisplaySecondaryOnlyAnimatedVisual *this)
{
  CWindowList *v2; // rsi
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  int inserted; // edi
  int v5; // eax
  int v6; // edx
  int v7; // eax
  int updated; // ebx
  __int64 v10; // rdx
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned __int64 v13; // [rsp+48h] [rbp+10h] BYREF
  int v14; // [rsp+50h] [rbp+18h] BYREF
  int v15; // [rsp+54h] [rbp+1Ch]

  v13 = 0LL;
  GetDesktopID(1LL, &v13);
  v2 = (CWindowList *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 52);
  RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(v2, v13);
  inserted = VisualCollection::InsertRelative(
               (struct CVisual *)((char *)RenderTargetRootVisualForDesktop + 32),
               this,
               0LL,
               0,
               1);
  if ( inserted < 0 )
  {
    v10 = 59LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"clientcore\\windows\\dwm\\udwm\\displaysecondaryonlyanimatedvisual.cpp",
      (const char *)(unsigned int)inserted);
    return (unsigned int)inserted;
  }
  inserted = CVisual::MoveToFront(this, this != 0LL);
  if ( inserted < 0 )
  {
    v10 = 60LL;
    goto LABEL_12;
  }
  v5 = 0;
  v6 = *((_DWORD *)this + 77) - *((_DWORD *)this + 75);
  if ( *((_DWORD *)this + 76) - *((_DWORD *)this + 74) >= 0 )
    v5 = *((_DWORD *)this + 76) - *((_DWORD *)this + 74);
  v14 = v5;
  v7 = 0;
  if ( v6 >= 0 )
    v7 = v6;
  v15 = v7;
  (*(void (__fastcall **)(CDisplaySecondaryOnlyAnimatedVisual *, int *))(*(_QWORD *)this + 96LL))(this, &v14);
  CVisual::SetCenter(this, (double)(*((_DWORD *)this + 32) / 2), (double)(*((_DWORD *)this + 33) / 2));
  updated = CDisplaySecondaryOnlyAnimatedVisual::SetupDelayBeforeEntranceAnimation(this);
  if ( updated < 0 )
  {
    v11 = 68LL;
  }
  else
  {
    updated = CWindowList::ForceUpdateScene(v2);
    if ( updated >= 0 )
      return 0LL;
    v11 = 75LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (int)"clientcore\\windows\\dwm\\udwm\\displaysecondaryonlyanimatedvisual.cpp",
    (const char *)(unsigned int)updated);
  return (unsigned int)updated;
}
