/*
 * XREFs of ?SuggestedWindowPositions@?$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult2@UWindowDragHitTestResult@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18067CE98
 * Callers:
 *     ?GetSuggestedWindowPositions@SnapFlyoutHost@@QEAA?AV?$vector@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@V?$allocator@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@std@@@std@@XZ @ 0x18067A8F8 (-GetSuggestedWindowPositions@SnapFlyoutHost@@QEAA-AV-$vector@USuggestedWindowPosition@Shell@UI@W.c)
 *     ?OnGetArrangementRects@WindowDragInputProvider@@AEAAXAEAU_WINDOW_ARRANGEMENT_INFO@@@Z @ 0x18068B7B0 (-OnGetArrangementRects@WindowDragInputProvider@@AEAAXAEAU_WINDOW_ARRANGEMENT_INFO@@@Z.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult2<winrt::WindowsUdk::UI::Shell::WindowDragHitTestResult>::SuggestedWindowPositions(
        __int64 *a1,
        __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdi
  signed int v5; // eax
  __int64 v7; // [rsp+28h] [rbp-8h] BYREF
  int v8; // [rsp+50h] [rbp+20h] BYREF
  __int64 v9; // [rsp+60h] [rbp+30h] BYREF
  __int64 v10; // [rsp+68h] [rbp+38h] BYREF

  v8 = 0;
  v7 = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    v9 = 0LL;
    (**(void (__fastcall ***)(__int64, void *, __int64 *))v3)(
      v3,
      &winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::IWindowDragHitTestResult2>,
      &v9);
    v3 = v9;
    v4 = v9;
  }
  else
  {
    v4 = 0LL;
  }
  v10 = v3;
  v5 = (*(__int64 (__fastcall **)(__int64, int *, __int64 *))(*(_QWORD *)v3 + 48LL))(v3, &v8, &v7);
  if ( v5 < 0 )
    winrt::throw_hresult(v5);
  if ( v4 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
  *(_QWORD *)a2 = v7;
  *(_DWORD *)(a2 + 8) = v8;
  return a2;
}
