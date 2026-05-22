/*
 * XREFs of ??0?$AgileActivationFactory@UIInspectable@@UICompositorControllerStaticsPrivate@Private@Core@Composition@UI@Windows@@VNil@Details@WRL@Microsoft@@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x180016C10
 * Callers:
 *     ??$MakeAndInitialize@VCompositorControllerFactory@Core@Composition@UI@Windows@@V12345@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCompositorControllerFactory@Core@Composition@UI@Windows@@@Z @ 0x180016B88 (--$MakeAndInitialize@VCompositorControllerFactory@Core@Composition@UI@Windows@@V12345@$$V@Detail.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18002DED4 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::AgileActivationFactory<IInspectable,Windows::UI::Composition::Core::Private::ICompositorControllerStaticsPrivate,Microsoft::WRL::Details::Nil,0>::AgileActivationFactory<IInspectable,Windows::UI::Composition::Core::Private::ICompositorControllerStaticsPrivate,Microsoft::WRL::Details::Nil,0>(
        __int64 a1)
{
  _QWORD *v1; // rdi
  struct Microsoft::WRL::Details::ModuleBase *v3; // rcx

  v1 = (_QWORD *)(a1 + 8);
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(a1 + 8));
  *(_QWORD *)(a1 + 80) = 0LL;
  v3 = Microsoft::WRL::Details::ModuleBase::module_;
  *(_QWORD *)a1 = &Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,IInspectable>,Windows::UI::Composition::Core::Private::ICompositorControllerStaticsPrivate,Microsoft::WRL::Details::Nil,0>::`vftable'{for `IActivationFactory'};
  *v1 = &Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,IInspectable>,Windows::UI::Composition::Core::Private::ICompositorControllerStaticsPrivate,Microsoft::WRL::Details::Nil,0>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IInspectable>>'};
  *(_QWORD *)(a1 + 40) = &Microsoft::WRL::AgileActivationFactory<IInspectable,Windows::UI::Composition::Core::Private::ICompositorControllerStaticsPrivate,Microsoft::WRL::Details::Nil,0>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IInspectable>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IInspectable>>'};
  *(_QWORD *)(a1 + 56) = &Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,IInspectable>,Windows::UI::Composition::Core::Private::ICompositorControllerStaticsPrivate,Microsoft::WRL::Details::Nil,0>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,IInspectable>>,Windows::UI::Composition::Core::Private::ICompositorControllerStaticsPrivate,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
  *(_DWORD *)(a1 + 68) = 1;
  *(_DWORD *)(a1 + 88) = 4;
  if ( v3 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v3 + 8LL))(v3);
  *(_QWORD *)a1 = &Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,IInspectable>,Windows::UI::Composition::Core::Private::ICompositorControllerStaticsPrivate,Microsoft::WRL::Details::Nil,0>::`vftable'{for `IActivationFactory'};
  *v1 = &Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,IInspectable>,Windows::UI::Composition::Core::Private::ICompositorControllerStaticsPrivate,Microsoft::WRL::Details::Nil,0>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IInspectable>>'};
  *(_QWORD *)(a1 + 40) = &Microsoft::WRL::AgileActivationFactory<IInspectable,Windows::UI::Composition::Core::Private::ICompositorControllerStaticsPrivate,Microsoft::WRL::Details::Nil,0>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IInspectable>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IInspectable>>'};
  *(_QWORD *)(a1 + 56) = &Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,IInspectable>,Windows::UI::Composition::Core::Private::ICompositorControllerStaticsPrivate,Microsoft::WRL::Details::Nil,0>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,IInspectable>>,Windows::UI::Composition::Core::Private::ICompositorControllerStaticsPrivate,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
  return a1;
}
