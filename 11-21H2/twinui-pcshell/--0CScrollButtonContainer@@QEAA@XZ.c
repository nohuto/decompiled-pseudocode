/*
 * XREFs of ??0CScrollButtonContainer@@QEAA@XZ @ 0x1804D38D8
 * Callers:
 *     ??$MakeAndInitialize@VCScrollButtonContainer@@V1@AEBUScrollViewerHostMetrics@@AEAW4ScrollButtonContainerFlags@@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIDWriteTextFormat@@AEAPEAUISwitchThumbnailFactory@@@Details@WRL@Microsoft@@YAJPEAPEAVCScrollButtonContainer@@AEBUScrollViewerHostMetrics@@AEAW4ScrollButtonContainerFlags@@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIDWriteTextFormat@@AEAPEAUISwitchThumbnailFactory@@@Z @ 0x1804D37C0 (--$MakeAndInitialize@VCScrollButtonContainer@@V1@AEBUScrollViewerHostMetrics@@AEAW4ScrollButtonC.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CMultitaskingViewElementBase@@QEAA@XZ @ 0x180232E60 (--0CMultitaskingViewElementBase@@QEAA@XZ.c)
 */

CScrollButtonContainer *__fastcall CScrollButtonContainer::CScrollButtonContainer(CScrollButtonContainer *this)
{
  __int64 v2; // rcx

  CMultitaskingViewElementBase::CMultitaskingViewElementBase(this);
  *(_QWORD *)(v2 + 208) = &winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager,std::tuple<IImeContextMenuExperienceManager>>::`vftable';
  *(_QWORD *)(v2 + 216) = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  *(_DWORD *)(v2 + 228) = 1;
  *(_QWORD *)v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewElementBase,IGlyphButtonHost,IScrollButtonContainer>::`vftable';
  *(_QWORD *)(v2 + 208) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewElementBase,IGlyphButtonHost,IScrollButtonContainer>::`vftable'{for `IGlyphButtonHost'};
  *(_QWORD *)(v2 + 216) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewElementBase,IGlyphButtonHost,IScrollButtonContainer>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IScrollButtonContainer>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CScrollButtonContainer::`vftable';
  *((_QWORD *)this + 26) = &CScrollButtonContainer::`vftable'{for `IGlyphButtonHost'};
  *((_QWORD *)this + 27) = &CScrollButtonContainer::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IScrollButtonContainer>'};
  *((_DWORD *)this + 70) = 0;
  *((_DWORD *)this + 71) = 0;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  return this;
}
