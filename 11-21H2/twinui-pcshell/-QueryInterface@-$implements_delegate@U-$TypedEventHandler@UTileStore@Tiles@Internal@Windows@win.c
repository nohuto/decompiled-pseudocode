/*
 * XREFs of ?QueryInterface@?$implements_delegate@U?$TypedEventHandler@UTileStore@Tiles@Internal@Windows@winrt@@UTileStoreChangedEventArgs@2345@@Foundation@Windows@winrt@@V_lambda_ae2144ca514bc0fccfa4c87b511bcbf7_@@@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800F8580
 * Callers:
 *     <none>
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800F96D0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Tiles::TileStore,winrt::Windows::Internal::Tiles::TileStoreChangedEventArgs>,_lambda_ae2144ca514bc0fccfa4c87b511bcbf7_>::QueryInterface(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rax
  __int64 v4; // r9
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 *v8; // r8
  __int64 v9; // r9

  v3 = *a2
     - winrt::impl::guid_v<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Tiles::TileStore,winrt::Windows::Internal::Tiles::TileStoreChangedEventArgs>>;
  v4 = a1;
  if ( *a2 == winrt::impl::guid_v<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Tiles::TileStore,winrt::Windows::Internal::Tiles::TileStoreChangedEventArgs>> )
    v3 = a2[1] + 0x3F3A9F5644C6376FLL;
  if ( !v3
    || (unsigned __int8)winrt::operator==(a2, &winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>, a3, a1)
    || (unsigned __int8)winrt::operator==(v6, &winrt::impl::guid_v<winrt::impl::IAgileObject>, a3, v4) )
  {
    *a3 = v4;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 32), 1u);
    return 0LL;
  }
  else if ( (unsigned __int8)winrt::operator==(v7, &winrt::impl::guid_v<winrt::impl::IMarshal>, a3, v4) )
  {
    return winrt::impl::make_marshaler(v9, v8);
  }
  else
  {
    *v8 = 0LL;
    return 2147500034LL;
  }
}
