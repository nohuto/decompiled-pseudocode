/*
 * XREFs of ??$wait_get@U?$IAsyncOperation@UStorageFile@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBU?$IAsyncOperation@UStorageFile@Storage@Windows@winrt@@@Foundation@Windows@1@@Z @ 0x1800B0248
 * Callers:
 *     ?GetJsonStorageFile@JsonGameMruManager@@AEBA?AUStorageFile@Storage@Windows@winrt@@XZ @ 0x1800B0B04 (-GetJsonStorageFile@JsonGameMruManager@@AEBA-AUStorageFile@Storage@Windows@winrt@@XZ.c)
 *     ?ActivateApplicationInContainer@ApplicationContainerActivation@@UEAAJU_GUID@@PEAUHSTRING__@@1W4ActivationKind@Activation@ApplicationModel@Windows@@EURect@Foundation@7@H@Z @ 0x18062F770 (-ActivateApplicationInContainer@ApplicationContainerActivation@@UEAAJU_GUID@@PEAUHSTRING__@@1W4A.c)
 * Callees:
 *     ??$wait_for_completed@U?$IAsyncOperation@UStorageFile@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBU?$IAsyncOperation@UStorageFile@Storage@Windows@winrt@@@Foundation@Windows@1@I@Z @ 0x1800AE40C (--$wait_for_completed@U-$IAsyncOperation@UStorageFile@Storage@Windows@winrt@@@Foundation@Windows.c)
 *     ?Status@?$consume_Windows_Foundation_IAsyncInfo@U?$IAsyncOperation@UStorageFile@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800AEC0C (-Status@-$consume_Windows_Foundation_IAsyncInfo@U-$IAsyncOperation@UStorageFile@Storage@Windows@.c)
 *     ?GetResults@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@UStorageFile@Storage@Windows@winrt@@@Foundation@Windows@winrt@@UStorageFile@Storage@34@@impl@winrt@@QEBA@XZ @ 0x1800B0298 (-GetResults@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@UStorageFile@Storage.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0hresult_canceled@winrt@@QEAA@XZ @ 0x1803E2DA0 (--0hresult_canceled@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::impl::wait_get<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::StorageFile>>(
        __int64 a1,
        __int64 *a2)
{
  int v4; // eax
  _BYTE pExceptionObject[32]; // [rsp+28h] [rbp-20h] BYREF

  v4 = winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::StorageFile>>::Status(a2);
  if ( !v4 )
    v4 = winrt::impl::wait_for_completed<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::StorageFile>>(a2);
  if ( v4 == 2 )
  {
    winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject);
    throw (winrt::hresult_canceled *)pExceptionObject;
  }
  winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::StorageFile>,winrt::Windows::Storage::StorageFile>::GetResults(
    a2,
    a1);
  return a1;
}
