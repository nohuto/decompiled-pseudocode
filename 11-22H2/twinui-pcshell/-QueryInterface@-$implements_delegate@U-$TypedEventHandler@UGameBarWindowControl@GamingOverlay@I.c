/*
 * XREFs of ?QueryInterface@?$implements_delegate@U?$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@Foundation@Windows@winrt@@V_lambda_0f62b1f7ed7b6146855d7acf47befb77_@@@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x180410F90
 * Callers:
 *     <none>
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::GamingOverlay::GameBarWindowControl,enum winrt::Windows::Internal::GamingOverlay::GameBarWindowState>,_lambda_0f62b1f7ed7b6146855d7acf47befb77_>::QueryInterface(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r9
  _QWORD *v5; // rcx
  _QWORD *v6; // rcx
  _QWORD *v7; // r8
  __int64 v8; // r9

  if ( winrt::operator==(
         a2,
         winrt::impl::guid_v<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::GamingOverlay::GameBarWindowControl,enum winrt::Windows::Internal::GamingOverlay::GameBarWindowState>>)
    || winrt::operator==(v2, &winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>)
    || winrt::operator==(v5, &winrt::impl::guid_v<winrt::impl::IAgileObject>) )
  {
    *v3 = v4;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 16), 1u);
    return 0LL;
  }
  else if ( winrt::operator==(v6, &winrt::impl::guid_v<winrt::impl::IMarshal>) )
  {
    return winrt::impl::make_marshaler(v8, v7);
  }
  else
  {
    *v7 = 0LL;
    return 2147500034LL;
  }
}
