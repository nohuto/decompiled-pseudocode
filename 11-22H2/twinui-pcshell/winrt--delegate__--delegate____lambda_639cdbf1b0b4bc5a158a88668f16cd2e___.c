/*
 * XREFs of winrt::delegate__::delegate____lambda_639cdbf1b0b4bc5a158a88668f16cd2e___ @ 0x1806AA76C
 * Callers:
 *     RequestNotificationPinConsentAsync$_ResumeCoro$1 @ 0x180253800 (RequestNotificationPinConsentAsync$_ResumeCoro$1.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     winrt::impl::delegate_base_void_::delegate_base_void___lambda_639cdbf1b0b4bc5a158a88668f16cd2e___ @ 0x1806AA810 (winrt--impl--delegate_base_void_--delegate_base_void___lambda_639cdbf1b0b4bc5a158a88668f16cd2e__.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::delegate__::delegate____lambda_639cdbf1b0b4bc5a158a88668f16cd2e___(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  winrt::Windows::Foundation::IUnknown *v5; // rsi
  __int64 v6; // rax
  _QWORD v8[3]; // [rsp+20h] [rbp-28h] BYREF

  v8[2] = a2;
  v4 = *a2;
  *a2 = 0LL;
  v8[0] = v4;
  v5 = (winrt::Windows::Foundation::IUnknown *)(a2 + 1);
  v6 = a2[1];
  a2[1] = 0LL;
  v8[1] = v6;
  winrt::impl::delegate_base_void_::delegate_base_void___lambda_639cdbf1b0b4bc5a158a88668f16cd2e___(a1, v8);
  if ( *(_QWORD *)v5 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v5);
  if ( *a2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)a2);
  return a1;
}
