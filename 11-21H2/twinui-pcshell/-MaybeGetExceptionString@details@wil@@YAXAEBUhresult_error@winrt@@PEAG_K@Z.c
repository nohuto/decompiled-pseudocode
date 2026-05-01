/*
 * XREFs of ?MaybeGetExceptionString@details@wil@@YAXAEBUhresult_error@winrt@@PEAG_K@Z @ 0x18022BE2A
 * Callers:
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$1 @ 0x180223DD1 (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$1.c)
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$7 @ 0x180223F78 (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$7.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800CA828 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F2B64 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?message@hresult_error@winrt@@QEBA?AUhstring@2@XZ @ 0x18022BE82 (-message@hresult_error@winrt@@QEBA-AUhstring@2@XZ.c)
 */

void __fastcall wil::details::MaybeGetExceptionString(
        wil::details *this,
        const struct winrt::hresult_error *a2,
        unsigned __int16 *a3)
{
  winrt::hstring *v5; // rax
  const unsigned __int16 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  volatile signed __int32 *v10; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    v5 = (winrt::hstring *)winrt::hresult_error::message(this, &v10);
    v6 = winrt::hstring::c_str(v5);
    StringCchPrintfW((unsigned __int16 *)a2, (__int64)a3, L"winrt::hresult_error: %ls", v6);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v10, v7, v8, v9);
  }
}
