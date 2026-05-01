/*
 * XREFs of ??_Gpromise_type@?$coroutine_traits@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@@experimental@std@@UEAAPEAXI@Z @ 0x180237CB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1promise_type@?$coroutine_traits@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@@experimental@std@@UEAA@XZ @ 0x180235B34 (--1promise_type@-$coroutine_traits@U-$IAsyncOperation@UPackageVolume@Deployment@Management@Windo.c)
 */

void *__fastcall std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Management::Deployment::PackageVolume>,LockScreenWidgetPackageHelperBase *>::promise_type::`scalar deleting destructor'(
        void *a1,
        char a2)
{
  std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Management::Deployment::PackageVolume>,LockScreenWidgetPackageHelperBase *>::promise_type::~promise_type((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
