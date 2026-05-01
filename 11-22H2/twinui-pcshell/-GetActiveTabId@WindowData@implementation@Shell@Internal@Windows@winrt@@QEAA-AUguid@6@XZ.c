/*
 * XREFs of ?GetActiveTabId@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA?AUguid@6@XZ @ 0x180639C74
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp$_ResumeCoro$1 @ 0x18021A120 (winrt--Windows--Internal--Shell--implementation--WindowTabHost--DelayedUpdateActiva_ea_18021A120.c)
 * Callees:
 *     ?Id@?$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800339A0 (-Id@-$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal@Windows.c)
 *     ?ActiveTab@?$consume_Windows_Internal_UI_Shell_IWindowTabDataModel@UIWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180033CF8 (-ActiveTab@-$consume_Windows_Internal_UI_Shell_IWindowTabDataModel@UIWindowTabDataModel@Shell@UI.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800D5B1C (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?at@?$unordered_map@Uguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@9@V?$allocator@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@@9@@std@@QEAAAEAUWindowTabView@Shell@UI@Internal@Windows@winrt@@AEBUguid@8@@Z @ 0x18063A480 (-at@-$unordered_map@Uguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@U-$hash@Uguid@winrt@.c)
 */

// Hidden C++ exception states: #wind=4
__int128 *__fastcall winrt::Windows::Internal::Shell::implementation::WindowData::GetActiveTabId(
        __int64 a1,
        __int128 *a2)
{
  __int128 *v4; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  bool v8; // al
  void (__fastcall ***v10)(_QWORD, __int64 *, __int64 *); // [rsp+20h] [rbp-60h] BYREF
  __int64 v11; // [rsp+28h] [rbp-58h] BYREF
  __int128 v12; // [rsp+30h] [rbp-50h] BYREF
  __int128 v13; // [rsp+40h] [rbp-40h] BYREF
  __int128 v14; // [rsp+50h] [rbp-30h] BYREF
  __int128 v15; // [rsp+60h] [rbp-20h] BYREF

  LODWORD(v11) = 0;
  AcquireSRWLockShared((PSRWLOCK)a1);
  *(_QWORD *)&v13 = a1;
  winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabDataModel<winrt::Windows::Internal::UI::Shell::IWindowTabDataModel>::ActiveTab(
    (__int64 *)(a1 + 16),
    &v10);
  if ( *(_QWORD *)(a1 + 184) )
  {
    *(_QWORD *)&v12 = 0LL;
    LODWORD(v11) = 1;
    if ( winrt::Windows::Foundation::operator==(&v10, &v12)
      || (v5 = winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabView<winrt::Windows::Internal::UI::Shell::IWindowTabView>::Id(
                 &v10,
                 &v14),
          v6 = (_QWORD *)std::unordered_map<winrt::guid,winrt::Windows::Internal::UI::Shell::WindowTabView>::at(
                           a1 + 88,
                           *(_QWORD *)(*(_QWORD *)(a1 + 160)
                                     + 8 * (*(_QWORD *)(a1 + 176) & (*(_QWORD *)(a1 + 168) - 1LL)))),
          v7 = winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabView<winrt::Windows::Internal::UI::Shell::IWindowTabView>::Id(
                 v6,
                 &v15),
          v8 = winrt::operator==(v7, v5)) )
    {
      v8 = 1;
    }
    if ( v8 )
      *a2 = *(_OWORD *)*(_QWORD *)(*(_QWORD *)(a1 + 160) + 8 * (*(_QWORD *)(a1 + 176) & (*(_QWORD *)(a1 + 168) - 1LL)));
    else
      winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabView<winrt::Windows::Internal::UI::Shell::IWindowTabView>::Id(
        &v10,
        a2);
  }
  else
  {
    v11 = 0LL;
    if ( winrt::Windows::Foundation::operator==(&v10, &v11) )
    {
      v13 = 0LL;
      v4 = &v13;
    }
    else
    {
      v4 = winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabView<winrt::Windows::Internal::UI::Shell::IWindowTabView>::Id(
             &v10,
             &v12);
    }
    *a2 = *v4;
  }
  if ( v10 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
  ReleaseSRWLockShared((PSRWLOCK)a1);
  return a2;
}
