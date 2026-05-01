/*
 * XREFs of ?Commit@VirtualDesktopHotKeyWindow@@QEAAJPEAUIVirtualDesktopSwitchAnimator2@@M@Z @ 0x180618F98
 * Callers:
 *     ?AnimateOperation2@VirtualDesktopSwitchAnimator@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchDirection@@W4VirtualDesktopSwitchType@@@Z @ 0x18061684C (-AnimateOperation2@VirtualDesktopSwitchAnimator@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitc.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??_9IDCompThumbnail@@$BBI@AA @ 0x1802A82A0 (--_9IDCompThumbnail@@$BBI@AA.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIUIAnimationStoryboardEventHandler2@@@WRL@Microsoft@@QEAAPEAPEAUIUIAnimationStoryboardEventHandler2@@XZ @ 0x180582BD8 (-ReleaseAndGetAddressOf@-$ComPtr@UIUIAnimationStoryboardEventHandler2@@@WRL@Microsoft@@QEAAPEAPE.c)
 *     ?ShowAndAnimateCustomWallpapers@VirtualDesktopGestureWindow@@IEAA_NXZ @ 0x180611CE0 (-ShowAndAnimateCustomWallpapers@VirtualDesktopGestureWindow@@IEAA_NXZ.c)
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_35348ce9cc04f2ce32bf71f0093e03d7___lambda_1249e1ff3cdf33ac2dc45e5e9e33e0e4___ @ 0x1806188AC (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_35348ce9cc04f2ce32bf71f0093e0.c)
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_484aa05d4e8e00993eb11fe3ca1c5d9d___lambda_9a7bfcc99c4e75b6f719d590bcf52609___ @ 0x180618954 (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_484aa05d4e8e00993eb11fe3ca1c5.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopHotKeyWindow::Commit(
        VirtualDesktopHotKeyWindow *this,
        struct IVirtualDesktopSwitchAnimator2 *a2,
        float a3,
        __int64 a4)
{
  __int64 v4; // r8
  bool v7; // al
  __int64 v8; // rdi
  bool v9; // zf
  int v10; // eax
  __int64 *v11; // rax
  __int64 v12; // r8
  int AnimationHandler__lambda_35348ce9cc04f2ce32bf71f0093e03d7___lambda_1249e1ff3cdf33ac2dc45e5e9e33e0e4; // ebx
  __int64 v14; // rdx
  __int64 *AddressOf; // rax
  __int64 v17; // r8
  __int64 v18; // [rsp+20h] [rbp-30h] BYREF
  int v19; // [rsp+28h] [rbp-28h]
  int v20; // [rsp+2Ch] [rbp-24h]
  int v21; // [rsp+30h] [rbp-20h]
  int v22; // [rsp+34h] [rbp-1Ch]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  v7 = VirtualDesktopGestureWindow::ShowAndAnimateCustomWallpapers(this, (__int64)a2, v4, a4);
  v20 = 0;
  v22 = 1;
  v8 = *((_QWORD *)this + 20);
  v18 = 0LL;
  v9 = !v7;
  v10 = *((_DWORD *)this + 48);
  if ( v9 )
  {
    v19 = (int)(float)((float)(v10 - *((_DWORD *)this + 46)) * a3);
    v21 = v19 + 1;
    AddressOf = Microsoft::WRL::ComPtr<IUIAnimationStoryboardEventHandler2>::ReleaseAndGetAddressOf(&v18);
    AnimationHandler__lambda_35348ce9cc04f2ce32bf71f0093e03d7___lambda_1249e1ff3cdf33ac2dc45e5e9e33e0e4 = DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_35348ce9cc04f2ce32bf71f0093e03d7___lambda_1249e1ff3cdf33ac2dc45e5e9e33e0e4___(0LL, (__int64)a2, v17, AddressOf);
    if ( AnimationHandler__lambda_35348ce9cc04f2ce32bf71f0093e03d7___lambda_1249e1ff3cdf33ac2dc45e5e9e33e0e4 >= 0 )
      AnimationHandler__lambda_35348ce9cc04f2ce32bf71f0093e03d7___lambda_1249e1ff3cdf33ac2dc45e5e9e33e0e4 =  IDCompThumbnail::`vcall'{24,{flat}}(v8);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
    if ( AnimationHandler__lambda_35348ce9cc04f2ce32bf71f0093e03d7___lambda_1249e1ff3cdf33ac2dc45e5e9e33e0e4 < 0 )
    {
      v14 = 156LL;
      goto LABEL_6;
    }
  }
  else
  {
    v19 = (int)(float)((float)(v10 - *((_DWORD *)this + 46)) * a3);
    v21 = v19 + 1;
    v11 = Microsoft::WRL::ComPtr<IUIAnimationStoryboardEventHandler2>::ReleaseAndGetAddressOf(&v18);
    AnimationHandler__lambda_35348ce9cc04f2ce32bf71f0093e03d7___lambda_1249e1ff3cdf33ac2dc45e5e9e33e0e4 = DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_484aa05d4e8e00993eb11fe3ca1c5d9d___lambda_9a7bfcc99c4e75b6f719d590bcf52609___(0LL, (__int64)a2, v12, v11);
    if ( AnimationHandler__lambda_35348ce9cc04f2ce32bf71f0093e03d7___lambda_1249e1ff3cdf33ac2dc45e5e9e33e0e4 >= 0 )
      AnimationHandler__lambda_35348ce9cc04f2ce32bf71f0093e03d7___lambda_1249e1ff3cdf33ac2dc45e5e9e33e0e4 =  IDCompThumbnail::`vcall'{24,{flat}}(v8);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
    if ( AnimationHandler__lambda_35348ce9cc04f2ce32bf71f0093e03d7___lambda_1249e1ff3cdf33ac2dc45e5e9e33e0e4 < 0 )
    {
      v14 = 142LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeywindow.cpp",
        (const char *)(unsigned int)AnimationHandler__lambda_35348ce9cc04f2ce32bf71f0093e03d7___lambda_1249e1ff3cdf33ac2dc45e5e9e33e0e4);
      return (unsigned int)AnimationHandler__lambda_35348ce9cc04f2ce32bf71f0093e03d7___lambda_1249e1ff3cdf33ac2dc45e5e9e33e0e4;
    }
  }
  return 0LL;
}
