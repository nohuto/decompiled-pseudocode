/*
 * XREFs of ?QueryInterface@?$implements_delegate@U?$AsyncOperationCompletedHandler@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@winrt@@Ushared_type@?1???$wait_for_completed@U?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@4@YA?A_PAEBU?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@234@I@Z@@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x18006F990
 * Callers:
 *     <none>
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall _QueryInterface___implements_delegate_U__AsyncOperationCompletedHandler_UWindowTabDataModel_Shell_UI_Internal_Windows_winrt___Foundation_Windows_winrt__Ushared_type__1____wait_for_completed_U__IAsyncOperation_UWindowTabDataModel_Shell_UI_Internal_Windows_winrt___Foundation_Windows_winrt___impl_4_YA_A_PAEBU__IAsyncOperation_UWindowTabDataModel_Shell_UI_Internal_Windows_winrt___234_I_Z__impl_winrt__UEAAHAEBUguid_3_PEAPEAX_Z(
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
                          &winrt::impl::guid_v<winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Internal::UI::Shell::WindowTabDataModel>>)
    || (unsigned __int8)winrt::operator==(v2, &winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>)
    || (unsigned __int8)winrt::operator==(v5, &winrt::impl::guid_v<winrt::impl::IAgileObject>) )
  {
    *v3 = v4;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 24), 1u);
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
