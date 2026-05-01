/*
 * XREFs of ?QueryInterface@?$implements_delegate@U?$TypedEventHandler@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@UWindowTabDataModelActiveTabChangedEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_bd0895ad6d8416644174f66c64660633_@@@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800409B0
 * Callers:
 *     <none>
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800F96D0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::WindowTabDataModel,winrt::Windows::Internal::UI::Shell::WindowTabDataModelActiveTabChangedEventArgs>,_lambda_bd0895ad6d8416644174f66c64660633_>::QueryInterface(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // rcx
  _QWORD *v9; // r8
  __int64 v10; // r9

  if ( (unsigned __int8)winrt::operator==(
                          a2,
                          &winrt::impl::guid_v<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::WindowTabDataModel,winrt::Windows::Internal::UI::Shell::WindowTabDataModelActiveTabChangedEventArgs>>,
                          a3,
                          a1)
    || (unsigned __int8)winrt::operator==(v3, &winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>, v4, v5)
    || (unsigned __int8)winrt::operator==(v6, &winrt::impl::guid_v<winrt::impl::IAgileObject>, v4, v5) )
  {
    *v4 = v5;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 32), 1u);
    return 0LL;
  }
  else if ( (unsigned __int8)winrt::operator==(v7, &winrt::impl::guid_v<winrt::impl::IMarshal>, v4, v5) )
  {
    return winrt::impl::make_marshaler(v10, v9);
  }
  else
  {
    *v9 = 0LL;
    return 2147500034LL;
  }
}
