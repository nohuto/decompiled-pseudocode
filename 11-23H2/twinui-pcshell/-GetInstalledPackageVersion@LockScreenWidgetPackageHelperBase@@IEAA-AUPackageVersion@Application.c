/*
 * XREFs of ?GetInstalledPackageVersion@LockScreenWidgetPackageHelperBase@@IEAA?AUPackageVersion@ApplicationModel@Windows@winrt@@AEBUhstring@5@@Z @ 0x18023C340
 * Callers:
 *     ??R_lambda_c63df5938b5e32cbd3483994e088b3e3_@@QEAA@AEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@AEBUIInspectable@Foundation@67@@Z @ 0x1802375D4 (--R_lambda_c63df5938b5e32cbd3483994e088b3e3_@@QEAA@AEBUAppInstallItem@InstallControl@Preview@Sto.c)
 *     ?GetInstalledPackageVersion@LockScreenWidgetPackageHelperBase@@QEAA?AUPackageVersion@ApplicationModel@Windows@winrt@@XZ @ 0x18023C4CC (-GetInstalledPackageVersion@LockScreenWidgetPackageHelperBase@@QEAA-AUPackageVersion@Application.c)
 *     LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync$_ResumeCoro$1 @ 0x180245160 (LockScreenWidgetPackageHelperBase--TryInstallStoreApplicationAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800D5B1C (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?Id@?$consume_Windows_ApplicationModel_IPackage@UIPackage@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18019F7F8 (-Id@-$consume_Windows_ApplicationModel_IPackage@UIPackage@ApplicationModel@Windows@winrt@@@impl@.c)
 *     ??0PackageManager@Deployment@Management@Windows@winrt@@QEAA@XZ @ 0x180465FA4 (--0PackageManager@Deployment@Management@Windows@winrt@@QEAA@XZ.c)
 *     ?Current@?$consume_Windows_Foundation_Collections_IIterator@U?$IIterator@UPackage@ApplicationModel@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UPackage@ApplicationModel@45@@impl@winrt@@QEBA@XZ @ 0x180466FCC (-Current@-$consume_Windows_Foundation_Collections_IIterator@U-$IIterator@UPackage@ApplicationMod.c)
 *     ?FindPackagesForUser@?$consume_Windows_Management_Deployment_IPackageManager@UIPackageManager@Deployment@Management@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@0@Z @ 0x1804670E0 (-FindPackagesForUser@-$consume_Windows_Management_Deployment_IPackageManager@UIPackageManager@De.c)
 *     ?Version@?$consume_Windows_ApplicationModel_IPackageId@UIPackageId@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18046B5C4 (-Version@-$consume_Windows_ApplicationModel_IPackageId@UIPackageId@ApplicationModel@Windows@winr.c)
 *     ??E?$consume_Windows_Foundation_Collections_IIterator@U?$IIterator@UPackage@ApplicationModel@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UPackage@ApplicationModel@45@@impl@winrt@@QEAA@XZ @ 0x1806953EC (--E-$consume_Windows_Foundation_Collections_IIterator@U-$IIterator@UPackage@ApplicationModel@Win.c)
 *     ?begin@?$consume_Windows_Foundation_Collections_IIterable@U?$IIterable@UPackage@ApplicationModel@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UPackage@ApplicationModel@45@@impl@winrt@@QEBA@XZ @ 0x180698B0C (-begin@-$consume_Windows_Foundation_Collections_IIterable@U-$IIterable@UPackage@ApplicationModel.c)
 */

// Hidden C++ exception states: #wind=7
_QWORD *__fastcall LockScreenWidgetPackageHelperBase::GetInstalledPackageVersion(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v5; // rax
  __int64 v7; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v8[8]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v9; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v10[4]; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v11[5]; // [rsp+58h] [rbp-28h] BYREF
  void (__fastcall ***v12)(_QWORD, __int64 *, __int64 *); // [rsp+A0h] [rbp+20h] BYREF
  __int64 v13; // [rsp+B0h] [rbp+30h] BYREF
  void (__fastcall ***v14)(_QWORD, __int64 *, __int64 *); // [rsp+B8h] [rbp+38h] BYREF

  v12 = a1;
  v5 = winrt::Windows::Management::Deployment::PackageManager::PackageManager((winrt::Windows::Management::Deployment::PackageManager *)&v13);
  v10[0] = *a3;
  v11[0] = 0LL;
  winrt::impl::consume_Windows_Management_Deployment_IPackageManager<winrt::Windows::Management::Deployment::IPackageManager>::FindPackagesForUser(
    v5,
    v8,
    v11,
    v10);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v13);
  winrt::impl::consume_Windows_Foundation_Collections_IIterable<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Package>,winrt::Windows::ApplicationModel::Package>::begin(
    v8,
    &v12);
  v7 = 0LL;
  while ( !winrt::Windows::Foundation::operator==(&v12, &v7) )
  {
    winrt::impl::consume_Windows_Foundation_Collections_IIterator<winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::ApplicationModel::Package>,winrt::Windows::ApplicationModel::Package>::Current(
      &v12,
      &v14);
    v9 = 0LL;
    if ( !winrt::Windows::Foundation::operator==(&v14, &v9) )
    {
      winrt::impl::consume_Windows_ApplicationModel_IPackage<winrt::Windows::ApplicationModel::IPackage>::Id(
        (__int64 *)&v14,
        &v13);
      if ( v13 )
      {
        winrt::impl::consume_Windows_ApplicationModel_IPackageId<winrt::Windows::ApplicationModel::IPackageId>::Version(
          &v13,
          a2);
        winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v13);
        winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v14);
        winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v7);
        winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v12);
        winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)v8);
        return a2;
      }
      winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v13);
    }
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v14);
    winrt::impl::consume_Windows_Foundation_Collections_IIterator<winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::ApplicationModel::Package>,winrt::Windows::ApplicationModel::Package>::operator++(&v12);
  }
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v7);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v12);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)v8);
  *a2 = 0LL;
  return a2;
}
