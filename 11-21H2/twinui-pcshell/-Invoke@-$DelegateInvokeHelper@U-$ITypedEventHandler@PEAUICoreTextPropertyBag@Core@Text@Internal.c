/*
 * XREFs of ?Invoke@?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAUICoreTextPropertyBag@Core@Text@Internal@UI@Windows@@PEAVCoreTextPropertyBagPropertyValueChangedEventArgs@23456@@Foundation@Windows@@V_lambda_2b62bc24e652366c6f0acb1c62483271_@@$0?0PEAUICoreTextPropertyBag@Core@Text@Internal@UI@3@PEAUICoreTextPropertyBagPropertyValueChangedEventArgs@67893@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUICoreTextPropertyBag@Core@Text@Internal@UI@Windows@@U?$AggregateType@PEAVCoreTextPropertyBagPropertyValueChangedEventArgs@Core@Text@Internal@UI@Windows@@PEAUICoreTextPropertyBagPropertyValueChangedEventArgs@23456@@4Foundation@6@@Foundation@Windows@@EAAJPEAUICoreTextPropertyBag@Core@Text@Internal@UI@3@PEAUICoreTextPropertyBagPropertyValueChangedEventArgs@56783@@Z@Details@WRL@Microsoft@@UEAAJPEAUICoreTextPropertyBag@Core@Text@Internal@UI@Windows@@PEAUICoreTextPropertyBagPropertyValueChangedEventArgs@789UI@Windows@@@Z @ 0x180471CC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1802E26E8 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::UI::Internal::Text::Core::ICoreTextPropertyBag *,Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreTextPropertyBagPropertyValueChangedEventArgs *,Windows::UI::Internal::Text::Core::ICoreTextPropertyBagPropertyValueChangedEventArgs *>>::*)(Windows::UI::Internal::Text::Core::ICoreTextPropertyBag *,Windows::UI::Internal::Text::Core::ICoreTextPropertyBagPropertyValueChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::ICoreTextPropertyBag *,Windows::UI::Internal::Text::Core::CoreTextPropertyBagPropertyValueChangedEventArgs *>,_lambda_2b62bc24e652366c6f0acb1c62483271_,-1,Windows::UI::Internal::Text::Core::ICoreTextPropertyBag *,Windows::UI::Internal::Text::Core::ICoreTextPropertyBagPropertyValueChangedEventArgs *>::Invoke(
        __int64 a1)
{
  signed int v1; // eax
  unsigned int v2; // ebx

  v1 = (*(__int64 (__fastcall **)(_QWORD))(a1 + 24))(*(_QWORD *)(a1 + 16) + *(int *)(a1 + 32));
  v2 = v1;
  if ( v1 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v1);
  return v2;
}
