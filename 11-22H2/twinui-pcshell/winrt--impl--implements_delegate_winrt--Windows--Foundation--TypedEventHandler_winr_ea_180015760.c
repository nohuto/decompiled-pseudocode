/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ViewCoordinator_winrt::WindowsUdk::UI::Shell::HideViewRequestedEventArgs___lambda_5e82962a6040908e6ed2656b2b7c60f3___::QueryInterface @ 0x180015760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ViewCoordinator_winrt::WindowsUdk::UI::Shell::HideViewRequestedEventArgs___lambda_5e82962a6040908e6ed2656b2b7c60f3___::QueryInterface(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax

  v3 = *a2
     - winrt::impl::guid_v<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::ViewCoordinator,winrt::WindowsUdk::UI::Shell::HideViewRequestedEventArgs>>;
  if ( *a2 == winrt::impl::guid_v<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::ViewCoordinator,winrt::WindowsUdk::UI::Shell::HideViewRequestedEventArgs>> )
    v3 = a2[1] - 0x1F5F3117D4D769ACLL;
  if ( !v3 )
    goto LABEL_14;
  v4 = *a2 - winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>;
  if ( *a2 == winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown> )
    v4 = a2[1] - 0x46000000000000C0LL;
  if ( !v4 )
    goto LABEL_14;
  v5 = *a2 - winrt::impl::guid_v<winrt::impl::IAgileObject>;
  if ( *a2 == winrt::impl::guid_v<winrt::impl::IAgileObject> )
    v5 = a2[1] + 0x6FA470359B110040LL;
  if ( v5 )
  {
    v6 = *a2 - winrt::impl::guid_v<winrt::impl::IMarshal>;
    if ( *a2 == winrt::impl::guid_v<winrt::impl::IMarshal> )
      v6 = a2[1] - 0x46000000000000C0LL;
    if ( v6 )
    {
      *a3 = 0LL;
      return 2147500034LL;
    }
    else
    {
      return winrt::impl::make_marshaler(a1, a3);
    }
  }
  else
  {
LABEL_14:
    *a3 = a1;
    _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 24), 1u);
    return 0LL;
  }
}
