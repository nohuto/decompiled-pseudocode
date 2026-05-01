/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_IInspectable___::_)(IInspectable___IInspectable__)_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____lambda_01e36ce14ec0819db01b791ce79c1b63___1_IInspectable___IInspectable___::_DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____lambda_01e36ce14ec0819db01b791ce79c1b63___1_IInspectable___IInspectable___ @ 0x1801D7910
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6616119d366343af4599591a716fcf3c___::_scalar_deleting_destructor_ @ 0x1801D7ED0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6616119d366343af4599591a716fcf3c___--_scala.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_910012da7138534dbba8c9356fab0dd8___::_scalar_deleting_destructor_ @ 0x1801D7F10 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_910012da7138534dbba8c9356fab0dd8___--_scala.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_IInspectable___::_)(IInspectable___IInspectable__)_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____lambda_01e36ce14ec0819db01b791ce79c1b63___1_IInspectable___IInspectable___::_scalar_deleting_destructor_ @ 0x1801E9EB0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IEven_ea_1801E9EB0.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs___::_)(Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____lambda_cb3ae43376446b85946ab6d3cd0c1987___1_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs___::_scalar_deleting_destructor_ @ 0x1801F1AD0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1801F1AD0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IEventHandler_impl_IInspectable___::___IInspectable___IInspectable____::DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____lambda_01e36ce14ec0819db01b791ce79c1b63___1_IInspectable___IInspectable___::_DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____lambda_01e36ce14ec0819db01b791ce79c1b63___1_IInspectable___IInspectable___(
        __int64 a1)
{
  __int64 result; // rax

  result = Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(a1 + 16));
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
