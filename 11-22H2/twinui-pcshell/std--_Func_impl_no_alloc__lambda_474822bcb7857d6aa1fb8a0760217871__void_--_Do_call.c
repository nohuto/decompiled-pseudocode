/*
 * XREFs of std::_Func_impl_no_alloc__lambda_474822bcb7857d6aa1fb8a0760217871__void_::_Do_call @ 0x180073D00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_474822bcb7857d6aa1fb8a0760217871__void_::_Do_call(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  LOBYTE(a2) = *(_DWORD *)(*(_QWORD *)(v2 + 16) + 112LL) == 0;
  return winrt::impl::consume_Windows_UI_Internal_Input_IShellGesturesController<winrt::Windows::UI::Internal::Input::IShellGesturesController>::TouchGesturesEnabled(
           v2 + 24,
           a2);
}
