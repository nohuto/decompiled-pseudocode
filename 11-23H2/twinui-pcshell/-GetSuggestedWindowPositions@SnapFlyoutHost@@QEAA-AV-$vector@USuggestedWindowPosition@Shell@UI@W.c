/*
 * XREFs of ?GetSuggestedWindowPositions@SnapFlyoutHost@@QEAA?AV?$vector@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@V?$allocator@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@std@@@std@@XZ @ 0x18067A8F8
 * Callers:
 *     ?OnWindowArrangementEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUWindowArrangementEventArgs@3456@@Z @ 0x1806623F0 (-OnWindowArrangementEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagemen.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ??0?$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@AEBU0123@@Z @ 0x180190BA0 (--0-$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@Q.c)
 *     CoTaskMemFree_0 @ 0x1801C7A7D (CoTaskMemFree_0.c)
 *     ??_GRegistrationData@Shell@Internal@Windows@winrt@@QEAAPEAXI@Z @ 0x1802EA000 (--_GRegistrationData@Shell@Internal@Windows@winrt@@QEAAPEAXI@Z.c)
 *     ??$_Emplace_reallocate@AEBUSuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@?$vector@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@V?$allocator@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@std@@@std@@QEAAPEAUSuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@QEAU23456@AEBU23456@@Z @ 0x180678B94 (--$_Emplace_reallocate@AEBUSuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@-$vector@USuggest.c)
 *     ?SuggestedWindowPositions@?$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult2@UWindowDragHitTestResult@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18067CE98 (-SuggestedWindowPositions@-$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult2@UWindowDragHit.c)
 *     ?WindowAction@?$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18067D1AC (-WindowAction@-$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult@S.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall SnapFlyoutHost::GetSuggestedWindowPositions(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbx
  winrt::Windows::Internal::Shell::RegistrationData *v4; // r14
  char *v5; // rbp
  char *v6; // rdi
  winrt::Windows::Internal::Shell::RegistrationData *i; // rdi
  LPVOID pv; // [rsp+28h] [rbp-30h] BYREF
  unsigned int v10; // [rsp+30h] [rbp-28h]
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF
  __int64 *v12; // [rsp+68h] [rbp+10h]

  v12 = a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 112) + 56LL);
  v3 = v11;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v11);
  if ( v3
    && (unsigned int)winrt::impl::consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult<winrt::WindowsUdk::UI::Shell::IWindowDragHitTestResult>::WindowAction(&v11) == 1 )
  {
    winrt::impl::consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult2<winrt::WindowsUdk::UI::Shell::WindowDragHitTestResult>::SuggestedWindowPositions(
      &v11,
      &pv);
    v4 = (winrt::Windows::Internal::Shell::RegistrationData *)pv;
    v5 = (char *)pv + 8 * v10;
    v6 = (char *)pv;
    if ( pv != v5 )
    {
      do
      {
        if ( a2[1] == a2[2] )
        {
          std::vector<winrt::WindowsUdk::UI::Shell::SuggestedWindowPosition>::_Emplace_reallocate<winrt::WindowsUdk::UI::Shell::SuggestedWindowPosition const &>(
            a2,
            a2[1],
            v6);
        }
        else
        {
          winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>(
            (winrt::Windows::Foundation::IUnknown *)a2[1],
            v6);
          a2[1] += 8LL;
        }
        v6 += 8;
      }
      while ( v6 != v5 );
    }
    if ( v4 )
    {
      for ( i = v4;
            i != (winrt::Windows::Internal::Shell::RegistrationData *)v5;
            i = (winrt::Windows::Internal::Shell::RegistrationData *)((char *)i + 8) )
      {
        winrt::Windows::Internal::Shell::RegistrationData::`scalar deleting destructor'(i);
      }
      CoTaskMemFree_0(v4);
    }
  }
  if ( v3 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v11);
  return a2;
}
