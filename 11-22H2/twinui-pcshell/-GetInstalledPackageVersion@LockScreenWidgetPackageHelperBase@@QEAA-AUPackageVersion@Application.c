/*
 * XREFs of ?GetInstalledPackageVersion@LockScreenWidgetPackageHelperBase@@QEAA?AUPackageVersion@ApplicationModel@Windows@winrt@@XZ @ 0x18023C4CC
 * Callers:
 *     LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync$_ResumeCoro$1 @ 0x18023DCE0 (LockScreenWidgetPackageHelperBase--InstallInboxedPackageAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 *     ??0hstring@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800DC364 (--0hstring@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ?GetInstalledPackageVersion@LockScreenWidgetPackageHelperBase@@IEAA?AUPackageVersion@ApplicationModel@Windows@winrt@@AEBUhstring@5@@Z @ 0x18023C340 (-GetInstalledPackageVersion@LockScreenWidgetPackageHelperBase@@IEAA-AUPackageVersion@Application.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall LockScreenWidgetPackageHelperBase::GetInstalledPackageVersion(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3)
{
  _QWORD *v4; // rax
  void (__fastcall ***v5)(_QWORD, __int64 *, __int64 *); // rcx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = winrt::hstring::hstring(&v7, a1 + 32, a3);
  LockScreenWidgetPackageHelperBase::GetInstalledPackageVersion(v5, a2, v4);
  winrt::hstring::~hstring(&v7);
  return a2;
}
