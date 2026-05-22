/*
 * XREFs of ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIInteropCompositorFactoryPartner@Composition@UI@Windows@@@WRL@Microsoft@@UICompositorStatics@Composition@UI@Windows@@UIInteropCompositorFactoryRestricted@567@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x18007F470
 * Callers:
 *     ??$MakeAndInitialize@VCompositorFactory@Composition@UI@Windows@@V1234@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCompositorFactory@Composition@UI@Windows@@@Z @ 0x180017AB4 (--$MakeAndInitialize@VCompositorFactory@Composition@UI@Windows@@V1234@$$V@Details@WRL@Microsoft@.c)
 *     ?Release@CompositorFactory@Composition@UI@Windows@@UEAAKXZ @ 0x18007F450 (-Release@CompositorFactory@Composition@UI@Windows@@UEAAKXZ.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIInteropCompositorFactoryPartner@Composition@UI@Windows@@@WRL@Microsoft@@UICompositorStatics@Composition@UI@Windows@@UIInteropCompositorFactoryRestricted@567@$0A@@WRL@Microsoft@@W7EAAKXZ @ 0x1800AB210 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIInteropComposi_ea_1800AB210.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIInteropCompositorFactoryPartner@Composition@UI@Windows@@@WRL@Microsoft@@UICompositorStatics@Composition@UI@Windows@@UIInteropCompositorFactoryRestricted@567@$0A@@WRL@Microsoft@@WCI@EAAKXZ @ 0x1800AB230 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIInteropComposi_ea_1800AB230.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIInteropCompositorFactoryPartner@Composition@UI@Windows@@@WRL@Microsoft@@UICompositorStatics@Composition@UI@Windows@@UIInteropCompositorFactoryRestricted@567@$0A@@WRL@Microsoft@@WDI@EAAKXZ @ 0x1800AB250 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIInteropComposi_ea_1800AB250.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIInteropCompositorFactoryPartner@Composition@UI@Windows@@@WRL@Microsoft@@UICompositorStatics@Composition@UI@Windows@@UIInteropCompositorFactoryRestricted@567@$0A@@WRL@Microsoft@@WEA@EAAKXZ @ 0x1800AB270 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIInteropComposi_ea_1800AB270.c)
 *     ??1?$ComPtr@VCompositorFactory@Composition@UI@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180105A84 (--1-$ComPtr@VCompositorFactory@Composition@UI@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18007F610 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::UI::Composition::IInteropCompositorFactoryPartner>,Windows::UI::Composition::ICompositorStatics,Windows::UI::Composition::IInteropCompositorFactoryRestricted,0>::Release(
        __int64 a1,
        volatile int *a2)
{
  unsigned int v2; // eax
  _DWORD *v3; // r11
  unsigned int v4; // edi
  int v5; // ebx

  v2 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(a1 + 76), a2);
  v4 = v2;
  v5 = v3[24] & 4;
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
