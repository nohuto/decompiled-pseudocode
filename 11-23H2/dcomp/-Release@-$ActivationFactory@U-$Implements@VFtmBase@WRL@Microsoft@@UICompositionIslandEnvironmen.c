/*
 * XREFs of ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UICompositionIslandEnvironmentStatics@Composition@UI@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x1800080D0
 * Callers:
 *     ??$MakeAndInitialize@VCompositionObjectFactory@Composition@UI@Windows@@V1234@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCompositionObjectFactory@Composition@UI@Windows@@@Z @ 0x1800032CC (--$MakeAndInitialize@VCompositionObjectFactory@Composition@UI@Windows@@V1234@$$V@Details@WRL@Mic.c)
 *     ?Release@AppContentRootFactory@UI@Windows@@UEAAKXZ @ 0x1800080C0 (-Release@AppContentRootFactory@UI@Windows@@UEAAKXZ.c)
 *     ??$CreateActivationFactory@VAppContentRootFactory@UI@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180016830 (--$CreateActivationFactory@VAppContentRootFactory@UI@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEB.c)
 *     ??$MakeAndInitialize@VCompositionIslandStatics@Composition@UI@Windows@@V1234@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCompositionIslandStatics@Composition@UI@Windows@@@Z @ 0x1800169AC (--$MakeAndInitialize@VCompositionIslandStatics@Composition@UI@Windows@@V1234@$$V@Details@WRL@Mic.c)
 *     ??$MakeAndInitialize@VCompositorControllerFactory@Core@Composition@UI@Windows@@V12345@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCompositorControllerFactory@Core@Composition@UI@Windows@@@Z @ 0x180016B88 (--$MakeAndInitialize@VCompositorControllerFactory@Core@Composition@UI@Windows@@V12345@$$V@Detail.c)
 *     ??$CreateActivationFactory@VUIContextFactory@UI@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180016D70 (--$CreateActivationFactory@VUIContextFactory@UI@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCrea.c)
 *     ??$MakeAndInitialize@VCompositionIslandEnvironmentStatics@Composition@UI@Windows@@V1234@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCompositionIslandEnvironmentStatics@Composition@UI@Windows@@@Z @ 0x180017D1C (--$MakeAndInitialize@VCompositionIslandEnvironmentStatics@Composition@UI@Windows@@V1234@$$V@Deta.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIUIContentRootFactory@UI@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@W7EAAKXZ @ 0x1800A9E10 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIUIContentRootFactory@UI@Win.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIUIContentRootFactory@UI@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@WCI@EAAKXZ @ 0x1800A9E30 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIUIContentRootF_ea_1800A9E30.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIInspectable@@@WRL@Microsoft@@UICompositorControllerStaticsPrivate@Private@Core@Composition@UI@Windows@@VNil@Details@23@$0A@@WRL@Microsoft@@WDI@EAAKXZ @ 0x1800AB1F0 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIInspectable@@@_ea_1800AB1F0.c)
 *     ??1?$ComPtr@VAppContentRootFactory@UI@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180101DBC (--1-$ComPtr@VAppContentRootFactory@UI@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18007F610 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::UI::Composition::ICompositionIslandEnvironmentStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
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
