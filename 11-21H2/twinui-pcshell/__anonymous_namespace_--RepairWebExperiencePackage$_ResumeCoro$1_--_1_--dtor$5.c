/*
 * XREFs of __anonymous_namespace_::RepairWebExperiencePackage$_ResumeCoro$1_::_1_::dtor$5 @ 0x1801CA654
 * Callers:
 *     <none>
 * Callees:
 *     ??1IAppInstallManagerInternal@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@QEAA@XZ @ 0x18019B8AC (--1IAppInstallManagerInternal@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@win.c)
 */

void __fastcall _anonymous_namespace_::RepairWebExperiencePackage__ResumeCoro_1_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 72) = *(_QWORD *)(a2 + 144) + 96LL;
  winrt::Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IAppInstallManagerInternal::~IAppInstallManagerInternal(*(winrt::Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IAppInstallManagerInternal **)(a2 + 72));
}
