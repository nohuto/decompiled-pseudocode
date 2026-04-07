/*
 * XREFs of ?SetBitmap@UserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAAXPEAVCBitmapSource@@@Z @ 0x180104960
 * Callers:
 *     <none>
 * Callees:
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x18001B570 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180022C70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x180039718 (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x18004722C (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 *     ?reset@?$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800A42DC (-reset@-$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?AddIconPlate@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x180104594 (-AddIconPlate@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ.c)
 *     ?UpdateIconPosition@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x180104C84 (-UpdateIconPosition@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ.c)
 */

void __fastcall winrt::Udwm::Transitions::implementation::UserResizeVisual::SetBitmap(
        CBaseObject **this,
        struct tagSIZE *a2)
{
  struct CImage **v2; // rsi
  struct tagSIZE v5; // rbx
  CVisual *v6; // rcx
  __int64 v7; // rdx
  struct CImage *v8; // rdx
  int v9; // [rsp+20h] [rbp-18h]
  struct tagSIZE v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = this + 10;
  wil::com_ptr_t<CImage,wil::err_exception_policy>::reset(this + 10);
  CImage::Create(v2);
  CImage::SetBitmapSource(*v2, (struct CBitmapSource *)a2);
  v5 = a2[3];
  v6 = *v2;
  v10 = v5;
  CVisual::SetSize(v6, &v10);
  if ( v5.cx < 64 )
    winrt::Udwm::Transitions::implementation::UserResizeVisual::AddIconPlate(
      (winrt::Udwm::Transitions::implementation::UserResizeVisual *)this,
      v7);
  winrt::Udwm::Transitions::implementation::UserResizeVisual::UpdateIconPosition((winrt::Udwm::Transitions::implementation::UserResizeVisual *)this);
  if ( this[7] )
    v8 = this[6];
  else
    v8 = *v2;
  VisualCollection::InsertRelative(
    (VisualCollection *)(*((_QWORD *)this[5] + 38) + 32LL),
    (unsigned __int64)v8,
    0LL,
    0,
    v9);
}
