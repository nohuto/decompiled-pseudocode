/*
 * XREFs of ?MsgWindowWndProc@WindowDragInputProvider@@CA_JPEAUHWND__@@I_K_J@Z @ 0x18068B480
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1?DestroyWindow@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHWND__@@@Z @ 0x18004418C (-reset@-$unique_storage@U-$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1-DestroyWindow@@YAH0@ZU-$in.c)
 *     ?decrement_strong@?$weak_ref@$00$00@impl@winrt@@QEAAIXZ @ 0x1800D8D84 (-decrement_strong@-$weak_ref@$00$00@impl@winrt@@QEAAIXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801CF0C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?AddRef@?$root_implements@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUDashboardManager@implementation@Shell@Internal@34@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@QEAAIXZ @ 0x1801F9E08 (-AddRef@-$root_implements@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OnWindowArrangementMessage@WindowDragInputProvider@@AEAA_JI_K_J@Z @ 0x18068BB10 (-OnWindowArrangementMessage@WindowDragInputProvider@@AEAA_JI_K_J@Z.c)
 */

// Hidden C++ exception states: #wind=1
LRESULT __fastcall WindowDragInputProvider::MsgWindowWndProc(HWND a1, UINT a2, WPARAM a3, LONG_PTR *a4)
{
  LONG_PTR WindowLongPtrW; // rax
  unsigned __int64 v9; // r8
  volatile signed __int64 *v10; // rbx
  __int64 v11; // rdi
  signed __int64 v12; // rax
  int v13; // ecx
  signed __int64 v14; // rtt
  LONG_PTR v15; // rdi
  const char *v16; // r9
  LONG_PTR v17; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a2 == 129 )
  {
    v15 = *a4;
    if ( *a4 )
    {
      SetWindowLongPtrW(a1, -21, *a4);
      if ( *(_QWORD *)(v15 + 24) )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0xD4,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\windowdraginputprovider.cpp",
          v16);
      wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>::reset(
        (HWND *)(v15 + 24),
        a1);
      return 1LL;
    }
    return 0LL;
  }
  if ( a2 == 130 )
  {
    SetWindowLongPtrW(a1, -21, 0LL);
    return 0LL;
  }
  if ( a2 - 833 >= 2 )
    return DefWindowProcW(a1, a2, a3, (LPARAM)a4);
  WindowLongPtrW = GetWindowLongPtrW(a1, -21);
  v10 = (volatile signed __int64 *)WindowLongPtrW;
  v17 = WindowLongPtrW;
  if ( WindowLongPtrW )
    winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::DashboardManager *>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::AddRef(WindowLongPtrW);
  v11 = WindowDragInputProvider::OnWindowArrangementMessage((WindowDragInputProvider *)v10, a2, v9, (__int64)a4);
  if ( v10 )
  {
    v12 = *((_QWORD *)v10 + 1);
    while ( v12 >= 0 )
    {
      v13 = v12 - 1;
      v14 = v12;
      v12 = _InterlockedCompareExchange64(v10 + 1, v12 - 1, v12);
      if ( v14 == v12 )
        goto LABEL_13;
    }
    v13 = winrt::impl::weak_ref<1,1>::decrement_strong((volatile signed __int32 *)(2 * v12));
LABEL_13:
    if ( !v13 )
    {
      _InterlockedExchange64(v10 + 1, 1LL);
      (*(void (__fastcall **)(LONG_PTR, __int64))(*(_QWORD *)v17 + 8LL))(v17, 1LL);
    }
  }
  return v11;
}
