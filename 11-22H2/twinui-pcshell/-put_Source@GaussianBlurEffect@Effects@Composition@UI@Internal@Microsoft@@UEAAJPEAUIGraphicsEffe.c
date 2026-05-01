/*
 * XREFs of ?put_Source@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJPEAUIGraphicsEffectSource@2Graphics@Windows@@@Z @ 0x180612E20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect::put_Source(
        Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect *this,
        struct Windows::Graphics::Effects::IGraphicsEffectSource *a2)
{
  __int64 v4; // rcx
  struct Windows::Graphics::Effects::IGraphicsEffectSource *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( *((struct Windows::Graphics::Effects::IGraphicsEffectSource **)this + 4) != a2 )
  {
    v6 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v6);
    v4 = *((_QWORD *)this + 4);
    *((_QWORD *)this + 4) = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return 0LL;
}
