/*
 * XREFs of ?QueryInterface@?$implements_delegate@U?$TypedEventHandler@UWindowTabView@Shell@UI@Internal@Windows@winrt@@UWindowTabViewPropertyChangedEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_183baf27b090b4cfecd741efea205505_@@@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x18006F870
 * Callers:
 *     <none>
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::WindowTabView,winrt::Windows::Internal::UI::Shell::WindowTabViewPropertyChangedEventArgs>,_lambda_183baf27b090b4cfecd741efea205505_>::QueryInterface(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // rcx
  _QWORD *v8; // r8
  __int64 v9; // r9

  if ( (unsigned __int8)winrt::operator==(
                          a2,
                          &winrt::impl::guid_v<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::WindowTabView,winrt::Windows::Internal::UI::Shell::WindowTabViewPropertyChangedEventArgs>>)
    || (unsigned __int8)winrt::operator==(v2, &winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>)
    || (unsigned __int8)winrt::operator==(v5, &winrt::impl::guid_v<winrt::impl::IAgileObject>) )
  {
    *v3 = v4;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 32), 1u);
    return 0LL;
  }
  else if ( (unsigned __int8)winrt::operator==(v6, &winrt::impl::guid_v<winrt::impl::IMarshal>) )
  {
    return winrt::impl::make_marshaler(v9, v8);
  }
  else
  {
    *v8 = 0LL;
    return 2147500034LL;
  }
}
