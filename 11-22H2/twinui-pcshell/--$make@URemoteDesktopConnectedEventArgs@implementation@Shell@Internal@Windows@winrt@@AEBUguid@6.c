/*
 * XREFs of ??$make@URemoteDesktopConnectedEventArgs@implementation@Shell@Internal@Windows@winrt@@AEBUguid@6@@winrt@@YA?A_PAEBUguid@0@@Z @ 0x18071F40C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_1908bf4dcb0a72ead8215abd107bde15__void_winrt::guid_const_&_::_Do_call @ 0x18027C6D0 (std--_Func_impl_no_alloc__lambda_1908bf4dcb0a72ead8215abd107bde15__void_winrt--guid_ea_18027C6D0.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::make<winrt::Windows::Internal::Shell::implementation::RemoteDesktopConnectedEventArgs,winrt::guid const &>(
        _QWORD *a1,
        __int128 *a2)
{
  __int128 v4; // xmm0
  _QWORD *result; // rax
  char *v6; // [rsp+40h] [rbp+8h]

  v6 = (char *)operator new(0x28uLL);
  *((_QWORD *)v6 + 2) = &winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RemoteDesktopConnectedEventArgs,winrt::Windows::Internal::Shell::IRemoteDesktopConnectedEventArgs>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_QWORD *)v6 + 1) = 1LL;
  *(_QWORD *)v6 = &winrt::Windows::Internal::Shell::implementation::RemoteDesktopConnectedEventArgs::`vftable';
  v4 = *a2;
  *(_QWORD *)v6 = &winrt::Windows::Internal::Shell::implementation::RemoteDesktopConnectedEventArgs::`vftable';
  *(_OWORD *)(v6 + 24) = v4;
  result = a1;
  *a1 = v6 + 16;
  return result;
}
