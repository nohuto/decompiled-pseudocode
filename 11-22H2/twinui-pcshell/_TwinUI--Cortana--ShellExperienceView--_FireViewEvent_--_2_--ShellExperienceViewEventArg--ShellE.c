/*
 * XREFs of _TwinUI::Cortana::ShellExperienceView::_FireViewEvent_::_2_::ShellExperienceViewEventArg::ShellExperienceViewEventArg @ 0x18046F4A4
 * Callers:
 *     Microsoft::WRL::Details::MakeAndInitialize__TwinUI::Cortana::ShellExperienceView::_FireViewEvent_::_2_::ShellExperienceViewEventArg_Windows::Internal::Shell::Experience::IShellExperienceViewEventArg_HSTRING_____&_Windows::Foundation::Collections::IPropertySet___&_ @ 0x18046F2CC (Microsoft--WRL--Details--MakeAndInitialize__TwinUI--Cortana--ShellExperienceView--_FireViewEvent.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall TwinUI::Cortana::ShellExperienceView::_FireViewEvent_::_2_::ShellExperienceViewEventArg::ShellExperienceViewEventArg(
        _QWORD *a1)
{
  a1[3] = 1LL;
  *a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg>::`vftable'{for `Windows::Internal::Shell::Experience::IShellExperienceViewEventArg'};
  a1[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *a1 = off_1807D5CB0;
  a1[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>'};
  a1[4] = 0LL;
  a1[5] = 0LL;
  return a1;
}
