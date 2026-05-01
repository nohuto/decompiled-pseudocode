/*
 * XREFs of ?Release@?$merged_data@U_tip_WidgetsAppInstallTIP@@U1@@details@tip2@@AEAAKXZ @ 0x1802411F0
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_WidgetsAppInstallTIP@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180235148 (--1-$com_ptr_t@V-$merged_data@U_tip_WidgetsAppInstallTIP@@U1@@details@tip2@@Uerr_returncode_poli.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_WidgetsAppInstallTIP@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18024B70C (-reset@-$com_ptr_t@V-$merged_data@U_tip_WidgetsAppInstallTIP@@U1@@details@tip2@@Uerr_returncode_.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_WidgetsAppInstallTIP@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x18024C034 (-start@-$tip_test@V-$merged_data@U_tip_WidgetsAppInstallTIP@@U1@@details@tip2@@@tip2@@QEAA-AU_GU.c)
 * Callees:
 *     ??1?$merged_data@U_tip_WidgetsAppInstallTIP@@U1@@details@tip2@@QEAA@XZ @ 0x180235570 (--1-$merged_data@U_tip_WidgetsAppInstallTIP@@U1@@details@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_WidgetsAppInstallTIP,_tip_WidgetsAppInstallTIP>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 88);
  if ( !v2 )
  {
    tip2::details::merged_data<_tip_WidgetsAppInstallTIP,_tip_WidgetsAppInstallTIP>::~merged_data<_tip_WidgetsAppInstallTIP,_tip_WidgetsAppInstallTIP>(pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
