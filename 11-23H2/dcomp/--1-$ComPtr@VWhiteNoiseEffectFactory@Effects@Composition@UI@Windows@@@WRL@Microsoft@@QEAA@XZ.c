/*
 * XREFs of ??1?$ComPtr@VWhiteNoiseEffectFactory@Effects@Composition@UI@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180105A60
 * Callers:
 *     ??$CreateActivationFactory@VSceneLightingEffectFactory@Effects@Composition@UI@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1800030A0 (--$CreateActivationFactory@VSceneLightingEffectFactory@Effects@Composition@UI@Windows@@@Details@.c)
 *     ??$CreateActivationFactory@VCompositionPathFactory@Composition@UI@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180017060 (--$CreateActivationFactory@VCompositionPathFactory@Composition@UI@Windows@@@Details@WRL@Microsof.c)
 *     ??$CreateActivationFactory@VCompositionEffectSourceParameterFactory@Composition@UI@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1800171E0 (--$CreateActivationFactory@VCompositionEffectSourceParameterFactory@Composition@UI@Windows@@@Det.c)
 *     ??$CreateActivationFactory@VWhiteNoiseEffectFactory@Effects@Composition@UI@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180103CF0 (--$CreateActivationFactory@VWhiteNoiseEffectFactory@Effects@Composition@UI@Windows@@@Details@WRL.c)
 * Callees:
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UICompositionEffectSourceParameterFactory@Composition@UI@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180010AF0 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UICompositionEffectSourcePara.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::Effects::WhiteNoiseEffectFactory>::~ComPtr<Windows::UI::Composition::Effects::WhiteNoiseEffectFactory>(
        __int64 *a1,
        volatile int *a2)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::UI::Composition::ICompositionEffectSourceParameterFactory>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
             result,
             a2);
  }
  return result;
}
