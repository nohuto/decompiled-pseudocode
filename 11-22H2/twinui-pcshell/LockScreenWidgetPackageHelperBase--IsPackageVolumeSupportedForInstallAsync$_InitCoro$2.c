/*
 * XREFs of LockScreenWidgetPackageHelperBase::IsPackageVolumeSupportedForInstallAsync$_InitCoro$2 @ 0x18023FA8C
 * Callers:
 *     ?IsPackageVolumeSupportedForInstallAsync@LockScreenWidgetPackageHelperBase@@IEAA?AU?$IAsyncOperation@_N@Foundation@Windows@winrt@@UPackageVolume@Deployment@Management@45@@Z @ 0x18023FE28 (-IsPackageVolumeSupportedForInstallAsync@LockScreenWidgetPackageHelperBase@@IEAA-AU-$IAsyncOpera.c)
 * Callees:
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ?get_return_object@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@UPackageVolume@Deployment@Management@34@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEBA?AU?$IAsyncOperation@_N@Foundation@Windows@3@XZ @ 0x18022DA84 (-get_return_object@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperati_ea_18022DA84.c)
 *     ??0_parameters_@?2??TryEnableVolumeForPackageInstallAsync@LockScreenWidgetPackageHelperBase@@IEAA?AU?$IAsyncOperation@_N@Foundation@Windows@winrt@@UPackageVolume@Deployment@Management@56@@Z@QEAA@PEAV2@$$QEAU78956@@Z @ 0x1802338D0 (--0_parameters_@-2--TryEnableVolumeForPackageInstallAsync@LockScreenWidgetPackageHelperBase@@IEA.c)
 *     ??0promise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@UPackageVolume@Deployment@Management@34@@experimental@std@@QEAA@XZ @ 0x180234DE0 (--0promise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@_ea_180234DE0.c)
 *     LockScreenWidgetPackageHelperBase::IsPackageVolumeSupportedForInstallAsync$_ResumeCoro$1 @ 0x18023FBD0 (LockScreenWidgetPackageHelperBase--IsPackageVolumeSupportedForInstallAsync$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall LockScreenWidgetPackageHelperBase::IsPackageVolumeSupportedForInstallAsync__InitCoro_2(
        __int64 a1,
        __int64 a2,
        winrt::Windows::Foundation::IUnknown *a3,
        __int64 *a4,
        __int64 a5)
{
  _DWORD *v7; // r10

  `LockScreenWidgetPackageHelperBase::TryEnableVolumeForPackageInstallAsync'::`3'::_parameters_::_parameters_(
    (_QWORD *)(a2 + 113),
    a5,
    a4);
  *(_QWORD *)a2 = LockScreenWidgetPackageHelperBase::IsPackageVolumeSupportedForInstallAsync__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *v7 != 0 ? 2 : 65538;
  memset_0((void *)(a2 - 112), 0, 0x68uLL);
  std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,LockScreenWidgetPackageHelperBase *,winrt::Windows::Management::Deployment::PackageVolume>::promise_type::promise_type(a2 - 112);
  winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,LockScreenWidgetPackageHelperBase *,winrt::Windows::Management::Deployment::PackageVolume>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::get_return_object(
    a2 - 112,
    a3);
  *(_BYTE *)(a2 + 112) = 0;
  return LockScreenWidgetPackageHelperBase::IsPackageVolumeSupportedForInstallAsync__ResumeCoro_1(a2);
}
