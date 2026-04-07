/*
 * XREFs of ?MaybeGetExceptionString@details@wil@@YAXAEBUhresult_error@winrt@@PEAG_K@Z @ 0x18009C740
 * Callers:
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$1 @ 0x18009D4C3 (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$1.c)
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$7 @ 0x18009D646 (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$7.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18004CF98 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18005BE70 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x18009E2C8 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?message@hresult_error@winrt@@QEBA?AUhstring@2@XZ @ 0x18009E440 (-message@hresult_error@winrt@@QEBA-AUhstring@2@XZ.c)
 */

void __fastcall wil::details::MaybeGetExceptionString(
        wil::details *this,
        const struct winrt::hresult_error *a2,
        unsigned __int16 *a3)
{
  winrt::hstring *v5; // rax
  const unsigned __int16 *v6; // rax
  void *v7; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    v5 = (winrt::hstring *)winrt::hresult_error::message(this, &v7);
    v6 = winrt::hstring::c_str(v5);
    StringCchPrintfW((unsigned __int16 *)a2, (size_t)a3, (size_t *)L"winrt::hresult_error: %ls", v6);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v7);
  }
}
