/*
 * XREFs of ?Release@?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@AEAAKXZ @ 0x1802220C8
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18022183C (--1-$com_ptr_t@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@Uerr_returncode_policy.c)
 *     ??4?$com_ptr_t@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180225A3C (--4-$com_ptr_t@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@Uerr_returncode_policy.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180229340 (-reset@-$com_ptr_t@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@Uerr_returncode_po.c)
 * Callees:
 *     ??1?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@QEAA@XZ @ 0x180221900 (--1-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 70);
  if ( !v2 )
  {
    tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>::~merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>(pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
