/*
 * XREFs of ?AddRef@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIInspectable@@UICompositionCapabilitiesStatics@Composition@UI@Windows@@U?$CloakedIid@UICompositionCapabilitiesInteropFactory@Desktop@Composition@UI@Windows@@@23@@23@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x18008D190
 * Callers:
 *     ??$MakeAndInitialize@VCompositionCapabilitiesFactory@Composition@UI@Windows@@V1234@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCompositionCapabilitiesFactory@Composition@UI@Windows@@@Z @ 0x180017E58 (--$MakeAndInitialize@VCompositionCapabilitiesFactory@Composition@UI@Windows@@V1234@$$V@Details@W.c)
 *     ?AddRef@CompositionCapabilitiesFactory@Composition@UI@Windows@@UEAAKXZ @ 0x18008D180 (-AddRef@CompositionCapabilitiesFactory@Composition@UI@Windows@@UEAAKXZ.c)
 *     ?AddRef@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIInspectable@@UICompositionCapabilitiesStatics@Composition@UI@Windows@@U?$CloakedIid@UICompositionCapabilitiesInteropFactory@Desktop@Composition@UI@Windows@@@23@@23@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@W7EAAKXZ @ 0x1800A94F0 (-AddRef@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@U-$Implements@U-$_ea_1800A94F0.c)
 *     ?AddRef@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIInspectable@@UICompositionCapabilitiesStatics@Composition@UI@Windows@@U?$CloakedIid@UICompositionCapabilitiesInteropFactory@Desktop@Composition@UI@Windows@@@23@@23@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@WCI@EAAKXZ @ 0x1800A9510 (-AddRef@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@U-$Implements@U-$_ea_1800A9510.c)
 *     ?AddRef@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIInspectable@@UICompositionCapabilitiesStatics@Composition@UI@Windows@@U?$CloakedIid@UICompositionCapabilitiesInteropFactory@Desktop@Composition@UI@Windows@@@23@@23@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@WDA@EAAKXZ @ 0x1800A9530 (-AddRef@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@U-$Implements@U-$_ea_1800A9530.c)
 *     ?AddRef@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIInspectable@@UICompositionCapabilitiesStatics@Composition@UI@Windows@@U?$CloakedIid@UICompositionCapabilitiesInteropFactory@Desktop@Composition@UI@Windows@@@23@@23@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@WDI@EAAKXZ @ 0x1800A9550 (-AddRef@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@U-$Implements@U-$_ea_1800A9550.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800826A8 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IInspectable,Windows::UI::Composition::ICompositionCapabilitiesStatics,Microsoft::WRL::CloakedIid<Windows::UI::Composition::Desktop::ICompositionCapabilitiesInteropFactory>>>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::AddRef(
        __int64 a1,
        volatile int *a2)
{
  unsigned int v2; // eax
  __int64 v3; // r10
  unsigned int v4; // ebx

  v2 = Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 100), a2);
  v4 = v2;
  if ( (*(_BYTE *)(v3 + 120) & 4) == 0 && v2 == 2 && Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return v4;
}
