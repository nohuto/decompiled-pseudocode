/*
 * XREFs of ??1?$event_revoker@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@$MP8type@?$abi@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@X@impl@7@EAAHUevent_token@7@@_E1??_989impl@7@$BII@AA@impl@winrt@@QEAA@XZ @ 0x180695128
 * Callers:
 *     _anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1 @ 0x180239600 (_anonymous_namespace_--EnsureWebExperiencePackageInstalled$_ResumeCoro$1.c)
 *     __anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1_::_1_::dtor$21 @ 0x18023A1E4 (__anonymous_namespace_--EnsureWebExperiencePackageInstalled$_ResumeCoro$1_--_1_--dtor$21.c)
 *     LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync$_ResumeCoro$1 @ 0x180245160 (LockScreenWidgetPackageHelperBase--TryInstallStoreApplicationAsync$_ResumeCoro$1.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??_9type@?$abi@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@X@impl@winrt@@$BII@AA @ 0x1802ABEA0 (--_9type@-$abi@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windo_ea_1802ABEA0.c)
 *     ?get@?$weak_ref@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@winrt@@QEBA@XZ @ 0x180698F14 (-get@-$weak_ref@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@w.c)
 */

void __fastcall __1__event_revoker_UIAppInstallItem_InstallControl_Preview_Store_ApplicationModel_Windows_winrt___MP8type___abi_UIAppInstallItem_InstallControl_Preview_Store_ApplicationModel_Windows_winrt__X_impl_7_EAAHUevent_token_7___E1___989impl_7__BII_AA_impl_winrt__QEAA_XZ(
        __int64 *a1)
{
  __int64 *v2; // rdi
  char v3; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 )
  {
    v2 = (__int64 *)winrt::weak_ref<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem>::get(
                      a1,
                      &v3);
    if ( *v2 )
       winrt::impl::abi<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem,void>::type::`vcall'{136,{flat}}(*v2);
    if ( *v2 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v2);
  }
  if ( *a1 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(a1);
}
