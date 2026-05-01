/*
 * XREFs of ??1shared_type@?1???$wait_for_completed@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBU?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@2@I@Z@QEAA@XZ @ 0x1803E2F60
 * Callers:
 *     _winrt::impl::wait_for_completed_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Internal::UI::Shell::WindowTabDataModel____::_1_::dtor$1 @ 0x1802B921F (_winrt--impl--wait_for_completed_winrt--Windows--Foundation--IAsyncOperation_winrt--Windows--Int.c)
 *     _winrt::impl::wait_for_completed_winrt::Windows::Foundation::IAsyncOperation_bool____::_1_::dtor$1 @ 0x18062EC71 (_winrt--impl--wait_for_completed_winrt--Windows--Foundation--IAsyncOperation_bool____--_1_--dtor.c)
 *     _winrt::impl::wait_for_completed_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Internal::ComposableShell::Multitasking::IDataSourceAdapter____::_1_::dtor$1 @ 0x1806365CD (_winrt--impl--wait_for_completed_winrt--Windows--Foundation--IAsyncOperation_winrt-_ea_1806365CD.c)
 *     _winrt::impl::wait_for_completed_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::Internal::AppData____::_1_::dtor$1 @ 0x180694BAD (_winrt--impl--wait_for_completed_winrt--Windows--Foundation--IAsyncOperation_winrt--Windows--App.c)
 *     _winrt::impl::wait_for_completed_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem____::_1_::dtor$1 @ 0x180694C9D (_winrt--impl--wait_for_completed_winrt--Windows--Foundation--IAsyncOperation_winrt-_ea_180694C9D.c)
 *     _winrt::impl::wait_for_completed_winrt::Windows::Foundation::IAsyncOperationWithProgress_winrt::Windows::Management::Deployment::DeploymentResult_winrt::Windows::Management::Deployment::DeploymentProgress____::_1_::dtor$1 @ 0x180694D71 (_winrt--impl--wait_for_completed_winrt--Windows--Foundation--IAsyncOperationWithProgress_winrt--.c)
 *     _winrt::impl::wait_for_completed_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::Collections::IKeyValuePair_winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoInfo_winrt::Windows::Storage::Streams::IRandomAccessStream______::_1_::dtor$1 @ 0x18069D9F5 (_winrt--impl--wait_for_completed_winrt--Windows--Foundation--IAsyncOperation_winrt--Windows--Fou.c)
 *     _winrt::impl::wait_for_completed_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType____::_1_::dtor$1 @ 0x1806AB2BD (_winrt--impl--wait_for_completed_winrt--Windows--Foundation--IAsyncOperation_winrt--Windows--Sto.c)
 *     _winrt::impl::wait_for_completed_winrt::Windows::Foundation::IAsyncOperation_winrt::WindowsUdk::UI::StartScreen::TileCollection____::_1_::dtor$1 @ 0x1806F0491 (_winrt--impl--wait_for_completed_winrt--Windows--Foundation--IAsyncOperation_winrt--WindowsUdk--.c)
 *     _winrt::impl::wait_for_completed_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::Collections::IVectorView_winrt::Windows::ApplicationModel::AppInfo______::_1_::dtor$1 @ 0x1807052F1 (_winrt--impl--wait_for_completed_winrt--Windows--Foundation--IAsyncOperation_winrt-_ea_1807052F1.c)
 *     _winrt::impl::wait_for_completed_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStream____::_1_::dtor$1 @ 0x18070DFE9 (_winrt--impl--wait_for_completed_winrt--Windows--Foundation--IAsyncOperation_winrt-_ea_18070DFE9.c)
 *     _winrt::impl::wait_for_completed_winrt::Windows::Foundation::IAsyncOperationWithProgress_winrt::Windows::Storage::Streams::IBuffer_unsigned_int____::_1_::dtor$1 @ 0x18070E0D9 (_winrt--impl--wait_for_completed_winrt--Windows--Foundation--IAsyncOperationWithPro_ea_18070E0D9.c)
 * Callees:
 *     WINRT_IMPL_CloseHandle @ 0x1801C7938 (WINRT_IMPL_CloseHandle.c)
 */

BOOL __fastcall `winrt::impl::wait_for_completed<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::TileCollection>>'::`2'::shared_type::~shared_type(
        void **a1)
{
  void *v2; // rcx
  BOOL result; // eax

  v2 = *a1;
  if ( v2 )
  {
    result = WINRT_IMPL_CloseHandle(v2);
    *a1 = 0LL;
  }
  return result;
}
