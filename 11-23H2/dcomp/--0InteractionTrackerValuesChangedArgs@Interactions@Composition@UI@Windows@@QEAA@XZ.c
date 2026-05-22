/*
 * XREFs of ??0InteractionTrackerValuesChangedArgs@Interactions@Composition@UI@Windows@@QEAA@XZ @ 0x1800B6B52
 * Callers:
 *     ??$MakeAndInitialize@VInteractionTrackerValuesChangedArgs@Interactions@Composition@UI@Windows@@V12345@AEBUVector3@Numerics@Foundation@5@AEAMAEAH@Details@WRL@Microsoft@@YAJPEAPEAVInteractionTrackerValuesChangedArgs@Interactions@Composition@UI@Windows@@AEBUVector3@Numerics@Foundation@7@AEAMAEAH@Z @ 0x1800B6A0A (--$MakeAndInitialize@VInteractionTrackerValuesChangedArgs@Interactions@Composition@UI@Windows@@V.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18002DED4 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

Windows::UI::Composition::Interactions::InteractionTrackerValuesChangedArgs *__fastcall Windows::UI::Composition::Interactions::InteractionTrackerValuesChangedArgs::InteractionTrackerValuesChangedArgs(
        Windows::UI::Composition::Interactions::InteractionTrackerValuesChangedArgs *this)
{
  _QWORD *v1; // rdi
  struct Microsoft::WRL::Details::ModuleBase *v3; // rcx

  v1 = (_QWORD *)((char *)this + 8);
  Microsoft::WRL::FtmBase::FtmBase((Windows::UI::Composition::Interactions::InteractionTrackerValuesChangedArgs *)((char *)this + 8));
  v3 = Microsoft::WRL::Details::ModuleBase::module_;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,Windows::UI::Composition::Interactions::IInteractionTrackerValuesChangedArgs,IInspectable>::`vftable';
  *v1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,Windows::UI::Composition::Interactions::IInteractionTrackerValuesChangedArgs,IInspectable>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,Windows::UI::Composition::Interactions::IInteractionTrackerValuesChangedArgs,IInspectable>>'};
  *((_QWORD *)this + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,Windows::UI::Composition::Interactions::IInteractionTrackerValuesChangedArgs,IInspectable>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::UI::Composition::Interactions::IInteractionTrackerValuesChangedArgs,IInspectable>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,Windows::UI::Composition::Interactions::IInteractionTrackerValuesChangedArgs,IInspectable>>'};
  *((_QWORD *)this + 6) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,Windows::UI::Composition::Interactions::IInteractionTrackerValuesChangedArgs,IInspectable>::`vftable'{for `Windows::UI::Composition::Interactions::IInteractionTrackerValuesChangedArgs'};
  *((_QWORD *)this + 7) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,Windows::UI::Composition::Interactions::IInteractionTrackerValuesChangedArgs,IInspectable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
  *((_QWORD *)this + 9) = 1LL;
  if ( v3 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v3 + 8LL))(v3);
  *(_QWORD *)this = &Windows::UI::Composition::Interactions::InteractionTrackerValuesChangedArgs::`vftable';
  *v1 = &Windows::UI::Composition::Interactions::InteractionTrackerValuesChangedArgs::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,Windows::UI::Composition::Interactions::IInteractionTrackerValuesChangedArgs,IInspectable>>'};
  *((_QWORD *)this + 5) = &Windows::UI::Composition::Interactions::InteractionTrackerValuesChangedArgs::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::UI::Composition::Interactions::IInteractionTrackerValuesChangedArgs,IInspectable>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,Windows::UI::Composition::Interactions::IInteractionTrackerValuesChangedArgs,IInspectable>>'};
  *((_QWORD *)this + 6) = &Windows::UI::Composition::Interactions::InteractionTrackerValuesChangedArgs::`vftable'{for `Windows::UI::Composition::Interactions::IInteractionTrackerValuesChangedArgs'};
  *((_QWORD *)this + 7) = &Windows::UI::Composition::Interactions::InteractionTrackerValuesChangedArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
  return this;
}
