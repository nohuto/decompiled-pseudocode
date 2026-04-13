/*
 * XREFs of ??0TargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@QEAA@XZ @ 0x1800743A4
 * Callers:
 *     ??$MakeAndInitialize@VTargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@V12345@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@@Z @ 0x180072BD4 (--$MakeAndInitialize@VTargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@V1.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18002B018 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

Windows::Services::TargetedContent::Internal::TargetedContentActionStatics *__fastcall Windows::Services::TargetedContent::Internal::TargetedContentActionStatics::TargetedContentActionStatics(
        Windows::Services::TargetedContent::Internal::TargetedContentActionStatics *this)
{
  _QWORD *v2; // rdi

  v2 = (_QWORD *)((char *)this + 8);
  Microsoft::WRL::FtmBase::FtmBase((Windows::Services::TargetedContent::Internal::TargetedContentActionStatics *)((char *)this + 8));
  *((_DWORD *)this + 17) = 1;
  *(_QWORD *)this = &Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionStaticsInternal>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::`vftable';
  *v2 = &Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionStaticsInternal>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,Windows::Services::TargetedContent::Internal::ITargetedContentActionStaticsInternal>>'};
  *((_QWORD *)this + 5) = &Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionStaticsInternal>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Services::TargetedContent::Internal::ITargetedContentActionStaticsInternal>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,Windows::Services::TargetedContent::Internal::ITargetedContentActionStaticsInternal>>'};
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 4;
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &Windows::Services::TargetedContent::Internal::TargetedContentActionStatics::`vftable';
  *v2 = &Windows::Services::TargetedContent::Internal::TargetedContentActionStatics::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,Windows::Services::TargetedContent::Internal::ITargetedContentActionStaticsInternal>>'};
  *((_QWORD *)this + 5) = &Windows::Services::TargetedContent::Internal::TargetedContentActionStatics::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Services::TargetedContent::Internal::ITargetedContentActionStaticsInternal>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,Windows::Services::TargetedContent::Internal::ITargetedContentActionStaticsInternal>>'};
  return this;
}
