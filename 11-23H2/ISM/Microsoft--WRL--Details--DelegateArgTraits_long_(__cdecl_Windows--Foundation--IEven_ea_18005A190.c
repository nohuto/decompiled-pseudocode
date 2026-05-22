/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_Windows::Foundation::Internal::AggregateType_bool_unsigned_char___::_)(IInspectable___unsigned_char)_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_bool___lambda_f101df8c9ba8d1edb157401080fcbaae___1_IInspectable___unsigned_char_::Invoke @ 0x18005A190
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_f101df8c9ba8d1edb157401080fcbaae_::operator() @ 0x180059C5C (_lambda_f101df8c9ba8d1edb157401080fcbaae_--operator().c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1800C1CF8 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IEventHandler_impl_Windows::Foundation::Internal::AggregateType_bool_unsigned_char___::___IInspectable___unsigned_char__::DelegateInvokeHelper_Windows::Foundation::IEventHandler_bool___lambda_f101df8c9ba8d1edb157401080fcbaae___1_IInspectable___unsigned_char_::Invoke(
        __int64 a1,
        RTL_SRWLOCK *a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = lambda_f101df8c9ba8d1edb157401080fcbaae_::operator()((ULONG_PTR *)(a1 + 16), a2);
  v3 = v2;
  if ( v2 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v2);
  return v3;
}
