/*
 * XREFs of ?IsCopilotPWAInstalled@CopilotHotkeyManager@@QEAA_NXZ @ 0x1802654D0
 * Callers:
 *     ?InvokeCopilot@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x180264704 (-InvokeCopilot@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@@Z.c)
 *     ?InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x180264890 (-InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@@Z.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1800B3E54 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ??0PackageManager@Deployment@Management@Windows@winrt@@QEAA@XZ @ 0x180465FA4 (--0PackageManager@Deployment@Management@Windows@winrt@@QEAA@XZ.c)
 *     ?FindPackagesForUser@?$consume_Windows_Management_Deployment_IPackageManager@UIPackageManager@Deployment@Management@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@0@Z @ 0x1804670E0 (-FindPackagesForUser@-$consume_Windows_Management_Deployment_IPackageManager@UIPackageManager@De.c)
 *     ?First@?$consume_Windows_Foundation_Collections_IIterable@U?$IIterable@UPackage@ApplicationModel@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UPackage@ApplicationModel@45@@impl@winrt@@QEBA@XZ @ 0x18046714C (-First@-$consume_Windows_Foundation_Collections_IIterable@U-$IIterable@UPackage@ApplicationModel.c)
 *     ?HasCurrent@?$consume_Windows_Foundation_Collections_IIterator@U?$IIterator@UPackage@ApplicationModel@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UPackage@ApplicationModel@45@@impl@winrt@@QEBA@XZ @ 0x180468144 (-HasCurrent@-$consume_Windows_Foundation_Collections_IIterator@U-$IIterator@UPackage@Application.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall CopilotHotkeyManager::IsCopilotPWAInstalled(CopilotHotkeyManager *this)
{
  __int64 PackagesForUser; // rax
  char HasCurrent; // bl
  _BYTE v4[32]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v5[4]; // [rsp+40h] [rbp-20h] BYREF
  CopilotHotkeyManager *v6; // [rsp+70h] [rbp+10h] BYREF
  char v7; // [rsp+78h] [rbp+18h] BYREF
  char v8; // [rsp+80h] [rbp+20h] BYREF

  v6 = this;
  winrt::Windows::Management::Deployment::PackageManager::PackageManager((winrt::Windows::Management::Deployment::PackageManager *)&v7);
  winrt::param::hstring::hstring((winrt::param::hstring *)v4, L"Microsoft.Copilot_8wekyb3d8bbwe");
  v5[0] = 0LL;
  PackagesForUser = winrt::impl::consume_Windows_Management_Deployment_IPackageManager<winrt::Windows::Management::Deployment::IPackageManager>::FindPackagesForUser(
                      &v7,
                      &v8,
                      v5,
                      v4);
  winrt::impl::consume_Windows_Foundation_Collections_IIterable<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Package>,winrt::Windows::ApplicationModel::Package>::First(
    PackagesForUser,
    &v6);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v8);
  HasCurrent = winrt::impl::consume_Windows_Foundation_Collections_IIterator<winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::ApplicationModel::Package>,winrt::Windows::ApplicationModel::Package>::HasCurrent(&v6);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v6);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v7);
  return HasCurrent;
}
