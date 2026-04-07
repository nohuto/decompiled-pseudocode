/*
 * XREFs of ?StartImpl@CDisplayBlackCurtainAnimatedVisual@@EEAAJXZ @ 0x1800BDCF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180022C70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x18002E42C (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x1800412B8 (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?EnsureGlobalTimeChangeNotificationRegistered@CDisplayAnimatedVisual@@AEAAJXZ @ 0x180047CA4 (-EnsureGlobalTimeChangeNotificationRegistered@CDisplayAnimatedVisual@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CDisplayBlackCurtainAnimatedVisual::StartImpl(
        CDisplayBlackCurtainAnimatedVisual *this,
        __int64 a2,
        __int64 a3)
{
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  int inserted; // ebx
  __int64 v6; // rdx
  int v8; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0LL;
  GetDesktopID(1LL, &v10, a3);
  RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(
                                       *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                                       v10);
  inserted = VisualCollection::InsertRelative(
               (struct CVisual *)((char *)RenderTargetRootVisualForDesktop + 32),
               (unsigned __int64)this,
               0LL,
               0,
               v8);
  if ( inserted < 0 )
  {
    v6 = 58LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"clientcore\\windows\\dwm\\udwm\\displayblackcurtainanimatedvisual.cpp",
      (const char *)(unsigned int)inserted);
    return (unsigned int)inserted;
  }
  inserted = CVisual::MoveToFront(this, 0);
  if ( inserted < 0 )
  {
    v6 = 59LL;
    goto LABEL_3;
  }
  *((_BYTE *)this + 434) = 1;
  inserted = CDisplayAnimatedVisual::EnsureGlobalTimeChangeNotificationRegistered(this);
  if ( inserted < 0 )
  {
    v6 = 61LL;
    goto LABEL_3;
  }
  return 0LL;
}
