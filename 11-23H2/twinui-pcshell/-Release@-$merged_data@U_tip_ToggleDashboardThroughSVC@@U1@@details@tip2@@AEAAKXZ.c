/*
 * XREFs of ?Release@?$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@AEAAKXZ @ 0x180241118
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802350E8 (--1-$com_ptr_t@V-$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@Uerr_returncode.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180249D70 (-ensure_data@-$tip_test@V-$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@@tip2@.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18024B6A0 (-reset@-$com_ptr_t@V-$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@Uerr_return.c)
 * Callees:
 *     ??1?$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@QEAA@XZ @ 0x180235498 (--1-$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_ToggleDashboardThroughSVC,_tip_ToggleDashboardThroughSVC>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 86);
  if ( !v2 )
  {
    tip2::details::merged_data<_tip_ToggleDashboardThroughSVC,_tip_ToggleDashboardThroughSVC>::~merged_data<_tip_ToggleDashboardThroughSVC,_tip_ToggleDashboardThroughSVC>(pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
