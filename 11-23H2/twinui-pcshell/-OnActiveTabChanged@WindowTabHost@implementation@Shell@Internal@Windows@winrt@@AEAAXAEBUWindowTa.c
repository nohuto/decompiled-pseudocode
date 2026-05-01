/*
 * XREFs of ?OnActiveTabChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabDataModel@3UI@456@AEBUWindowTabDataModelActiveTabChangedEventArgs@38456@@Z @ 0x180637760
 * Callers:
 *     <none>
 * Callees:
 *     ?Id@?$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800339A0 (-Id@-$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal@Windows.c)
 *     ?WindowId@?$consume_Windows_Internal_UI_Shell_IWindowTabDataModel@UIWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800350CC (-WindowId@-$consume_Windows_Internal_UI_Shell_IWindowTabDataModel@UIWindowTabDataModel@Shell@UI@.c)
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800D5B1C (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$?RUWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UActiveTabChangedEventArgs@2UI@345@@?$event@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UActiveTabChangedEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUWindowTabHost@implementation@Shell@Internal@Windows@1@AEBUActiveTabChangedEventArgs@4UI@561@@Z @ 0x180634FD4 (--$-RUWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UActiveTabChangedEventArgs@2UI@.c)
 *     ??0ActiveTabChangedEventArgs@Shell@UI@Internal@Windows@winrt@@QEAA@AEBUguid@5@0@Z @ 0x1806365EC (--0ActiveTabChangedEventArgs@Shell@UI@Internal@Windows@winrt@@QEAA@AEBUguid@5@0@Z.c)
 *     ?ActivateTabAndUpdateTimestamps@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA?AUWindowTabView@3UI@456@_KAEBU738456@@Z @ 0x180636ADC (-ActivateTabAndUpdateTimestamps@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA-.c)
 *     ?Empty@GuidHelper@Foundation@Windows@winrt@@SA@XZ @ 0x180636DCC (-Empty@GuidHelper@Foundation@Windows@winrt@@SA@XZ.c)
 *     ?NewActiveTab@?$consume_Windows_Internal_UI_Shell_IWindowTabDataModelActiveTabChangedEventArgs@UIWindowTabDataModelActiveTabChangedEventArgs@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180637524 (-NewActiveTab@-$consume_Windows_Internal_UI_Shell_IWindowTabDataModelActiveTabChangedEventArgs@U.c)
 *     ?OldActiveTab@?$consume_Windows_Internal_UI_Shell_IWindowTabDataModelActiveTabChangedEventArgs@UIWindowTabDataModelActiveTabChangedEventArgs@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180637700 (-OldActiveTab@-$consume_Windows_Internal_UI_Shell_IWindowTabDataModelActiveTabChangedEventArgs@U.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::OnActiveTabChanged(
        RTL_SRWLOCK *this,
        const struct winrt::Windows::Internal::UI::Shell::WindowTabDataModel *a2,
        const struct winrt::Windows::Internal::UI::Shell::WindowTabDataModelActiveTabChangedEventArgs *a3)
{
  char v5; // di
  unsigned int v6; // ebx
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  __int128 *v9; // rax
  _QWORD *v10; // rax
  const struct winrt::guid *v11; // rax
  winrt::Windows::Internal::UI::Shell::ActiveTabChangedEventArgs *v12; // rax
  __int64 v13; // [rsp+20h] [rbp-39h] BYREF
  void (__fastcall ***v14)(_QWORD, __int64 *, __int64 *); // [rsp+28h] [rbp-31h] BYREF
  __int64 v15; // [rsp+30h] [rbp-29h] BYREF
  __int64 v16; // [rsp+38h] [rbp-21h] BYREF
  __int64 v17; // [rsp+40h] [rbp-19h] BYREF
  __int64 v18; // [rsp+48h] [rbp-11h] BYREF
  __int128 v19; // [rsp+50h] [rbp-9h] BYREF
  __int128 v20; // [rsp+60h] [rbp+7h] BYREF
  void (__fastcall **v21)(_QWORD, __int64 *, __int64 *); // [rsp+70h] [rbp+17h] BYREF

  v5 = 0;
  v6 = winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabDataModel<winrt::Windows::Internal::UI::Shell::IWindowTabDataModel>::WindowId((__int64 *)a2);
  v7 = winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabDataModelActiveTabChangedEventArgs<winrt::Windows::Internal::UI::Shell::IWindowTabDataModelActiveTabChangedEventArgs>::NewActiveTab(
         (__int64 *)a3,
         &v17);
  winrt::Windows::Internal::Shell::implementation::WindowTabHost::ActivateTabAndUpdateTimestamps(
    this,
    (winrt::Windows::Foundation::IUnknown *)&v14,
    v6,
    (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))v7);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v17);
  v13 = 0LL;
  LOBYTE(v6) = winrt::Windows::Foundation::operator==(&v14, &v13) == 0;
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v13);
  if ( (_BYTE)v6 )
  {
    v16 = 0LL;
    v8 = winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabDataModelActiveTabChangedEventArgs<winrt::Windows::Internal::UI::Shell::IWindowTabDataModelActiveTabChangedEventArgs>::OldActiveTab(
           (__int64 *)a3,
           &v15);
    if ( winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))v8, &v16) )
    {
      v9 = (__int128 *)winrt::Windows::Foundation::GuidHelper::Empty(&v21);
    }
    else
    {
      v10 = winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabDataModelActiveTabChangedEventArgs<winrt::Windows::Internal::UI::Shell::IWindowTabDataModelActiveTabChangedEventArgs>::OldActiveTab(
              (__int64 *)a3,
              &v18);
      v5 = 1;
      LODWORD(v13) = 1;
      v9 = winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabView<winrt::Windows::Internal::UI::Shell::IWindowTabView>::Id(
             v10,
             &v20);
    }
    v19 = *v9;
    if ( (v5 & 1) != 0 )
      winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v18);
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v15);
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v16);
    v11 = (const struct winrt::guid *)winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabView<winrt::Windows::Internal::UI::Shell::IWindowTabView>::Id(
                                        &v14,
                                        &v20);
    v12 = winrt::Windows::Internal::UI::Shell::ActiveTabChangedEventArgs::ActiveTabChangedEventArgs(
            (winrt::Windows::Internal::UI::Shell::ActiveTabChangedEventArgs *)&v15,
            (const struct winrt::guid *)&v19,
            v11);
    winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::ActiveTabChangedEventArgs>>::operator()<winrt::Windows::Internal::Shell::implementation::WindowTabHost,winrt::Windows::Internal::UI::Shell::ActiveTabChangedEventArgs>(
      this + 104,
      (__int64)this,
      (__int64)v12);
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v15);
  }
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v14);
}
