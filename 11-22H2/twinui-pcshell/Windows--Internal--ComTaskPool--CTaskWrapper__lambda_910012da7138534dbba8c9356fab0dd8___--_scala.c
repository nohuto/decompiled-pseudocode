/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_910012da7138534dbba8c9356fab0dd8___::_scalar_deleting_destructor_ @ 0x1801D7F10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_IInspectable___::_)(IInspectable___IInspectable__)_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____lambda_01e36ce14ec0819db01b791ce79c1b63___1_IInspectable___IInspectable___::_DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____lambda_01e36ce14ec0819db01b791ce79c1b63___1_IInspectable___IInspectable___ @ 0x1801D7910 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IEventHandler_impl.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_910012da7138534dbba8c9356fab0dd8___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IEventHandler_impl_IInspectable___::___IInspectable___IInspectable____::DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____lambda_01e36ce14ec0819db01b791ce79c1b63___1_IInspectable___IInspectable___::_DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____lambda_01e36ce14ec0819db01b791ce79c1b63___1_IInspectable___IInspectable___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
