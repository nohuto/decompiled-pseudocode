/*
 * XREFs of ??0SubscriptionManagerFactory@Internal@TargetedContent@ContentManagement@@QEAA@XZ @ 0x180047F8C
 * Callers:
 *     ??$MakeAndInitialize@VSubscriptionManagerFactory@Internal@TargetedContent@ContentManagement@@V1234@$$V@Details@WRL@Microsoft@@YAJPEAPEAVSubscriptionManagerFactory@Internal@TargetedContent@ContentManagement@@@Z @ 0x1800478DC (--$MakeAndInitialize@VSubscriptionManagerFactory@Internal@TargetedContent@ContentManagement@@V12.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18002B018 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

ContentManagement::TargetedContent::Internal::SubscriptionManagerFactory *__fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerFactory::SubscriptionManagerFactory(
        ContentManagement::TargetedContent::Internal::SubscriptionManagerFactory *this)
{
  _QWORD *v2; // rdi

  v2 = (_QWORD *)((char *)this + 8);
  Microsoft::WRL::FtmBase::FtmBase((ContentManagement::TargetedContent::Internal::SubscriptionManagerFactory *)((char *)this + 8));
  *((_DWORD *)this + 17) = 1;
  *(_QWORD *)this = &Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,IInspectable>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::`vftable';
  *v2 = &ContentManagement::TargetedContent::Internal::SubscriptionManagerFactory::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IInspectable>>'};
  *((_QWORD *)this + 5) = &Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,IInspectable>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IInspectable>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IInspectable>>'};
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 4;
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &ContentManagement::TargetedContent::Internal::SubscriptionManagerFactory::`vftable';
  *v2 = &ContentManagement::TargetedContent::Internal::SubscriptionManagerFactory::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IInspectable>>'};
  *((_QWORD *)this + 5) = &ContentManagement::TargetedContent::Internal::SubscriptionManagerFactory::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IInspectable>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IInspectable>>'};
  return this;
}
