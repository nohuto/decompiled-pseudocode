/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::BrokeredViewTabConverter___Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter____Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs___Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs_____::_)(Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter___Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::BrokeredViewTabConverter___Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs____Microsoft::WRL::FtmBase___lambda_e8fc07facb963e76bc03e71e52701980___1_Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter___Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs___::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::BrokeredViewTabConverter___Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs____Microsoft::WRL::FtmBase___lambda_e8fc07facb963e76bc03e71e52701980___1_Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter___Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs___ @ 0x18055ACA8
 * Callers:
 *     wil::MakeAgileCallback_Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::BrokeredViewTabConverter___Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs_____lambda_e8fc07facb963e76bc03e71e52701980___ @ 0x18055A734 (wil--MakeAgileCallback_Windows--Foundation--ITypedEventHandler_Windows--Internal--ComposableShel.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180082710 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::BrokeredViewTabConverter___Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter____Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs___Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs_____::___Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter___Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs____::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::BrokeredViewTabConverter___Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs____Microsoft::WRL::FtmBase___lambda_e8fc07facb963e76bc03e71e52701980___1_Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter___Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs___::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::BrokeredViewTabConverter___Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs____Microsoft::WRL::FtmBase___lambda_e8fc07facb963e76bc03e71e52701980___1_Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter___Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs___(
        __int64 a1,
        __int64 *a2)
{
  _QWORD *v4; // rsi
  __int64 v5; // rax

  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  v4 = (_QWORD *)(a1 + 8);
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(a1 + 8));
  *(_DWORD *)(a1 + 60) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Tabs::BrokeredViewTabConverter *,Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs *>,Microsoft::WRL::FtmBase>>::`vftable'{for `Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Tabs::BrokeredViewTabConverter *,Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs *>'};
  *v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Tabs::BrokeredViewTabConverter *,Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs *>,Microsoft::WRL::FtmBase>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  v5 = *a2;
  *a2 = 0LL;
  *(_QWORD *)(a1 + 64) = v5;
  *(_QWORD *)(a1 + 72) = a2[1];
  *(_QWORD *)a1 = off_1806661E0;
  *v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Tabs::BrokeredViewTabConverter *,Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs *>,Microsoft::WRL::FtmBase>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  return a1;
}
