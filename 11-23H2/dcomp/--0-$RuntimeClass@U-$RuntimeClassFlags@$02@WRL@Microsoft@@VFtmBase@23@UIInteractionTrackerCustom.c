/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VFtmBase@23@UIInteractionTrackerCustomAnimationStateEnteredArgs@Interactions@Composition@UI@Windows@@UIInteractionTrackerCustomAnimationStateEnteredArgs2@6789@UIInspectable@@@WRL@Microsoft@@QEAA@XZ @ 0x180135D04
 * Callers:
 *     ??0InteractionTrackerCustomAnimationStateEnteredArgs@Interactions@Composition@UI@Windows@@QEAA@XZ @ 0x1801360E0 (--0InteractionTrackerCustomAnimationStateEnteredArgs@Interactions@Composition@UI@Windows@@QEAA@X.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18002DED4 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs,Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs2,IInspectable>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs,Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs2,IInspectable>(
        _QWORD *a1)
{
  struct Microsoft::WRL::Details::ModuleBase *v2; // rcx

  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(a1 + 1));
  v2 = Microsoft::WRL::Details::ModuleBase::module_;
  *a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs,Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs2,IInspectable>::`vftable'{for `IInspectable'};
  a1[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs,Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs2,IInspectable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs,Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs2,IInspectable>'};
  a1[5] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs,Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs2,IInspectable>::`vftable'{for `IWeakReferenceSource'};
  a1[6] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs,Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs2,IInspectable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs,Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs2,IInspectable>'};
  a1[7] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs,Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs2,IInspectable>::`vftable'{for `Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs2'};
  a1[8] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs,Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs2,IInspectable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
  a1[10] = 1LL;
  if ( v2 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v2 + 8LL))(v2);
  return a1;
}
