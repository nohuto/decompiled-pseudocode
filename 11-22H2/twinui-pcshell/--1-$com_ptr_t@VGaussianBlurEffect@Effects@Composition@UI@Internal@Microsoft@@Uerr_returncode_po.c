/*
 * XREFs of ??1?$com_ptr_t@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18060ABA4
 * Callers:
 *     _VirtualDesktopGestureWindow::SetBackdropBlurEffect_::_1_::dtor$5 @ 0x180611639 (_VirtualDesktopGestureWindow--SetBackdropBlurEffect_--_1_--dtor$5.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@Effects@Graphics@Windows@@UIGraphicsEffectSource@567@UIGraphicsEffectD2D1Interop@567@UIGaussianBlurEffect@5Composition@UI@Internal@3@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180474A10 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGra_ea_180474A10.c)
 */

__int64 __fastcall wil::com_ptr_t<Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Graphics::Effects::IGraphicsEffect,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop,Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>::Release(v1);
  return result;
}
