/*
 * XREFs of ?AddRef@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UICompositionPathFactory@Composition@UI@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180010E40
 * Callers:
 *     ??$MakeAndInitialize@VSceneLightingEffectFactory@Effects@Composition@UI@Windows@@V12345@$$V@Details@WRL@Microsoft@@YAJPEAPEAVSceneLightingEffectFactory@Effects@Composition@UI@Windows@@@Z @ 0x180002F64 (--$MakeAndInitialize@VSceneLightingEffectFactory@Effects@Composition@UI@Windows@@V12345@$$V@Deta.c)
 *     ?AddRef@SceneLightingEffectFactory@Effects@Composition@UI@Windows@@UEAAKXZ @ 0x180010E30 (-AddRef@SceneLightingEffectFactory@Effects@Composition@UI@Windows@@UEAAKXZ.c)
 *     ??$CreateActivationFactory@VCompositionPathFactory@Composition@UI@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180017060 (--$CreateActivationFactory@VCompositionPathFactory@Composition@UI@Windows@@@Details@WRL@Microsof.c)
 *     ??$MakeAndInitialize@VCompositionEffectSourceParameterFactory@Composition@UI@Windows@@V1234@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCompositionEffectSourceParameterFactory@Composition@UI@Windows@@@Z @ 0x180017BE0 (--$MakeAndInitialize@VCompositionEffectSourceParameterFactory@Composition@UI@Windows@@V1234@$$V@.c)
 *     ?AddRef@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIInspectable@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@W7EAAKXZ @ 0x1800A9F90 (-AddRef@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIInspectable@@@WRL@Microsoft@.c)
 *     ?AddRef@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UICompositionPathFactory@Composition@UI@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@WCI@EAAKXZ @ 0x1800A9FB0 (-AddRef@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UICompositionPath_ea_1800A9FB0.c)
 *     ??$MakeAndInitialize@VWhiteNoiseEffectFactory@Effects@Composition@UI@Windows@@V12345@$$V@Details@WRL@Microsoft@@YAJPEAPEAVWhiteNoiseEffectFactory@Effects@Composition@UI@Windows@@@Z @ 0x180104C18 (--$MakeAndInitialize@VWhiteNoiseEffectFactory@Effects@Composition@UI@Windows@@V12345@$$V@Details.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800826A8 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::UI::Composition::ICompositionPathFactory>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::AddRef(
        __int64 a1,
        volatile int *a2)
{
  unsigned int v2; // eax
  __int64 v3; // r10
  unsigned int v4; // ebx

  v2 = Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 68), a2);
  v4 = v2;
  if ( (*(_BYTE *)(v3 + 88) & 4) == 0 && v2 == 2 && Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return v4;
}
