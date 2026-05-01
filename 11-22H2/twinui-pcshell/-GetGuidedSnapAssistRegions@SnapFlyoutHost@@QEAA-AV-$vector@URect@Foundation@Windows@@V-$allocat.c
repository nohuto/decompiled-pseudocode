/*
 * XREFs of ?GetGuidedSnapAssistRegions@SnapFlyoutHost@@QEAA?AV?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@XZ @ 0x18067A7B4
 * Callers:
 *     ?OnWindowArrangementEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUWindowArrangementEventArgs@3456@@Z @ 0x1806623F0 (-OnWindowArrangementEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagemen.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     CoTaskMemFree_0 @ 0x1801C7A7D (CoTaskMemFree_0.c)
 *     ??$emplace_back@AEBURect@Foundation@Windows@@@?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@QEAA?A_TAEBURect@Foundation@Windows@@@Z @ 0x180678F84 (--$emplace_back@AEBURect@Foundation@Windows@@@-$vector@URect@Foundation@Windows@@V-$allocator@UR.c)
 *     ?SnapAssistPositions@?$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18067C618 (-SnapAssistPositions@-$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestR.c)
 *     ?WindowAction@?$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18067D1AC (-WindowAction@-$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult@S.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall SnapFlyoutHost::GetGuidedSnapAssistRegions(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbx
  char *v4; // rdi
  char *i; // r15
  LPVOID pv; // [rsp+28h] [rbp-28h] BYREF
  unsigned int v8; // [rsp+30h] [rbp-20h]
  __int128 v9; // [rsp+38h] [rbp-18h] BYREF
  __int64 v10; // [rsp+70h] [rbp+20h] BYREF
  _QWORD *v11; // [rsp+78h] [rbp+28h]

  v11 = a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 112) + 56LL);
  v3 = v10;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v10);
  if ( v3 )
  {
    if ( (unsigned int)winrt::impl::consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult<winrt::WindowsUdk::UI::Shell::IWindowDragHitTestResult>::WindowAction(&v10) == 1 )
    {
      winrt::impl::consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult<winrt::WindowsUdk::UI::Shell::IWindowDragHitTestResult>::SnapAssistPositions(
        &v10,
        &pv);
      v4 = (char *)pv + 16 * v8;
      for ( i = (char *)pv; i != v4; i += 16 )
      {
        v9 = *(_OWORD *)i;
        std::vector<Windows::Foundation::Rect>::emplace_back<Windows::Foundation::Rect const &>((__int64)a2, &v9);
      }
      if ( pv )
        CoTaskMemFree_0(pv);
    }
  }
  if ( v3 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
  return a2;
}
