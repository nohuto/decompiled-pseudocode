/*
 * XREFs of ??1?$test_watcher@V?$merged_data@U_tip_WidgetsAppInstallTIP@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180235984
 * Callers:
 *     _anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1 @ 0x180239600 (_anonymous_namespace_--EnsureWebExperiencePackageInstalled$_ResumeCoro$1.c)
 *     __anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1_::_1_::dtor$0 @ 0x180239FA8 (__anonymous_namespace_--EnsureWebExperiencePackageInstalled$_ResumeCoro$1_--_1_--dtor$0.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_WidgetsAppInstallTIP@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180235148 (--1-$com_ptr_t@V-$merged_data@U_tip_WidgetsAppInstallTIP@@U1@@details@tip2@@Uerr_returncode_poli.c)
 */

void __fastcall tip2::test_watcher<tip2::details::merged_data<_tip_WidgetsAppInstallTIP,_tip_WidgetsAppInstallTIP>>::~test_watcher<tip2::details::merged_data<_tip_WidgetsAppInstallTIP,_tip_WidgetsAppInstallTIP>>(
        __int64 a1)
{
  wil::com_ptr_t<tip2::details::merged_data<_tip_WidgetsAppInstallTIP,_tip_WidgetsAppInstallTIP>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_WidgetsAppInstallTIP,_tip_WidgetsAppInstallTIP>,wil::err_returncode_policy>((void **)(a1 + 48));
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
