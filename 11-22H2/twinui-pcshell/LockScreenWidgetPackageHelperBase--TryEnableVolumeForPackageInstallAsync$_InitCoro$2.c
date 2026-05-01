/*
 * XREFs of LockScreenWidgetPackageHelperBase::TryEnableVolumeForPackageInstallAsync$_InitCoro$2 @ 0x180244984
 * Callers:
 *     ?TryEnableVolumeForPackageInstallAsync@LockScreenWidgetPackageHelperBase@@IEAA?AU?$IAsyncOperation@_N@Foundation@Windows@winrt@@UPackageVolume@Deployment@Management@45@@Z @ 0x180244D74 (-TryEnableVolumeForPackageInstallAsync@LockScreenWidgetPackageHelperBase@@IEAA-AU-$IAsyncOperati.c)
 * Callees:
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ?get_return_object@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@UPackageVolume@Deployment@Management@34@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEBA?AU?$IAsyncOperation@_N@Foundation@Windows@3@XZ @ 0x18022DA84 (-get_return_object@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperati_ea_18022DA84.c)
 *     ??0_parameters_@?2??TryEnableVolumeForPackageInstallAsync@LockScreenWidgetPackageHelperBase@@IEAA?AU?$IAsyncOperation@_N@Foundation@Windows@winrt@@UPackageVolume@Deployment@Management@56@@Z@QEAA@PEAV2@$$QEAU78956@@Z @ 0x1802338D0 (--0_parameters_@-2--TryEnableVolumeForPackageInstallAsync@LockScreenWidgetPackageHelperBase@@IEA.c)
 *     ??0promise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@UPackageVolume@Deployment@Management@34@@experimental@std@@QEAA@XZ @ 0x180234DE0 (--0promise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@_ea_180234DE0.c)
 *     LockScreenWidgetPackageHelperBase::TryEnableVolumeForPackageInstallAsync$_ResumeCoro$1 @ 0x180244AD0 (LockScreenWidgetPackageHelperBase--TryEnableVolumeForPackageInstallAsync$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall LockScreenWidgetPackageHelperBase::TryEnableVolumeForPackageInstallAsync__InitCoro_2(
        __int64 a1,
        __int64 a2,
        winrt::Windows::Foundation::IUnknown *a3,
        __int64 *a4,
        __int64 a5)
{
  _DWORD *v7; // r10

  `LockScreenWidgetPackageHelperBase::TryEnableVolumeForPackageInstallAsync'::`3'::_parameters_::_parameters_(
    (_QWORD *)(a2 + 129),
    a5,
    a4);
  *(_QWORD *)a2 = LockScreenWidgetPackageHelperBase::TryEnableVolumeForPackageInstallAsync__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *v7 != 0 ? 2 : 65538;
  memset_0((void *)(a2 - 112), 0, 0x68uLL);
  std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,LockScreenWidgetPackageHelperBase *,winrt::Windows::Management::Deployment::PackageVolume>::promise_type::promise_type(a2 - 112);
  winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,LockScreenWidgetPackageHelperBase *,winrt::Windows::Management::Deployment::PackageVolume>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::get_return_object(
    a2 - 112,
    a3);
  *(_BYTE *)(a2 + 128) = 0;
  return LockScreenWidgetPackageHelperBase::TryEnableVolumeForPackageInstallAsync__ResumeCoro_1(a2);
}
