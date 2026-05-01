/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::Foundation::Point___lambda_057b330fc7f4aad09d5892332e220aec___::Invoke @ 0x180227A10
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801CF0C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?release_ref@?$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ @ 0x1802E917A (-release_ref@-$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ.c)
 *     ?get@?$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ @ 0x1806574F8 (-get@-$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ.c)
 *     ?HasThreadAccess@?$consume_Windows_System_IDispatcherQueue2@UDispatcherQueue@System@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18067ABBC (-HasThreadAccess@-$consume_Windows_System_IDispatcherQueue2@UDispatcherQueue@System@Windows@winr.c)
 *     ?ShowSnapBarOnMonitor@SnapFlyoutHost@@AEAAXUPoint@Foundation@Windows@winrt@@@Z @ 0x18067C3C8 (-ShowSnapBarOnMonitor@SnapFlyoutHost@@AEAAXUPoint@Foundation@Windows@winrt@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::Foundation::Point___lambda_057b330fc7f4aad09d5892332e220aec___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rbx
  const char *v5; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  winrt::weak_ref<SnapFlyoutHost>::get(a1 + 8, &v8);
  try
  {
    v4 = v8;
    if ( v8 )
    {
      if ( !(unsigned __int8)winrt::impl::consume_Windows_System_IDispatcherQueue2<winrt::Windows::System::DispatcherQueue>::HasThreadAccess(v8 + 96) )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x22,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\snapflyouthost.cpp",
          v5);
      SnapFlyoutHost::ShowSnapBarOnMonitor(v4, a3);
    }
    winrt::com_ptr<SnapFlyoutHost>::release_ref(&v8);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v8);
  }
  return result;
}
