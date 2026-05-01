/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::ToastCenterExperienceManager___Windows::Internal::Shell::Experience::IToastCenterExperienceManager____Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::ViewPositionChangedEventArgs___Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs_____::_)(Windows::Internal::Shell::Experience::IToastCenterExperienceManager___Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::ToastCenterExperienceManager___Windows::Internal::Shell::Experience::ViewPositionChangedEventArgs_____lambda_e72d6442786bf2af2755e0daaae830e1___1_Windows::Internal::Shell::Experience::IToastCenterExperienceManager___Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::ToastCenterExperienceManager___Windows::Internal::Shell::Experience::ViewPositionChangedEventArgs_____lambda_e72d6442786bf2af2755e0daaae830e1___1_Windows::Internal::Shell::Experience::IToastCenterExperienceManager___Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs___ @ 0x180194184
 * Callers:
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::ToastCenterExperienceManager___Windows::Internal::Shell::Experience::ViewPositionChangedEventArgs_____lambda_e72d6442786bf2af2755e0daaae830e1___ @ 0x180193C14 (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--Internal--Shell--Exper.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::ToastCenterExperienceManager___Windows::Internal::Shell::Experience::IToastCenterExperienceManager____Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::ViewPositionChangedEventArgs___Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs_____::___Windows::Internal::Shell::Experience::IToastCenterExperienceManager___Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::ToastCenterExperienceManager___Windows::Internal::Shell::Experience::ViewPositionChangedEventArgs_____lambda_e72d6442786bf2af2755e0daaae830e1___1_Windows::Internal::Shell::Experience::IToastCenterExperienceManager___Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::ToastCenterExperienceManager___Windows::Internal::Shell::Experience::ViewPositionChangedEventArgs_____lambda_e72d6442786bf2af2755e0daaae830e1___1_Windows::Internal::Shell::Experience::IToastCenterExperienceManager___Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs___(
        __int64 a1,
        _QWORD *a2)
{
  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::ToastCenterExperienceManager *,Windows::Internal::Shell::Experience::ViewPositionChangedEventArgs *>>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)(a1 + 16) = *a2;
  *(_QWORD *)a1 = off_180642190;
  return a1;
}
