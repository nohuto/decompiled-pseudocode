/*
 * XREFs of _LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync$_ResumeCoro$1_::_1_::dtor$12 @ 0x18023E575
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$async_iterable@UUri@Foundation@Windows@winrt@@@param@winrt@@QEAA@XZ @ 0x180235010 (--1-$async_iterable@UUri@Foundation@Windows@winrt@@@param@winrt@@QEAA@XZ.c)
 */

void __fastcall LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync__ResumeCoro_1_::_1_::dtor_12(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 144) = *(_QWORD *)(a2 + 256) + 216LL;
  winrt::param::async_iterable<winrt::Windows::Foundation::Uri>::~async_iterable<winrt::Windows::Foundation::Uri>(*(winrt::Windows::Foundation::IUnknown **)(a2 + 144));
}
