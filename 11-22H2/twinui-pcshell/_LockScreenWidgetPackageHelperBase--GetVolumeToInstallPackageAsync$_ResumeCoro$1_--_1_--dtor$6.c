/*
 * XREFs of _LockScreenWidgetPackageHelperBase::GetVolumeToInstallPackageAsync$_ResumeCoro$1_::_1_::dtor$6 @ 0x18023D661
 * Callers:
 *     <none>
 * Callees:
 *     ??1ProtocolLauncherInfo@StateRepository@Internal@Windows@winrt@@QEAA@XZ @ 0x1801DA1D8 (--1ProtocolLauncherInfo@StateRepository@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall LockScreenWidgetPackageHelperBase::GetVolumeToInstallPackageAsync__ResumeCoro_1_::_1_::dtor_6(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 80) = *(_QWORD *)(a2 + 256) + 88LL;
  winrt::Windows::Internal::StateRepository::ProtocolLauncherInfo::~ProtocolLauncherInfo(*(winrt::Windows::Foundation::IUnknown **)(a2 + 80));
}
