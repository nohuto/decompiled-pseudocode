/*
 * XREFs of ?Invoke@?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAVCoreKeyboardManagerInputAppRequestedHideEventArgs@23456@@Foundation@Windows@@V_lambda_c2bec44d1e437974f3d759c9d6831c42_@@$0?0PEAUICoreKeyboardManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardManagerInputAppRequestedHideEventArgs@67893@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManager@23456@@Internal@Foundation@Windows@@U?$AggregateType@PEAVCoreKeyboardManagerInputAppRequestedHideEventArgs@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedHideEventArgs@23456@@234@@Foundation@Windows@@EAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardManagerInputAppRequestedHideEventArgs@56783@@Z@Details@WRL@Microsoft@@UEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedHideEventArgs@789UI@Windows@@@Z @ 0x180471D60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1802E26E8 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManagerInputAppRequestedHideEventArgs *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedHideEventArgs *>>::*)(Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedHideEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerInputAppRequestedHideEventArgs *>,_lambda_c2bec44d1e437974f3d759c9d6831c42_,-1,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedHideEventArgs *>::Invoke(
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
