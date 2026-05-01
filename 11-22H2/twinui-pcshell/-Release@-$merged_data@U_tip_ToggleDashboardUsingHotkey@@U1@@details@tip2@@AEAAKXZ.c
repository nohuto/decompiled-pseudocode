/*
 * XREFs of ?Release@?$merged_data@U_tip_ToggleDashboardUsingHotkey@@U1@@details@tip2@@AEAAKXZ @ 0x180241160
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_ToggleDashboardUsingHotkey@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180235108 (--1-$com_ptr_t@V-$merged_data@U_tip_ToggleDashboardUsingHotkey@@U1@@details@tip2@@Uerr_returncod.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_ToggleDashboardUsingHotkey@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18024B6C4 (-reset@-$com_ptr_t@V-$merged_data@U_tip_ToggleDashboardUsingHotkey@@U1@@details@tip2@@Uerr_retur.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_ToggleDashboardUsingHotkey@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x18024BF98 (-start@-$tip_test@V-$merged_data@U_tip_ToggleDashboardUsingHotkey@@U1@@details@tip2@@@tip2@@QEAA.c)
 * Callees:
 *     ??1?$merged_data@U_tip_ToggleDashboardUsingHotkey@@U1@@details@tip2@@QEAA@XZ @ 0x1802354E0 (--1-$merged_data@U_tip_ToggleDashboardUsingHotkey@@U1@@details@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_ToggleDashboardUsingHotkey,_tip_ToggleDashboardUsingHotkey>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 76);
  if ( !v2 )
  {
    tip2::details::merged_data<_tip_ToggleDashboardUsingHotkey,_tip_ToggleDashboardUsingHotkey>::~merged_data<_tip_ToggleDashboardUsingHotkey,_tip_ToggleDashboardUsingHotkey>(pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
