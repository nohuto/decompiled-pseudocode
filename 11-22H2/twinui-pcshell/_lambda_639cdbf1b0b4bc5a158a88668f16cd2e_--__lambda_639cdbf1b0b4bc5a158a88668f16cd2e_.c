/*
 * XREFs of _lambda_639cdbf1b0b4bc5a158a88668f16cd2e_::__lambda_639cdbf1b0b4bc5a158a88668f16cd2e_ @ 0x1806AB4DC
 * Callers:
 *     _winrt::delegate__::delegate____lambda_639cdbf1b0b4bc5a158a88668f16cd2e____::_1_::dtor$0 @ 0x1806AA7FB (_winrt--delegate__--delegate____lambda_639cdbf1b0b4bc5a158a88668f16cd2e____--_1_--dtor$0.c)
 *     _winrt::impl::delegate_base_void_::delegate_base_void___lambda_639cdbf1b0b4bc5a158a88668f16cd2e____::_1_::dtor$0 @ 0x1806AA8BC (_winrt--impl--delegate_base_void_--delegate_base_void___lambda_639cdbf1b0b4bc5a158a88668f16cd2e_.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

void __fastcall lambda_639cdbf1b0b4bc5a158a88668f16cd2e_::__lambda_639cdbf1b0b4bc5a158a88668f16cd2e_(
        winrt::Windows::Foundation::IUnknown *this)
{
  winrt::Windows::Foundation::IUnknown *v2; // rcx

  v2 = (winrt::Windows::Foundation::IUnknown *)((char *)this + 8);
  if ( *(_QWORD *)v2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v2);
  if ( *(_QWORD *)this )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(this);
}
