/*
 * XREFs of ?GetTrustLevel@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIInspectable@@UICompositionCapabilitiesStatics@Composition@UI@Windows@@U?$CloakedIid@UICompositionCapabilitiesInteropFactory@Desktop@Composition@UI@Windows@@@23@@23@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAJPEAW4TrustLevel@@@Z @ 0x1801025C0
 * Callers:
 *     ?GetTrustLevel@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIInspectable@@UICompositionCapabilitiesStatics@Composition@UI@Windows@@U?$CloakedIid@UICompositionCapabilitiesInteropFactory@Desktop@Composition@UI@Windows@@@23@@23@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@WCI@EAAJPEAW4TrustLevel@@@Z @ 0x1800A98F0 (-GetTrustLevel@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@U-$Implements@U-$Runtim.c)
 *     ?GetTrustLevel@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIInspectable@@UICompositionCapabilitiesStatics@Composition@UI@Windows@@U?$CloakedIid@UICompositionCapabilitiesInteropFactory@Desktop@Composition@UI@Windows@@@23@@23@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@WDA@EAAJPEAW4TrustLevel@@@Z @ 0x1800A9910 (-GetTrustLevel@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@U-$Impleme_ea_1800A9910.c)
 *     ?GetTrustLevel@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIInspectable@@UICompositionCapabilitiesStatics@Composition@UI@Windows@@U?$CloakedIid@UICompositionCapabilitiesInteropFactory@Desktop@Composition@UI@Windows@@@23@@23@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@WDI@EAAJPEAW4TrustLevel@@@Z @ 0x1800A9930 (-GetTrustLevel@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@U-$Impleme_ea_1800A9930.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IInspectable,Windows::UI::Composition::ICompositionCapabilitiesStatics,Microsoft::WRL::CloakedIid<Windows::UI::Composition::Desktop::ICompositionCapabilitiesInteropFactory>>>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::GetTrustLevel(
        __int64 a1,
        int *a2)
{
  __int64 v2; // rax
  int v4; // eax

  v2 = *(_QWORD *)(a1 + 112);
  if ( v2 )
    v4 = (*(__int64 (**)(void))(v2 + 16))();
  else
    v4 = 2;
  *a2 = v4;
  return 0LL;
}
