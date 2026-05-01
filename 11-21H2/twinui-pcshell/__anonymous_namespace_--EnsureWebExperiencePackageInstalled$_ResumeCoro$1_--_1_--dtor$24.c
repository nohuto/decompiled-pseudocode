/*
 * XREFs of __anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1_::_1_::dtor$24 @ 0x1801C77E4
 * Callers:
 *     <none>
 * Callees:
 *     ??1IAppInstallManagerInternal@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@QEAA@XZ @ 0x18019B8AC (--1IAppInstallManagerInternal@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@win.c)
 */

void __fastcall _anonymous_namespace_::EnsureWebExperiencePackageInstalled__ResumeCoro_1_::_1_::dtor_24(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 400) = *(_QWORD *)(a2 + 104) + 704LL;
  winrt::Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IAppInstallManagerInternal::~IAppInstallManagerInternal(*(winrt::Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IAppInstallManagerInternal **)(a2 + 400));
}
