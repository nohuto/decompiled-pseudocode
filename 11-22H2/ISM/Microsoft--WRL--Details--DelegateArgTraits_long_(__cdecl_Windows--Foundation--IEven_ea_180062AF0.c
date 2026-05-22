/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_Windows::Foundation::Internal::AggregateType_bool_unsigned_char___::_)(IInspectable___unsigned_char)_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_bool___lambda_48f152b7375fc54a16cdd7806e5a908e___1_IInspectable___unsigned_char_::Invoke @ 0x180062AF0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_48f152b7375fc54a16cdd7806e5a908e_::operator() @ 0x180062238 (_lambda_48f152b7375fc54a16cdd7806e5a908e_--operator().c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1800D2008 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IEventHandler_impl_Windows::Foundation::Internal::AggregateType_bool_unsigned_char___::___IInspectable___unsigned_char__::DelegateInvokeHelper_Windows::Foundation::IEventHandler_bool___lambda_48f152b7375fc54a16cdd7806e5a908e___1_IInspectable___unsigned_char_::Invoke(
        __int64 a1,
        __int64 a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = lambda_48f152b7375fc54a16cdd7806e5a908e_::operator()((ULONG_PTR *)(a1 + 16), a2);
  v3 = v2;
  if ( v2 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v2);
  return v3;
}
