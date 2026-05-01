/*
 * XREFs of ??1?$com_ptr_t@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18022183C
 * Callers:
 *     ??1?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802219A8 (--1-$tip_test@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     _SnapFlyoutHost::CreateSnapFlyoutInstanceAsync_::_29_::_parameters_::__parameters_ @ 0x180225944 (_SnapFlyoutHost--CreateSnapFlyoutInstanceAsync_--_29_--_parameters_--__parameters_.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802259C8 (--1-$test_data_control@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180225A00 (--1-$test_watcher@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1 @ 0x180225EC0 (SnapFlyoutHost--CreateSnapFlyoutInstanceAsync$_ResumeCoro$1.c)
 *     ?CreateSnapFlyoutInstanceAsync@SnapFlyoutHost@@AEAA?AUIAsyncAction@Foundation@Windows@winrt@@PEAUHWND__@@W4SnapControlType@SnapComponent@Shell@Internal@45@IW4InputDeviceKind@9UI@WindowsUdk@5@PEAUHMONITOR__@@V?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@W4ShowFlags@1@@Z @ 0x180226D5C (-CreateSnapFlyoutInstanceAsync@SnapFlyoutHost@@AEAA-AUIAsyncAction@Foundation@Windows@winrt@@PEA.c)
 *     ?StartXamlExplorerHostThread@SnapFlyoutHost@@AEAAXV?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180228AD0 (-StartXamlExplorerHostThread@SnapFlyoutHost@@AEAAXV-$tip_test@V-$merged_data@U_tip_SnapFlyoutSho.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180228D2C (-ensure_data@-$tip_test@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@AEBAAE.c)
 *     ??$open@V?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?AV?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@0@XZ @ 0x18022C18C (--$open@V-$tip_test@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@@tip2@@YA-.c)
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x18022C1EC (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@.c)
 *     ??1SnapFlyoutHost@@UEAA@XZ @ 0x18065F4D8 (--1SnapFlyoutHost@@UEAA@XZ.c)
 *     ??1FlyoutInstanceRecord@SnapFlyoutHost@@QEAA@XZ @ 0x180679DE4 (--1FlyoutInstanceRecord@SnapFlyoutHost@@QEAA@XZ.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@AEAAKXZ @ 0x1802220C8 (-Release@-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@AEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>,wil::err_returncode_policy>(
        void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>::Release(v1);
  return result;
}
