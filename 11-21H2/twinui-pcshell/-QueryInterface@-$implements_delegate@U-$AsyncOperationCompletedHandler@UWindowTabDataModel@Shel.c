/*
 * XREFs of ?QueryInterface@?$implements_delegate@U?$AsyncOperationCompletedHandler@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@winrt@@Ushared_type@?1???$wait_for_completed@U?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@4@YA@AEBU?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@234@I@Z@@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x180040A10
 * Callers:
 *     <none>
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800F96D0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall _QueryInterface___implements_delegate_U__AsyncOperationCompletedHandler_UWindowTabDataModel_Shell_UI_Internal_Windows_winrt___Foundation_Windows_winrt__Ushared_type__1____wait_for_completed_U__IAsyncOperation_UWindowTabDataModel_Shell_UI_Internal_Windows_winrt___Foundation_Windows_winrt___impl_4_YA_AEBU__IAsyncOperation_UWindowTabDataModel_Shell_UI_Internal_Windows_winrt___234_I_Z__impl_winrt__UEAAHAEBUguid_3_PEAPEAX_Z(
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
                          &winrt::impl::guid_v<winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Internal::UI::Shell::WindowTabDataModel>>,
                          a3,
                          a1)
    || (unsigned __int8)winrt::operator==(v3, &winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>, v4, v5)
    || (unsigned __int8)winrt::operator==(v6, &winrt::impl::guid_v<winrt::impl::IAgileObject>, v4, v5) )
  {
    *v4 = v5;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 24), 1u);
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
