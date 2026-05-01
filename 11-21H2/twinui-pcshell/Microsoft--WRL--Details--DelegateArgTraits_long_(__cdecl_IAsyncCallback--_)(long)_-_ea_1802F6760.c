/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_09fb039f358b632885968f82146d58d3___1_long_::Invoke @ 0x1802F6760
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1802E26E8 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     _lambda_09fb039f358b632885968f82146d58d3_::operator() @ 0x1802F3ED8 (_lambda_09fb039f358b632885968f82146d58d3_--operator().c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long__::DelegateInvokeHelper_IAsyncCallback__lambda_09fb039f358b632885968f82146d58d3___1_long_::Invoke(
        __int64 a1)
{
  signed int v1; // eax
  unsigned int v2; // ebx

  v1 = lambda_09fb039f358b632885968f82146d58d3_::operator()(a1 + 16);
  v2 = v1;
  if ( v1 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v1);
  return v2;
}
