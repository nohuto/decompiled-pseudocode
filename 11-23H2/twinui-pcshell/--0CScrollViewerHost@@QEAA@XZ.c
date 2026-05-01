/*
 * XREFs of ??0CScrollViewerHost@@QEAA@XZ @ 0x18057AF90
 * Callers:
 *     ??$MakeAndInitialize@VCScrollViewerHost@@V1@AEAW4ScrollViewerHostFlags@@AEBUScrollViewerHostMetrics@@AEBU_MARGINS@@AEBURelativeMargins@@AEAIAEAPEAUIMultitaskingViewElement@@AEAPEAUISwitchThumbnailFactory@@@Details@WRL@Microsoft@@YAJPEAPEAVCScrollViewerHost@@AEAW4ScrollViewerHostFlags@@AEBUScrollViewerHostMetrics@@AEBU_MARGINS@@AEBURelativeMargins@@AEAIAEAPEAUIMultitaskingViewElement@@AEAPEAUISwitchThumbnailFactory@@@Z @ 0x18057AE58 (--$MakeAndInitialize@VCScrollViewerHost@@V1@AEAW4ScrollViewerHostFlags@@AEBUScrollViewerHostMetr.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CMultitaskingViewElementBase@@QEAA@XZ @ 0x1802E14A8 (--0CMultitaskingViewElementBase@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
CScrollViewerHost *__fastcall CScrollViewerHost::CScrollViewerHost(CScrollViewerHost *this)
{
  __int64 v2; // rcx

  CMultitaskingViewElementBase::CMultitaskingViewElementBase(this);
  *(_QWORD *)(v2 + 208) = &winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager,std::tuple<IImeContextMenuExperienceManager>>::`vftable';
  *(_DWORD *)(v2 + 220) = 1;
  *(_QWORD *)v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewElementBase,IScrollButtonContainerHost>::`vftable'{for `Microsoft::WRL::Details::Selector<CMultitaskingViewElementBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CMultitaskingViewElementBase>,IScrollButtonContainerHost>>'};
  *(_QWORD *)(v2 + 208) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewElementBase,IScrollButtonContainerHost>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IScrollButtonContainerHost>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CMultitaskingViewElementBase>,IScrollButtonContainerHost>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CScrollViewerHost::`vftable'{for `Microsoft::WRL::Details::Selector<CMultitaskingViewElementBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CMultitaskingViewElementBase>,IScrollButtonContainerHost>>'};
  *((_QWORD *)this + 26) = &CScrollViewerHost::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IScrollButtonContainerHost>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CMultitaskingViewElementBase>,IScrollButtonContainerHost>>'};
  *((_DWORD *)this + 66) = 0;
  *((_DWORD *)this + 67) = 0;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  return this;
}
