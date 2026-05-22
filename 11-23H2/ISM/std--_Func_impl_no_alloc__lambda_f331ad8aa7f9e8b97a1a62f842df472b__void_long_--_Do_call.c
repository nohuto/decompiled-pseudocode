/*
 * XREFs of std::_Func_impl_no_alloc__lambda_f331ad8aa7f9e8b97a1a62f842df472b__void_long_::_Do_call @ 0x18018CD00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_f331ad8aa7f9e8b97a1a62f842df472b__void_long_::_Do_call(
        __int64 a1,
        unsigned int *a2)
{
  __int64 *v2; // rbx

  v2 = (__int64 *)(a1 + 16);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(*(_QWORD *)(a1 + 16), *a2);
  return Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(v2);
}
