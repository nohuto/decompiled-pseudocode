/*
 * XREFs of ??1shared_type@?1???$wait_for_completed@U?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA@AEBU?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@2@I@Z@QEAA@XZ @ 0x1801C4810
 * Callers:
 *     _winrt::impl::wait_for_completed_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::Internal::AppData____::_1_::dtor$1 @ 0x1801C38E9 (_winrt--impl--wait_for_completed_winrt--Windows--Foundation--IAsyncOperation_winrt--Windows--App.c)
 *     _winrt::impl::wait_for_completed_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem____::_1_::dtor$1 @ 0x1801C39D1 (_winrt--impl--wait_for_completed_winrt--Windows--Foundation--IAsyncOperation_winrt-_ea_1801C39D1.c)
 *     _winrt::impl::wait_for_completed_winrt::Windows::Foundation::IAsyncOperationWithProgress_winrt::Windows::Management::Deployment::DeploymentResult_winrt::Windows::Management::Deployment::DeploymentProgress____::_1_::dtor$1 @ 0x1801C3AB9 (_winrt--impl--wait_for_completed_winrt--Windows--Foundation--IAsyncOperationWithProgress_winrt--.c)
 *     _winrt::impl::wait_for_completed_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Internal::UI::Shell::WindowTabDataModel____::_1_::dtor$1 @ 0x180214376 (_winrt--impl--wait_for_completed_winrt--Windows--Foundation--IAsyncOperation_winrt--Windows--Int.c)
 *     _winrt::impl::wait_for_completed_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::StorageFile____::_1_::dtor$1 @ 0x180570E0D (_winrt--impl--wait_for_completed_winrt--Windows--Foundation--IAsyncOperation_winrt--Windows--Sto.c)
 *     _winrt::impl::wait_for_completed_winrt::Windows::Foundation::IAsyncOperation_bool____::_1_::dtor$1 @ 0x180570EE1 (_winrt--impl--wait_for_completed_winrt--Windows--Foundation--IAsyncOperation_bool____--_1_--dtor.c)
 * Callees:
 *     WINRT_IMPL_CloseHandle @ 0x180189338 (WINRT_IMPL_CloseHandle.c)
 */

BOOL __fastcall `winrt::impl::wait_for_completed<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Internal::UI::Shell::WindowTabDataModel>>'::`2'::shared_type::~shared_type(
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
