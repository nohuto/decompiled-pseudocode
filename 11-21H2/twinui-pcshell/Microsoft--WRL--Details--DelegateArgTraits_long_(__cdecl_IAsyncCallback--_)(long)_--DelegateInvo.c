/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_ed86ba92a0a36c90dc1eb653ea3f75c8___1_long_::Invoke @ 0x1800277F0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_63662cd9376551e4950848a042514280_::operator() @ 0x18002783C (_lambda_63662cd9376551e4950848a042514280_--operator().c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1802E26E8 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long__::DelegateInvokeHelper_IAsyncCallback__lambda_ed86ba92a0a36c90dc1eb653ea3f75c8___1_long_::Invoke(
        __int64 a1)
{
  _QWORD *v1; // rdi
  unsigned int v2; // ebx
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = (_QWORD *)(a1 + 24);
  v4[0] = a1 + 24;
  v4[1] = a1 + 16;
  v4[2] = a1 + 32;
  v2 = lambda_63662cd9376551e4950848a042514280_::operator()(v4);
  if ( (v2 & 0x80000000) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v1 + 96LL))(*v1, v2);
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v2);
  }
  return v2;
}
