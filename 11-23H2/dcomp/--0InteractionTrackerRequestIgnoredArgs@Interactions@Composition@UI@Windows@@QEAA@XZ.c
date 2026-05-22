/*
 * XREFs of ??0InteractionTrackerRequestIgnoredArgs@Interactions@Composition@UI@Windows@@QEAA@XZ @ 0x180136278
 * Callers:
 *     ??$MakeAndInitialize@VInteractionTrackerRequestIgnoredArgs@Interactions@Composition@UI@Windows@@V12345@AEAH@Details@WRL@Microsoft@@YAJPEAPEAVInteractionTrackerRequestIgnoredArgs@Interactions@Composition@UI@Windows@@AEAH@Z @ 0x1801351D8 (--$MakeAndInitialize@VInteractionTrackerRequestIgnoredArgs@Interactions@Composition@UI@Windows@@.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18002DED4 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

Windows::UI::Composition::Interactions::InteractionTrackerRequestIgnoredArgs *__fastcall Windows::UI::Composition::Interactions::InteractionTrackerRequestIgnoredArgs::InteractionTrackerRequestIgnoredArgs(
        Windows::UI::Composition::Interactions::InteractionTrackerRequestIgnoredArgs *this)
{
  _QWORD *v1; // rdi
  struct Microsoft::WRL::Details::ModuleBase *v3; // rcx

  v1 = (_QWORD *)((char *)this + 8);
  Microsoft::WRL::FtmBase::FtmBase((Windows::UI::Composition::Interactions::InteractionTrackerRequestIgnoredArgs *)((char *)this + 8));
  v3 = Microsoft::WRL::Details::ModuleBase::module_;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,Windows::UI::Composition::Interactions::IInteractionTrackerRequestIgnoredArgs,IInspectable>::`vftable';
  *v1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,Windows::UI::Composition::Interactions::IInteractionTrackerRequestIgnoredArgs,IInspectable>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,Windows::UI::Composition::Interactions::IInteractionTrackerRequestIgnoredArgs,IInspectable>>'};
  *((_QWORD *)this + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,Windows::UI::Composition::Interactions::IInteractionTrackerRequestIgnoredArgs,IInspectable>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::UI::Composition::Interactions::IInteractionTrackerRequestIgnoredArgs,IInspectable>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,Windows::UI::Composition::Interactions::IInteractionTrackerRequestIgnoredArgs,IInspectable>>'};
  *((_QWORD *)this + 6) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,Windows::UI::Composition::Interactions::IInteractionTrackerRequestIgnoredArgs,IInspectable>::`vftable'{for `Windows::UI::Composition::Interactions::IInteractionTrackerRequestIgnoredArgs'};
  *((_QWORD *)this + 7) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,Windows::UI::Composition::Interactions::IInteractionTrackerRequestIgnoredArgs,IInspectable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
  *((_QWORD *)this + 9) = 1LL;
  if ( v3 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v3 + 8LL))(v3);
  *(_QWORD *)this = &Windows::UI::Composition::Interactions::InteractionTrackerRequestIgnoredArgs::`vftable';
  *v1 = &Windows::UI::Composition::Interactions::InteractionTrackerRequestIgnoredArgs::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,Windows::UI::Composition::Interactions::IInteractionTrackerRequestIgnoredArgs,IInspectable>>'};
  *((_QWORD *)this + 5) = &Windows::UI::Composition::Interactions::InteractionTrackerRequestIgnoredArgs::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::UI::Composition::Interactions::IInteractionTrackerRequestIgnoredArgs,IInspectable>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,Windows::UI::Composition::Interactions::IInteractionTrackerRequestIgnoredArgs,IInspectable>>'};
  *((_QWORD *)this + 6) = &Windows::UI::Composition::Interactions::InteractionTrackerRequestIgnoredArgs::`vftable'{for `Windows::UI::Composition::Interactions::IInteractionTrackerRequestIgnoredArgs'};
  *((_QWORD *)this + 7) = &Windows::UI::Composition::Interactions::InteractionTrackerRequestIgnoredArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
  return this;
}
