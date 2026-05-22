/*
 * XREFs of ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UICompositionEffectSourceParameterFactory@Composition@UI@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180010AF0
 * Callers:
 *     ??$MakeAndInitialize@VSceneLightingEffectFactory@Effects@Composition@UI@Windows@@V12345@$$V@Details@WRL@Microsoft@@YAJPEAPEAVSceneLightingEffectFactory@Effects@Composition@UI@Windows@@@Z @ 0x180002F64 (--$MakeAndInitialize@VSceneLightingEffectFactory@Effects@Composition@UI@Windows@@V12345@$$V@Deta.c)
 *     ?Release@WhiteNoiseEffectFactory@Effects@Composition@UI@Windows@@UEAAKXZ @ 0x180010AE0 (-Release@WhiteNoiseEffectFactory@Effects@Composition@UI@Windows@@UEAAKXZ.c)
 *     ??$CreateActivationFactory@VCompositionPathFactory@Composition@UI@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180017060 (--$CreateActivationFactory@VCompositionPathFactory@Composition@UI@Windows@@@Details@WRL@Microsof.c)
 *     ??$MakeAndInitialize@VCompositionEffectSourceParameterFactory@Composition@UI@Windows@@V1234@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCompositionEffectSourceParameterFactory@Composition@UI@Windows@@@Z @ 0x180017BE0 (--$MakeAndInitialize@VCompositionEffectSourceParameterFactory@Composition@UI@Windows@@V1234@$$V@.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIInspectable@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@W7EAAKXZ @ 0x1800AB190 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIInspectable@@@WRL@Microsoft.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UICompositionPathFactory@Composition@UI@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@WCI@EAAKXZ @ 0x1800AB1B0 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UICompositionPathFactory@Comp.c)
 *     ??$MakeAndInitialize@VWhiteNoiseEffectFactory@Effects@Composition@UI@Windows@@V12345@$$V@Details@WRL@Microsoft@@YAJPEAPEAVWhiteNoiseEffectFactory@Effects@Composition@UI@Windows@@@Z @ 0x180104C18 (--$MakeAndInitialize@VWhiteNoiseEffectFactory@Effects@Composition@UI@Windows@@V12345@$$V@Details.c)
 *     ??1?$ComPtr@VWhiteNoiseEffectFactory@Effects@Composition@UI@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180105A60 (--1-$ComPtr@VWhiteNoiseEffectFactory@Effects@Composition@UI@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18007F610 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::UI::Composition::ICompositionEffectSourceParameterFactory>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
        __int64 a1,
        volatile int *a2)
{
  unsigned int v2; // eax
  _DWORD *v3; // r11
  unsigned int v4; // edi
  int v5; // ebx

  v2 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(a1 + 68), a2);
  v4 = v2;
  v5 = v3[22] & 4;
  if ( v2 )
  {
    if ( !v5 && v2 == 1 && Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  else
  {
    if ( v3 )
      (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v3 + 56LL))(v3, 1LL);
    if ( v5 && Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL))();
  }
  return v4;
}
