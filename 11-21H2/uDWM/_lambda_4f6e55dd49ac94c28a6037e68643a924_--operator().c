/*
 * XREFs of _lambda_4f6e55dd49ac94c28a6037e68643a924_::operator() @ 0x180007A04
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_4f6e55dd49ac94c28a6037e68643a924__long_::_Do_call @ 0x180008D50 (std--_Func_impl_no_alloc__lambda_4f6e55dd49ac94c28a6037e68643a924__long_--_Do_call.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x180007AB4 (-unconditional_release_ref@-$com_ptr@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@wi.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D3CDC (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_4f6e55dd49ac94c28a6037e68643a924_::operator()(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  int v5; // eax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v1 = *a1;
  if ( v1 )
  {
    v7 = 0LL;
    (*(void (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v1 + 24LL))(
      v1,
      &winrt::impl::guid_v<winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>,
      &v7);
    v2 = v7;
    if ( v7 )
      v2 = v7 - 8;
    v7 = 0LL;
    v3 = v2;
    v4 = v2;
  }
  else
  {
    v2 = 0LL;
    v3 = 0LL;
    v4 = 0LL;
  }
  v8 = v2;
  if ( v3 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 40) + 24LL))(*(_QWORD *)(v2 + 40));
    if ( v5 < 0 )
      winrt::throw_hresult((unsigned int)v5);
  }
  if ( v4 )
    winrt::com_ptr<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>::unconditional_release_ref(&v8);
  return 0LL;
}
