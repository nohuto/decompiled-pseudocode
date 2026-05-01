/*
 * XREFs of winrt::impl::delegate_base_void_::delegate_base_void___lambda_639cdbf1b0b4bc5a158a88668f16cd2e___ @ 0x1806AA810
 * Callers:
 *     winrt::delegate__::delegate____lambda_639cdbf1b0b4bc5a158a88668f16cd2e___ @ 0x1806AA76C (winrt--delegate__--delegate____lambda_639cdbf1b0b4bc5a158a88668f16cd2e___.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::delegate_base_void_::delegate_base_void___lambda_639cdbf1b0b4bc5a158a88668f16cd2e___(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  _QWORD *v7; // [rsp+28h] [rbp-20h]

  v7 = operator new(0x20uLL);
  v4 = *a2;
  *a2 = 0LL;
  v7[1] = v4;
  v5 = a2[1];
  a2[1] = 0LL;
  v7[2] = v5;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *v7 = off_1807F10D8;
  *((_DWORD *)v7 + 6) = 1;
  *a1 = v7;
  if ( a2[1] )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)(a2 + 1));
  if ( *a2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)a2);
  return a1;
}
