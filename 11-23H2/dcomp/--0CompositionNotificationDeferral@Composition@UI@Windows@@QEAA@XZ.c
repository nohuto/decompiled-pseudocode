/*
 * XREFs of ??0CompositionNotificationDeferral@Composition@UI@Windows@@QEAA@XZ @ 0x180122924
 * Callers:
 *     ??$MakeAndInitialize@VCompositionNotificationDeferral@Composition@UI@Windows@@UICompositionNotificationDeferral@234@AEAPEAUICompositionDeferralHandlerPrivate@Private@234@AEAI@Details@WRL@Microsoft@@YAJPEAPEAUICompositionNotificationDeferral@Composition@UI@Windows@@AEAPEAUICompositionDeferralHandlerPrivate@Private@456@AEAI@Z @ 0x1801222EC (--$MakeAndInitialize@VCompositionNotificationDeferral@Composition@UI@Windows@@UICompositionNotif.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18002DED4 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

Windows::UI::Composition::CompositionNotificationDeferral *__fastcall Windows::UI::Composition::CompositionNotificationDeferral::CompositionNotificationDeferral(
        Windows::UI::Composition::CompositionNotificationDeferral *this)
{
  _QWORD *v1; // rdi
  struct Microsoft::WRL::Details::ModuleBase *v3; // rcx

  v1 = (_QWORD *)((char *)this + 16);
  Microsoft::WRL::FtmBase::FtmBase((Windows::UI::Composition::CompositionNotificationDeferral *)((char *)this + 16));
  v3 = Microsoft::WRL::Details::ModuleBase::module_;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Windows::UI::Composition::ICompositionNotificationDeferral,Microsoft::WRL::FtmBase>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Windows::UI::Composition::ICompositionNotificationDeferral,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *v1 = &Microsoft::WRL::RuntimeClass<Windows::UI::Composition::ICompositionNotificationDeferral,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 7) = 1LL;
  if ( v3 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v3 + 8LL))(v3);
  *((_DWORD *)this + 16) = 0;
  *(_QWORD *)this = &Windows::UI::Composition::CompositionNotificationDeferral::`vftable';
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 1) = &Windows::UI::Composition::CompositionNotificationDeferral::`vftable'{for `IWeakReferenceSource'};
  *v1 = &Windows::UI::Composition::CompositionNotificationDeferral::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  return this;
}
