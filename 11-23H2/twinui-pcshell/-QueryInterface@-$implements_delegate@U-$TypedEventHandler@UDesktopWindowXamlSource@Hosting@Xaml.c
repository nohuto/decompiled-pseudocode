/*
 * XREFs of ?QueryInterface@?$implements_delegate@U?$TypedEventHandler@UDesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@UDesktopWindowXamlSourceTakeFocusRequestedEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_24f9a2f893cdb50a379e319867e5c1aa_@@@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800693C0
 * Callers:
 *     <none>
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSource,winrt::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSourceTakeFocusRequestedEventArgs>,_lambda_24f9a2f893cdb50a379e319867e5c1aa_>::QueryInterface(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // rcx
  _QWORD *v7; // r8
  __int64 v8; // r9

  if ( (unsigned __int8)winrt::operator==(
                          a2,
                          &winrt::impl::guid_v<winrt::Windows::Foundation::TypedEventHandler<winrt::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSource,winrt::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSourceTakeFocusRequestedEventArgs>>)
    || (unsigned __int8)winrt::operator==(v2, &winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>)
    || (unsigned __int8)winrt::operator==(v5, &winrt::impl::guid_v<winrt::impl::IAgileObject>) )
  {
    *v3 = v4;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 32), 1u);
    return 0LL;
  }
  else if ( (unsigned __int8)winrt::operator==(v6, &winrt::impl::guid_v<winrt::impl::IMarshal>) )
  {
    return winrt::impl::make_marshaler(v8, v7);
  }
  else
  {
    *v7 = 0LL;
    return 2147500034LL;
  }
}
