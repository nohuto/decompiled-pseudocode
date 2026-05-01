/*
 * XREFs of ?OnTileAdded@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@UTileCollection@StartScreen@UI@WindowsUdk@6@UTileAddedEventArgs@9UI@WindowsUdk@6@@Z @ 0x18025B230
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileAdded$_InitCoro$2 @ 0x18025AC5C (winrt--Windows--Internal--Shell--implementation--AppBackupListener--OnTileAdded$_InitCoro$2.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileAdded(
        __int64 a1,
        __int64 a2,
        winrt::Windows::Foundation::IUnknown *a3,
        winrt::Windows::Foundation::IUnknown *a4)
{
  _DWORD *v8; // rax
  int v10; // [rsp+148h] [rbp+10h] BYREF
  winrt::Windows::Foundation::IUnknown *v11; // [rsp+150h] [rbp+18h]
  winrt::Windows::Foundation::IUnknown *v12; // [rsp+158h] [rbp+20h]

  v12 = a4;
  v11 = a3;
  v8 = operator new(0xD9uLL);
  v10 = 0;
  winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileAdded__InitCoro_2(
    (__int64)&v10,
    v8,
    a2,
    (__int64)a3,
    (__int64)a4,
    a1);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>(a3);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>(a4);
  return a2;
}
