/*
 * XREFs of ??0?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAUICoreTextPropertyBag@Core@Text@Internal@UI@Windows@@PEAVCoreTextPropertyBagPropertyValueChangedEventArgs@23456@@Foundation@Windows@@V_lambda_2b62bc24e652366c6f0acb1c62483271_@@$0?0PEAUICoreTextPropertyBag@Core@Text@Internal@UI@3@PEAUICoreTextPropertyBagPropertyValueChangedEventArgs@67893@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUICoreTextPropertyBag@Core@Text@Internal@UI@Windows@@U?$AggregateType@PEAVCoreTextPropertyBagPropertyValueChangedEventArgs@Core@Text@Internal@UI@Windows@@PEAUICoreTextPropertyBagPropertyValueChangedEventArgs@23456@@4Foundation@6@@Foundation@Windows@@EAAJPEAUICoreTextPropertyBag@Core@Text@Internal@UI@3@PEAUICoreTextPropertyBagPropertyValueChangedEventArgs@56783@@Z@Details@WRL@Microsoft@@QEAA@$$QEAV_lambda_2b62bc24e652366c6f0acb1c62483271_@@@Z @ 0x1800BB740
 * Callers:
 *     ?AddEventHandlersFromCoreKeyboardManager@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1800B9E58 (-AddEventHandlersFromCoreKeyboardManager@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::UI::Internal::Text::Core::ICoreTextPropertyBag *,Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreTextPropertyBagPropertyValueChangedEventArgs *,Windows::UI::Internal::Text::Core::ICoreTextPropertyBagPropertyValueChangedEventArgs *>>::*)(Windows::UI::Internal::Text::Core::ICoreTextPropertyBag *,Windows::UI::Internal::Text::Core::ICoreTextPropertyBagPropertyValueChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::ICoreTextPropertyBag *,Windows::UI::Internal::Text::Core::CoreTextPropertyBagPropertyValueChangedEventArgs *>,_lambda_2b62bc24e652366c6f0acb1c62483271_,-1,Windows::UI::Internal::Text::Core::ICoreTextPropertyBag *,Windows::UI::Internal::Text::Core::ICoreTextPropertyBagPropertyValueChangedEventArgs *>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::ICoreTextPropertyBag *,Windows::UI::Internal::Text::Core::CoreTextPropertyBagPropertyValueChangedEventArgs *>,_lambda_2b62bc24e652366c6f0acb1c62483271_,-1,Windows::UI::Internal::Text::Core::ICoreTextPropertyBag *,Windows::UI::Internal::Text::Core::ICoreTextPropertyBagPropertyValueChangedEventArgs *>(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::ICoreTextPropertyBag *,Windows::UI::Internal::Text::Core::CoreTextPropertyBagPropertyValueChangedEventArgs *>>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_OWORD *)(a1 + 16) = *(_OWORD *)a2;
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)a1 = &Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::UI::Internal::Text::Core::ICoreTextPropertyBag *,Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreTextPropertyBagPropertyValueChangedEventArgs *,Windows::UI::Internal::Text::Core::ICoreTextPropertyBagPropertyValueChangedEventArgs *>>::*)(Windows::UI::Internal::Text::Core::ICoreTextPropertyBag *,Windows::UI::Internal::Text::Core::ICoreTextPropertyBagPropertyValueChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::ICoreTextPropertyBag *,Windows::UI::Internal::Text::Core::CoreTextPropertyBagPropertyValueChangedEventArgs *>,_lambda_2b62bc24e652366c6f0acb1c62483271_,-1,Windows::UI::Internal::Text::Core::ICoreTextPropertyBag *,Windows::UI::Internal::Text::Core::ICoreTextPropertyBagPropertyValueChangedEventArgs *>::`vftable';
  return a1;
}
