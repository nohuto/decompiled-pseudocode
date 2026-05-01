/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCMultitaskingViewButtonElement@@UIGlyphButton@@@WRL@Microsoft@@QEAA@XZ @ 0x180582E04
 * Callers:
 *     ??0CGlyphButtonElement@@QEAA@XZ @ 0x180582E80 (--0CGlyphButtonElement@@QEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CMultitaskingViewElementBase@@QEAA@XZ @ 0x1802E14A8 (--0CMultitaskingViewElementBase@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewButtonElement,IGlyphButton>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewButtonElement,IGlyphButton>(
        __int64 a1)
{
  CMultitaskingViewElementBase::CMultitaskingViewElementBase((CMultitaskingViewElementBase *)a1);
  *(_QWORD *)a1 = &CMultitaskingViewButtonElement::`vftable';
  *(_QWORD *)(a1 + 216) = &winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager,std::tuple<IImeContextMenuExperienceManager>>::`vftable';
  *(_DWORD *)(a1 + 228) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewButtonElement,IGlyphButton>::`vftable'{for `Microsoft::WRL::Details::Selector<CMultitaskingViewButtonElement,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CMultitaskingViewButtonElement>,IGlyphButton>>'};
  *(_QWORD *)(a1 + 216) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewButtonElement,IGlyphButton>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IGlyphButton>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CMultitaskingViewButtonElement>,IGlyphButton>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
