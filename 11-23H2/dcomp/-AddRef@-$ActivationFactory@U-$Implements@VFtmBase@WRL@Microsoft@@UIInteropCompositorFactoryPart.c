/*
 * XREFs of ?AddRef@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIInteropCompositorFactoryPartner@Composition@UI@Windows@@@WRL@Microsoft@@UICompositorStatics@Composition@UI@Windows@@UIInteropCompositorFactoryRestricted@567@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180089B70
 * Callers:
 *     ??$MakeAndInitialize@VCompositorFactory@Composition@UI@Windows@@V1234@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCompositorFactory@Composition@UI@Windows@@@Z @ 0x180017AB4 (--$MakeAndInitialize@VCompositorFactory@Composition@UI@Windows@@V1234@$$V@Details@WRL@Microsoft@.c)
 *     ?AddRef@CompositorFactory@Composition@UI@Windows@@UEAAKXZ @ 0x180089B60 (-AddRef@CompositorFactory@Composition@UI@Windows@@UEAAKXZ.c)
 *     ?AddRef@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIInteropCompositorFactoryPartner@Composition@UI@Windows@@@WRL@Microsoft@@UICompositorStatics@Composition@UI@Windows@@UIInteropCompositorFactoryRestricted@567@$0A@@WRL@Microsoft@@W7EAAKXZ @ 0x1800A9FF0 (-AddRef@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIInteropComposit_ea_1800A9FF0.c)
 *     ?AddRef@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIInteropCompositorFactoryPartner@Composition@UI@Windows@@@WRL@Microsoft@@UICompositorStatics@Composition@UI@Windows@@UIInteropCompositorFactoryRestricted@567@$0A@@WRL@Microsoft@@WCI@EAAKXZ @ 0x1800AA010 (-AddRef@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIInteropComposit_ea_1800AA010.c)
 *     ?AddRef@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIInteropCompositorFactoryPartner@Composition@UI@Windows@@@WRL@Microsoft@@UICompositorStatics@Composition@UI@Windows@@UIInteropCompositorFactoryRestricted@567@$0A@@WRL@Microsoft@@WDI@EAAKXZ @ 0x1800AA030 (-AddRef@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIInteropComposit_ea_1800AA030.c)
 *     ?AddRef@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIInteropCompositorFactoryPartner@Composition@UI@Windows@@@WRL@Microsoft@@UICompositorStatics@Composition@UI@Windows@@UIInteropCompositorFactoryRestricted@567@$0A@@WRL@Microsoft@@WEA@EAAKXZ @ 0x1800AA050 (-AddRef@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIInteropComposit_ea_1800AA050.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800826A8 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::UI::Composition::IInteropCompositorFactoryPartner>,Windows::UI::Composition::ICompositorStatics,Windows::UI::Composition::IInteropCompositorFactoryRestricted,0>::AddRef(
        __int64 a1,
        volatile int *a2)
{
  unsigned int v2; // eax
  __int64 v3; // r10
  unsigned int v4; // ebx

  v2 = Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 76), a2);
  v4 = v2;
  if ( (*(_BYTE *)(v3 + 96) & 4) == 0 && v2 == 2 && Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return v4;
}
