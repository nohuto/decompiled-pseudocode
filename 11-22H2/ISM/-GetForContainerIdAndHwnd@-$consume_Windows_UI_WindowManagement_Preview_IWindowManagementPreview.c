/*
 * XREFs of ?GetForContainerIdAndHwnd@?$consume_Windows_UI_WindowManagement_Preview_IWindowManagementPreviewStatics2@UIWindowManagementPreviewStatics2@Preview@WindowManagement@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUguid@3@_K@Z @ 0x180117544
 * Callers:
 *     ?GetProxyWindow@ViewHierarchyWithWindowManager@@QEAAII@Z @ 0x180117C60 (-GetProxyWindow@ViewHierarchyWithWindowManager@@QEAAII@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800ACD6C (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_UI_WindowManagement_Preview_IWindowManagementPreviewStatics2<winrt::Windows::UI::WindowManagement::Preview::IWindowManagementPreviewStatics2>::GetForContainerIdAndHwnd(
        __int64 **a1,
        _QWORD *a2,
        __int128 *a3,
        __int64 a4)
{
  __int64 *v5; // rcx
  __int64 v6; // rax
  signed int v7; // eax
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF

  *a2 = 0LL;
  v5 = *a1;
  v6 = *v5;
  v9 = *a3;
  v7 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, __int64, _QWORD *))(v6 + 48))(v5, &v9, a4, a2);
  if ( v7 < 0 )
    winrt::throw_hresult(v7);
  return a2;
}
