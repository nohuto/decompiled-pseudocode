/*
 * XREFs of ??1?$event_revoker@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@$MP8type@?$abi@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@X@impl@7@EAAHUevent_token@7@@_E1??_989impl@7@$BHI@AA@impl@winrt@@QEAA@XZ @ 0x180235190
 * Callers:
 *     LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync$_ResumeCoro$1 @ 0x180245160 (LockScreenWidgetPackageHelperBase--TryInstallStoreApplicationAsync$_ResumeCoro$1.c)
 *     _LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync$_ResumeCoro$1_::_1_::dtor$11 @ 0x180245971 (_LockScreenWidgetPackageHelperBase--TryInstallStoreApplicationAsync$_ResumeCoro$1_--_1_--dtor$11.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??_9type@?$abi@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@X@impl@winrt@@$BHI@AA @ 0x1802ABE80 (--_9type@-$abi@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@X@i.c)
 *     ?get@?$weak_ref@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@winrt@@QEBA@XZ @ 0x180698F14 (-get@-$weak_ref@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@w.c)
 */

__int64 __fastcall __1__event_revoker_UIAppInstallItem_InstallControl_Preview_Store_ApplicationModel_Windows_winrt___MP8type___abi_UIAppInstallItem_InstallControl_Preview_Store_ApplicationModel_Windows_winrt__X_impl_7_EAAHUevent_token_7___E1___989impl_7__BHI_AA_impl_winrt__QEAA_XZ(
        __int64 *a1)
{
  winrt::Windows::Foundation::IUnknown *v2; // rdi
  char v4; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 )
  {
    v2 = (winrt::Windows::Foundation::IUnknown *)winrt::weak_ref<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem>::get(
                                                   a1,
                                                   &v4);
    if ( *(_QWORD *)v2 )
       winrt::impl::abi<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem,void>::type::`vcall'{120,{flat}}(
        *(_QWORD *)v2,
        a1[1]);
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>(v2);
  }
  return winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(a1);
}
