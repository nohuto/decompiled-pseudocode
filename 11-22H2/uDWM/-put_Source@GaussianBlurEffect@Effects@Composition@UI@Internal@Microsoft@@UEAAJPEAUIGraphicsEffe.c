/*
 * XREFs of ?put_Source@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJPEAUIGraphicsEffectSource@2Graphics@Windows@@@Z @ 0x180111180
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UICompositionEffectSourceParameterFactory@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180057E0C (-InternalRelease@-$ComPtr@UICompositionEffectSourceParameterFactory@Composition@UI@Windows@@@WRL.c)
 *     ?InternalAddRef@?$ComPtr@UIGraphicsEffectSource@Effects@Graphics@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180057F90 (-InternalAddRef@-$ComPtr@UIGraphicsEffectSource@Effects@Graphics@Windows@@@WRL@Microsoft@@IEBAXX.c)
 */

__int64 __fastcall Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect::put_Source(
        Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect *this,
        struct Windows::Graphics::Effects::IGraphicsEffectSource *a2)
{
  struct Windows::Graphics::Effects::IGraphicsEffectSource *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *((struct Windows::Graphics::Effects::IGraphicsEffectSource **)this + 4) != a2 )
  {
    v5 = a2;
    Microsoft::WRL::ComPtr<Windows::Graphics::Effects::IGraphicsEffectSource>::InternalAddRef((__int64 *)&v5);
    v5 = (struct Windows::Graphics::Effects::IGraphicsEffectSource *)*((_QWORD *)this + 4);
    *((_QWORD *)this + 4) = a2;
    Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionEffectSourceParameterFactory>::InternalRelease((__int64 *)&v5);
  }
  return 0LL;
}
