/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_Windows::Foundation::Internal::AggregateType_bool_unsigned_char___::_)(IInspectable___unsigned_char)_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_bool___lambda_48f152b7375fc54a16cdd7806e5a908e___1_IInspectable___unsigned_char_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_bool___lambda_48f152b7375fc54a16cdd7806e5a908e___1_IInspectable___unsigned_char_ @ 0x180062028
 * Callers:
 *     Microsoft::WRL::Callback_Windows::Foundation::IEventHandler_bool___lambda_48f152b7375fc54a16cdd7806e5a908e___ @ 0x180061F50 (Microsoft--WRL--Callback_Windows--Foundation--IEventHandler_bool___lambda_48f152b7375fc54a16cdd7.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IEventHandler_impl_Windows::Foundation::Internal::AggregateType_bool_unsigned_char___::___IInspectable___unsigned_char__::DelegateInvokeHelper_Windows::Foundation::IEventHandler_bool___lambda_48f152b7375fc54a16cdd7806e5a908e___1_IInspectable___unsigned_char_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_bool___lambda_48f152b7375fc54a16cdd7806e5a908e___1_IInspectable___unsigned_char_(
        __int64 a1,
        _QWORD *a2)
{
  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Devices::Lights::Internal::AmbientManager *,Windows::Devices::Lights::Internal::AmbientDeviceMappingChangedEventArgs *>::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<bool>>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)(a1 + 16) = *a2;
  *(_QWORD *)a1 = &off_18020A4C0;
  return a1;
}
